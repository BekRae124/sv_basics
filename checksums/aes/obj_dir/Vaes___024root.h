// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes.h for the primary calling header

#ifndef VERILATED_VAES___024ROOT_H_
#define VERILATED_VAES___024ROOT_H_  // guard

#include "verilated.h"
class Vaes_sbox;


class Vaes__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaes___024root final {
  public:
    // CELLS
    Vaes_sbox* __PVT__aes__DOT__kg__DOT__sbox_0;
    Vaes_sbox* __PVT__aes__DOT__kg__DOT__sbox_1;
    Vaes_sbox* __PVT__aes__DOT__kg__DOT__sbox_2;
    Vaes_sbox* __PVT__aes__DOT__kg__DOT__sbox_3;
    Vaes_sbox* __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb;
    Vaes_sbox* __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb;
    Vaes_sbox* __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb;
    Vaes_sbox* __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb;
    Vaes_sbox* __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb;
    Vaes_sbox* __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb;
    Vaes_sbox* __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb;
    Vaes_sbox* __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb;
    Vaes_sbox* __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb;
    Vaes_sbox* __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb;
    Vaes_sbox* __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb;
    Vaes_sbox* __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb;
    Vaes_sbox* __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb;
    Vaes_sbox* __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb;
    Vaes_sbox* __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb;
    Vaes_sbox* __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst_n,0,0);
        VL_IN8(plaintext_valid,0,0);
        VL_OUT8(ciphertext_valid,0,0);
        CData/*7:0*/ aes__DOT__rcon_current;
        CData/*7:0*/ aes__DOT__rcon_next;
        CData/*3:0*/ aes__DOT__round_num;
        CData/*7:0*/ __Vfunc_xtime__8__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__8__a;
        CData/*7:0*/ __Vfunc_xtime__8__result;
        CData/*7:0*/ __Vfunc_xtime__9__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__9__a;
        CData/*7:0*/ __Vfunc_xtime__9__result;
        CData/*7:0*/ __Vfunc_xtime__10__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__10__a;
        CData/*7:0*/ __Vfunc_xtime__10__result;
        CData/*7:0*/ __Vfunc_xtime__11__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__11__a;
        CData/*7:0*/ __Vfunc_xtime__11__result;
        CData/*7:0*/ __Vfunc_xtime__12__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__12__a;
        CData/*7:0*/ __Vfunc_xtime__12__result;
        CData/*7:0*/ __Vfunc_xtime__13__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__13__a;
        CData/*7:0*/ __Vfunc_xtime__13__result;
        CData/*7:0*/ __Vfunc_xtime__14__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__14__a;
        CData/*7:0*/ __Vfunc_xtime__14__result;
        CData/*7:0*/ __Vfunc_xtime__15__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__15__a;
        CData/*7:0*/ __Vfunc_xtime__15__result;
        CData/*7:0*/ __Vfunc_xtime__17__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__17__a;
        CData/*7:0*/ __Vfunc_xtime__17__result;
        CData/*7:0*/ __Vfunc_xtime__18__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__18__a;
        CData/*7:0*/ __Vfunc_xtime__18__result;
        CData/*7:0*/ __Vfunc_xtime__19__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__19__a;
        CData/*7:0*/ __Vfunc_xtime__19__result;
        CData/*7:0*/ __Vfunc_xtime__20__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__20__a;
        CData/*7:0*/ __Vfunc_xtime__20__result;
        CData/*7:0*/ __Vfunc_xtime__21__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__21__a;
        CData/*7:0*/ __Vfunc_xtime__21__result;
        CData/*7:0*/ __Vfunc_xtime__22__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__22__a;
        CData/*7:0*/ __Vfunc_xtime__22__result;
        CData/*7:0*/ __Vfunc_xtime__23__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__23__a;
        CData/*7:0*/ __Vfunc_xtime__23__result;
        CData/*7:0*/ __Vfunc_xtime__24__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__24__a;
        CData/*7:0*/ __Vfunc_xtime__24__result;
        CData/*7:0*/ __Vfunc_xtime__26__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__26__a;
        CData/*7:0*/ __Vfunc_xtime__26__result;
        CData/*7:0*/ __Vfunc_xtime__27__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__27__a;
        CData/*7:0*/ __Vfunc_xtime__27__result;
        CData/*7:0*/ __Vfunc_xtime__28__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__28__a;
        CData/*7:0*/ __Vfunc_xtime__28__result;
    };
    struct {
        CData/*7:0*/ __Vfunc_xtime__29__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__29__a;
        CData/*7:0*/ __Vfunc_xtime__29__result;
        CData/*7:0*/ __Vfunc_xtime__30__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__30__a;
        CData/*7:0*/ __Vfunc_xtime__30__result;
        CData/*7:0*/ __Vfunc_xtime__31__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__31__a;
        CData/*7:0*/ __Vfunc_xtime__31__result;
        CData/*7:0*/ __Vfunc_xtime__32__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__32__a;
        CData/*7:0*/ __Vfunc_xtime__32__result;
        CData/*7:0*/ __Vfunc_xtime__33__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__33__a;
        CData/*7:0*/ __Vfunc_xtime__33__result;
        CData/*7:0*/ __Vfunc_xtime__35__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__35__a;
        CData/*7:0*/ __Vfunc_xtime__35__result;
        CData/*7:0*/ __Vfunc_xtime__36__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__36__a;
        CData/*7:0*/ __Vfunc_xtime__36__result;
        CData/*7:0*/ __Vfunc_xtime__37__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__37__a;
        CData/*7:0*/ __Vfunc_xtime__37__result;
        CData/*7:0*/ __Vfunc_xtime__38__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__38__a;
        CData/*7:0*/ __Vfunc_xtime__38__result;
        CData/*7:0*/ __Vfunc_xtime__39__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__39__a;
        CData/*7:0*/ __Vfunc_xtime__39__result;
        CData/*7:0*/ __Vfunc_xtime__40__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__40__a;
        CData/*7:0*/ __Vfunc_xtime__40__result;
        CData/*7:0*/ __Vfunc_xtime__41__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__41__a;
        CData/*7:0*/ __Vfunc_xtime__41__result;
        CData/*7:0*/ __Vfunc_xtime__42__Vfuncout;
        CData/*7:0*/ __Vfunc_xtime__42__a;
        CData/*7:0*/ __Vfunc_xtime__42__result;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
        VL_INW(plaintext,127,0,4);
        VL_INW(key,127,0,4);
        VL_OUTW(ciphertext,127,0,4);
        VlWide<4>/*127:0*/ aes__DOT__round_key_current;
        VlWide<4>/*127:0*/ aes__DOT__state_current;
        VlWide<4>/*127:0*/ aes__DOT__state_next;
        VlWide<4>/*127:0*/ aes__DOT__test_state;
        VlWide<4>/*127:0*/ aes__DOT__test_sub_bytes;
        VlWide<4>/*127:0*/ aes__DOT__test_shift_rows;
        VlWide<4>/*127:0*/ aes__DOT__test_mix_columns;
        VlWide<4>/*127:0*/ aes__DOT__shift_rows_out;
        VlWide<4>/*127:0*/ aes__DOT__mix_columns_out;
        VlWide<4>/*127:0*/ aes__DOT__kg__DOT__round_key;
        VlWide<4>/*127:0*/ aes__DOT__sb__DOT__out;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 4> aes__DOT__kg__DOT__words_in;
        VlUnpacked<IData/*31:0*/, 4> aes__DOT__kg__DOT__words_out;
        VlUnpacked<CData/*7:0*/, 4> aes__DOT__kg__DOT__sbox_out;
        VlUnpacked<CData/*7:0*/, 16> __Vfunc_to_state__1__b;
        VlUnpacked<CData/*7:0*/, 16> __Vfunc_to_state__2__b;
        VlUnpacked<CData/*7:0*/, 16> __Vfunc_to_state__3__b;
        VlUnpacked<CData/*7:0*/, 16> __Vfunc_to_state__4__b;
    };
    struct {
        VlUnpacked<CData/*7:0*/, 16> __Vfunc_shift_matrix__5__b;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vaes__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vaes___024root(Vaes__Syms* symsp, const char* namep);
    ~Vaes___024root();
    VL_UNCOPYABLE(Vaes___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
