// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_functions.h for the primary calling header

#include "Vaes_functions__pch.h"

VL_ATTR_COLD void Vaes_functions___024root___eval_static(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_static\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vaes_functions___024root___eval_initial__TOP(Vaes_functions___024root* vlSelf);
VL_ATTR_COLD void Vaes_functions___024root____Vm_traceActivitySetAll(Vaes_functions___024root* vlSelf);

VL_ATTR_COLD void Vaes_functions___024root___eval_initial(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_initial\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaes_functions___024root___eval_initial__TOP(vlSelf);
    Vaes_functions___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vaes_functions___024root___eval_initial__TOP(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_initial__TOP\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes__DOT__rcon[0U] = 1U;
}

VL_ATTR_COLD void Vaes_functions___024root___eval_final(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_final\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_functions___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vaes_functions___024root___eval_phase__stl(Vaes_functions___024root* vlSelf);

VL_ATTR_COLD void Vaes_functions___024root___eval_settle(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_settle\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vaes_functions___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("aes.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vaes_functions___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vaes_functions___024root___eval_triggers__stl(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_triggers__stl\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaes_functions___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vaes_functions___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_functions___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vaes_functions___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vaes_functions___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___trigger_anySet__stl\n"); );
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

void Vaes_functions___024root___ico_sequent__TOP__0(Vaes_functions___024root* vlSelf);

VL_ATTR_COLD void Vaes_functions___024root___eval_stl(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_stl\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vaes_functions___024root___ico_sequent__TOP__0(vlSelf);
        Vaes_functions___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vaes_functions___024root___eval_phase__stl(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_phase__stl\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vaes_functions___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vaes_functions___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vaes_functions___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vaes_functions___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_functions___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vaes_functions___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vaes_functions___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_functions___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vaes_functions___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaes_functions___024root____Vm_traceActivitySetAll(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root____Vm_traceActivitySetAll\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vaes_functions___024root___ctor_var_reset(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___ctor_var_reset\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->plaintext, __VscopeHash, 15306753485699558102ull);
    vlSelf->plaintext_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2861992560174440683ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->key, __VscopeHash, 14066609003741847747ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->ciphertext, __VscopeHash, 5156948722554576173ull);
    vlSelf->ciphertext_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11314963986031673540ull);
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        VL_SCOPED_RAND_RESET_W(128, vlSelf->aes__DOT__round_keys[__Vi0], __VscopeHash, 3239556025904093547ull);
    }
    for (int __Vi0 = 0; __Vi0 < 11; ++__Vi0) {
        vlSelf->aes__DOT__rcon[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9594150471247082958ull);
    }
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
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
