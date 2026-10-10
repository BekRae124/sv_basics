// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes.h for the primary calling header

#include "Vaes__pch.h"

VL_ATTR_COLD void Vaes___024root___eval_static(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___eval_static\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vaes___024root___eval_initial(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___eval_initial\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vaes___024root___eval_final(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___eval_final\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vaes___024root___eval_phase__stl(Vaes___024root* vlSelf);

VL_ATTR_COLD void Vaes___024root___eval_settle(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___eval_settle\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vaes___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("aes.sv", 3, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vaes___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vaes___024root___eval_triggers__stl(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___eval_triggers__stl\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaes___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vaes___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vaes___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vaes___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vaes___024root___stl_sequent__TOP__0(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___stl_sequent__TOP__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vfunc_xtime__0__Vfuncout;
    __Vfunc_xtime__0__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_xtime__0__a;
    __Vfunc_xtime__0__a = 0;
    CData/*7:0*/ __Vfunc_xtime__0__result;
    __Vfunc_xtime__0__result = 0;
    // Body
    vlSelfRef.ciphertext_valid = (0x0aU == (IData)(vlSelfRef.aes__DOT__round_num));
    vlSelfRef.aes__DOT__kg__DOT__words_in[0U] = vlSelfRef.aes__DOT__round_key_current[3U];
    vlSelfRef.aes__DOT__kg__DOT__words_in[1U] = vlSelfRef.aes__DOT__round_key_current[2U];
    vlSelfRef.aes__DOT__kg__DOT__words_in[2U] = vlSelfRef.aes__DOT__round_key_current[1U];
    vlSelfRef.aes__DOT__kg__DOT__words_in[3U] = vlSelfRef.aes__DOT__round_key_current[0U];
    __Vfunc_xtime__0__a = vlSelfRef.aes__DOT__rcon_current;
    __Vfunc_xtime__0__result = (0x000000ffU & ((0x00000080U 
                                                & (IData)(__Vfunc_xtime__0__a))
                                                ? (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__0__a), 1U))
                                                : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__0__a), 1U)));
    __Vfunc_xtime__0__Vfuncout = __Vfunc_xtime__0__result;
    vlSelfRef.aes__DOT__rcon_next = __Vfunc_xtime__0__Vfuncout;
}

VL_ATTR_COLD void Vaes___024root____Vm_traceActivitySetAll(Vaes___024root* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__kg__DOT__sbox_0__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__kg__DOT__sbox_1__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__kg__DOT__sbox_2__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__kg__DOT__sbox_3__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(Vaes_sbox* vlSelf);
void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(Vaes_sbox* vlSelf);
void Vaes___024root___nba_sequent__TOP__1(Vaes___024root* vlSelf);

VL_ATTR_COLD void Vaes___024root___eval_stl(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___eval_stl\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vaes___024root___stl_sequent__TOP__0(vlSelf);
        Vaes___024root____Vm_traceActivitySetAll(vlSelf);
        Vaes_sbox___nba_sequent__TOP__aes__DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD bool Vaes___024root___eval_phase__stl(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___eval_phase__stl\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vaes___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vaes___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vaes___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vaes___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vaes___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaes___024root____Vm_traceActivitySetAll(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root____Vm_traceActivitySetAll\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vaes___024root___ctor_var_reset(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___ctor_var_reset\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    VL_SCOPED_RAND_RESET_W(128, vlSelf->aes__DOT__round_key_current, __VscopeHash, 13498900925326745646ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->aes__DOT__state_current, __VscopeHash, 3085242830874464159ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->aes__DOT__state_next, __VscopeHash, 11043717699923752117ull);
    vlSelf->aes__DOT__rcon_current = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4576750438378420037ull);
    vlSelf->aes__DOT__rcon_next = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13475879021038595421ull);
    vlSelf->aes__DOT__round_num = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10154285937066923528ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->aes__DOT__shift_rows_out, __VscopeHash, 15790148019971941906ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->aes__DOT__mix_columns_out, __VscopeHash, 14610132266006625430ull);
    VL_SCOPED_RAND_RESET_W(128, vlSelf->aes__DOT__kg__DOT__round_key, __VscopeHash, 8831472148883728305ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->aes__DOT__kg__DOT__words_in[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8254683349491762681ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->aes__DOT__kg__DOT__words_out[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13064367676724993362ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->aes__DOT__kg__DOT__sbox_out[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11820701636171024753ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vfunc_shift_matrix__1__b[__Vi0] = 0;
    }
    vlSelf->__Vfunc_xtime__4__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__4__a = 0;
    vlSelf->__Vfunc_xtime__4__result = 0;
    vlSelf->__Vfunc_xtime__5__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__5__a = 0;
    vlSelf->__Vfunc_xtime__5__result = 0;
    vlSelf->__Vfunc_xtime__6__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__6__a = 0;
    vlSelf->__Vfunc_xtime__6__result = 0;
    vlSelf->__Vfunc_xtime__7__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__7__a = 0;
    vlSelf->__Vfunc_xtime__7__result = 0;
    vlSelf->__Vfunc_xtime__8__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__8__a = 0;
    vlSelf->__Vfunc_xtime__8__result = 0;
    vlSelf->__Vfunc_xtime__9__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__9__a = 0;
    vlSelf->__Vfunc_xtime__9__result = 0;
    vlSelf->__Vfunc_xtime__10__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__10__a = 0;
    vlSelf->__Vfunc_xtime__10__result = 0;
    vlSelf->__Vfunc_xtime__11__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__11__a = 0;
    vlSelf->__Vfunc_xtime__11__result = 0;
    vlSelf->__Vfunc_xtime__13__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__13__a = 0;
    vlSelf->__Vfunc_xtime__13__result = 0;
    vlSelf->__Vfunc_xtime__14__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__14__a = 0;
    vlSelf->__Vfunc_xtime__14__result = 0;
    vlSelf->__Vfunc_xtime__15__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__15__a = 0;
    vlSelf->__Vfunc_xtime__15__result = 0;
    vlSelf->__Vfunc_xtime__16__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__16__a = 0;
    vlSelf->__Vfunc_xtime__16__result = 0;
    vlSelf->__Vfunc_xtime__17__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__17__a = 0;
    vlSelf->__Vfunc_xtime__17__result = 0;
    vlSelf->__Vfunc_xtime__18__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__18__a = 0;
    vlSelf->__Vfunc_xtime__18__result = 0;
    vlSelf->__Vfunc_xtime__19__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__19__a = 0;
    vlSelf->__Vfunc_xtime__19__result = 0;
    vlSelf->__Vfunc_xtime__20__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__20__a = 0;
    vlSelf->__Vfunc_xtime__20__result = 0;
    vlSelf->__Vfunc_xtime__22__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__22__a = 0;
    vlSelf->__Vfunc_xtime__22__result = 0;
    vlSelf->__Vfunc_xtime__23__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__23__a = 0;
    vlSelf->__Vfunc_xtime__23__result = 0;
    vlSelf->__Vfunc_xtime__24__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__24__a = 0;
    vlSelf->__Vfunc_xtime__24__result = 0;
    vlSelf->__Vfunc_xtime__25__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__25__a = 0;
    vlSelf->__Vfunc_xtime__25__result = 0;
    vlSelf->__Vfunc_xtime__26__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__26__a = 0;
    vlSelf->__Vfunc_xtime__26__result = 0;
    vlSelf->__Vfunc_xtime__27__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__27__a = 0;
    vlSelf->__Vfunc_xtime__27__result = 0;
    vlSelf->__Vfunc_xtime__28__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__28__a = 0;
    vlSelf->__Vfunc_xtime__28__result = 0;
    vlSelf->__Vfunc_xtime__29__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__29__a = 0;
    vlSelf->__Vfunc_xtime__29__result = 0;
    vlSelf->__Vfunc_xtime__31__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__31__a = 0;
    vlSelf->__Vfunc_xtime__31__result = 0;
    vlSelf->__Vfunc_xtime__32__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__32__a = 0;
    vlSelf->__Vfunc_xtime__32__result = 0;
    vlSelf->__Vfunc_xtime__33__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__33__a = 0;
    vlSelf->__Vfunc_xtime__33__result = 0;
    vlSelf->__Vfunc_xtime__34__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__34__a = 0;
    vlSelf->__Vfunc_xtime__34__result = 0;
    vlSelf->__Vfunc_xtime__35__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__35__a = 0;
    vlSelf->__Vfunc_xtime__35__result = 0;
    vlSelf->__Vfunc_xtime__36__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__36__a = 0;
    vlSelf->__Vfunc_xtime__36__result = 0;
    vlSelf->__Vfunc_xtime__37__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__37__a = 0;
    vlSelf->__Vfunc_xtime__37__result = 0;
    vlSelf->__Vfunc_xtime__38__Vfuncout = 0;
    vlSelf->__Vfunc_xtime__38__a = 0;
    vlSelf->__Vfunc_xtime__38__result = 0;
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
