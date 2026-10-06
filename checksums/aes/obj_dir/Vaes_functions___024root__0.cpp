// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_functions.h for the primary calling header

#include "Vaes_functions__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_functions___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vaes_functions___024root___eval_triggers__ico(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_triggers__ico\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaes_functions___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vaes_functions___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___trigger_anySet__ico\n"); );
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

void Vaes_functions___024root___ico_sequent__TOP__0(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___ico_sequent__TOP__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.aes__DOT__round_keys[0U][0U] = vlSelfRef.key[0U];
    vlSelfRef.aes__DOT__round_keys[0U][1U] = vlSelfRef.key[1U];
    vlSelfRef.aes__DOT__round_keys[0U][2U] = vlSelfRef.key[2U];
    vlSelfRef.aes__DOT__round_keys[0U][3U] = vlSelfRef.key[3U];
    vlSelfRef.ciphertext_valid = vlSelfRef.plaintext_valid;
    vlSelfRef.ciphertext[0U] = (vlSelfRef.key[0U] ^ 
                                vlSelfRef.plaintext[0U]);
    vlSelfRef.ciphertext[1U] = (vlSelfRef.key[1U] ^ 
                                vlSelfRef.plaintext[1U]);
    vlSelfRef.ciphertext[2U] = (vlSelfRef.key[2U] ^ 
                                vlSelfRef.plaintext[2U]);
    vlSelfRef.ciphertext[3U] = (vlSelfRef.key[3U] ^ 
                                vlSelfRef.plaintext[3U]);
}

void Vaes_functions___024root___eval_ico(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_ico\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vaes_functions___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

bool Vaes_functions___024root___eval_phase__ico(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_phase__ico\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vaes_functions___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vaes_functions___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vaes_functions___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_functions___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vaes_functions___024root___eval_triggers__act(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_triggers__act\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaes_functions___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vaes_functions___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___trigger_anySet__act\n"); );
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

void Vaes_functions___024root___nba_sequent__TOP__0(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___nba_sequent__TOP__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vfunc_xtime__0__Vfuncout;
    __Vfunc_xtime__0__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_xtime__0__a;
    __Vfunc_xtime__0__a = 0;
    CData/*7:0*/ __Vfunc_xtime__0__result;
    __Vfunc_xtime__0__result = 0;
    CData/*7:0*/ __Vfunc_xtime__1__Vfuncout;
    __Vfunc_xtime__1__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_xtime__1__a;
    __Vfunc_xtime__1__a = 0;
    CData/*7:0*/ __Vfunc_xtime__1__result;
    __Vfunc_xtime__1__result = 0;
    CData/*7:0*/ __Vfunc_xtime__2__Vfuncout;
    __Vfunc_xtime__2__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_xtime__2__a;
    __Vfunc_xtime__2__a = 0;
    CData/*7:0*/ __Vfunc_xtime__2__result;
    __Vfunc_xtime__2__result = 0;
    CData/*7:0*/ __Vfunc_xtime__3__Vfuncout;
    __Vfunc_xtime__3__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_xtime__3__a;
    __Vfunc_xtime__3__a = 0;
    CData/*7:0*/ __Vfunc_xtime__3__result;
    __Vfunc_xtime__3__result = 0;
    CData/*7:0*/ __Vfunc_xtime__4__Vfuncout;
    __Vfunc_xtime__4__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_xtime__4__a;
    __Vfunc_xtime__4__a = 0;
    CData/*7:0*/ __Vfunc_xtime__4__result;
    __Vfunc_xtime__4__result = 0;
    CData/*7:0*/ __Vfunc_xtime__5__Vfuncout;
    __Vfunc_xtime__5__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_xtime__5__a;
    __Vfunc_xtime__5__a = 0;
    CData/*7:0*/ __Vfunc_xtime__5__result;
    __Vfunc_xtime__5__result = 0;
    CData/*7:0*/ __Vfunc_xtime__6__Vfuncout;
    __Vfunc_xtime__6__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_xtime__6__a;
    __Vfunc_xtime__6__a = 0;
    CData/*7:0*/ __Vfunc_xtime__6__result;
    __Vfunc_xtime__6__result = 0;
    CData/*7:0*/ __Vfunc_xtime__7__Vfuncout;
    __Vfunc_xtime__7__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_xtime__7__a;
    __Vfunc_xtime__7__a = 0;
    CData/*7:0*/ __Vfunc_xtime__7__result;
    __Vfunc_xtime__7__result = 0;
    CData/*7:0*/ __Vfunc_xtime__8__Vfuncout;
    __Vfunc_xtime__8__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_xtime__8__a;
    __Vfunc_xtime__8__a = 0;
    CData/*7:0*/ __Vfunc_xtime__8__result;
    __Vfunc_xtime__8__result = 0;
    CData/*7:0*/ __Vfunc_xtime__9__Vfuncout;
    __Vfunc_xtime__9__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_xtime__9__a;
    __Vfunc_xtime__9__a = 0;
    CData/*7:0*/ __Vfunc_xtime__9__result;
    __Vfunc_xtime__9__result = 0;
    // Body
    __Vfunc_xtime__0__a = vlSelfRef.aes__DOT__rcon[0U];
    __Vfunc_xtime__0__result = (0x000000ffU & ((0x00000080U 
                                                & (IData)(__Vfunc_xtime__0__a))
                                                ? (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__0__a), 1U))
                                                : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__0__a), 1U)));
    __Vfunc_xtime__0__Vfuncout = __Vfunc_xtime__0__result;
    vlSelfRef.aes__DOT__rcon[1U] = __Vfunc_xtime__0__Vfuncout;
    __Vfunc_xtime__1__a = vlSelfRef.aes__DOT__rcon[1U];
    __Vfunc_xtime__1__result = (0x000000ffU & ((0x00000080U 
                                                & (IData)(__Vfunc_xtime__1__a))
                                                ? (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__1__a), 1U))
                                                : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__1__a), 1U)));
    __Vfunc_xtime__1__Vfuncout = __Vfunc_xtime__1__result;
    vlSelfRef.aes__DOT__rcon[2U] = __Vfunc_xtime__1__Vfuncout;
    __Vfunc_xtime__2__a = vlSelfRef.aes__DOT__rcon[2U];
    __Vfunc_xtime__2__result = (0x000000ffU & ((0x00000080U 
                                                & (IData)(__Vfunc_xtime__2__a))
                                                ? (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__2__a), 1U))
                                                : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__2__a), 1U)));
    __Vfunc_xtime__2__Vfuncout = __Vfunc_xtime__2__result;
    vlSelfRef.aes__DOT__rcon[3U] = __Vfunc_xtime__2__Vfuncout;
    __Vfunc_xtime__3__a = vlSelfRef.aes__DOT__rcon[3U];
    __Vfunc_xtime__3__result = (0x000000ffU & ((0x00000080U 
                                                & (IData)(__Vfunc_xtime__3__a))
                                                ? (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__3__a), 1U))
                                                : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__3__a), 1U)));
    __Vfunc_xtime__3__Vfuncout = __Vfunc_xtime__3__result;
    vlSelfRef.aes__DOT__rcon[4U] = __Vfunc_xtime__3__Vfuncout;
    __Vfunc_xtime__4__a = vlSelfRef.aes__DOT__rcon[4U];
    __Vfunc_xtime__4__result = (0x000000ffU & ((0x00000080U 
                                                & (IData)(__Vfunc_xtime__4__a))
                                                ? (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__4__a), 1U))
                                                : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__4__a), 1U)));
    __Vfunc_xtime__4__Vfuncout = __Vfunc_xtime__4__result;
    vlSelfRef.aes__DOT__rcon[5U] = __Vfunc_xtime__4__Vfuncout;
    __Vfunc_xtime__5__a = vlSelfRef.aes__DOT__rcon[5U];
    __Vfunc_xtime__5__result = (0x000000ffU & ((0x00000080U 
                                                & (IData)(__Vfunc_xtime__5__a))
                                                ? (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__5__a), 1U))
                                                : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__5__a), 1U)));
    __Vfunc_xtime__5__Vfuncout = __Vfunc_xtime__5__result;
    vlSelfRef.aes__DOT__rcon[6U] = __Vfunc_xtime__5__Vfuncout;
    __Vfunc_xtime__6__a = vlSelfRef.aes__DOT__rcon[6U];
    __Vfunc_xtime__6__result = (0x000000ffU & ((0x00000080U 
                                                & (IData)(__Vfunc_xtime__6__a))
                                                ? (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__6__a), 1U))
                                                : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__6__a), 1U)));
    __Vfunc_xtime__6__Vfuncout = __Vfunc_xtime__6__result;
    vlSelfRef.aes__DOT__rcon[7U] = __Vfunc_xtime__6__Vfuncout;
    __Vfunc_xtime__7__a = vlSelfRef.aes__DOT__rcon[7U];
    __Vfunc_xtime__7__result = (0x000000ffU & ((0x00000080U 
                                                & (IData)(__Vfunc_xtime__7__a))
                                                ? (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__7__a), 1U))
                                                : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__7__a), 1U)));
    __Vfunc_xtime__7__Vfuncout = __Vfunc_xtime__7__result;
    vlSelfRef.aes__DOT__rcon[8U] = __Vfunc_xtime__7__Vfuncout;
    __Vfunc_xtime__8__a = vlSelfRef.aes__DOT__rcon[8U];
    __Vfunc_xtime__8__result = (0x000000ffU & ((0x00000080U 
                                                & (IData)(__Vfunc_xtime__8__a))
                                                ? (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__8__a), 1U))
                                                : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__8__a), 1U)));
    __Vfunc_xtime__8__Vfuncout = __Vfunc_xtime__8__result;
    vlSelfRef.aes__DOT__rcon[9U] = __Vfunc_xtime__8__Vfuncout;
    __Vfunc_xtime__9__a = vlSelfRef.aes__DOT__rcon[9U];
    __Vfunc_xtime__9__result = (0x000000ffU & ((0x00000080U 
                                                & (IData)(__Vfunc_xtime__9__a))
                                                ? (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__9__a), 1U))
                                                : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__9__a), 1U)));
    __Vfunc_xtime__9__Vfuncout = __Vfunc_xtime__9__result;
    vlSelfRef.aes__DOT__rcon[0x0aU] = __Vfunc_xtime__9__Vfuncout;
}

void Vaes_functions___024root___eval_nba(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_nba\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vaes_functions___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vaes_functions___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vaes_functions___024root___eval_phase__act(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_phase__act\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaes_functions___024root___eval_triggers__act(vlSelf);
    Vaes_functions___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vaes_functions___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vaes_functions___024root___eval_phase__nba(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_phase__nba\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vaes_functions___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vaes_functions___024root___eval_nba(vlSelf);
        Vaes_functions___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vaes_functions___024root___eval(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vaes_functions___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("aes.sv", 3, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vaes_functions___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vaes_functions___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("aes.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vaes_functions___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("aes.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vaes_functions___024root___eval_phase__act(vlSelf));
    } while (Vaes_functions___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vaes_functions___024root___eval_debug_assertions(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_debug_assertions\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.plaintext_valid & 0xfeU)))) {
        Verilated::overWidthError("plaintext_valid");
    }
}
#endif  // VL_DEBUG
