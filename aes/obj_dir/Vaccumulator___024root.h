// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaccumulator.h for the primary calling header

#ifndef VERILATED_VACCUMULATOR___024ROOT_H_
#define VERILATED_VACCUMULATOR___024ROOT_H_  // guard

#include "verilated.h"


class Vaccumulator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaccumulator___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(input_valid,0,0);
    VL_IN8(input_last,0,0);
    VL_OUT8(output_valid,0,0);
    CData/*1:0*/ accumulator__DOT__word_count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    VL_IN(input_data,31,0);
    VL_OUTW(output_data,127,0,4);
    VlWide<4>/*127:0*/ accumulator__DOT__accumulator;
    VlWide<4>/*127:0*/ accumulator__DOT__accumulator_next;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vaccumulator__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vaccumulator___024root(Vaccumulator__Syms* symsp, const char* namep);
    ~Vaccumulator___024root();
    VL_UNCOPYABLE(Vaccumulator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
