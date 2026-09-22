// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tx.h for the primary calling header

#include "Vuart_tx__pch.h"

VL_ATTR_COLD void Vuart_tx___024root___eval_static(Vuart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___eval_static\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vuart_tx___024root___eval_initial(Vuart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___eval_initial\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vuart_tx___024root___eval_final(Vuart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___eval_final\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tx___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vuart_tx___024root___eval_phase__stl(Vuart_tx___024root* vlSelf);

VL_ATTR_COLD void Vuart_tx___024root___eval_settle(Vuart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___eval_settle\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vuart_tx___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("uart_tx.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vuart_tx___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vuart_tx___024root___eval_triggers__stl(Vuart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___eval_triggers__stl\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vuart_tx___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vuart_tx___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tx___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vuart_tx___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vuart_tx___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vuart_tx___024root___stl_sequent__TOP__0(Vuart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___stl_sequent__TOP__0\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void Vuart_tx___024root____Vm_traceActivitySetAll(Vuart_tx___024root* vlSelf);

VL_ATTR_COLD void Vuart_tx___024root___eval_stl(Vuart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___eval_stl\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vuart_tx___024root___stl_sequent__TOP__0(vlSelf);
        Vuart_tx___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vuart_tx___024root___eval_phase__stl(Vuart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___eval_phase__stl\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vuart_tx___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vuart_tx___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vuart_tx___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vuart_tx___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vuart_tx___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vuart_tx___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vuart_tx___024root____Vm_traceActivitySetAll(Vuart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root____Vm_traceActivitySetAll\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vuart_tx___024root___ctor_var_reset(Vuart_tx___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vuart_tx___024root___ctor_var_reset\n"); );
    Vuart_tx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10363016170300574568ull);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    vlSelf->ready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 898948264233693212ull);
    vlSelf->tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16692943634734642928ull);
    vlSelf->uart_tx__DOT__full = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9731161458879473223ull);
    vlSelf->uart_tx__DOT__empty = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4365166176027665378ull);
    vlSelf->uart_tx__DOT__read_fifo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5189207569423091374ull);
    vlSelf->uart_tx__DOT__fifo_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1168782931839663189ull);
    vlSelf->uart_tx__DOT__state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10198528267209426564ull);
    vlSelf->uart_tx__DOT__next_state = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16959498440081928788ull);
    vlSelf->uart_tx__DOT__next_tx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1537624905085939373ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->uart_tx__DOT__byte_fifo__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3788584527684331353ull);
    }
    vlSelf->uart_tx__DOT__byte_fifo__DOT__rd_pntr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15343886815452096488ull);
    vlSelf->uart_tx__DOT__byte_fifo__DOT__wr_pntr = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1408684438566135312ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
