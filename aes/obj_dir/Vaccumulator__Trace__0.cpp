// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vaccumulator__Syms.h"


void Vaccumulator___024root__trace_chg_0_sub_0(Vaccumulator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vaccumulator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root__trace_chg_0\n"); );
    // Body
    Vaccumulator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaccumulator___024root*>(voidSelf);
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vaccumulator___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vaccumulator___024root__trace_chg_0_sub_0(Vaccumulator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root__trace_chg_0_sub_0\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgWData(oldp+0,(vlSelfRef.accumulator__DOT__accumulator),128);
        bufp->chgCData(oldp+4,(vlSelfRef.accumulator__DOT__word_count),2);
    }
    bufp->chgBit(oldp+5,(vlSelfRef.clk));
    bufp->chgBit(oldp+6,(vlSelfRef.rst_n));
    bufp->chgIData(oldp+7,(vlSelfRef.input_data),32);
    bufp->chgBit(oldp+8,(vlSelfRef.input_valid));
    bufp->chgBit(oldp+9,(vlSelfRef.input_last));
    bufp->chgWData(oldp+10,(vlSelfRef.output_data),128);
    bufp->chgBit(oldp+14,(vlSelfRef.output_valid));
    bufp->chgWData(oldp+15,(vlSelfRef.accumulator__DOT__accumulator_next),128);
}

void Vaccumulator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root__trace_cleanup\n"); );
    // Body
    Vaccumulator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaccumulator___024root*>(voidSelf);
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
