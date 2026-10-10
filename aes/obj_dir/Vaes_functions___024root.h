// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_functions.h for the primary calling header

#ifndef VERILATED_VAES_FUNCTIONS___024ROOT_H_
#define VERILATED_VAES_FUNCTIONS___024ROOT_H_  // guard

#include "verilated.h"


class Vaes_functions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaes_functions___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(plaintext_valid,0,0);
    VL_OUT8(ciphertext_valid,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    VL_INW(plaintext,127,0,4);
    VL_INW(key,127,0,4);
    VL_OUTW(ciphertext,127,0,4);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<VlWide<4>/*127:0*/, 11> aes__DOT__round_keys;
    VlUnpacked<CData/*7:0*/, 11> aes__DOT__rcon;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vaes_functions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vaes_functions___024root(Vaes_functions__Syms* symsp, const char* namep);
    ~Vaes_functions___024root();
    VL_UNCOPYABLE(Vaes_functions___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
