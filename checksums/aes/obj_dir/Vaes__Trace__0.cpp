// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vaes__Syms.h"


void Vaes___024root__trace_chg_0_sub_0(Vaes___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vaes___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_chg_0\n"); );
    // Body
    Vaes___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes___024root*>(voidSelf);
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vaes___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vaes___024root__trace_chg_0_sub_0(Vaes___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_chg_0_sub_0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgWData(oldp+0,(vlSelfRef.aes__DOT__round_key_current),128);
        bufp->chgWData(oldp+4,(vlSelfRef.aes__DOT__kg__DOT__round_key),128);
        bufp->chgWData(oldp+8,(vlSelfRef.aes__DOT__state_current),128);
        bufp->chgWData(oldp+12,(vlSelfRef.aes__DOT__state_next),128);
        bufp->chgCData(oldp+16,(vlSelfRef.aes__DOT__rcon_current),8);
        bufp->chgCData(oldp+17,(vlSelfRef.aes__DOT__rcon_next),8);
        bufp->chgCData(oldp+18,(vlSelfRef.aes__DOT__round_num),4);
        bufp->chgWData(oldp+19,(vlSelfRef.aes__DOT__test_state),128);
        bufp->chgWData(oldp+23,(vlSelfRef.aes__DOT__test_sub_bytes),128);
        bufp->chgWData(oldp+27,(vlSelfRef.aes__DOT__test_shift_rows),128);
        bufp->chgWData(oldp+31,(vlSelfRef.aes__DOT__test_mix_columns),128);
        bufp->chgWData(oldp+35,(vlSelfRef.aes__DOT__sb__DOT__out),128);
        bufp->chgWData(oldp+39,(vlSelfRef.aes__DOT__shift_rows_out),128);
        bufp->chgWData(oldp+43,(vlSelfRef.aes__DOT__mix_columns_out),128);
        bufp->chgIData(oldp+47,(vlSelfRef.aes__DOT__kg__DOT__words_in[0]),32);
        bufp->chgIData(oldp+48,(vlSelfRef.aes__DOT__kg__DOT__words_in[1]),32);
        bufp->chgIData(oldp+49,(vlSelfRef.aes__DOT__kg__DOT__words_in[2]),32);
        bufp->chgIData(oldp+50,(vlSelfRef.aes__DOT__kg__DOT__words_in[3]),32);
        bufp->chgIData(oldp+51,(vlSelfRef.aes__DOT__kg__DOT__words_out[0]),32);
        bufp->chgIData(oldp+52,(vlSelfRef.aes__DOT__kg__DOT__words_out[1]),32);
        bufp->chgIData(oldp+53,(vlSelfRef.aes__DOT__kg__DOT__words_out[2]),32);
        bufp->chgIData(oldp+54,(vlSelfRef.aes__DOT__kg__DOT__words_out[3]),32);
        bufp->chgIData(oldp+55,(((vlSelfRef.aes__DOT__round_key_current[0U] 
                                  << 8U) | (vlSelfRef.aes__DOT__round_key_current[0U] 
                                            >> 0x00000018U))),32);
        bufp->chgIData(oldp+56,(((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.out) 
                                   << 0x00000018U) 
                                  | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.out) 
                                     << 0x00000010U)) 
                                 | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.out) 
                                     << 8U) | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.out)))),32);
        bufp->chgIData(oldp+57,(((IData)(vlSelfRef.aes__DOT__rcon_current) 
                                 << 0x00000018U)),32);
        bufp->chgCData(oldp+58,(vlSelfRef.aes__DOT__kg__DOT__sbox_out[0]),8);
        bufp->chgCData(oldp+59,(vlSelfRef.aes__DOT__kg__DOT__sbox_out[1]),8);
        bufp->chgCData(oldp+60,(vlSelfRef.aes__DOT__kg__DOT__sbox_out[2]),8);
        bufp->chgCData(oldp+61,(vlSelfRef.aes__DOT__kg__DOT__sbox_out[3]),8);
        bufp->chgCData(oldp+62,((0x000000ffU & (vlSelfRef.aes__DOT__round_key_current[0U] 
                                                >> 0x00000010U))),8);
        bufp->chgCData(oldp+63,(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.out),8);
        bufp->chgCData(oldp+64,((0x000000ffU & (vlSelfRef.aes__DOT__round_key_current[0U] 
                                                >> 8U))),8);
        bufp->chgCData(oldp+65,(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.out),8);
        bufp->chgCData(oldp+66,((0x000000ffU & vlSelfRef.aes__DOT__round_key_current[0U])),8);
        bufp->chgCData(oldp+67,(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.out),8);
        bufp->chgCData(oldp+68,((vlSelfRef.aes__DOT__round_key_current[0U] 
                                 >> 0x00000018U)),8);
        bufp->chgCData(oldp+69,(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.out),8);
        bufp->chgCData(oldp+70,((0x000000ffU & vlSelfRef.aes__DOT__state_current[0U])),8);
        bufp->chgCData(oldp+71,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.out),8);
        bufp->chgCData(oldp+72,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[0U] 
                                                >> 8U))),8);
        bufp->chgCData(oldp+73,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.out),8);
        bufp->chgCData(oldp+74,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[0U] 
                                                >> 0x00000010U))),8);
        bufp->chgCData(oldp+75,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.out),8);
        bufp->chgCData(oldp+76,((vlSelfRef.aes__DOT__state_current[0U] 
                                 >> 0x00000018U)),8);
        bufp->chgCData(oldp+77,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.out),8);
        bufp->chgCData(oldp+78,((0x000000ffU & vlSelfRef.aes__DOT__state_current[1U])),8);
        bufp->chgCData(oldp+79,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.out),8);
        bufp->chgCData(oldp+80,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[1U] 
                                                >> 8U))),8);
        bufp->chgCData(oldp+81,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.out),8);
        bufp->chgCData(oldp+82,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[1U] 
                                                >> 0x00000010U))),8);
        bufp->chgCData(oldp+83,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.out),8);
        bufp->chgCData(oldp+84,((vlSelfRef.aes__DOT__state_current[1U] 
                                 >> 0x00000018U)),8);
        bufp->chgCData(oldp+85,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.out),8);
        bufp->chgCData(oldp+86,((0x000000ffU & vlSelfRef.aes__DOT__state_current[2U])),8);
        bufp->chgCData(oldp+87,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.out),8);
        bufp->chgCData(oldp+88,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[2U] 
                                                >> 8U))),8);
        bufp->chgCData(oldp+89,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.out),8);
        bufp->chgCData(oldp+90,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[2U] 
                                                >> 0x00000010U))),8);
        bufp->chgCData(oldp+91,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.out),8);
        bufp->chgCData(oldp+92,((vlSelfRef.aes__DOT__state_current[2U] 
                                 >> 0x00000018U)),8);
        bufp->chgCData(oldp+93,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.out),8);
        bufp->chgCData(oldp+94,((0x000000ffU & vlSelfRef.aes__DOT__state_current[3U])),8);
        bufp->chgCData(oldp+95,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.out),8);
        bufp->chgCData(oldp+96,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[3U] 
                                                >> 8U))),8);
        bufp->chgCData(oldp+97,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.out),8);
        bufp->chgCData(oldp+98,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[3U] 
                                                >> 0x00000010U))),8);
        bufp->chgCData(oldp+99,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.out),8);
        bufp->chgCData(oldp+100,((vlSelfRef.aes__DOT__state_current[3U] 
                                  >> 0x00000018U)),8);
        bufp->chgCData(oldp+101,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.out),8);
    }
    bufp->chgBit(oldp+102,(vlSelfRef.clk));
    bufp->chgBit(oldp+103,(vlSelfRef.rst_n));
    bufp->chgWData(oldp+104,(vlSelfRef.plaintext),128);
    bufp->chgBit(oldp+108,(vlSelfRef.plaintext_valid));
    bufp->chgWData(oldp+109,(vlSelfRef.key),128);
    bufp->chgWData(oldp+113,(vlSelfRef.ciphertext),128);
    bufp->chgBit(oldp+117,(vlSelfRef.ciphertext_valid));
}

void Vaes___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_cleanup\n"); );
    // Body
    Vaes___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes___024root*>(voidSelf);
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
