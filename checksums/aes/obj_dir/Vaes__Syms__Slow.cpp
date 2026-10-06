// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vaes__pch.h"

Vaes__Syms::Vaes__Syms(VerilatedContext* contextp, const char* namep, Vaes* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(1496);
    // Setup sub module instances
    TOP__aes__DOT__kg__DOT__sbox_0.ctor(this, "aes.kg.sbox_0");
    TOP__aes__DOT__kg__DOT__sbox_1.ctor(this, "aes.kg.sbox_1");
    TOP__aes__DOT__kg__DOT__sbox_2.ctor(this, "aes.kg.sbox_2");
    TOP__aes__DOT__kg__DOT__sbox_3.ctor(this, "aes.kg.sbox_3");
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.ctor(this, "aes.sb.gen_sbox[0].sb");
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.ctor(this, "aes.sb.gen_sbox[10].sb");
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.ctor(this, "aes.sb.gen_sbox[11].sb");
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.ctor(this, "aes.sb.gen_sbox[12].sb");
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.ctor(this, "aes.sb.gen_sbox[13].sb");
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.ctor(this, "aes.sb.gen_sbox[14].sb");
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.ctor(this, "aes.sb.gen_sbox[15].sb");
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.ctor(this, "aes.sb.gen_sbox[1].sb");
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.ctor(this, "aes.sb.gen_sbox[2].sb");
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.ctor(this, "aes.sb.gen_sbox[3].sb");
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.ctor(this, "aes.sb.gen_sbox[4].sb");
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.ctor(this, "aes.sb.gen_sbox[5].sb");
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.ctor(this, "aes.sb.gen_sbox[6].sb");
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.ctor(this, "aes.sb.gen_sbox[7].sb");
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.ctor(this, "aes.sb.gen_sbox[8].sb");
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.ctor(this, "aes.sb.gen_sbox[9].sb");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__aes__DOT__kg__DOT__sbox_0 = &TOP__aes__DOT__kg__DOT__sbox_0;
    TOP.__PVT__aes__DOT__kg__DOT__sbox_1 = &TOP__aes__DOT__kg__DOT__sbox_1;
    TOP.__PVT__aes__DOT__kg__DOT__sbox_2 = &TOP__aes__DOT__kg__DOT__sbox_2;
    TOP.__PVT__aes__DOT__kg__DOT__sbox_3 = &TOP__aes__DOT__kg__DOT__sbox_3;
    TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb = &TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb;
    TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb = &TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb;
    TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb = &TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb;
    TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb = &TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb;
    TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb = &TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb;
    TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb = &TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb;
    TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb = &TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb;
    TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb = &TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb;
    TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb = &TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb;
    TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb = &TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb;
    TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb = &TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb;
    TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb = &TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb;
    TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb = &TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb;
    TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb = &TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb;
    TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb = &TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb;
    TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb = &TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__aes__DOT__kg__DOT__sbox_0.__Vconfigure(true);
    TOP__aes__DOT__kg__DOT__sbox_1.__Vconfigure(false);
    TOP__aes__DOT__kg__DOT__sbox_2.__Vconfigure(false);
    TOP__aes__DOT__kg__DOT__sbox_3.__Vconfigure(false);
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__Vconfigure(false);
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__Vconfigure(false);
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__Vconfigure(false);
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__Vconfigure(false);
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__Vconfigure(false);
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__Vconfigure(false);
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__Vconfigure(false);
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__Vconfigure(false);
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__Vconfigure(false);
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__Vconfigure(false);
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__Vconfigure(false);
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__Vconfigure(false);
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__Vconfigure(false);
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__Vconfigure(false);
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__Vconfigure(false);
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__Vconfigure(false);
    // Setup scopes
}

Vaes__Syms::~Vaes__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.dtor();
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.dtor();
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.dtor();
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.dtor();
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.dtor();
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.dtor();
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.dtor();
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.dtor();
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.dtor();
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.dtor();
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.dtor();
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.dtor();
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.dtor();
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.dtor();
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.dtor();
    TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.dtor();
    TOP__aes__DOT__kg__DOT__sbox_3.dtor();
    TOP__aes__DOT__kg__DOT__sbox_2.dtor();
    TOP__aes__DOT__kg__DOT__sbox_1.dtor();
    TOP__aes__DOT__kg__DOT__sbox_0.dtor();
}
