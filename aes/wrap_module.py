#!/usr/bin/env python3
"""
sv_wrap.py - generate a registered wrapper (wrap.sv) around a SystemVerilog module.

Given a SystemVerilog file containing a module with an ANSI-style port list, this
writes wrap.sv containing a module that:

  * registers every input except the clock and reset   -> <input>_d1
  * instantiates the original module, fed from the _d1 registers
  * captures every output of the original module as    -> <output>_early
  * registers those and drives the wrapper's outputs from the registers

Usage:
    python3 sv_wrap.py my_module.sv
    python3 sv_wrap.py my_module.sv -m my_module -o wrap.sv --reset-style async

Limitations (by design, keeps the parser small):
  * ANSI-style port lists only:  module m (input logic a, output logic b);
  * Interface ports (bus_if.master x) are not supported.
  * Comments are stripped before parsing; string literals containing // are not handled.
  * Reset values use '0 ('{default:'0} for unpacked arrays). If a port is an enum,
    you may need to tweak the reset value for your tool.
  * inout ports are passed straight through (not registered).
"""

import argparse
import re
import sys
from dataclasses import dataclass
from pathlib import Path

CLK_NAMES = {"clk", "clock", "clk_i", "clk_in"}
RST_NAMES = {
    "rst", "rst_n", "rstn", "rst_i", "rst_ni",
    "reset", "reset_n", "resetn", "areset", "areset_n", "arst", "arst_n",
}

DIR_RE = re.compile(r"^(input|output|inout)\b\s*")
IDENT_DIMS_RE = re.compile(r"^(.*?)([A-Za-z_]\w*)\s*((?:\[[^\]]*\]\s*)*)$", re.S)
NO_TYPE_RE = re.compile(r"^(\[|signed\b|unsigned\b|$)")


@dataclass
class Port:
    name: str
    direction: str   # input / output / inout
    type: str        # cleaned type text, e.g. "logic [W-1:0]"
    unpacked: str    # unpacked dimensions, e.g. "[4]" (usually empty)


@dataclass
class Param:
    decl: str        # declaration text as written
    name: str
    is_local: bool


@dataclass
class ModuleInfo:
    name: str
    imports: list
    params: list
    ports: list


# --------------------------------------------------------------------------- parsing

def strip_comments(text):
    text = re.sub(r"/\*.*?\*/", " ", text, flags=re.S)
    return re.sub(r"//[^\n]*", " ", text)


def strip_attributes(text):
    return re.sub(r"\(\*.*?\*\)", " ", text, flags=re.S)


def find_close(text, open_idx):
    depth = 0
    for i in range(open_idx, len(text)):
        if text[i] == "(":
            depth += 1
        elif text[i] == ")":
            depth -= 1
            if depth == 0:
                return i
    raise ValueError("unbalanced parentheses in module header")


def split_top(text):
    """Split on commas that are not nested inside (), [] or {}."""
    parts, cur, depth = [], [], 0
    for c in text:
        if c in "([{":
            depth += 1
        elif c in ")]}":
            depth -= 1
        if c == "," and depth == 0:
            parts.append("".join(cur))
            cur = []
        else:
            cur.append(c)
    parts.append("".join(cur))
    return [p.strip() for p in parts if p.strip()]


def clean_type(t, direction):
    """Normalise a port's type text so it can be reused for internal signals."""
    t = " ".join(t.split())
    if direction == "inout":
        default = "wire"
    else:
        t = " ".join(re.sub(r"\b(?:wire|reg|var|tri|uwire)\b", " ", t).split())
        default = "logic"
    if NO_TYPE_RE.match(t):
        t = f"{default} {t}".strip()
    return t


def parse_params(text):
    params, is_local = [], False
    for item in split_top(strip_attributes(text)):
        item = " ".join(item.split())
        if re.match(r"localparam\b", item):
            is_local = True
        elif re.match(r"parameter\b", item):
            is_local = False
        lhs = item.split("=", 1)[0].strip()
        m = re.search(r"([A-Za-z_]\w*)\s*(?:\[[^\]]*\]\s*)*$", lhs)
        if not m:
            raise ValueError(f"cannot parse parameter: {item!r}")
        params.append(Param(item, m.group(1), is_local))
    return params


def parse_ports(text):
    ports, cur_dir, cur_type = [], None, ""
    for raw in split_top(strip_attributes(text)):
        item = " ".join(raw.split()).split("=", 1)[0].strip()
        dm = DIR_RE.match(item)
        if dm:
            cur_dir = dm.group(1)
            item = item[dm.end():]
        mm = IDENT_DIMS_RE.match(item)
        if not mm:
            raise ValueError(f"cannot parse port: {raw!r}")
        typ, name, unpacked = mm.group(1).strip(), mm.group(2), mm.group(3).strip()

        if cur_dir is None:
            if not typ:
                raise ValueError(
                    "non-ANSI port list detected (ports declared inside the module body). "
                    "Only ANSI-style headers are supported."
                )
            cur_dir = "input"   # SV default direction

        if dm or typ:
            cur_type = typ      # new declaration
        # else: bare name like the 'b' in "input logic a, b" -> inherits previous type

        ports.append(Port(name, cur_dir, clean_type(cur_type, cur_dir), unpacked))
    return ports


def parse_module(src, wanted=None):
    clean = strip_comments(src)
    matches = list(re.finditer(r"\bmodule\s+(?:automatic\s+|static\s+)?([A-Za-z_]\w*)", clean))
    if not matches:
        raise ValueError("no module found in input file")

    if wanted:
        sel = [m for m in matches if m.group(1) == wanted]
        if not sel:
            names = ", ".join(m.group(1) for m in matches)
            raise ValueError(f"module {wanted!r} not found (found: {names})")
        m = sel[0]
    else:
        m = matches[0]
        if len(matches) > 1:
            print(f"note: {len(matches)} modules found, using '{m.group(1)}' "
                  f"(use -m to choose another)", file=sys.stderr)

    pos = m.end()

    imports = []
    while True:
        im = re.compile(r"\s*(import\s[^;]*;)").match(clean, pos)
        if not im:
            break
        imports.append(" ".join(im.group(1).split()))
        pos = im.end()

    params = []
    pm = re.compile(r"\s*#\s*\(").match(clean, pos)
    if pm:
        o = pm.end() - 1
        c = find_close(clean, o)
        params = parse_params(clean[o + 1:c])
        pos = c + 1

    ports = []
    pp = re.compile(r"\s*\(").match(clean, pos)
    if pp:
        o = pp.end() - 1
        c = find_close(clean, o)
        ports = parse_ports(clean[o + 1:c])

    return ModuleInfo(m.group(1), imports, params, ports)


# ------------------------------------------------------------------------ generation

def find_special(ports, override, names, what):
    if override:
        for p in ports:
            if p.name == override and p.direction == "input":
                return p
        raise ValueError(f"{what} input {override!r} not found in module ports")
    for p in ports:
        if p.direction == "input" and p.name.lower() in names:
            return p
    return None


def is_active_low(name):
    return name.lower().endswith(("n", "ni"))


def declare(p, name=None):
    dims = f" {p.unpacked}" if p.unpacked else ""
    return f"{p.type} {name or p.name}{dims}"


def reset_value(p):
    return "'{default:'0}" if p.unpacked else "'0"


def generate(info, wrap_name, clk, rst, style, source_name):
    out = [f"// Auto-generated by sv_wrap.py from {source_name}", ""]

    # ---- module header
    head = f"module {wrap_name}"
    if info.imports:
        head += " " + " ".join(info.imports)
    if info.params:
        head += " #(\n" + ",\n".join(f"  {p.decl}" for p in info.params) + "\n)"
    head += " ("
    out.append(head)
    port_lines = [f"  {p.direction} {declare(p)}" for p in info.ports]
    out.append(",\n".join(port_lines))
    out.append(");")
    out.append("")

    ins = [p for p in info.ports
           if p.direction == "input" and p is not clk and p is not rst]
    outs = [p for p in info.ports if p.direction == "output"]

    # ---- internal signals
    if ins:
        out.append("  // Registered inputs")
        out += [f"  {declare(p, p.name + '_d1')};" for p in ins]
        out.append("")
    if outs:
        out.append("  // DUT outputs, before registering")
        out += [f"  {declare(p, p.name + '_early')};" for p in outs]
        out.append("")

    # ---- DUT instance
    out.append("  // Device under test")
    inst = f"  {info.name} "
    overridable = [p for p in info.params if not p.is_local]
    if overridable:
        inst += "#(\n" + ",\n".join(f"    .{p.name}({p.name})" for p in overridable) + "\n  ) "
    inst += "dut ("
    out.append(inst)
    conns = []
    for p in info.ports:
        if p is clk or p is rst or p.direction == "inout":
            sig = p.name
        elif p.direction == "input":
            sig = p.name + "_d1"
        else:
            sig = p.name + "_early"
        conns.append(f"    .{p.name}({sig})")
    out.append(",\n".join(conns))
    out.append("  );")
    out.append("")

    # ---- registers
    if ins or outs:
        regs = [(p.name + "_d1", p.name, p) for p in ins]
        regs += [(p.name, p.name + "_early", p) for p in outs]

        if style == "async":
            edge = f"negedge {rst.name}" if is_active_low(rst.name) else f"posedge {rst.name}"
            sens = f"posedge {clk.name} or {edge}"
        else:
            sens = f"posedge {clk.name}"

        out.append("  // Input and output registers")
        out.append(f"  always_ff @({sens}) begin")
        if style != "none":
            cond = f"!{rst.name}" if is_active_low(rst.name) else rst.name
            out.append(f"    if ({cond}) begin")
            out += [f"      {dst} <= {reset_value(p)};" for dst, _, p in regs]
            out.append("    end else begin")
            out += [f"      {dst} <= {src};" for dst, src, _ in regs]
            out.append("    end")
        else:
            out += [f"    {dst} <= {src};" for dst, src, _ in regs]
        out.append("  end")
        out.append("")

    out.append("endmodule")
    out.append("")
    return "\n".join(out)


# ------------------------------------------------------------------------------ CLI

def main():
    ap = argparse.ArgumentParser(
        description="Generate wrap.sv: registers a module's inputs (_d1) and outputs (_early).")
    ap.add_argument("input", help="SystemVerilog file containing the module")
    ap.add_argument("-o", "--output", default="wrap.sv", help="output file (default: wrap.sv)")
    ap.add_argument("-m", "--module", help="module name (default: first module in the file)")
    ap.add_argument("--wrap-name", default="wrap", help="name of generated module (default: wrap)")
    ap.add_argument("--clk", help="clock port name (default: auto-detect clk/clock)")
    ap.add_argument("--rst", help="reset port name (default: auto-detect rst/rst_n/reset...)")
    ap.add_argument("--reset-style", choices=["sync", "async", "none"], default="sync",
                    help="reset applied to the added registers (default: sync; "
                         "ignored if no reset port is found)")
    args = ap.parse_args()

    try:
        src = Path(args.input).read_text()
        info = parse_module(src, args.module)
        clk = find_special(info.ports, args.clk, CLK_NAMES, "clock")
        rst = find_special(info.ports, args.rst, RST_NAMES, "reset")
        if clk is None:
            raise ValueError("no clock port found (looked for clk/clock); use --clk NAME")
        style = args.reset_style
        if rst is None and style != "none":
            print("note: no reset port found, registers will have no reset", file=sys.stderr)
            style = "none"
        text = generate(info, args.wrap_name, clk, rst, style, Path(args.input).name)
    except (OSError, ValueError) as e:
        sys.exit(f"error: {e}")

    Path(args.output).write_text(text)
    n_in = sum(1 for p in info.ports if p.direction == "input" and p is not clk and p is not rst)
    n_out = sum(1 for p in info.ports if p.direction == "output")
    print(f"wrote {args.output}: module '{info.name}', clk='{clk.name}', "
          f"rst='{rst.name if rst else None}', {n_in} inputs and {n_out} outputs registered")


if __name__ == "__main__":
    main()
