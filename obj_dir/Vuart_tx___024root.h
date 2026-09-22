// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vuart_tx.h for the primary calling header

#ifndef VERILATED_VUART_TX___024ROOT_H_
#define VERILATED_VUART_TX___024ROOT_H_  // guard

#include "verilated.h"


class Vuart_tx__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vuart_tx___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(data,7,0);
    VL_IN8(valid,0,0);
    VL_OUT8(ready,0,0);
    VL_OUT8(tx,0,0);
    CData/*0:0*/ uart_tx__DOT__full;
    CData/*0:0*/ uart_tx__DOT__empty;
    CData/*0:0*/ uart_tx__DOT__read_fifo;
    CData/*7:0*/ uart_tx__DOT__fifo_out;
    CData/*4:0*/ uart_tx__DOT__state;
    CData/*4:0*/ uart_tx__DOT__next_state;
    CData/*0:0*/ uart_tx__DOT__next_tx;
    CData/*2:0*/ uart_tx__DOT__byte_fifo__DOT__rd_pntr;
    CData/*2:0*/ uart_tx__DOT__byte_fifo__DOT__wr_pntr;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> uart_tx__DOT__byte_fifo__DOT__mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vuart_tx__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vuart_tx___024root(Vuart_tx__Syms* symsp, const char* namep);
    ~Vuart_tx___024root();
    VL_UNCOPYABLE(Vuart_tx___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
