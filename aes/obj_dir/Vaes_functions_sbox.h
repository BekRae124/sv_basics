// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_functions.h for the primary calling header

#ifndef VERILATED_VAES_FUNCTIONS_SBOX_H_
#define VERILATED_VAES_FUNCTIONS_SBOX_H_  // guard

#include "verilated.h"


class Vaes_functions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaes_functions_sbox final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(in,7,0);
    VL_OUT8(out,7,0);
    CData/*0:0*/ __PVT__y__BRA__20__KET__;
    CData/*0:0*/ __PVT__y__BRA__17__KET__;
    CData/*0:0*/ __PVT__y__BRA__16__KET__;
    CData/*0:0*/ __PVT__y__BRA__15__KET__;
    CData/*0:0*/ __PVT__y__BRA__14__KET__;
    CData/*0:0*/ __PVT__y__BRA__13__KET__;
    CData/*0:0*/ __PVT__y__BRA__12__KET__;
    CData/*0:0*/ __PVT__y__BRA__11__KET__;
    CData/*0:0*/ __PVT__y__BRA__10__KET__;
    CData/*0:0*/ __PVT__y__BRA__9__KET__;
    CData/*0:0*/ __PVT__y__BRA__8__KET__;
    CData/*0:0*/ __PVT__y__BRA__7__KET__;
    CData/*0:0*/ __PVT__y__BRA__6__KET__;
    CData/*0:0*/ __PVT__y__BRA__5__KET__;
    CData/*0:0*/ __PVT__y__BRA__4__KET__;
    CData/*0:0*/ __PVT__y__BRA__3__KET__;
    CData/*0:0*/ __PVT__y__BRA__2__KET__;
    CData/*0:0*/ __PVT__y__BRA__1__KET__;
    CData/*0:0*/ __PVT__t__BRA__67__KET__;
    CData/*0:0*/ __PVT__t__BRA__66__KET__;
    CData/*0:0*/ __PVT__t__BRA__65__KET__;
    CData/*0:0*/ __PVT__t__BRA__64__KET__;
    CData/*0:0*/ __PVT__t__BRA__63__KET__;
    CData/*0:0*/ __PVT__t__BRA__62__KET__;
    CData/*0:0*/ __PVT__t__BRA__60__KET__;
    CData/*0:0*/ __PVT__t__BRA__59__KET__;
    CData/*0:0*/ __PVT__t__BRA__56__KET__;
    CData/*0:0*/ __PVT__t__BRA__55__KET__;
    CData/*0:0*/ __PVT__t__BRA__51__KET__;
    CData/*0:0*/ __PVT__t__BRA__48__KET__;
    CData/*0:0*/ __PVT__t__BRA__47__KET__;
    CData/*0:0*/ __PVT__t__BRA__44__KET__;
    CData/*0:0*/ __PVT__t__BRA__42__KET__;
    CData/*0:0*/ __PVT__t__BRA__41__KET__;
    CData/*0:0*/ __PVT__t__BRA__40__KET__;
    CData/*0:0*/ __PVT__t__BRA__37__KET__;
    CData/*0:0*/ __PVT__t__BRA__33__KET__;
    CData/*0:0*/ __PVT__t__BRA__29__KET__;
    CData/*0:0*/ __PVT__z__BRA__16__KET__;
    CData/*0:0*/ __PVT__z__BRA__12__KET__;
    CData/*0:0*/ __PVT__z__BRA__10__KET__;
    CData/*0:0*/ __PVT__z__BRA__7__KET__;
    CData/*0:0*/ __PVT__z__BRA__5__KET__;
    CData/*0:0*/ __PVT__z__BRA__4__KET__;
    CData/*0:0*/ __PVT__z__BRA__3__KET__;
    CData/*0:0*/ __PVT__z__BRA__2__KET__;
    CData/*0:0*/ __VdfgRegularize_h224e5c7b_0_0;
    VlWide<3>/*67:0*/ __PVT__t;

    // INTERNAL VARIABLES
    Vaes_functions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vaes_functions_sbox() = default;
    ~Vaes_functions_sbox() = default;
    void ctor(Vaes_functions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vaes_functions_sbox);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
