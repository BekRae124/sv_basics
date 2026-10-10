// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaccumulator.h for the primary calling header

#include "Vaccumulator__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaccumulator___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vaccumulator___024root___eval_triggers__ico(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___eval_triggers__ico\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaccumulator___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vaccumulator___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___trigger_anySet__ico\n"); );
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

void Vaccumulator___024root___ico_sequent__TOP__0(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___ico_sequent__TOP__0\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2U & (IData)(vlSelfRef.accumulator__DOT__word_count))) {
        if ((1U & (IData)(vlSelfRef.accumulator__DOT__word_count))) {
            vlSelfRef.accumulator__DOT__accumulator_next[0U] 
                = vlSelfRef.input_data;
            vlSelfRef.accumulator__DOT__accumulator_next[1U] 
                = vlSelfRef.accumulator__DOT__accumulator[1U];
            vlSelfRef.accumulator__DOT__accumulator_next[2U] 
                = vlSelfRef.accumulator__DOT__accumulator[2U];
            vlSelfRef.accumulator__DOT__accumulator_next[3U] 
                = vlSelfRef.accumulator__DOT__accumulator[3U];
        } else {
            vlSelfRef.accumulator__DOT__accumulator_next[0U] = 0U;
            vlSelfRef.accumulator__DOT__accumulator_next[1U] 
                = vlSelfRef.input_data;
            vlSelfRef.accumulator__DOT__accumulator_next[2U] 
                = (IData)((((QData)((IData)(vlSelfRef.accumulator__DOT__accumulator[3U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.accumulator__DOT__accumulator[2U]))));
            vlSelfRef.accumulator__DOT__accumulator_next[3U] 
                = (IData)(((((QData)((IData)(vlSelfRef.accumulator__DOT__accumulator[3U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.accumulator__DOT__accumulator[2U]))) 
                           >> 0x00000020U));
        }
    } else {
        vlSelfRef.accumulator__DOT__accumulator_next[0U] = 0U;
        vlSelfRef.accumulator__DOT__accumulator_next[1U] = 0U;
        if ((1U & (IData)(vlSelfRef.accumulator__DOT__word_count))) {
            vlSelfRef.accumulator__DOT__accumulator_next[2U] 
                = (IData)((((QData)((IData)(vlSelfRef.accumulator__DOT__accumulator[3U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.input_data))));
            vlSelfRef.accumulator__DOT__accumulator_next[3U] 
                = (IData)(((((QData)((IData)(vlSelfRef.accumulator__DOT__accumulator[3U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.input_data))) 
                           >> 0x00000020U));
        } else {
            vlSelfRef.accumulator__DOT__accumulator_next[2U] = 0U;
            vlSelfRef.accumulator__DOT__accumulator_next[3U] 
                = vlSelfRef.input_data;
        }
    }
}

void Vaccumulator___024root___eval_ico(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___eval_ico\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vaccumulator___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vaccumulator___024root___eval_phase__ico(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___eval_phase__ico\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vaccumulator___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vaccumulator___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vaccumulator___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaccumulator___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vaccumulator___024root___eval_triggers__act(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___eval_triggers__act\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaccumulator___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vaccumulator___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___trigger_anySet__act\n"); );
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

void Vaccumulator___024root___nba_sequent__TOP__0(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___nba_sequent__TOP__0\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__accumulator__DOT__word_count;
    __Vdly__accumulator__DOT__word_count = 0;
    // Body
    __Vdly__accumulator__DOT__word_count = vlSelfRef.accumulator__DOT__word_count;
    if (vlSelfRef.rst_n) {
        vlSelfRef.output_data[0U] = vlSelfRef.accumulator__DOT__accumulator_next[0U];
        vlSelfRef.output_data[1U] = vlSelfRef.accumulator__DOT__accumulator_next[1U];
        vlSelfRef.output_data[2U] = vlSelfRef.accumulator__DOT__accumulator_next[2U];
        vlSelfRef.output_data[3U] = vlSelfRef.accumulator__DOT__accumulator_next[3U];
        vlSelfRef.accumulator__DOT__accumulator[0U] 
            = vlSelfRef.accumulator__DOT__accumulator_next[0U];
        vlSelfRef.accumulator__DOT__accumulator[1U] 
            = vlSelfRef.accumulator__DOT__accumulator_next[1U];
        vlSelfRef.accumulator__DOT__accumulator[2U] 
            = vlSelfRef.accumulator__DOT__accumulator_next[2U];
        vlSelfRef.accumulator__DOT__accumulator[3U] 
            = vlSelfRef.accumulator__DOT__accumulator_next[3U];
        if (vlSelfRef.input_last) {
            __Vdly__accumulator__DOT__word_count = 0U;
        } else if (vlSelfRef.input_valid) {
            __Vdly__accumulator__DOT__word_count = 
                (3U & ((IData)(1U) + (IData)(vlSelfRef.accumulator__DOT__word_count)));
        }
        vlSelfRef.output_valid = (((3U == (IData)(vlSelfRef.accumulator__DOT__word_count)) 
                                   | (IData)(vlSelfRef.input_last)) 
                                  & (IData)(vlSelfRef.input_valid));
    } else {
        vlSelfRef.accumulator__DOT__accumulator[0U] = 0U;
        vlSelfRef.accumulator__DOT__accumulator[1U] = 0U;
        vlSelfRef.accumulator__DOT__accumulator[2U] = 0U;
        vlSelfRef.accumulator__DOT__accumulator[3U] = 0U;
        __Vdly__accumulator__DOT__word_count = 0U;
    }
    vlSelfRef.accumulator__DOT__word_count = __Vdly__accumulator__DOT__word_count;
    if ((2U & (IData)(vlSelfRef.accumulator__DOT__word_count))) {
        if ((1U & (IData)(vlSelfRef.accumulator__DOT__word_count))) {
            vlSelfRef.accumulator__DOT__accumulator_next[0U] 
                = vlSelfRef.input_data;
            vlSelfRef.accumulator__DOT__accumulator_next[1U] 
                = vlSelfRef.accumulator__DOT__accumulator[1U];
            vlSelfRef.accumulator__DOT__accumulator_next[2U] 
                = vlSelfRef.accumulator__DOT__accumulator[2U];
            vlSelfRef.accumulator__DOT__accumulator_next[3U] 
                = vlSelfRef.accumulator__DOT__accumulator[3U];
        } else {
            vlSelfRef.accumulator__DOT__accumulator_next[0U] = 0U;
            vlSelfRef.accumulator__DOT__accumulator_next[1U] 
                = vlSelfRef.input_data;
            vlSelfRef.accumulator__DOT__accumulator_next[2U] 
                = (IData)((((QData)((IData)(vlSelfRef.accumulator__DOT__accumulator[3U])) 
                            << 0x00000020U) | (QData)((IData)(
                                                              vlSelfRef.accumulator__DOT__accumulator[2U]))));
            vlSelfRef.accumulator__DOT__accumulator_next[3U] 
                = (IData)(((((QData)((IData)(vlSelfRef.accumulator__DOT__accumulator[3U])) 
                             << 0x00000020U) | (QData)((IData)(
                                                               vlSelfRef.accumulator__DOT__accumulator[2U]))) 
                           >> 0x00000020U));
        }
    } else {
        vlSelfRef.accumulator__DOT__accumulator_next[0U] = 0U;
        vlSelfRef.accumulator__DOT__accumulator_next[1U] = 0U;
        if ((1U & (IData)(vlSelfRef.accumulator__DOT__word_count))) {
            vlSelfRef.accumulator__DOT__accumulator_next[2U] 
                = (IData)((((QData)((IData)(vlSelfRef.accumulator__DOT__accumulator[3U])) 
                            << 0x00000020U) | (QData)((IData)(vlSelfRef.input_data))));
            vlSelfRef.accumulator__DOT__accumulator_next[3U] 
                = (IData)(((((QData)((IData)(vlSelfRef.accumulator__DOT__accumulator[3U])) 
                             << 0x00000020U) | (QData)((IData)(vlSelfRef.input_data))) 
                           >> 0x00000020U));
        } else {
            vlSelfRef.accumulator__DOT__accumulator_next[2U] = 0U;
            vlSelfRef.accumulator__DOT__accumulator_next[3U] 
                = vlSelfRef.input_data;
        }
    }
}

void Vaccumulator___024root___eval_nba(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___eval_nba\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vaccumulator___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vaccumulator___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vaccumulator___024root___eval_phase__act(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___eval_phase__act\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaccumulator___024root___eval_triggers__act(vlSelf);
    Vaccumulator___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vaccumulator___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vaccumulator___024root___eval_phase__nba(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___eval_phase__nba\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vaccumulator___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vaccumulator___024root___eval_nba(vlSelf);
        Vaccumulator___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vaccumulator___024root___eval(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___eval\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vaccumulator___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("accumulator.sv", 2, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vaccumulator___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vaccumulator___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("accumulator.sv", 2, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vaccumulator___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("accumulator.sv", 2, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vaccumulator___024root___eval_phase__act(vlSelf));
    } while (Vaccumulator___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vaccumulator___024root___eval_debug_assertions(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___eval_debug_assertions\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.input_valid & 0xfeU)))) {
        Verilated::overWidthError("input_valid");
    }
    if (VL_UNLIKELY(((vlSelfRef.input_last & 0xfeU)))) {
        Verilated::overWidthError("input_last");
    }
}
#endif  // VL_DEBUG
