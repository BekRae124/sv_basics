// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vuart_tx__Syms.h"


void Vuart_tx___024root__trace_chg_0_sub_0(Vuart_tx___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vuart_tx___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root__trace_chg_0\n"); );
    // Body
    Vuart_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tx___024root*>(voidSelf);
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vuart_tx___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vuart_tx___024root__trace_chg_0_sub_0(Vuart_tx___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root__trace_chg_0_sub_0\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.uart_tx__DOT__full));
        bufp->chgBit(oldp+1,(vlSelfRef.uart_tx__DOT__empty));
        bufp->chgBit(oldp+2,(vlSelfRef.uart_tx__DOT__read_fifo));
        bufp->chgCData(oldp+3,(vlSelfRef.uart_tx__DOT__fifo_out),8);
        bufp->chgCData(oldp+4,(vlSelfRef.uart_tx__DOT__state),5);
        bufp->chgCData(oldp+5,(vlSelfRef.uart_tx__DOT__next_state),5);
        bufp->chgCData(oldp+6,(vlSelfRef.uart_tx__DOT__byte_fifo__DOT__mem[0]),8);
        bufp->chgCData(oldp+7,(vlSelfRef.uart_tx__DOT__byte_fifo__DOT__mem[1]),8);
        bufp->chgCData(oldp+8,(vlSelfRef.uart_tx__DOT__byte_fifo__DOT__mem[2]),8);
        bufp->chgCData(oldp+9,(vlSelfRef.uart_tx__DOT__byte_fifo__DOT__mem[3]),8);
        bufp->chgCData(oldp+10,(vlSelfRef.uart_tx__DOT__byte_fifo__DOT__mem[4]),8);
        bufp->chgCData(oldp+11,(vlSelfRef.uart_tx__DOT__byte_fifo__DOT__mem[5]),8);
        bufp->chgCData(oldp+12,(vlSelfRef.uart_tx__DOT__byte_fifo__DOT__mem[6]),8);
        bufp->chgCData(oldp+13,(vlSelfRef.uart_tx__DOT__byte_fifo__DOT__mem[7]),8);
        bufp->chgCData(oldp+14,(vlSelfRef.uart_tx__DOT__byte_fifo__DOT__rd_pntr),3);
        bufp->chgCData(oldp+15,(vlSelfRef.uart_tx__DOT__byte_fifo__DOT__wr_pntr),3);
    }
    bufp->chgBit(oldp+16,(vlSelfRef.clk));
    bufp->chgBit(oldp+17,(vlSelfRef.rst));
    bufp->chgCData(oldp+18,(vlSelfRef.data),8);
    bufp->chgBit(oldp+19,(vlSelfRef.valid));
    bufp->chgBit(oldp+20,(vlSelfRef.ready));
    bufp->chgBit(oldp+21,(vlSelfRef.tx));
    bufp->chgBit(oldp+22,(((IData)(vlSelfRef.ready) 
                           & (IData)(vlSelfRef.valid))));
}

void Vuart_tx___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root__trace_cleanup\n"); );
    // Body
    Vuart_tx___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vuart_tx___024root*>(voidSelf);
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
