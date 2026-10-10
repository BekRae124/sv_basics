// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vaes__Syms.h"


VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_0__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_1__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_2__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_3__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+187,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+189,0,"plaintext",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+193,0,"plaintext_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+194,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+198,0,"ciphertext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+202,0,"ciphertext_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("aes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+187,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+189,0,"plaintext",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+193,0,"plaintext_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+194,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+198,0,"ciphertext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+202,0,"ciphertext_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1,0,"round_key_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+5,0,"round_key_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+9,0,"state_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+13,0,"state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+17,0,"rcon_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"rcon_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"round_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+20,0,"sub_bytes_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+24,0,"shift_rows_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+28,0,"mix_columns_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("kg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+17,0,"rcon",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+5,0,"round_key",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("words_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+32+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("words_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+36+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+40,0,"shifted_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,0,"sub_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,0,"rcon_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("sbox_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+43+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("sbox_0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("sbox_1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("sbox_2", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_2__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("sbox_3", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_3__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+9,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+20,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("gen_sbox[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_0__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_0__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+47,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+48,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+48,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+47,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+49,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+50,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+53,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_1__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_1__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+54,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+54,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+56,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+57,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+60,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_2__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_2__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+61,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+61,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+63,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+64,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+67,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_3__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_3__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+68,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+69,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+69,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+68,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+70,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+71,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+74,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+75,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+76,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+76,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+75,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+77,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+78,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+81,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+82,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+83,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+83,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+82,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+84,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+85,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+88,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+89,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+89,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+91,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+92,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+95,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+96,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+97,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+97,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+96,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+98,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+99,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+102,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+103,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+103,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+105,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+106,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+109,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+110,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+111,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+111,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+110,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+112,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+113,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+116,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+117,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+118,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+118,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+117,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+119,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+120,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+123,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+124,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+125,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+125,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+124,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+126,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+127,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+130,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+131,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+131,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+133,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+134,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+137,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+138,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+139,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+139,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+138,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+140,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+141,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+144,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+145,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+146,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+145,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+147,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+148,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+151,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+152,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+153,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+153,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+152,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+154,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+155,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+158,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+159,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+160,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+160,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+159,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+161,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+162,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+165,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+166,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+167,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+167,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+166,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+168,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+169,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+172,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+173,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+174,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+174,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+173,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+175,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+176,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+179,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+180,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+181,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+181,0,"s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+180,0,"x",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 0,7);
    tracep->declBus(c+182,0,"y",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 21,1);
    tracep->declArray(c+183,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 67,0);
    tracep->declBus(c+186,0,"z",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 17,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_top(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_top\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaes___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vaes___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vaes___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaes___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaes___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vaes___024root__trace_register(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_register\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vaes___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vaes___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vaes___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vaes___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vaes___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_const_0\n"); );
    // Body
    Vaes___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes___024root*>(voidSelf);
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vaes___024root__trace_full_0_sub_0(Vaes___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vaes___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_full_0\n"); );
    // Body
    Vaes___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes___024root*>(voidSelf);
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vaes___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vaes___024root__trace_full_0_sub_0(Vaes___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_full_0_sub_0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<3>/*95:0*/ __Vtemp_1;
    VlWide<4>/*127:0*/ __Vtemp_2;
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullWData(oldp+1,(vlSelfRef.aes__DOT__round_key_current),128);
    bufp->fullWData(oldp+5,(vlSelfRef.aes__DOT__kg__DOT__round_key),128);
    bufp->fullWData(oldp+9,(vlSelfRef.aes__DOT__state_current),128);
    bufp->fullWData(oldp+13,(vlSelfRef.aes__DOT__state_next),128);
    bufp->fullCData(oldp+17,(vlSelfRef.aes__DOT__rcon_current),8);
    bufp->fullCData(oldp+18,(vlSelfRef.aes__DOT__rcon_next),8);
    bufp->fullCData(oldp+19,(vlSelfRef.aes__DOT__round_num),4);
    __Vtemp_1[0U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                            << 3U) | (4U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                            << 2U))) 
                          | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                    << 1U)) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                         << 0x0000000cU) | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                 << 2U)) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                  << 1U)) 
                                                | (1U 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                            << 8U)) 
                       | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                              << 3U) | (4U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                              << 2U))) 
                            | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                       ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                      << 1U)) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                           << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                        ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                       << 3U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                 << 2U)) 
                                     | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                               << 1U)) 
                                        | (1U ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                      << 0x00000010U) | ((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    __Vtemp_1[1U] = (IData)((((QData)((IData)((((((
                                                   (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                       ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                      << 3U) 
                                                     | (4U 
                                                        ^ 
                                                        (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                          ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                         << 2U))) 
                                                    | ((2U 
                                                        ^ 
                                                        (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                          ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                         << 1U)) 
                                                       | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                                   << 0x0000000cU) 
                                                  | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                         ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                        << 3U) 
                                                       | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                           ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          ^ 
                                                          (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                           << 1U)) 
                                                         | (1U 
                                                            ^ 
                                                            ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                                     << 8U)) 
                                                 | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                         ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                        << 3U) 
                                                       | (4U 
                                                          ^ 
                                                          (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                           << 2U))) 
                                                      | ((2U 
                                                          ^ 
                                                          (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                           << 1U)) 
                                                         | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                                     << 4U) 
                                                    | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                          ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                           << 2U)) 
                                                       | ((2U 
                                                           ^ 
                                                           (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                            << 1U)) 
                                                          | (1U 
                                                             ^ 
                                                             ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                                << 0x00000010U) 
                                               | ((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                        ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                       << 3U) 
                                                      | (4U 
                                                         ^ 
                                                         (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                           ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                          << 2U))) 
                                                     | ((2U 
                                                         ^ 
                                                         (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                           ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                          << 1U)) 
                                                        | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                                    << 0x0000000cU) 
                                                   | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                          ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                           << 2U)) 
                                                       | ((2U 
                                                           ^ 
                                                           (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                            << 1U)) 
                                                          | (1U 
                                                             ^ 
                                                             ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                                      << 8U)) 
                                                  | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                          ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                         << 3U) 
                                                        | (4U 
                                                           ^ 
                                                           (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                            << 2U))) 
                                                       | ((2U 
                                                           ^ 
                                                           (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                            << 1U)) 
                                                          | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                                      << 4U) 
                                                     | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                           ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                          << 3U) 
                                                         | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            ^ 
                                                            (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                             << 1U)) 
                                                           | (1U 
                                                              ^ 
                                                              ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__60__KET__)))))))))) 
                              << 0x00000020U) | (QData)((IData)(
                                                                ((((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                                         ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                                        << 3U) 
                                                                       | (4U 
                                                                          ^ 
                                                                          (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                                           << 2U))) 
                                                                      | ((2U 
                                                                          ^ 
                                                                          (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                                           << 1U)) 
                                                                         | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                                                     << 0x0000000cU) 
                                                                    | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                                           ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                                          << 3U) 
                                                                         | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            ^ 
                                                                            (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                                             << 1U)) 
                                                                           | (1U 
                                                                              ^ 
                                                                              ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                                                       << 8U)) 
                                                                   | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                                           ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                                          << 3U) 
                                                                         | (4U 
                                                                            ^ 
                                                                            (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                                             << 2U))) 
                                                                        | ((2U 
                                                                            ^ 
                                                                            (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                                             << 1U)) 
                                                                           | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                                                       << 4U) 
                                                                      | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                                             << 2U)) 
                                                                         | ((2U 
                                                                             ^ 
                                                                             (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                                              << 1U)) 
                                                                            | (1U 
                                                                               ^ 
                                                                               ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                                                  << 0x00000010U) 
                                                                 | ((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                                          ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                                         << 3U) 
                                                                        | (4U 
                                                                           ^ 
                                                                           (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                                            << 2U))) 
                                                                       | ((2U 
                                                                           ^ 
                                                                           (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                                            << 1U)) 
                                                                          | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                                                      << 0x0000000cU) 
                                                                     | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                                             << 2U)) 
                                                                         | ((2U 
                                                                             ^ 
                                                                             (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                                              << 1U)) 
                                                                            | (1U 
                                                                               ^ 
                                                                               ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                                                        << 8U)) 
                                                                    | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                                           << 3U) 
                                                                          | (4U 
                                                                             ^ 
                                                                             (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                                              << 2U))) 
                                                                         | ((2U 
                                                                             ^ 
                                                                             (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                                              << 1U)) 
                                                                            | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                                                        << 4U) 
                                                                       | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                                              << 2U)) 
                                                                          | ((2U 
                                                                              ^ 
                                                                              (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                                               << 1U)) 
                                                                             | (1U 
                                                                                ^ 
                                                                                ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))))))));
    __Vtemp_1[2U] = (IData)(((((QData)((IData)(((((
                                                   ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                        ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                       << 3U) 
                                                      | (4U 
                                                         ^ 
                                                         (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                           ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                          << 2U))) 
                                                     | ((2U 
                                                         ^ 
                                                         (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                           ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                          << 1U)) 
                                                        | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                                    << 0x0000000cU) 
                                                   | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                          ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                         << 3U) 
                                                        | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                           << 2U)) 
                                                       | ((2U 
                                                           ^ 
                                                           (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                            << 1U)) 
                                                          | (1U 
                                                             ^ 
                                                             ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                                      << 8U)) 
                                                  | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                          ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                         << 3U) 
                                                        | (4U 
                                                           ^ 
                                                           (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                            << 2U))) 
                                                       | ((2U 
                                                           ^ 
                                                           (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                            << 1U)) 
                                                          | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                                      << 4U) 
                                                     | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                           ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                          << 3U) 
                                                         | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            ^ 
                                                            (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                             << 1U)) 
                                                           | (1U 
                                                              ^ 
                                                              ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                                 << 0x00000010U) 
                                                | ((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                         ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                        << 3U) 
                                                       | (4U 
                                                          ^ 
                                                          (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                           << 2U))) 
                                                      | ((2U 
                                                          ^ 
                                                          (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                           << 1U)) 
                                                         | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                                     << 0x0000000cU) 
                                                    | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                           ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                          << 3U) 
                                                         | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                            << 2U)) 
                                                        | ((2U 
                                                            ^ 
                                                            (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                             << 1U)) 
                                                           | (1U 
                                                              ^ 
                                                              ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                                       << 8U)) 
                                                   | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                           ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                          << 3U) 
                                                         | (4U 
                                                            ^ 
                                                            (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                             << 2U))) 
                                                        | ((2U 
                                                            ^ 
                                                            (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                             << 1U)) 
                                                           | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                                       << 4U) 
                                                      | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                           << 3U) 
                                                          | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             ^ 
                                                             (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                              << 1U)) 
                                                            | (1U 
                                                               ^ 
                                                               ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__60__KET__)))))))))) 
                               << 0x00000020U) | (QData)((IData)(
                                                                 ((((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                                          ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                                         << 3U) 
                                                                        | (4U 
                                                                           ^ 
                                                                           (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                                            << 2U))) 
                                                                       | ((2U 
                                                                           ^ 
                                                                           (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                                            << 1U)) 
                                                                          | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                                                      << 0x0000000cU) 
                                                                     | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                                           << 3U) 
                                                                          | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                                             << 2U)) 
                                                                         | ((2U 
                                                                             ^ 
                                                                             (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                                              << 1U)) 
                                                                            | (1U 
                                                                               ^ 
                                                                               ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                                                        << 8U)) 
                                                                    | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                                           << 3U) 
                                                                          | (4U 
                                                                             ^ 
                                                                             (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                                              << 2U))) 
                                                                         | ((2U 
                                                                             ^ 
                                                                             (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                                              << 1U)) 
                                                                            | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                                                        << 4U) 
                                                                       | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                                              << 2U)) 
                                                                          | ((2U 
                                                                              ^ 
                                                                              (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                                               << 1U)) 
                                                                             | (1U 
                                                                                ^ 
                                                                                ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                                                   << 0x00000010U) 
                                                                  | ((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                                           ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                                          << 3U) 
                                                                         | (4U 
                                                                            ^ 
                                                                            (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                                             << 2U))) 
                                                                        | ((2U 
                                                                            ^ 
                                                                            (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                                             << 1U)) 
                                                                           | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                                                       << 0x0000000cU) 
                                                                      | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                                            << 3U) 
                                                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                                              << 2U)) 
                                                                          | ((2U 
                                                                              ^ 
                                                                              (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                                               << 1U)) 
                                                                             | (1U 
                                                                                ^ 
                                                                                ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                                                         << 8U)) 
                                                                     | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                                            << 3U) 
                                                                           | (4U 
                                                                              ^ 
                                                                              (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                                               << 2U))) 
                                                                          | ((2U 
                                                                              ^ 
                                                                              (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                                               << 1U)) 
                                                                             | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                                                         << 4U) 
                                                                        | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                                             << 3U) 
                                                                            | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               ^ 
                                                                               (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                ^ 
                                                                                ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))))))) 
                             >> 0x00000020U));
    __Vtemp_2[0U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                            << 3U) | (4U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                            << 2U))) 
                          | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                    << 1U)) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                         << 0x0000000cU) | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                 << 2U)) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                  << 1U)) 
                                                | (1U 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                            << 8U)) 
                       | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                              << 3U) | (4U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                              << 2U))) 
                            | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                       ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                      << 1U)) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                           << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                        ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                       << 3U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                 << 2U)) 
                                     | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                               << 1U)) 
                                        | (1U ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                      << 0x00000010U) | ((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    __Vtemp_2[1U] = __Vtemp_1[0U];
    __Vtemp_2[2U] = __Vtemp_1[1U];
    __Vtemp_2[3U] = __Vtemp_1[2U];
    bufp->fullWData(oldp+20,(__Vtemp_2),128);
    bufp->fullWData(oldp+24,(vlSelfRef.aes__DOT__shift_rows_out),128);
    bufp->fullWData(oldp+28,(vlSelfRef.aes__DOT__mix_columns_out),128);
    bufp->fullIData(oldp+32,(vlSelfRef.aes__DOT__kg__DOT__words_in[0]),32);
    bufp->fullIData(oldp+33,(vlSelfRef.aes__DOT__kg__DOT__words_in[1]),32);
    bufp->fullIData(oldp+34,(vlSelfRef.aes__DOT__kg__DOT__words_in[2]),32);
    bufp->fullIData(oldp+35,(vlSelfRef.aes__DOT__kg__DOT__words_in[3]),32);
    bufp->fullIData(oldp+36,(vlSelfRef.aes__DOT__kg__DOT__words_out[0]),32);
    bufp->fullIData(oldp+37,(vlSelfRef.aes__DOT__kg__DOT__words_out[1]),32);
    bufp->fullIData(oldp+38,(vlSelfRef.aes__DOT__kg__DOT__words_out[2]),32);
    bufp->fullIData(oldp+39,(vlSelfRef.aes__DOT__kg__DOT__words_out[3]),32);
    bufp->fullIData(oldp+40,(((vlSelfRef.aes__DOT__round_key_current[0U] 
                               << 8U) | (vlSelfRef.aes__DOT__round_key_current[0U] 
                                         >> 0x00000018U))),32);
    bufp->fullIData(oldp+41,(((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.out) 
                                << 0x00000018U) | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.out) 
                                                   << 0x00000010U)) 
                              | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.out) 
                                  << 8U) | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.out)))),32);
    bufp->fullIData(oldp+42,(((IData)(vlSelfRef.aes__DOT__rcon_current) 
                              << 0x00000018U)),32);
    bufp->fullCData(oldp+43,(vlSelfRef.aes__DOT__kg__DOT__sbox_out[0]),8);
    bufp->fullCData(oldp+44,(vlSelfRef.aes__DOT__kg__DOT__sbox_out[1]),8);
    bufp->fullCData(oldp+45,(vlSelfRef.aes__DOT__kg__DOT__sbox_out[2]),8);
    bufp->fullCData(oldp+46,(vlSelfRef.aes__DOT__kg__DOT__sbox_out[3]),8);
    bufp->fullCData(oldp+47,((0x000000ffU & (vlSelfRef.aes__DOT__round_key_current[0U] 
                                             >> 0x00000010U))),8);
    bufp->fullCData(oldp+48,(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.out),8);
    bufp->fullIData(oldp+49,(((((((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__13__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__16__KET__)) 
                                   << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__20__KET__) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__10__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__8__KET__)) 
                                                << 3U))) 
                                 | ((4U & ((0x000007fcU 
                                            & (vlSelfRef.aes__DOT__round_key_current[0U] 
                                               >> 0x00000015U)) 
                                           ^ ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__16__KET__) 
                                              << 2U))) 
                                    | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__17__KET__) 
                                        << 1U) | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__16__KET__)))) 
                                << 0x0000000fU) | (
                                                   ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__15__KET__) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__14__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__13__KET__) 
                                                           << 2U))) 
                                                    | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__12__KET__) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__11__KET__))) 
                                                   << 0x0000000aU)) 
                              | ((((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__10__KET__) 
                                     << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__9__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__8__KET__) 
                                                  << 2U))) 
                                   | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__7__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__6__KET__))) 
                                  << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__5__KET__) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__4__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__3__KET__) 
                                                   << 2U))) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__2__KET__) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+50,(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__t),68);
    bufp->fullIData(oldp+53,(((((((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__t__BRA__41__KET__) 
                                    & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__8__KET__)) 
                                   << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__z__BRA__16__KET__) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__t__BRA__42__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__9__KET__)) 
                                                << 2U))) 
                                 | ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__t__BRA__29__KET__) 
                                      & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__2__KET__)) 
                                     << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__t__BRA__40__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__5__KET__)))) 
                                << 0x0000000dU) | (
                                                   ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__z__BRA__12__KET__) 
                                                      << 3U) 
                                                     | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__t__BRA__33__KET__) 
                                                         & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__4__KET__)) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__z__BRA__10__KET__) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__t__BRA__44__KET__) 
                                                          & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__12__KET__)))) 
                                                   << 9U)) 
                              | (((((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__t__BRA__41__KET__) 
                                      & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__10__KET__)) 
                                     << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__z__BRA__7__KET__) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__t__BRA__42__KET__) 
                                                   & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__11__KET__)) 
                                                  << 2U))) 
                                   | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__z__BRA__5__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__z__BRA__4__KET__))) 
                                  << 4U) | ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__z__BRA__3__KET__) 
                                              << 3U) 
                                             | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__z__BRA__2__KET__) 
                                                << 2U)) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__t__BRA__37__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__6__KET__)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__t__BRA__44__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+54,((0x000000ffU & (vlSelfRef.aes__DOT__round_key_current[0U] 
                                             >> 8U))),8);
    bufp->fullCData(oldp+55,(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.out),8);
    bufp->fullIData(oldp+56,(((((((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__13__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__16__KET__)) 
                                   << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__20__KET__) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__10__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__8__KET__)) 
                                                << 3U))) 
                                 | ((4U & ((0x0007fffcU 
                                            & (vlSelfRef.aes__DOT__round_key_current[0U] 
                                               >> 0x0000000dU)) 
                                           ^ ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__16__KET__) 
                                              << 2U))) 
                                    | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__17__KET__) 
                                        << 1U) | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__16__KET__)))) 
                                << 0x0000000fU) | (
                                                   ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__15__KET__) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__14__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__13__KET__) 
                                                           << 2U))) 
                                                    | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__12__KET__) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__11__KET__))) 
                                                   << 0x0000000aU)) 
                              | ((((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__10__KET__) 
                                     << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__9__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__8__KET__) 
                                                  << 2U))) 
                                   | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__7__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__6__KET__))) 
                                  << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__5__KET__) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__4__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__3__KET__) 
                                                   << 2U))) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__2__KET__) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+57,(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__t),68);
    bufp->fullIData(oldp+60,(((((((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__t__BRA__41__KET__) 
                                    & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__8__KET__)) 
                                   << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__z__BRA__16__KET__) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__t__BRA__42__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__9__KET__)) 
                                                << 2U))) 
                                 | ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__t__BRA__29__KET__) 
                                      & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__2__KET__)) 
                                     << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__t__BRA__40__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__5__KET__)))) 
                                << 0x0000000dU) | (
                                                   ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__z__BRA__12__KET__) 
                                                      << 3U) 
                                                     | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__t__BRA__33__KET__) 
                                                         & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__4__KET__)) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__z__BRA__10__KET__) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__t__BRA__44__KET__) 
                                                          & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__12__KET__)))) 
                                                   << 9U)) 
                              | (((((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__t__BRA__41__KET__) 
                                      & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__10__KET__)) 
                                     << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__z__BRA__7__KET__) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__t__BRA__42__KET__) 
                                                   & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__11__KET__)) 
                                                  << 2U))) 
                                   | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__z__BRA__5__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__z__BRA__4__KET__))) 
                                  << 4U) | ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__z__BRA__3__KET__) 
                                              << 3U) 
                                             | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__z__BRA__2__KET__) 
                                                << 2U)) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__t__BRA__37__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__6__KET__)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__t__BRA__44__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+61,((0x000000ffU & vlSelfRef.aes__DOT__round_key_current[0U])),8);
    bufp->fullCData(oldp+62,(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.out),8);
    bufp->fullIData(oldp+63,(((((((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__13__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__16__KET__)) 
                                   << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__20__KET__) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__10__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__8__KET__)) 
                                                << 3U))) 
                                 | ((4U & ((0x07fffffcU 
                                            & (vlSelfRef.aes__DOT__round_key_current[0U] 
                                               >> 5U)) 
                                           ^ ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__16__KET__) 
                                              << 2U))) 
                                    | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__17__KET__) 
                                        << 1U) | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__16__KET__)))) 
                                << 0x0000000fU) | (
                                                   ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__15__KET__) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__14__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__13__KET__) 
                                                           << 2U))) 
                                                    | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__12__KET__) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__11__KET__))) 
                                                   << 0x0000000aU)) 
                              | ((((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__10__KET__) 
                                     << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__9__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__8__KET__) 
                                                  << 2U))) 
                                   | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__7__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__6__KET__))) 
                                  << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__5__KET__) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__4__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__3__KET__) 
                                                   << 2U))) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__2__KET__) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+64,(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__t),68);
    bufp->fullIData(oldp+67,(((((((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__t__BRA__41__KET__) 
                                    & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__8__KET__)) 
                                   << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__z__BRA__16__KET__) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__t__BRA__42__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__9__KET__)) 
                                                << 2U))) 
                                 | ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__t__BRA__29__KET__) 
                                      & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__2__KET__)) 
                                     << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__t__BRA__40__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__5__KET__)))) 
                                << 0x0000000dU) | (
                                                   ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__z__BRA__12__KET__) 
                                                      << 3U) 
                                                     | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__t__BRA__33__KET__) 
                                                         & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__4__KET__)) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__z__BRA__10__KET__) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__t__BRA__44__KET__) 
                                                          & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__12__KET__)))) 
                                                   << 9U)) 
                              | (((((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__t__BRA__41__KET__) 
                                      & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__10__KET__)) 
                                     << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__z__BRA__7__KET__) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__t__BRA__42__KET__) 
                                                   & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__11__KET__)) 
                                                  << 2U))) 
                                   | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__z__BRA__5__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__z__BRA__4__KET__))) 
                                  << 4U) | ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__z__BRA__3__KET__) 
                                              << 3U) 
                                             | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__z__BRA__2__KET__) 
                                                << 2U)) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__t__BRA__37__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__6__KET__)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__t__BRA__44__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+68,((vlSelfRef.aes__DOT__round_key_current[0U] 
                              >> 0x00000018U)),8);
    bufp->fullCData(oldp+69,(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.out),8);
    bufp->fullIData(oldp+70,(((((((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__13__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__16__KET__)) 
                                   << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__20__KET__) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__10__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__8__KET__)) 
                                                << 3U))) 
                                 | (((4U & (vlSelfRef.aes__DOT__round_key_current[0U] 
                                            >> 0x0000001dU)) 
                                     ^ ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__16__KET__) 
                                        << 2U)) | (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__16__KET__)))) 
                                << 0x0000000fU) | (
                                                   ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__15__KET__) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__14__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__13__KET__) 
                                                           << 2U))) 
                                                    | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__12__KET__) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__11__KET__))) 
                                                   << 0x0000000aU)) 
                              | ((((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__10__KET__) 
                                     << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__9__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__8__KET__) 
                                                  << 2U))) 
                                   | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__7__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__6__KET__))) 
                                  << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__5__KET__) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__4__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__3__KET__) 
                                                   << 2U))) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__2__KET__) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+71,(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__t),68);
    bufp->fullIData(oldp+74,(((((((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__t__BRA__41__KET__) 
                                    & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__8__KET__)) 
                                   << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__z__BRA__16__KET__) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__t__BRA__42__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__9__KET__)) 
                                                << 2U))) 
                                 | ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__t__BRA__29__KET__) 
                                      & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__2__KET__)) 
                                     << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__t__BRA__40__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__5__KET__)))) 
                                << 0x0000000dU) | (
                                                   ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__z__BRA__12__KET__) 
                                                      << 3U) 
                                                     | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__t__BRA__33__KET__) 
                                                         & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__4__KET__)) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__z__BRA__10__KET__) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__t__BRA__44__KET__) 
                                                          & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__12__KET__)))) 
                                                   << 9U)) 
                              | (((((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__t__BRA__41__KET__) 
                                      & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__10__KET__)) 
                                     << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__z__BRA__7__KET__) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__t__BRA__42__KET__) 
                                                   & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__11__KET__)) 
                                                  << 2U))) 
                                   | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__z__BRA__5__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__z__BRA__4__KET__))) 
                                  << 4U) | ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__z__BRA__3__KET__) 
                                              << 3U) 
                                             | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__z__BRA__2__KET__) 
                                                << 2U)) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__t__BRA__37__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__6__KET__)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__t__BRA__44__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+75,((0x000000ffU & vlSelfRef.aes__DOT__state_current[0U])),8);
    bufp->fullCData(oldp+76,((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                  << 3U) | (4U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                           ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                          << 1U)) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                               << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                           << 2U)) 
                                         | ((2U ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                            | (1U ^ 
                                               ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))),8);
    bufp->fullIData(oldp+77,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__16__KET__)) 
                                   << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__20__KET__) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                                << 3U))) 
                                 | ((4U & ((0x07fffffcU 
                                            & (vlSelfRef.aes__DOT__state_current[0U] 
                                               >> 5U)) 
                                           ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__16__KET__) 
                                              << 2U))) 
                                    | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__17__KET__) 
                                        << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__16__KET__)))) 
                                << 0x0000000fU) | (
                                                   ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__15__KET__) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__14__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                                           << 2U))) 
                                                    | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__12__KET__) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__11__KET__))) 
                                                   << 0x0000000aU)) 
                              | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                     << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__9__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__8__KET__) 
                                                  << 2U))) 
                                   | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__7__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__6__KET__))) 
                                  << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__5__KET__) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__4__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__3__KET__) 
                                                   << 2U))) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__2__KET__) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+78,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t),68);
    bufp->fullIData(oldp+81,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                    & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                   << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__z__BRA__16__KET__) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__9__KET__)) 
                                                << 2U))) 
                                 | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__29__KET__) 
                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__2__KET__)) 
                                     << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__40__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__5__KET__)))) 
                                << 0x0000000dU) | (
                                                   ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__z__BRA__12__KET__) 
                                                      << 3U) 
                                                     | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__33__KET__) 
                                                         & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__4__KET__)) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__z__BRA__10__KET__) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                          & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__12__KET__)))) 
                                                   << 9U)) 
                              | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__10__KET__)) 
                                     << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__z__BRA__7__KET__) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                   & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__11__KET__)) 
                                                  << 2U))) 
                                   | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__z__BRA__5__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__z__BRA__4__KET__))) 
                                  << 4U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__z__BRA__3__KET__) 
                                              << 3U) 
                                             | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__z__BRA__2__KET__) 
                                                << 2U)) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__37__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__6__KET__)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+82,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[0U] 
                                             >> 8U))),8);
    bufp->fullCData(oldp+83,((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                  << 3U) | (4U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                           ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                          << 1U)) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                               << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                           << 2U)) 
                                         | ((2U ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                            | (1U ^ 
                                               ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))),8);
    bufp->fullIData(oldp+84,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__16__KET__)) 
                                   << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__20__KET__) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                                << 3U))) 
                                 | ((4U & ((0x0007fffcU 
                                            & (vlSelfRef.aes__DOT__state_current[0U] 
                                               >> 0x0000000dU)) 
                                           ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__16__KET__) 
                                              << 2U))) 
                                    | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__17__KET__) 
                                        << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__16__KET__)))) 
                                << 0x0000000fU) | (
                                                   ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__15__KET__) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__14__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                                           << 2U))) 
                                                    | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__12__KET__) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__11__KET__))) 
                                                   << 0x0000000aU)) 
                              | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                     << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__9__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__8__KET__) 
                                                  << 2U))) 
                                   | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__7__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__6__KET__))) 
                                  << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__5__KET__) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__4__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__3__KET__) 
                                                   << 2U))) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__2__KET__) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+85,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t),68);
    bufp->fullIData(oldp+88,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                    & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                   << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__z__BRA__16__KET__) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__9__KET__)) 
                                                << 2U))) 
                                 | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__29__KET__) 
                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__2__KET__)) 
                                     << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__40__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__5__KET__)))) 
                                << 0x0000000dU) | (
                                                   ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__z__BRA__12__KET__) 
                                                      << 3U) 
                                                     | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__33__KET__) 
                                                         & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__4__KET__)) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__z__BRA__10__KET__) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                          & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__12__KET__)))) 
                                                   << 9U)) 
                              | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__10__KET__)) 
                                     << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__z__BRA__7__KET__) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                   & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__11__KET__)) 
                                                  << 2U))) 
                                   | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__z__BRA__5__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__z__BRA__4__KET__))) 
                                  << 4U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__z__BRA__3__KET__) 
                                              << 3U) 
                                             | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__z__BRA__2__KET__) 
                                                << 2U)) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__37__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__6__KET__)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+89,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[0U] 
                                             >> 0x00000010U))),8);
    bufp->fullCData(oldp+90,((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                  << 3U) | (4U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                           ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                          << 1U)) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                               << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                           << 2U)) 
                                         | ((2U ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                            | (1U ^ 
                                               ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))),8);
    bufp->fullIData(oldp+91,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__16__KET__)) 
                                   << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__20__KET__) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                                << 3U))) 
                                 | ((4U & ((0x000007fcU 
                                            & (vlSelfRef.aes__DOT__state_current[0U] 
                                               >> 0x00000015U)) 
                                           ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__16__KET__) 
                                              << 2U))) 
                                    | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__17__KET__) 
                                        << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__16__KET__)))) 
                                << 0x0000000fU) | (
                                                   ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__15__KET__) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__14__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                                           << 2U))) 
                                                    | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__12__KET__) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__11__KET__))) 
                                                   << 0x0000000aU)) 
                              | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                     << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__9__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__8__KET__) 
                                                  << 2U))) 
                                   | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__7__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__6__KET__))) 
                                  << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__5__KET__) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__4__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__3__KET__) 
                                                   << 2U))) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__2__KET__) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+92,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t),68);
    bufp->fullIData(oldp+95,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                    & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                   << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__z__BRA__16__KET__) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__9__KET__)) 
                                                << 2U))) 
                                 | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__29__KET__) 
                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__2__KET__)) 
                                     << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__40__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__5__KET__)))) 
                                << 0x0000000dU) | (
                                                   ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__z__BRA__12__KET__) 
                                                      << 3U) 
                                                     | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__33__KET__) 
                                                         & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__4__KET__)) 
                                                        << 2U)) 
                                                    | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__z__BRA__10__KET__) 
                                                        << 1U) 
                                                       | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                          & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__12__KET__)))) 
                                                   << 9U)) 
                              | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__10__KET__)) 
                                     << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__z__BRA__7__KET__) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                   & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__11__KET__)) 
                                                  << 2U))) 
                                   | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__z__BRA__5__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__z__BRA__4__KET__))) 
                                  << 4U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__z__BRA__3__KET__) 
                                              << 3U) 
                                             | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__z__BRA__2__KET__) 
                                                << 2U)) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__37__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__6__KET__)) 
                                                << 1U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+96,((vlSelfRef.aes__DOT__state_current[0U] 
                              >> 0x00000018U)),8);
    bufp->fullCData(oldp+97,((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                  << 3U) | (4U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                           ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                          << 1U)) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                               << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                           << 3U) | 
                                          (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                           << 2U)) 
                                         | ((2U ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                            | (1U ^ 
                                               ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))),8);
    bufp->fullIData(oldp+98,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__16__KET__)) 
                                   << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__20__KET__) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                                << 3U))) 
                                 | (((4U & (vlSelfRef.aes__DOT__state_current[0U] 
                                            >> 0x0000001dU)) 
                                     ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__16__KET__) 
                                        << 2U)) | (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__16__KET__)))) 
                                << 0x0000000fU) | (
                                                   ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__15__KET__) 
                                                      << 4U) 
                                                     | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__14__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                                           << 2U))) 
                                                    | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__12__KET__) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__11__KET__))) 
                                                   << 0x0000000aU)) 
                              | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                     << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__9__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__8__KET__) 
                                                  << 2U))) 
                                   | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__7__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__6__KET__))) 
                                  << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__5__KET__) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__4__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__3__KET__) 
                                                   << 2U))) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__2__KET__) 
                                                << 1U) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+99,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t),68);
    bufp->fullIData(oldp+102,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__z__BRA__16__KET__) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__9__KET__)) 
                                                 << 2U))) 
                                  | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__29__KET__) 
                                       & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__2__KET__)) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__40__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__5__KET__)))) 
                                 << 0x0000000dU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__z__BRA__12__KET__) 
                                    << 3U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__33__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__4__KET__)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__z__BRA__10__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__12__KET__)))) 
                                 << 9U)) | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__10__KET__)) 
                                                << 4U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__z__BRA__7__KET__) 
                                                   << 3U) 
                                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__11__KET__)) 
                                                     << 2U))) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__z__BRA__5__KET__) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__z__BRA__4__KET__))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__z__BRA__3__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__z__BRA__2__KET__) 
                                                   << 2U)) 
                                               | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__37__KET__) 
                                                    & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__6__KET__)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+103,((0x000000ffU & vlSelfRef.aes__DOT__state_current[1U])),8);
    bufp->fullCData(oldp+104,((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                   << 3U) | (4U ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                 | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                           << 1U)) 
                                    | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                              << 2U)) 
                                          | ((2U ^ 
                                              (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                               << 1U)) 
                                             | (1U 
                                                ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))),8);
    bufp->fullIData(oldp+105,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__16__KET__)) 
                                    << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__20__KET__) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                                 << 3U))) 
                                  | ((4U & ((0x07fffffcU 
                                             & (vlSelfRef.aes__DOT__state_current[1U] 
                                                >> 5U)) 
                                            ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__16__KET__) 
                                               << 2U))) 
                                     | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__17__KET__) 
                                         << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__16__KET__)))) 
                                 << 0x0000000fU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__15__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__14__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__12__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__11__KET__))) 
                                 << 0x0000000aU)) | 
                               ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__9__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__8__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__7__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__6__KET__))) 
                                 << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__5__KET__) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__4__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__3__KET__) 
                                                  << 2U))) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__2__KET__) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+106,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t),68);
    bufp->fullIData(oldp+109,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__z__BRA__16__KET__) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__9__KET__)) 
                                                 << 2U))) 
                                  | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__29__KET__) 
                                       & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__2__KET__)) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__40__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__5__KET__)))) 
                                 << 0x0000000dU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__z__BRA__12__KET__) 
                                    << 3U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__33__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__4__KET__)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__z__BRA__10__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__12__KET__)))) 
                                 << 9U)) | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__10__KET__)) 
                                                << 4U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__z__BRA__7__KET__) 
                                                   << 3U) 
                                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__11__KET__)) 
                                                     << 2U))) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__z__BRA__5__KET__) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__z__BRA__4__KET__))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__z__BRA__3__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__z__BRA__2__KET__) 
                                                   << 2U)) 
                                               | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__37__KET__) 
                                                    & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__6__KET__)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+110,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[1U] 
                                              >> 8U))),8);
    bufp->fullCData(oldp+111,((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                   << 3U) | (4U ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                 | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                           << 1U)) 
                                    | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                              << 2U)) 
                                          | ((2U ^ 
                                              (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                               << 1U)) 
                                             | (1U 
                                                ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))),8);
    bufp->fullIData(oldp+112,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__16__KET__)) 
                                    << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__20__KET__) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                                 << 3U))) 
                                  | ((4U & ((0x0007fffcU 
                                             & (vlSelfRef.aes__DOT__state_current[1U] 
                                                >> 0x0000000dU)) 
                                            ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__16__KET__) 
                                               << 2U))) 
                                     | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__17__KET__) 
                                         << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__16__KET__)))) 
                                 << 0x0000000fU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__15__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__14__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__12__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__11__KET__))) 
                                 << 0x0000000aU)) | 
                               ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__9__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__8__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__7__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__6__KET__))) 
                                 << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__5__KET__) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__4__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__3__KET__) 
                                                  << 2U))) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__2__KET__) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+113,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t),68);
    bufp->fullIData(oldp+116,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__z__BRA__16__KET__) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__9__KET__)) 
                                                 << 2U))) 
                                  | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__29__KET__) 
                                       & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__2__KET__)) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__40__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__5__KET__)))) 
                                 << 0x0000000dU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__z__BRA__12__KET__) 
                                    << 3U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__33__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__4__KET__)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__z__BRA__10__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__12__KET__)))) 
                                 << 9U)) | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__10__KET__)) 
                                                << 4U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__z__BRA__7__KET__) 
                                                   << 3U) 
                                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__11__KET__)) 
                                                     << 2U))) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__z__BRA__5__KET__) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__z__BRA__4__KET__))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__z__BRA__3__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__z__BRA__2__KET__) 
                                                   << 2U)) 
                                               | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__37__KET__) 
                                                    & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__6__KET__)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+117,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[1U] 
                                              >> 0x00000010U))),8);
    bufp->fullCData(oldp+118,((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                   << 3U) | (4U ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                 | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                           << 1U)) 
                                    | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                              << 2U)) 
                                          | ((2U ^ 
                                              (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                               << 1U)) 
                                             | (1U 
                                                ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))),8);
    bufp->fullIData(oldp+119,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__16__KET__)) 
                                    << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__20__KET__) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                                 << 3U))) 
                                  | ((4U & ((0x000007fcU 
                                             & (vlSelfRef.aes__DOT__state_current[1U] 
                                                >> 0x00000015U)) 
                                            ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__16__KET__) 
                                               << 2U))) 
                                     | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__17__KET__) 
                                         << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__16__KET__)))) 
                                 << 0x0000000fU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__15__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__14__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__12__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__11__KET__))) 
                                 << 0x0000000aU)) | 
                               ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__9__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__8__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__7__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__6__KET__))) 
                                 << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__5__KET__) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__4__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__3__KET__) 
                                                  << 2U))) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__2__KET__) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+120,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t),68);
    bufp->fullIData(oldp+123,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__z__BRA__16__KET__) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__9__KET__)) 
                                                 << 2U))) 
                                  | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__29__KET__) 
                                       & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__2__KET__)) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__40__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__5__KET__)))) 
                                 << 0x0000000dU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__z__BRA__12__KET__) 
                                    << 3U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__33__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__4__KET__)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__z__BRA__10__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__12__KET__)))) 
                                 << 9U)) | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__10__KET__)) 
                                                << 4U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__z__BRA__7__KET__) 
                                                   << 3U) 
                                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__11__KET__)) 
                                                     << 2U))) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__z__BRA__5__KET__) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__z__BRA__4__KET__))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__z__BRA__3__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__z__BRA__2__KET__) 
                                                   << 2U)) 
                                               | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__37__KET__) 
                                                    & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__6__KET__)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+124,((vlSelfRef.aes__DOT__state_current[1U] 
                               >> 0x00000018U)),8);
    bufp->fullCData(oldp+125,((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                   << 3U) | (4U ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                 | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                           << 1U)) 
                                    | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                              << 2U)) 
                                          | ((2U ^ 
                                              (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                               << 1U)) 
                                             | (1U 
                                                ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))),8);
    bufp->fullIData(oldp+126,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__16__KET__)) 
                                    << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__20__KET__) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                                 << 3U))) 
                                  | (((4U & (vlSelfRef.aes__DOT__state_current[1U] 
                                             >> 0x0000001dU)) 
                                      ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__16__KET__) 
                                         << 2U)) | 
                                     (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__17__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__16__KET__)))) 
                                 << 0x0000000fU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__15__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__14__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__12__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__11__KET__))) 
                                 << 0x0000000aU)) | 
                               ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__9__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__8__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__7__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__6__KET__))) 
                                 << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__5__KET__) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__4__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__3__KET__) 
                                                  << 2U))) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__2__KET__) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+127,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t),68);
    bufp->fullIData(oldp+130,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__z__BRA__16__KET__) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__9__KET__)) 
                                                 << 2U))) 
                                  | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__29__KET__) 
                                       & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__2__KET__)) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__40__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__5__KET__)))) 
                                 << 0x0000000dU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__z__BRA__12__KET__) 
                                    << 3U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__33__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__4__KET__)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__z__BRA__10__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__12__KET__)))) 
                                 << 9U)) | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__10__KET__)) 
                                                << 4U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__z__BRA__7__KET__) 
                                                   << 3U) 
                                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__11__KET__)) 
                                                     << 2U))) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__z__BRA__5__KET__) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__z__BRA__4__KET__))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__z__BRA__3__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__z__BRA__2__KET__) 
                                                   << 2U)) 
                                               | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__37__KET__) 
                                                    & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__6__KET__)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+131,((0x000000ffU & vlSelfRef.aes__DOT__state_current[2U])),8);
    bufp->fullCData(oldp+132,((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                   << 3U) | (4U ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                 | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                           << 1U)) 
                                    | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                              << 2U)) 
                                          | ((2U ^ 
                                              (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                               << 1U)) 
                                             | (1U 
                                                ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))),8);
    bufp->fullIData(oldp+133,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__16__KET__)) 
                                    << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__20__KET__) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                                 << 3U))) 
                                  | ((4U & ((0x07fffffcU 
                                             & (vlSelfRef.aes__DOT__state_current[2U] 
                                                >> 5U)) 
                                            ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__16__KET__) 
                                               << 2U))) 
                                     | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__17__KET__) 
                                         << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__16__KET__)))) 
                                 << 0x0000000fU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__15__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__14__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__12__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__11__KET__))) 
                                 << 0x0000000aU)) | 
                               ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__9__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__8__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__7__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__6__KET__))) 
                                 << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__5__KET__) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__4__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__3__KET__) 
                                                  << 2U))) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__2__KET__) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+134,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t),68);
    bufp->fullIData(oldp+137,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__z__BRA__16__KET__) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__9__KET__)) 
                                                 << 2U))) 
                                  | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__29__KET__) 
                                       & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__2__KET__)) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__40__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__5__KET__)))) 
                                 << 0x0000000dU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__z__BRA__12__KET__) 
                                    << 3U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__33__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__4__KET__)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__z__BRA__10__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__12__KET__)))) 
                                 << 9U)) | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__10__KET__)) 
                                                << 4U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__z__BRA__7__KET__) 
                                                   << 3U) 
                                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__11__KET__)) 
                                                     << 2U))) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__z__BRA__5__KET__) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__z__BRA__4__KET__))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__z__BRA__3__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__z__BRA__2__KET__) 
                                                   << 2U)) 
                                               | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__37__KET__) 
                                                    & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__6__KET__)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+138,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[2U] 
                                              >> 8U))),8);
    bufp->fullCData(oldp+139,((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                   << 3U) | (4U ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                 | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                           << 1U)) 
                                    | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                              << 2U)) 
                                          | ((2U ^ 
                                              (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                               << 1U)) 
                                             | (1U 
                                                ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))),8);
    bufp->fullIData(oldp+140,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__16__KET__)) 
                                    << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__20__KET__) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                                 << 3U))) 
                                  | ((4U & ((0x0007fffcU 
                                             & (vlSelfRef.aes__DOT__state_current[2U] 
                                                >> 0x0000000dU)) 
                                            ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__16__KET__) 
                                               << 2U))) 
                                     | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__17__KET__) 
                                         << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__16__KET__)))) 
                                 << 0x0000000fU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__15__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__14__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__12__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__11__KET__))) 
                                 << 0x0000000aU)) | 
                               ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__9__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__8__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__7__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__6__KET__))) 
                                 << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__5__KET__) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__4__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__3__KET__) 
                                                  << 2U))) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__2__KET__) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+141,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t),68);
    bufp->fullIData(oldp+144,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__z__BRA__16__KET__) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__9__KET__)) 
                                                 << 2U))) 
                                  | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__29__KET__) 
                                       & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__2__KET__)) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__40__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__5__KET__)))) 
                                 << 0x0000000dU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__z__BRA__12__KET__) 
                                    << 3U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__33__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__4__KET__)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__z__BRA__10__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__12__KET__)))) 
                                 << 9U)) | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__10__KET__)) 
                                                << 4U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__z__BRA__7__KET__) 
                                                   << 3U) 
                                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__11__KET__)) 
                                                     << 2U))) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__z__BRA__5__KET__) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__z__BRA__4__KET__))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__z__BRA__3__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__z__BRA__2__KET__) 
                                                   << 2U)) 
                                               | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__37__KET__) 
                                                    & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__6__KET__)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+145,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[2U] 
                                              >> 0x00000010U))),8);
    bufp->fullCData(oldp+146,((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                   << 3U) | (4U ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                 | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                           << 1U)) 
                                    | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                              << 2U)) 
                                          | ((2U ^ 
                                              (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                               << 1U)) 
                                             | (1U 
                                                ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))),8);
    bufp->fullIData(oldp+147,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__16__KET__)) 
                                    << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__20__KET__) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                                 << 3U))) 
                                  | ((4U & ((0x000007fcU 
                                             & (vlSelfRef.aes__DOT__state_current[2U] 
                                                >> 0x00000015U)) 
                                            ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__16__KET__) 
                                               << 2U))) 
                                     | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__17__KET__) 
                                         << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__16__KET__)))) 
                                 << 0x0000000fU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__15__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__14__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__12__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__11__KET__))) 
                                 << 0x0000000aU)) | 
                               ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__9__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__8__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__7__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__6__KET__))) 
                                 << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__5__KET__) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__4__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__3__KET__) 
                                                  << 2U))) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__2__KET__) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+148,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t),68);
    bufp->fullIData(oldp+151,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__z__BRA__16__KET__) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__9__KET__)) 
                                                 << 2U))) 
                                  | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__29__KET__) 
                                       & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__2__KET__)) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__40__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__5__KET__)))) 
                                 << 0x0000000dU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__z__BRA__12__KET__) 
                                    << 3U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__33__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__4__KET__)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__z__BRA__10__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__12__KET__)))) 
                                 << 9U)) | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__10__KET__)) 
                                                << 4U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__z__BRA__7__KET__) 
                                                   << 3U) 
                                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__11__KET__)) 
                                                     << 2U))) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__z__BRA__5__KET__) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__z__BRA__4__KET__))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__z__BRA__3__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__z__BRA__2__KET__) 
                                                   << 2U)) 
                                               | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__37__KET__) 
                                                    & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__6__KET__)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+152,((vlSelfRef.aes__DOT__state_current[2U] 
                               >> 0x00000018U)),8);
    bufp->fullCData(oldp+153,((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                   << 3U) | (4U ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                 | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                           << 1U)) 
                                    | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                              << 2U)) 
                                          | ((2U ^ 
                                              (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                               << 1U)) 
                                             | (1U 
                                                ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))),8);
    bufp->fullIData(oldp+154,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__16__KET__)) 
                                    << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__20__KET__) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                                 << 3U))) 
                                  | (((4U & (vlSelfRef.aes__DOT__state_current[2U] 
                                             >> 0x0000001dU)) 
                                      ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__16__KET__) 
                                         << 2U)) | 
                                     (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__17__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__16__KET__)))) 
                                 << 0x0000000fU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__15__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__14__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__12__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__11__KET__))) 
                                 << 0x0000000aU)) | 
                               ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__9__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__8__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__7__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__6__KET__))) 
                                 << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__5__KET__) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__4__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__3__KET__) 
                                                  << 2U))) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__2__KET__) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+155,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t),68);
    bufp->fullIData(oldp+158,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__z__BRA__16__KET__) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__9__KET__)) 
                                                 << 2U))) 
                                  | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__29__KET__) 
                                       & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__2__KET__)) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__40__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__5__KET__)))) 
                                 << 0x0000000dU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__z__BRA__12__KET__) 
                                    << 3U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__33__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__4__KET__)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__z__BRA__10__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__12__KET__)))) 
                                 << 9U)) | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__10__KET__)) 
                                                << 4U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__z__BRA__7__KET__) 
                                                   << 3U) 
                                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__11__KET__)) 
                                                     << 2U))) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__z__BRA__5__KET__) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__z__BRA__4__KET__))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__z__BRA__3__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__z__BRA__2__KET__) 
                                                   << 2U)) 
                                               | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__37__KET__) 
                                                    & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__6__KET__)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+159,((0x000000ffU & vlSelfRef.aes__DOT__state_current[3U])),8);
    bufp->fullCData(oldp+160,((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                   << 3U) | (4U ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                 | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                           << 1U)) 
                                    | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                              << 2U)) 
                                          | ((2U ^ 
                                              (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                               << 1U)) 
                                             | (1U 
                                                ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))),8);
    bufp->fullIData(oldp+161,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__16__KET__)) 
                                    << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__20__KET__) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                                 << 3U))) 
                                  | ((4U & ((0x07fffffcU 
                                             & (vlSelfRef.aes__DOT__state_current[3U] 
                                                >> 5U)) 
                                            ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__16__KET__) 
                                               << 2U))) 
                                     | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__17__KET__) 
                                         << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__16__KET__)))) 
                                 << 0x0000000fU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__15__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__14__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__12__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__11__KET__))) 
                                 << 0x0000000aU)) | 
                               ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__9__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__8__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__7__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__6__KET__))) 
                                 << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__5__KET__) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__4__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__3__KET__) 
                                                  << 2U))) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__2__KET__) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+162,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t),68);
    bufp->fullIData(oldp+165,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__z__BRA__16__KET__) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__9__KET__)) 
                                                 << 2U))) 
                                  | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__29__KET__) 
                                       & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__2__KET__)) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__40__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__5__KET__)))) 
                                 << 0x0000000dU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__z__BRA__12__KET__) 
                                    << 3U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__33__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__4__KET__)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__z__BRA__10__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__12__KET__)))) 
                                 << 9U)) | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__10__KET__)) 
                                                << 4U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__z__BRA__7__KET__) 
                                                   << 3U) 
                                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__11__KET__)) 
                                                     << 2U))) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__z__BRA__5__KET__) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__z__BRA__4__KET__))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__z__BRA__3__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__z__BRA__2__KET__) 
                                                   << 2U)) 
                                               | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__37__KET__) 
                                                    & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__6__KET__)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+166,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[3U] 
                                              >> 8U))),8);
    bufp->fullCData(oldp+167,((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                   << 3U) | (4U ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                 | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                           << 1U)) 
                                    | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                              << 2U)) 
                                          | ((2U ^ 
                                              (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                               << 1U)) 
                                             | (1U 
                                                ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))),8);
    bufp->fullIData(oldp+168,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__16__KET__)) 
                                    << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__20__KET__) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                                 << 3U))) 
                                  | ((4U & ((0x0007fffcU 
                                             & (vlSelfRef.aes__DOT__state_current[3U] 
                                                >> 0x0000000dU)) 
                                            ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__16__KET__) 
                                               << 2U))) 
                                     | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__17__KET__) 
                                         << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__16__KET__)))) 
                                 << 0x0000000fU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__15__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__14__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__12__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__11__KET__))) 
                                 << 0x0000000aU)) | 
                               ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__9__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__8__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__7__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__6__KET__))) 
                                 << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__5__KET__) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__4__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__3__KET__) 
                                                  << 2U))) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__2__KET__) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+169,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t),68);
    bufp->fullIData(oldp+172,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__z__BRA__16__KET__) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__9__KET__)) 
                                                 << 2U))) 
                                  | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__29__KET__) 
                                       & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__2__KET__)) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__40__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__5__KET__)))) 
                                 << 0x0000000dU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__z__BRA__12__KET__) 
                                    << 3U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__33__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__4__KET__)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__z__BRA__10__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__12__KET__)))) 
                                 << 9U)) | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__10__KET__)) 
                                                << 4U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__z__BRA__7__KET__) 
                                                   << 3U) 
                                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__11__KET__)) 
                                                     << 2U))) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__z__BRA__5__KET__) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__z__BRA__4__KET__))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__z__BRA__3__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__z__BRA__2__KET__) 
                                                   << 2U)) 
                                               | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__37__KET__) 
                                                    & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__6__KET__)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+173,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[3U] 
                                              >> 0x00000010U))),8);
    bufp->fullCData(oldp+174,((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                   << 3U) | (4U ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                 | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                           << 1U)) 
                                    | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                              << 2U)) 
                                          | ((2U ^ 
                                              (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                               << 1U)) 
                                             | (1U 
                                                ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))),8);
    bufp->fullIData(oldp+175,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__16__KET__)) 
                                    << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__20__KET__) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                                 << 3U))) 
                                  | ((4U & ((0x000007fcU 
                                             & (vlSelfRef.aes__DOT__state_current[3U] 
                                                >> 0x00000015U)) 
                                            ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__16__KET__) 
                                               << 2U))) 
                                     | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__17__KET__) 
                                         << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__16__KET__)))) 
                                 << 0x0000000fU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__15__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__14__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__12__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__11__KET__))) 
                                 << 0x0000000aU)) | 
                               ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__9__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__8__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__7__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__6__KET__))) 
                                 << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__5__KET__) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__4__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__3__KET__) 
                                                  << 2U))) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__2__KET__) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+176,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t),68);
    bufp->fullIData(oldp+179,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__z__BRA__16__KET__) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__9__KET__)) 
                                                 << 2U))) 
                                  | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__29__KET__) 
                                       & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__2__KET__)) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__40__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__5__KET__)))) 
                                 << 0x0000000dU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__z__BRA__12__KET__) 
                                    << 3U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__33__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__4__KET__)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__z__BRA__10__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__12__KET__)))) 
                                 << 9U)) | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__10__KET__)) 
                                                << 4U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__z__BRA__7__KET__) 
                                                   << 3U) 
                                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__11__KET__)) 
                                                     << 2U))) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__z__BRA__5__KET__) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__z__BRA__4__KET__))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__z__BRA__3__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__z__BRA__2__KET__) 
                                                   << 2U)) 
                                               | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__37__KET__) 
                                                    & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__6__KET__)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullCData(oldp+180,((vlSelfRef.aes__DOT__state_current[3U] 
                               >> 0x00000018U)),8);
    bufp->fullCData(oldp+181,((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                   << 3U) | (4U ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                 | ((2U ^ (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                            ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                           << 1U)) 
                                    | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                << 4U) | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                             ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                            << 3U) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                              << 2U)) 
                                          | ((2U ^ 
                                              (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                               << 1U)) 
                                             | (1U 
                                                ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))),8);
    bufp->fullIData(oldp+182,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__16__KET__)) 
                                    << 5U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__20__KET__) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                                 << 3U))) 
                                  | (((4U & (vlSelfRef.aes__DOT__state_current[3U] 
                                             >> 0x0000001dU)) 
                                      ^ ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__16__KET__) 
                                         << 2U)) | 
                                     (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__17__KET__) 
                                       << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__16__KET__)))) 
                                 << 0x0000000fU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__15__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__14__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__13__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__12__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__11__KET__))) 
                                 << 0x0000000aU)) | 
                               ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__10__KET__) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__9__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__8__KET__) 
                                                 << 2U))) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__7__KET__) 
                                      << 1U) | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__6__KET__))) 
                                 << 5U) | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__5__KET__) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__4__KET__) 
                                                << 3U) 
                                               | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__3__KET__) 
                                                  << 2U))) 
                                           | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__2__KET__) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__1__KET__)))))),21);
    bufp->fullWData(oldp+183,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t),68);
    bufp->fullIData(oldp+186,(((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__8__KET__)) 
                                    << 4U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__z__BRA__16__KET__) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                  & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__9__KET__)) 
                                                 << 2U))) 
                                  | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__29__KET__) 
                                       & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__2__KET__)) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__40__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__5__KET__)))) 
                                 << 0x0000000dU) | 
                                (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__z__BRA__12__KET__) 
                                    << 3U) | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__33__KET__) 
                                               & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__4__KET__)) 
                                              << 2U)) 
                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__z__BRA__10__KET__) 
                                      << 1U) | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__12__KET__)))) 
                                 << 9U)) | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__41__KET__) 
                                                 & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__10__KET__)) 
                                                << 4U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__z__BRA__7__KET__) 
                                                   << 3U) 
                                                  | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__42__KET__) 
                                                      & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__11__KET__)) 
                                                     << 2U))) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__z__BRA__5__KET__) 
                                                  << 1U) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__z__BRA__4__KET__))) 
                                             << 4U) 
                                            | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__z__BRA__3__KET__) 
                                                 << 3U) 
                                                | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__z__BRA__2__KET__) 
                                                   << 2U)) 
                                               | ((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__37__KET__) 
                                                    & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__6__KET__)) 
                                                   << 1U) 
                                                  | ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__44__KET__) 
                                                     & (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__y__BRA__15__KET__))))))),18);
    bufp->fullBit(oldp+187,(vlSelfRef.clk));
    bufp->fullBit(oldp+188,(vlSelfRef.rst_n));
    bufp->fullWData(oldp+189,(vlSelfRef.plaintext),128);
    bufp->fullBit(oldp+193,(vlSelfRef.plaintext_valid));
    bufp->fullWData(oldp+194,(vlSelfRef.key),128);
    bufp->fullWData(oldp+198,(vlSelfRef.ciphertext),128);
    bufp->fullBit(oldp+202,(vlSelfRef.ciphertext_valid));
}
