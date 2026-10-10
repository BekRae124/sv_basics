// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaccumulator.h for the primary calling header

#include "Vaccumulator__pch.h"

VL_ATTR_COLD void Vaccumulator___024root___eval_static(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___eval_static\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vaccumulator___024root___eval_initial(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___eval_initial\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vaccumulator___024root___eval_final(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___eval_final\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaccumulator___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vaccumulator___024root___eval_phase__stl(Vaccumulator___024root* vlSelf);

VL_ATTR_COLD void Vaccumulator___024root___eval_settle(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___eval_settle\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vaccumulator___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("accumulator.sv", 2, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vaccumulator___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vaccumulator___024root___eval_triggers__stl(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___eval_triggers__stl\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaccumulator___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vaccumulator___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaccumulator___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vaccumulator___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vaccumulator___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___trigger_anySet__stl\n"); );
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

void Vaccumulator___024root___ico_sequent__TOP__0(Vaccumulator___024root* vlSelf);

VL_ATTR_COLD void Vaccumulator___024root___eval_stl(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___eval_stl\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vaccumulator___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vaccumulator___024root___eval_phase__stl(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___eval_phase__stl\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vaccumulator___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vaccumulator___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vaccumulator___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vaccumulator___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaccumulator___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vaccumulator___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vaccumulator___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaccumulator___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vaccumulator___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaccumulator___024root___ctor_var_reset(Vaccumulator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccumulator___024root___ctor_var_reset\n"); );
    Vaccumulator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->input_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1923588759227995539ull);
    vlSelf->input_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4270309033785105452ull);
    vlSelf->input_last = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5054767025876770336ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->output_data, __VscopeHash, 7032170951333504304ull);
    vlSelf->output_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14078276386344907199ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->accumulator__DOT__accumulator, __VscopeHash, 4316735942799642486ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->accumulator__DOT__accumulator_next, __VscopeHash, 10937438791396112482ull);
    vlSelf->accumulator__DOT__word_count = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5426383865208749638ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
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
