// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tx.h for the primary calling header

#include "Vuart_tx__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tx___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vuart_tx___024root___eval_triggers__act(Vuart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___eval_triggers__act\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_tx___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vuart_tx___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vuart_tx___024root___nba_sequent__TOP__0(Vuart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___nba_sequent__TOP__0\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__uart_tx__DOT__byte_fifo__DOT__wr_pntr;
    __Vdly__uart_tx__DOT__byte_fifo__DOT__wr_pntr = 0;
    CData/*2:0*/ __Vdly__uart_tx__DOT__byte_fifo__DOT__rd_pntr;
    __Vdly__uart_tx__DOT__byte_fifo__DOT__rd_pntr = 0;
    CData/*7:0*/ __VdlyVal__uart_tx__DOT__byte_fifo__DOT__mem__v0;
    __VdlyVal__uart_tx__DOT__byte_fifo__DOT__mem__v0 = 0;
    CData/*2:0*/ __VdlyDim0__uart_tx__DOT__byte_fifo__DOT__mem__v0;
    __VdlyDim0__uart_tx__DOT__byte_fifo__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__uart_tx__DOT__byte_fifo__DOT__mem__v0;
    __VdlySet__uart_tx__DOT__byte_fifo__DOT__mem__v0 = 0;
    // Body
    __VdlySet__uart_tx__DOT__byte_fifo__DOT__mem__v0 = 0U;
    __Vdly__uart_tx__DOT__byte_fifo__DOT__rd_pntr = vlSelfRef.uart_tx__DOT__byte_fifo__DOT__rd_pntr;
    __Vdly__uart_tx__DOT__byte_fifo__DOT__wr_pntr = vlSelfRef.uart_tx__DOT__byte_fifo__DOT__wr_pntr;
    if (vlSelfRef.rst) {
        __Vdly__uart_tx__DOT__byte_fifo__DOT__wr_pntr = 0U;
        vlSelfRef.uart_tx__DOT__state = 0U;
        __Vdly__uart_tx__DOT__byte_fifo__DOT__rd_pntr = 0U;
        vlSelfRef.uart_tx__DOT__fifo_out = 0U;
    } else {
        if ((((IData)(vlSelfRef.ready) & (IData)(vlSelfRef.valid)) 
             & (~ (IData)(vlSelfRef.uart_tx__DOT__full)))) {
            __VdlyVal__uart_tx__DOT__byte_fifo__DOT__mem__v0 
                = vlSelfRef.data;
            __VdlyDim0__uart_tx__DOT__byte_fifo__DOT__mem__v0 
                = vlSelfRef.uart_tx__DOT__byte_fifo__DOT__wr_pntr;
            __VdlySet__uart_tx__DOT__byte_fifo__DOT__mem__v0 = 1U;
            __Vdly__uart_tx__DOT__byte_fifo__DOT__wr_pntr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.uart_tx__DOT__byte_fifo__DOT__wr_pntr)));
        }
        vlSelfRef.uart_tx__DOT__state = vlSelfRef.uart_tx__DOT__next_state;
        if (((IData)(vlSelfRef.uart_tx__DOT__read_fifo) 
             & (~ (IData)(vlSelfRef.uart_tx__DOT__empty)))) {
            vlSelfRef.uart_tx__DOT__fifo_out = vlSelfRef.uart_tx__DOT__byte_fifo__DOT__mem
                [vlSelfRef.uart_tx__DOT__byte_fifo__DOT__rd_pntr];
            __Vdly__uart_tx__DOT__byte_fifo__DOT__rd_pntr 
                = (7U & ((IData)(1U) + (IData)(vlSelfRef.uart_tx__DOT__byte_fifo__DOT__rd_pntr)));
        }
    }
    vlSelfRef.uart_tx__DOT__byte_fifo__DOT__wr_pntr 
        = __Vdly__uart_tx__DOT__byte_fifo__DOT__wr_pntr;
    if (__VdlySet__uart_tx__DOT__byte_fifo__DOT__mem__v0) {
        vlSelfRef.uart_tx__DOT__byte_fifo__DOT__mem[__VdlyDim0__uart_tx__DOT__byte_fifo__DOT__mem__v0] 
            = __VdlyVal__uart_tx__DOT__byte_fifo__DOT__mem__v0;
    }
    vlSelfRef.uart_tx__DOT__byte_fifo__DOT__rd_pntr 
        = __Vdly__uart_tx__DOT__byte_fifo__DOT__rd_pntr;
    vlSelfRef.tx = 1U;
    if ((1U & (~ ((IData)(vlSelfRef.uart_tx__DOT__state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelfRef.uart_tx__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.uart_tx__DOT__state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.uart_tx__DOT__state))) {
                    if ((1U & (~ (IData)(vlSelfRef.uart_tx__DOT__state)))) {
                        vlSelfRef.tx = 1U;
                    }
                } else {
                    vlSelfRef.tx = (1U & ((1U & (IData)(vlSelfRef.uart_tx__DOT__state))
                                           ? ((IData)(vlSelfRef.uart_tx__DOT__fifo_out) 
                                              >> 7U)
                                           : ((IData)(vlSelfRef.uart_tx__DOT__fifo_out) 
                                              >> 6U)));
                }
            }
        } else {
            vlSelfRef.tx = (1U & ((4U & (IData)(vlSelfRef.uart_tx__DOT__state))
                                   ? ((2U & (IData)(vlSelfRef.uart_tx__DOT__state))
                                       ? ((1U & (IData)(vlSelfRef.uart_tx__DOT__state))
                                           ? ((IData)(vlSelfRef.uart_tx__DOT__fifo_out) 
                                              >> 5U)
                                           : ((IData)(vlSelfRef.uart_tx__DOT__fifo_out) 
                                              >> 4U))
                                       : ((1U & (IData)(vlSelfRef.uart_tx__DOT__state))
                                           ? ((IData)(vlSelfRef.uart_tx__DOT__fifo_out) 
                                              >> 3U)
                                           : ((IData)(vlSelfRef.uart_tx__DOT__fifo_out) 
                                              >> 2U)))
                                   : ((2U & (IData)(vlSelfRef.uart_tx__DOT__state))
                                       ? ((1U & (IData)(vlSelfRef.uart_tx__DOT__state))
                                           ? ((IData)(vlSelfRef.uart_tx__DOT__fifo_out) 
                                              >> 1U)
                                           : (IData)(vlSelfRef.uart_tx__DOT__fifo_out))
                                       : (~ (IData)(vlSelfRef.uart_tx__DOT__state)))));
        }
    }
    vlSelfRef.uart_tx__DOT__full = ((7U & ((IData)(1U) 
                                           + (IData)(vlSelfRef.uart_tx__DOT__byte_fifo__DOT__wr_pntr))) 
                                    == (IData)(vlSelfRef.uart_tx__DOT__byte_fifo__DOT__rd_pntr));
    vlSelfRef.uart_tx__DOT__empty = ((IData)(vlSelfRef.uart_tx__DOT__byte_fifo__DOT__rd_pntr) 
                                     == (IData)(vlSelfRef.uart_tx__DOT__byte_fifo__DOT__wr_pntr));
    vlSelfRef.ready = (1U & (~ (IData)(vlSelfRef.uart_tx__DOT__full)));
    vlSelfRef.uart_tx__DOT__read_fifo = 0U;
    vlSelfRef.uart_tx__DOT__next_state = vlSelfRef.uart_tx__DOT__state;
    if ((0x00000010U & (IData)(vlSelfRef.uart_tx__DOT__state))) {
        vlSelfRef.uart_tx__DOT__read_fifo = 0U;
        vlSelfRef.uart_tx__DOT__next_state = 0U;
    } else if ((8U & (IData)(vlSelfRef.uart_tx__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.uart_tx__DOT__state))) {
            vlSelfRef.uart_tx__DOT__read_fifo = 0U;
            vlSelfRef.uart_tx__DOT__next_state = 0U;
        } else if ((2U & (IData)(vlSelfRef.uart_tx__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.uart_tx__DOT__state))) {
                vlSelfRef.uart_tx__DOT__read_fifo = 0U;
            }
            vlSelfRef.uart_tx__DOT__next_state = 0U;
        } else {
            vlSelfRef.uart_tx__DOT__next_state = ((1U 
                                                   & (IData)(vlSelfRef.uart_tx__DOT__state))
                                                   ? 0x0aU
                                                   : 9U);
        }
    } else {
        if ((1U & (~ ((IData)(vlSelfRef.uart_tx__DOT__state) 
                      >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.uart_tx__DOT__state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.uart_tx__DOT__state))) {
                    vlSelfRef.uart_tx__DOT__read_fifo = 0U;
                } else if ((1U & (~ (IData)(vlSelfRef.uart_tx__DOT__empty)))) {
                    vlSelfRef.uart_tx__DOT__read_fifo = 1U;
                }
            }
        }
        if ((4U & (IData)(vlSelfRef.uart_tx__DOT__state))) {
            vlSelfRef.uart_tx__DOT__next_state = ((2U 
                                                   & (IData)(vlSelfRef.uart_tx__DOT__state))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.uart_tx__DOT__state))
                                                    ? 8U
                                                    : 7U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelfRef.uart_tx__DOT__state))
                                                    ? 6U
                                                    : 5U));
        } else if ((2U & (IData)(vlSelfRef.uart_tx__DOT__state))) {
            vlSelfRef.uart_tx__DOT__next_state = ((1U 
                                                   & (IData)(vlSelfRef.uart_tx__DOT__state))
                                                   ? 4U
                                                   : 3U);
        } else if ((1U & (IData)(vlSelfRef.uart_tx__DOT__state))) {
            vlSelfRef.uart_tx__DOT__next_state = 2U;
        } else if ((1U & (~ (IData)(vlSelfRef.uart_tx__DOT__empty)))) {
            vlSelfRef.uart_tx__DOT__next_state = 1U;
        }
    }
}

void Vuart_tx___024root___eval_nba(Vuart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___eval_nba\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vuart_tx___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vuart_tx___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vuart_tx___024root___eval_phase__act(Vuart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___eval_phase__act\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vuart_tx___024root___eval_triggers__act(vlSelf);
    Vuart_tx___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vuart_tx___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vuart_tx___024root___eval_phase__nba(Vuart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___eval_phase__nba\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vuart_tx___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vuart_tx___024root___eval_nba(vlSelf);
        Vuart_tx___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vuart_tx___024root___eval(Vuart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___eval\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vuart_tx___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("uart_tx.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vuart_tx___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("uart_tx.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vuart_tx___024root___eval_phase__act(vlSelf));
    } while (Vuart_tx___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vuart_tx___024root___eval_debug_assertions(Vuart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___eval_debug_assertions\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.valid & 0xfeU)))) {
        Verilated::overWidthError("valid");
    }
}
#endif  // VL_DEBUG
