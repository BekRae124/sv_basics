// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vaes_functions__Syms.h"


void Vaes_functions___024root__trace_chg_0_sub_0(Vaes_functions___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vaes_functions___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root__trace_chg_0\n"); );
    // Body
    Vaes_functions___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes_functions___024root*>(voidSelf);
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vaes_functions___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vaes_functions___024root__trace_chg_0_sub_0(Vaes_functions___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root__trace_chg_0_sub_0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgWData(oldp+0,(vlSelfRef.aes__DOT__round_keys[0]),128);
        bufp->chgWData(oldp+4,(vlSelfRef.aes__DOT__round_keys[1]),128);
        bufp->chgWData(oldp+8,(vlSelfRef.aes__DOT__round_keys[2]),128);
        bufp->chgWData(oldp+12,(vlSelfRef.aes__DOT__round_keys[3]),128);
        bufp->chgWData(oldp+16,(vlSelfRef.aes__DOT__round_keys[4]),128);
        bufp->chgWData(oldp+20,(vlSelfRef.aes__DOT__round_keys[5]),128);
        bufp->chgWData(oldp+24,(vlSelfRef.aes__DOT__round_keys[6]),128);
        bufp->chgWData(oldp+28,(vlSelfRef.aes__DOT__round_keys[7]),128);
        bufp->chgWData(oldp+32,(vlSelfRef.aes__DOT__round_keys[8]),128);
        bufp->chgWData(oldp+36,(vlSelfRef.aes__DOT__round_keys[9]),128);
        bufp->chgWData(oldp+40,(vlSelfRef.aes__DOT__round_keys[10]),128);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+44,(vlSelfRef.aes__DOT__rcon[0]),8);
        bufp->chgCData(oldp+45,(vlSelfRef.aes__DOT__rcon[1]),8);
        bufp->chgCData(oldp+46,(vlSelfRef.aes__DOT__rcon[2]),8);
        bufp->chgCData(oldp+47,(vlSelfRef.aes__DOT__rcon[3]),8);
        bufp->chgCData(oldp+48,(vlSelfRef.aes__DOT__rcon[4]),8);
        bufp->chgCData(oldp+49,(vlSelfRef.aes__DOT__rcon[5]),8);
        bufp->chgCData(oldp+50,(vlSelfRef.aes__DOT__rcon[6]),8);
        bufp->chgCData(oldp+51,(vlSelfRef.aes__DOT__rcon[7]),8);
        bufp->chgCData(oldp+52,(vlSelfRef.aes__DOT__rcon[8]),8);
        bufp->chgCData(oldp+53,(vlSelfRef.aes__DOT__rcon[9]),8);
        bufp->chgCData(oldp+54,(vlSelfRef.aes__DOT__rcon[10]),8);
    }
    bufp->chgBit(oldp+55,(vlSelfRef.clk));
    bufp->chgBit(oldp+56,(vlSelfRef.rst_n));
    bufp->chgWData(oldp+57,(vlSelfRef.plaintext),128);
    bufp->chgBit(oldp+61,(vlSelfRef.plaintext_valid));
    bufp->chgWData(oldp+62,(vlSelfRef.key),128);
    bufp->chgWData(oldp+66,(vlSelfRef.ciphertext),128);
    bufp->chgBit(oldp+70,(vlSelfRef.ciphertext_valid));
}

void Vaes_functions___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root__trace_cleanup\n"); );
    // Body
    Vaes_functions___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes_functions___024root*>(voidSelf);
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
