// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes.h for the primary calling header

#include "Vaes__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vaes___024root___eval_triggers__act(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___eval_triggers__act\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaes___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vaes___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___trigger_anySet__act\n"); );
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

void Vaes___024root___nba_sequent__TOP__0(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___nba_sequent__TOP__0\n"); );
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
    if ((1U & ((~ (IData)(vlSelfRef.rst_n)) | (IData)(vlSelfRef.plaintext_valid)))) {
        vlSelfRef.aes__DOT__round_num = 1U;
        vlSelfRef.aes__DOT__rcon_current = 1U;
        vlSelfRef.aes__DOT__round_key_current[0U] = 
            vlSelfRef.key[0U];
        vlSelfRef.aes__DOT__round_key_current[1U] = 
            vlSelfRef.key[1U];
        vlSelfRef.aes__DOT__round_key_current[2U] = 
            vlSelfRef.key[2U];
        vlSelfRef.aes__DOT__round_key_current[3U] = 
            vlSelfRef.key[3U];
        vlSelfRef.aes__DOT__state_current[0U] = (vlSelfRef.plaintext[0U] 
                                                 ^ 
                                                 vlSelfRef.key[0U]);
        vlSelfRef.aes__DOT__state_current[1U] = (vlSelfRef.plaintext[1U] 
                                                 ^ 
                                                 vlSelfRef.key[1U]);
        vlSelfRef.aes__DOT__state_current[2U] = (vlSelfRef.plaintext[2U] 
                                                 ^ 
                                                 vlSelfRef.key[2U]);
        vlSelfRef.aes__DOT__state_current[3U] = (vlSelfRef.plaintext[3U] 
                                                 ^ 
                                                 vlSelfRef.key[3U]);
    } else {
        vlSelfRef.aes__DOT__round_num = (0x0000000fU 
                                         & ((IData)(1U) 
                                            + (IData)(vlSelfRef.aes__DOT__round_num)));
        vlSelfRef.aes__DOT__rcon_current = vlSelfRef.aes__DOT__rcon_next;
        vlSelfRef.aes__DOT__round_key_current[0U] = 
            vlSelfRef.aes__DOT__kg__DOT__round_key[0U];
        vlSelfRef.aes__DOT__round_key_current[1U] = 
            vlSelfRef.aes__DOT__kg__DOT__round_key[1U];
        vlSelfRef.aes__DOT__round_key_current[2U] = 
            vlSelfRef.aes__DOT__kg__DOT__round_key[2U];
        vlSelfRef.aes__DOT__round_key_current[3U] = 
            vlSelfRef.aes__DOT__kg__DOT__round_key[3U];
        vlSelfRef.aes__DOT__state_current[0U] = vlSelfRef.aes__DOT__state_next[0U];
        vlSelfRef.aes__DOT__state_current[1U] = vlSelfRef.aes__DOT__state_next[1U];
        vlSelfRef.aes__DOT__state_current[2U] = vlSelfRef.aes__DOT__state_next[2U];
        vlSelfRef.aes__DOT__state_current[3U] = vlSelfRef.aes__DOT__state_next[3U];
    }
    vlSelfRef.ciphertext_valid = (0x0aU == (IData)(vlSelfRef.aes__DOT__round_num));
    __Vfunc_xtime__0__a = vlSelfRef.aes__DOT__rcon_current;
    __Vfunc_xtime__0__result = (0x000000ffU & ((0x00000080U 
                                                & (IData)(__Vfunc_xtime__0__a))
                                                ? (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__0__a), 1U))
                                                : VL_SHIFTL_III(8,8,32, (IData)(__Vfunc_xtime__0__a), 1U)));
    __Vfunc_xtime__0__Vfuncout = __Vfunc_xtime__0__result;
    vlSelfRef.aes__DOT__rcon_next = __Vfunc_xtime__0__Vfuncout;
    vlSelfRef.aes__DOT__kg__DOT__words_in[0U] = vlSelfRef.aes__DOT__round_key_current[3U];
    vlSelfRef.aes__DOT__kg__DOT__words_in[1U] = vlSelfRef.aes__DOT__round_key_current[2U];
    vlSelfRef.aes__DOT__kg__DOT__words_in[2U] = vlSelfRef.aes__DOT__round_key_current[1U];
    vlSelfRef.aes__DOT__kg__DOT__words_in[3U] = vlSelfRef.aes__DOT__round_key_current[0U];
}

void Vaes___024root___nba_sequent__TOP__1(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___nba_sequent__TOP__1\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_0;
    aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_0 = 0;
    IData/*31:0*/ aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_1;
    aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_1 = 0;
    IData/*31:0*/ aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_2 = 0;
    IData/*31:0*/ aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 = 0;
    VlWide<4>/*127:0*/ __Vfunc_shift_matrix__1__Vfuncout;
    VL_ZERO_W(128, __Vfunc_shift_matrix__1__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_shift_matrix__1__s;
    VL_ZERO_W(128, __Vfunc_shift_matrix__1__s);
    VlWide<4>/*127:0*/ __Vfunc_mix_matrix__2__Vfuncout;
    VL_ZERO_W(128, __Vfunc_mix_matrix__2__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_mix_matrix__2__in;
    VL_ZERO_W(128, __Vfunc_mix_matrix__2__in);
    IData/*31:0*/ __Vfunc_mix_matrix__2__col0;
    __Vfunc_mix_matrix__2__col0 = 0;
    IData/*31:0*/ __Vfunc_mix_matrix__2__col1;
    __Vfunc_mix_matrix__2__col1 = 0;
    IData/*31:0*/ __Vfunc_mix_matrix__2__col2;
    __Vfunc_mix_matrix__2__col2 = 0;
    IData/*31:0*/ __Vfunc_mix_matrix__2__col3;
    __Vfunc_mix_matrix__2__col3 = 0;
    IData/*31:0*/ __Vfunc_mix_matrix__2__mixed_col0;
    __Vfunc_mix_matrix__2__mixed_col0 = 0;
    IData/*31:0*/ __Vfunc_mix_matrix__2__mixed_col1;
    __Vfunc_mix_matrix__2__mixed_col1 = 0;
    IData/*31:0*/ __Vfunc_mix_matrix__2__mixed_col2;
    __Vfunc_mix_matrix__2__mixed_col2 = 0;
    IData/*31:0*/ __Vfunc_mix_matrix__2__mixed_col3;
    __Vfunc_mix_matrix__2__mixed_col3 = 0;
    IData/*31:0*/ __Vfunc_mix_column__3__Vfuncout;
    __Vfunc_mix_column__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_mix_column__3__col;
    __Vfunc_mix_column__3__col = 0;
    CData/*7:0*/ __Vfunc_mix_column__3__s0;
    __Vfunc_mix_column__3__s0 = 0;
    CData/*7:0*/ __Vfunc_mix_column__3__s1;
    __Vfunc_mix_column__3__s1 = 0;
    CData/*7:0*/ __Vfunc_mix_column__3__s2;
    __Vfunc_mix_column__3__s2 = 0;
    CData/*7:0*/ __Vfunc_mix_column__3__s3;
    __Vfunc_mix_column__3__s3 = 0;
    CData/*7:0*/ __Vfunc_mix_column__3__s0_out;
    __Vfunc_mix_column__3__s0_out = 0;
    CData/*7:0*/ __Vfunc_mix_column__3__s1_out;
    __Vfunc_mix_column__3__s1_out = 0;
    CData/*7:0*/ __Vfunc_mix_column__3__s2_out;
    __Vfunc_mix_column__3__s2_out = 0;
    CData/*7:0*/ __Vfunc_mix_column__3__s3_out;
    __Vfunc_mix_column__3__s3_out = 0;
    IData/*31:0*/ __Vfunc_mix_column__12__Vfuncout;
    __Vfunc_mix_column__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_mix_column__12__col;
    __Vfunc_mix_column__12__col = 0;
    CData/*7:0*/ __Vfunc_mix_column__12__s0;
    __Vfunc_mix_column__12__s0 = 0;
    CData/*7:0*/ __Vfunc_mix_column__12__s1;
    __Vfunc_mix_column__12__s1 = 0;
    CData/*7:0*/ __Vfunc_mix_column__12__s2;
    __Vfunc_mix_column__12__s2 = 0;
    CData/*7:0*/ __Vfunc_mix_column__12__s3;
    __Vfunc_mix_column__12__s3 = 0;
    CData/*7:0*/ __Vfunc_mix_column__12__s0_out;
    __Vfunc_mix_column__12__s0_out = 0;
    CData/*7:0*/ __Vfunc_mix_column__12__s1_out;
    __Vfunc_mix_column__12__s1_out = 0;
    CData/*7:0*/ __Vfunc_mix_column__12__s2_out;
    __Vfunc_mix_column__12__s2_out = 0;
    CData/*7:0*/ __Vfunc_mix_column__12__s3_out;
    __Vfunc_mix_column__12__s3_out = 0;
    IData/*31:0*/ __Vfunc_mix_column__21__Vfuncout;
    __Vfunc_mix_column__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_mix_column__21__col;
    __Vfunc_mix_column__21__col = 0;
    CData/*7:0*/ __Vfunc_mix_column__21__s0;
    __Vfunc_mix_column__21__s0 = 0;
    CData/*7:0*/ __Vfunc_mix_column__21__s1;
    __Vfunc_mix_column__21__s1 = 0;
    CData/*7:0*/ __Vfunc_mix_column__21__s2;
    __Vfunc_mix_column__21__s2 = 0;
    CData/*7:0*/ __Vfunc_mix_column__21__s3;
    __Vfunc_mix_column__21__s3 = 0;
    CData/*7:0*/ __Vfunc_mix_column__21__s0_out;
    __Vfunc_mix_column__21__s0_out = 0;
    CData/*7:0*/ __Vfunc_mix_column__21__s1_out;
    __Vfunc_mix_column__21__s1_out = 0;
    CData/*7:0*/ __Vfunc_mix_column__21__s2_out;
    __Vfunc_mix_column__21__s2_out = 0;
    CData/*7:0*/ __Vfunc_mix_column__21__s3_out;
    __Vfunc_mix_column__21__s3_out = 0;
    IData/*31:0*/ __Vfunc_mix_column__30__Vfuncout;
    __Vfunc_mix_column__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_mix_column__30__col;
    __Vfunc_mix_column__30__col = 0;
    CData/*7:0*/ __Vfunc_mix_column__30__s0;
    __Vfunc_mix_column__30__s0 = 0;
    CData/*7:0*/ __Vfunc_mix_column__30__s1;
    __Vfunc_mix_column__30__s1 = 0;
    CData/*7:0*/ __Vfunc_mix_column__30__s2;
    __Vfunc_mix_column__30__s2 = 0;
    CData/*7:0*/ __Vfunc_mix_column__30__s3;
    __Vfunc_mix_column__30__s3 = 0;
    CData/*7:0*/ __Vfunc_mix_column__30__s0_out;
    __Vfunc_mix_column__30__s0_out = 0;
    CData/*7:0*/ __Vfunc_mix_column__30__s1_out;
    __Vfunc_mix_column__30__s1_out = 0;
    CData/*7:0*/ __Vfunc_mix_column__30__s2_out;
    __Vfunc_mix_column__30__s2_out = 0;
    CData/*7:0*/ __Vfunc_mix_column__30__s3_out;
    __Vfunc_mix_column__30__s3_out = 0;
    // Body
    vlSelfRef.aes__DOT__kg__DOT__sbox_out[0U] = vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.out;
    vlSelfRef.aes__DOT__kg__DOT__sbox_out[1U] = vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.out;
    vlSelfRef.aes__DOT__kg__DOT__sbox_out[2U] = vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.out;
    vlSelfRef.aes__DOT__kg__DOT__sbox_out[3U] = vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.out;
    aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_0 
        = (vlSelfRef.aes__DOT__round_key_current[3U] 
           ^ (((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.out) 
                 << 0x00000018U) | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.out) 
                                    << 0x00000010U)) 
               | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.out) 
                   << 8U) | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.out))) 
              ^ ((IData)(vlSelfRef.aes__DOT__rcon_current) 
                 << 0x00000018U)));
    __Vfunc_shift_matrix__1__s[0U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                             << 3U) 
                                            | (4U ^ 
                                               (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                << 2U))) 
                                           | ((2U ^ 
                                               (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                << 1U)) 
                                              | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                          << 0x0000000cU) 
                                         | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                 << 2U)) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                  << 1U)) 
                                                | (1U 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                            << 8U)) 
                                        | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 4U) 
                                           | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                       << 0x00000010U) 
                                      | ((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    __Vfunc_shift_matrix__1__s[1U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                             << 3U) 
                                            | (4U ^ 
                                               (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                << 2U))) 
                                           | ((2U ^ 
                                               (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                << 1U)) 
                                              | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                          << 0x0000000cU) 
                                         | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                 << 2U)) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                  << 1U)) 
                                                | (1U 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                            << 8U)) 
                                        | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 4U) 
                                           | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                       << 0x00000010U) 
                                      | ((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    __Vfunc_shift_matrix__1__s[2U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                             << 3U) 
                                            | (4U ^ 
                                               (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                << 2U))) 
                                           | ((2U ^ 
                                               (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                << 1U)) 
                                              | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                          << 0x0000000cU) 
                                         | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                 << 2U)) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                  << 1U)) 
                                                | (1U 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                            << 8U)) 
                                        | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 4U) 
                                           | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                       << 0x00000010U) 
                                      | ((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    __Vfunc_shift_matrix__1__s[3U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                              ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                             << 3U) 
                                            | (4U ^ 
                                               (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                << 2U))) 
                                           | ((2U ^ 
                                               (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                << 1U)) 
                                              | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                          << 0x0000000cU) 
                                         | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                 << 2U)) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                  << 1U)) 
                                                | (1U 
                                                   ^ 
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                            << 8U)) 
                                        | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 4U) 
                                           | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                       << 0x00000010U) 
                                      | ((((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vfunc_shift_matrix__1__b[__Vi0] = 0;
    }
    vlSelfRef.__Vfunc_shift_matrix__1__b[0U] = (__Vfunc_shift_matrix__1__s[3U] 
                                                >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__1__b[1U] = (0x000000ffU 
                                                & (__Vfunc_shift_matrix__1__s[3U] 
                                                   >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__1__b[2U] = (0x000000ffU 
                                                & (__Vfunc_shift_matrix__1__s[3U] 
                                                   >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__1__b[3U] = (0x000000ffU 
                                                & __Vfunc_shift_matrix__1__s[3U]);
    vlSelfRef.__Vfunc_shift_matrix__1__b[4U] = (__Vfunc_shift_matrix__1__s[2U] 
                                                >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__1__b[5U] = (0x000000ffU 
                                                & (__Vfunc_shift_matrix__1__s[2U] 
                                                   >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__1__b[6U] = (0x000000ffU 
                                                & (__Vfunc_shift_matrix__1__s[2U] 
                                                   >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__1__b[7U] = (0x000000ffU 
                                                & __Vfunc_shift_matrix__1__s[2U]);
    vlSelfRef.__Vfunc_shift_matrix__1__b[8U] = (__Vfunc_shift_matrix__1__s[1U] 
                                                >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__1__b[9U] = (0x000000ffU 
                                                & (__Vfunc_shift_matrix__1__s[1U] 
                                                   >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__1__b[0x0aU] = (0x000000ffU 
                                                   & (__Vfunc_shift_matrix__1__s[1U] 
                                                      >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__1__b[0x0bU] = (0x000000ffU 
                                                   & __Vfunc_shift_matrix__1__s[1U]);
    vlSelfRef.__Vfunc_shift_matrix__1__b[0x0cU] = (
                                                   __Vfunc_shift_matrix__1__s[0U] 
                                                   >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__1__b[0x0dU] = (0x000000ffU 
                                                   & (__Vfunc_shift_matrix__1__s[0U] 
                                                      >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__1__b[0x0eU] = (0x000000ffU 
                                                   & (__Vfunc_shift_matrix__1__s[0U] 
                                                      >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__1__b[0x0fU] = (0x000000ffU 
                                                   & __Vfunc_shift_matrix__1__s[0U]);
    __Vfunc_shift_matrix__1__Vfuncout[0U] = (((vlSelfRef.__Vfunc_shift_matrix__1__b
                                               [0x0cU] 
                                               << 0x00000018U) 
                                              | (vlSelfRef.__Vfunc_shift_matrix__1__b
                                                 [1U] 
                                                 << 0x00000010U)) 
                                             | ((vlSelfRef.__Vfunc_shift_matrix__1__b
                                                 [6U] 
                                                 << 8U) 
                                                | vlSelfRef.__Vfunc_shift_matrix__1__b
                                                [0x0bU]));
    __Vfunc_shift_matrix__1__Vfuncout[1U] = (((vlSelfRef.__Vfunc_shift_matrix__1__b
                                               [8U] 
                                               << 0x00000018U) 
                                              | (vlSelfRef.__Vfunc_shift_matrix__1__b
                                                 [0x0dU] 
                                                 << 0x00000010U)) 
                                             | ((vlSelfRef.__Vfunc_shift_matrix__1__b
                                                 [2U] 
                                                 << 8U) 
                                                | vlSelfRef.__Vfunc_shift_matrix__1__b
                                                [7U]));
    __Vfunc_shift_matrix__1__Vfuncout[2U] = (((vlSelfRef.__Vfunc_shift_matrix__1__b
                                               [4U] 
                                               << 0x00000018U) 
                                              | (vlSelfRef.__Vfunc_shift_matrix__1__b
                                                 [9U] 
                                                 << 0x00000010U)) 
                                             | ((vlSelfRef.__Vfunc_shift_matrix__1__b
                                                 [0x0eU] 
                                                 << 8U) 
                                                | vlSelfRef.__Vfunc_shift_matrix__1__b
                                                [3U]));
    __Vfunc_shift_matrix__1__Vfuncout[3U] = (((vlSelfRef.__Vfunc_shift_matrix__1__b
                                               [0U] 
                                               << 0x00000018U) 
                                              | (vlSelfRef.__Vfunc_shift_matrix__1__b
                                                 [5U] 
                                                 << 0x00000010U)) 
                                             | ((vlSelfRef.__Vfunc_shift_matrix__1__b
                                                 [0x0aU] 
                                                 << 8U) 
                                                | vlSelfRef.__Vfunc_shift_matrix__1__b
                                                [0x0fU]));
    vlSelfRef.aes__DOT__shift_rows_out[0U] = __Vfunc_shift_matrix__1__Vfuncout[0U];
    vlSelfRef.aes__DOT__shift_rows_out[1U] = __Vfunc_shift_matrix__1__Vfuncout[1U];
    vlSelfRef.aes__DOT__shift_rows_out[2U] = __Vfunc_shift_matrix__1__Vfuncout[2U];
    vlSelfRef.aes__DOT__shift_rows_out[3U] = __Vfunc_shift_matrix__1__Vfuncout[3U];
    vlSelfRef.aes__DOT__kg__DOT__words_out[0U] = aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_0;
    aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_1 
        = (vlSelfRef.aes__DOT__round_key_current[2U] 
           ^ aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_0);
    __Vfunc_mix_matrix__2__in[0U] = vlSelfRef.aes__DOT__shift_rows_out[0U];
    __Vfunc_mix_matrix__2__in[1U] = vlSelfRef.aes__DOT__shift_rows_out[1U];
    __Vfunc_mix_matrix__2__in[2U] = vlSelfRef.aes__DOT__shift_rows_out[2U];
    __Vfunc_mix_matrix__2__in[3U] = vlSelfRef.aes__DOT__shift_rows_out[3U];
    __Vfunc_mix_matrix__2__col0 = __Vfunc_mix_matrix__2__in[3U];
    __Vfunc_mix_matrix__2__col1 = __Vfunc_mix_matrix__2__in[2U];
    __Vfunc_mix_matrix__2__col2 = __Vfunc_mix_matrix__2__in[1U];
    __Vfunc_mix_matrix__2__col3 = __Vfunc_mix_matrix__2__in[0U];
    __Vfunc_mix_column__3__col = __Vfunc_mix_matrix__2__col0;
    __Vfunc_mix_column__3__s0 = (__Vfunc_mix_column__3__col 
                                 >> 0x18U);
    __Vfunc_mix_column__3__s1 = (0x000000ffU & (__Vfunc_mix_column__3__col 
                                                >> 0x10U));
    __Vfunc_mix_column__3__s2 = (0x000000ffU & (__Vfunc_mix_column__3__col 
                                                >> 8U));
    __Vfunc_mix_column__3__s3 = (0x000000ffU & __Vfunc_mix_column__3__col);
    __Vfunc_mix_column__3__s0_out = (((([&]() {
                        vlSelfRef.__Vfunc_xtime__4__a 
                            = __Vfunc_mix_column__3__s0;
                        vlSelfRef.__Vfunc_xtime__4__result 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_xtime__4__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__4__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__4__a), 1U)));
                        vlSelfRef.__Vfunc_xtime__4__Vfuncout 
                            = vlSelfRef.__Vfunc_xtime__4__result;
                    }(), (IData)(vlSelfRef.__Vfunc_xtime__4__Vfuncout)) 
                                       ^ (([&]() {
                            vlSelfRef.__Vfunc_xtime__5__a 
                                = __Vfunc_mix_column__3__s1;
                            vlSelfRef.__Vfunc_xtime__5__result 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_xtime__5__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__5__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__5__a), 1U)));
                            vlSelfRef.__Vfunc_xtime__5__Vfuncout 
                                = vlSelfRef.__Vfunc_xtime__5__result;
                        }(), (IData)(vlSelfRef.__Vfunc_xtime__5__Vfuncout)) 
                                          ^ (IData)(__Vfunc_mix_column__3__s1))) 
                                      ^ (IData)(__Vfunc_mix_column__3__s2)) 
                                     ^ (IData)(__Vfunc_mix_column__3__s3));
    __Vfunc_mix_column__3__s1_out = ((((IData)(__Vfunc_mix_column__3__s0) 
                                       ^ ([&]() {
                        vlSelfRef.__Vfunc_xtime__6__a 
                            = __Vfunc_mix_column__3__s1;
                        vlSelfRef.__Vfunc_xtime__6__result 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_xtime__6__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__6__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__6__a), 1U)));
                        vlSelfRef.__Vfunc_xtime__6__Vfuncout 
                            = vlSelfRef.__Vfunc_xtime__6__result;
                    }(), (IData)(vlSelfRef.__Vfunc_xtime__6__Vfuncout))) 
                                      ^ (([&]() {
                        vlSelfRef.__Vfunc_xtime__7__a 
                            = __Vfunc_mix_column__3__s2;
                        vlSelfRef.__Vfunc_xtime__7__result 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_xtime__7__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__7__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__7__a), 1U)));
                        vlSelfRef.__Vfunc_xtime__7__Vfuncout 
                            = vlSelfRef.__Vfunc_xtime__7__result;
                    }(), (IData)(vlSelfRef.__Vfunc_xtime__7__Vfuncout)) 
                                         ^ (IData)(__Vfunc_mix_column__3__s2))) 
                                     ^ (IData)(__Vfunc_mix_column__3__s3));
    __Vfunc_mix_column__3__s2_out = ((((IData)(__Vfunc_mix_column__3__s0) 
                                       ^ (IData)(__Vfunc_mix_column__3__s1)) 
                                      ^ ([&]() {
                    vlSelfRef.__Vfunc_xtime__8__a = __Vfunc_mix_column__3__s2;
                    vlSelfRef.__Vfunc_xtime__8__result 
                        = (0x000000ffU & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_xtime__8__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__8__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__8__a), 1U)));
                    vlSelfRef.__Vfunc_xtime__8__Vfuncout 
                        = vlSelfRef.__Vfunc_xtime__8__result;
                }(), (IData)(vlSelfRef.__Vfunc_xtime__8__Vfuncout))) 
                                     ^ (([&]() {
                    vlSelfRef.__Vfunc_xtime__9__a = __Vfunc_mix_column__3__s3;
                    vlSelfRef.__Vfunc_xtime__9__result 
                        = (0x000000ffU & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_xtime__9__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__9__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__9__a), 1U)));
                    vlSelfRef.__Vfunc_xtime__9__Vfuncout 
                        = vlSelfRef.__Vfunc_xtime__9__result;
                }(), (IData)(vlSelfRef.__Vfunc_xtime__9__Vfuncout)) 
                                        ^ (IData)(__Vfunc_mix_column__3__s3)));
    __Vfunc_mix_column__3__s3_out = ((((([&]() {
                            vlSelfRef.__Vfunc_xtime__10__a 
                                = __Vfunc_mix_column__3__s0;
                            vlSelfRef.__Vfunc_xtime__10__result 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_xtime__10__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__10__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__10__a), 1U)));
                            vlSelfRef.__Vfunc_xtime__10__Vfuncout 
                                = vlSelfRef.__Vfunc_xtime__10__result;
                        }(), (IData)(vlSelfRef.__Vfunc_xtime__10__Vfuncout)) 
                                        ^ (IData)(__Vfunc_mix_column__3__s0)) 
                                       ^ (IData)(__Vfunc_mix_column__3__s1)) 
                                      ^ (IData)(__Vfunc_mix_column__3__s2)) 
                                     ^ ([&]() {
                vlSelfRef.__Vfunc_xtime__11__a = __Vfunc_mix_column__3__s3;
                vlSelfRef.__Vfunc_xtime__11__result 
                    = (0x000000ffU & ((0x00000080U 
                                       & (IData)(vlSelfRef.__Vfunc_xtime__11__a))
                                       ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__11__a), 1U))
                                       : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__11__a), 1U)));
                vlSelfRef.__Vfunc_xtime__11__Vfuncout 
                    = vlSelfRef.__Vfunc_xtime__11__result;
            }(), (IData)(vlSelfRef.__Vfunc_xtime__11__Vfuncout)));
    __Vfunc_mix_column__3__Vfuncout = ((((IData)(__Vfunc_mix_column__3__s0_out) 
                                         << 0x00000018U) 
                                        | ((IData)(__Vfunc_mix_column__3__s1_out) 
                                           << 0x00000010U)) 
                                       | (((IData)(__Vfunc_mix_column__3__s2_out) 
                                           << 8U) | (IData)(__Vfunc_mix_column__3__s3_out)));
    __Vfunc_mix_matrix__2__mixed_col0 = __Vfunc_mix_column__3__Vfuncout;
    __Vfunc_mix_column__12__col = __Vfunc_mix_matrix__2__col1;
    __Vfunc_mix_column__12__s0 = (__Vfunc_mix_column__12__col 
                                  >> 0x18U);
    __Vfunc_mix_column__12__s1 = (0x000000ffU & (__Vfunc_mix_column__12__col 
                                                 >> 0x10U));
    __Vfunc_mix_column__12__s2 = (0x000000ffU & (__Vfunc_mix_column__12__col 
                                                 >> 8U));
    __Vfunc_mix_column__12__s3 = (0x000000ffU & __Vfunc_mix_column__12__col);
    __Vfunc_mix_column__12__s0_out = (((([&]() {
                        vlSelfRef.__Vfunc_xtime__13__a 
                            = __Vfunc_mix_column__12__s0;
                        vlSelfRef.__Vfunc_xtime__13__result 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_xtime__13__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__13__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__13__a), 1U)));
                        vlSelfRef.__Vfunc_xtime__13__Vfuncout 
                            = vlSelfRef.__Vfunc_xtime__13__result;
                    }(), (IData)(vlSelfRef.__Vfunc_xtime__13__Vfuncout)) 
                                        ^ (([&]() {
                            vlSelfRef.__Vfunc_xtime__14__a 
                                = __Vfunc_mix_column__12__s1;
                            vlSelfRef.__Vfunc_xtime__14__result 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_xtime__14__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__14__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__14__a), 1U)));
                            vlSelfRef.__Vfunc_xtime__14__Vfuncout 
                                = vlSelfRef.__Vfunc_xtime__14__result;
                        }(), (IData)(vlSelfRef.__Vfunc_xtime__14__Vfuncout)) 
                                           ^ (IData)(__Vfunc_mix_column__12__s1))) 
                                       ^ (IData)(__Vfunc_mix_column__12__s2)) 
                                      ^ (IData)(__Vfunc_mix_column__12__s3));
    __Vfunc_mix_column__12__s1_out = ((((IData)(__Vfunc_mix_column__12__s0) 
                                        ^ ([&]() {
                        vlSelfRef.__Vfunc_xtime__15__a 
                            = __Vfunc_mix_column__12__s1;
                        vlSelfRef.__Vfunc_xtime__15__result 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_xtime__15__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__15__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__15__a), 1U)));
                        vlSelfRef.__Vfunc_xtime__15__Vfuncout 
                            = vlSelfRef.__Vfunc_xtime__15__result;
                    }(), (IData)(vlSelfRef.__Vfunc_xtime__15__Vfuncout))) 
                                       ^ (([&]() {
                        vlSelfRef.__Vfunc_xtime__16__a 
                            = __Vfunc_mix_column__12__s2;
                        vlSelfRef.__Vfunc_xtime__16__result 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_xtime__16__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__16__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__16__a), 1U)));
                        vlSelfRef.__Vfunc_xtime__16__Vfuncout 
                            = vlSelfRef.__Vfunc_xtime__16__result;
                    }(), (IData)(vlSelfRef.__Vfunc_xtime__16__Vfuncout)) 
                                          ^ (IData)(__Vfunc_mix_column__12__s2))) 
                                      ^ (IData)(__Vfunc_mix_column__12__s3));
    __Vfunc_mix_column__12__s2_out = ((((IData)(__Vfunc_mix_column__12__s0) 
                                        ^ (IData)(__Vfunc_mix_column__12__s1)) 
                                       ^ ([&]() {
                    vlSelfRef.__Vfunc_xtime__17__a 
                        = __Vfunc_mix_column__12__s2;
                    vlSelfRef.__Vfunc_xtime__17__result 
                        = (0x000000ffU & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_xtime__17__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__17__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__17__a), 1U)));
                    vlSelfRef.__Vfunc_xtime__17__Vfuncout 
                        = vlSelfRef.__Vfunc_xtime__17__result;
                }(), (IData)(vlSelfRef.__Vfunc_xtime__17__Vfuncout))) 
                                      ^ (([&]() {
                    vlSelfRef.__Vfunc_xtime__18__a 
                        = __Vfunc_mix_column__12__s3;
                    vlSelfRef.__Vfunc_xtime__18__result 
                        = (0x000000ffU & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_xtime__18__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__18__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__18__a), 1U)));
                    vlSelfRef.__Vfunc_xtime__18__Vfuncout 
                        = vlSelfRef.__Vfunc_xtime__18__result;
                }(), (IData)(vlSelfRef.__Vfunc_xtime__18__Vfuncout)) 
                                         ^ (IData)(__Vfunc_mix_column__12__s3)));
    __Vfunc_mix_column__12__s3_out = ((((([&]() {
                            vlSelfRef.__Vfunc_xtime__19__a 
                                = __Vfunc_mix_column__12__s0;
                            vlSelfRef.__Vfunc_xtime__19__result 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_xtime__19__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__19__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__19__a), 1U)));
                            vlSelfRef.__Vfunc_xtime__19__Vfuncout 
                                = vlSelfRef.__Vfunc_xtime__19__result;
                        }(), (IData)(vlSelfRef.__Vfunc_xtime__19__Vfuncout)) 
                                         ^ (IData)(__Vfunc_mix_column__12__s0)) 
                                        ^ (IData)(__Vfunc_mix_column__12__s1)) 
                                       ^ (IData)(__Vfunc_mix_column__12__s2)) 
                                      ^ ([&]() {
                vlSelfRef.__Vfunc_xtime__20__a = __Vfunc_mix_column__12__s3;
                vlSelfRef.__Vfunc_xtime__20__result 
                    = (0x000000ffU & ((0x00000080U 
                                       & (IData)(vlSelfRef.__Vfunc_xtime__20__a))
                                       ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__20__a), 1U))
                                       : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__20__a), 1U)));
                vlSelfRef.__Vfunc_xtime__20__Vfuncout 
                    = vlSelfRef.__Vfunc_xtime__20__result;
            }(), (IData)(vlSelfRef.__Vfunc_xtime__20__Vfuncout)));
    __Vfunc_mix_column__12__Vfuncout = ((((IData)(__Vfunc_mix_column__12__s0_out) 
                                          << 0x00000018U) 
                                         | ((IData)(__Vfunc_mix_column__12__s1_out) 
                                            << 0x00000010U)) 
                                        | (((IData)(__Vfunc_mix_column__12__s2_out) 
                                            << 8U) 
                                           | (IData)(__Vfunc_mix_column__12__s3_out)));
    __Vfunc_mix_matrix__2__mixed_col1 = __Vfunc_mix_column__12__Vfuncout;
    __Vfunc_mix_column__21__col = __Vfunc_mix_matrix__2__col2;
    __Vfunc_mix_column__21__s0 = (__Vfunc_mix_column__21__col 
                                  >> 0x18U);
    __Vfunc_mix_column__21__s1 = (0x000000ffU & (__Vfunc_mix_column__21__col 
                                                 >> 0x10U));
    __Vfunc_mix_column__21__s2 = (0x000000ffU & (__Vfunc_mix_column__21__col 
                                                 >> 8U));
    __Vfunc_mix_column__21__s3 = (0x000000ffU & __Vfunc_mix_column__21__col);
    __Vfunc_mix_column__21__s0_out = (((([&]() {
                        vlSelfRef.__Vfunc_xtime__22__a 
                            = __Vfunc_mix_column__21__s0;
                        vlSelfRef.__Vfunc_xtime__22__result 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_xtime__22__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__22__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__22__a), 1U)));
                        vlSelfRef.__Vfunc_xtime__22__Vfuncout 
                            = vlSelfRef.__Vfunc_xtime__22__result;
                    }(), (IData)(vlSelfRef.__Vfunc_xtime__22__Vfuncout)) 
                                        ^ (([&]() {
                            vlSelfRef.__Vfunc_xtime__23__a 
                                = __Vfunc_mix_column__21__s1;
                            vlSelfRef.__Vfunc_xtime__23__result 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_xtime__23__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__23__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__23__a), 1U)));
                            vlSelfRef.__Vfunc_xtime__23__Vfuncout 
                                = vlSelfRef.__Vfunc_xtime__23__result;
                        }(), (IData)(vlSelfRef.__Vfunc_xtime__23__Vfuncout)) 
                                           ^ (IData)(__Vfunc_mix_column__21__s1))) 
                                       ^ (IData)(__Vfunc_mix_column__21__s2)) 
                                      ^ (IData)(__Vfunc_mix_column__21__s3));
    __Vfunc_mix_column__21__s1_out = ((((IData)(__Vfunc_mix_column__21__s0) 
                                        ^ ([&]() {
                        vlSelfRef.__Vfunc_xtime__24__a 
                            = __Vfunc_mix_column__21__s1;
                        vlSelfRef.__Vfunc_xtime__24__result 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_xtime__24__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__24__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__24__a), 1U)));
                        vlSelfRef.__Vfunc_xtime__24__Vfuncout 
                            = vlSelfRef.__Vfunc_xtime__24__result;
                    }(), (IData)(vlSelfRef.__Vfunc_xtime__24__Vfuncout))) 
                                       ^ (([&]() {
                        vlSelfRef.__Vfunc_xtime__25__a 
                            = __Vfunc_mix_column__21__s2;
                        vlSelfRef.__Vfunc_xtime__25__result 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_xtime__25__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__25__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__25__a), 1U)));
                        vlSelfRef.__Vfunc_xtime__25__Vfuncout 
                            = vlSelfRef.__Vfunc_xtime__25__result;
                    }(), (IData)(vlSelfRef.__Vfunc_xtime__25__Vfuncout)) 
                                          ^ (IData)(__Vfunc_mix_column__21__s2))) 
                                      ^ (IData)(__Vfunc_mix_column__21__s3));
    __Vfunc_mix_column__21__s2_out = ((((IData)(__Vfunc_mix_column__21__s0) 
                                        ^ (IData)(__Vfunc_mix_column__21__s1)) 
                                       ^ ([&]() {
                    vlSelfRef.__Vfunc_xtime__26__a 
                        = __Vfunc_mix_column__21__s2;
                    vlSelfRef.__Vfunc_xtime__26__result 
                        = (0x000000ffU & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_xtime__26__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__26__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__26__a), 1U)));
                    vlSelfRef.__Vfunc_xtime__26__Vfuncout 
                        = vlSelfRef.__Vfunc_xtime__26__result;
                }(), (IData)(vlSelfRef.__Vfunc_xtime__26__Vfuncout))) 
                                      ^ (([&]() {
                    vlSelfRef.__Vfunc_xtime__27__a 
                        = __Vfunc_mix_column__21__s3;
                    vlSelfRef.__Vfunc_xtime__27__result 
                        = (0x000000ffU & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_xtime__27__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__27__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__27__a), 1U)));
                    vlSelfRef.__Vfunc_xtime__27__Vfuncout 
                        = vlSelfRef.__Vfunc_xtime__27__result;
                }(), (IData)(vlSelfRef.__Vfunc_xtime__27__Vfuncout)) 
                                         ^ (IData)(__Vfunc_mix_column__21__s3)));
    __Vfunc_mix_column__21__s3_out = ((((([&]() {
                            vlSelfRef.__Vfunc_xtime__28__a 
                                = __Vfunc_mix_column__21__s0;
                            vlSelfRef.__Vfunc_xtime__28__result 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_xtime__28__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__28__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__28__a), 1U)));
                            vlSelfRef.__Vfunc_xtime__28__Vfuncout 
                                = vlSelfRef.__Vfunc_xtime__28__result;
                        }(), (IData)(vlSelfRef.__Vfunc_xtime__28__Vfuncout)) 
                                         ^ (IData)(__Vfunc_mix_column__21__s0)) 
                                        ^ (IData)(__Vfunc_mix_column__21__s1)) 
                                       ^ (IData)(__Vfunc_mix_column__21__s2)) 
                                      ^ ([&]() {
                vlSelfRef.__Vfunc_xtime__29__a = __Vfunc_mix_column__21__s3;
                vlSelfRef.__Vfunc_xtime__29__result 
                    = (0x000000ffU & ((0x00000080U 
                                       & (IData)(vlSelfRef.__Vfunc_xtime__29__a))
                                       ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__29__a), 1U))
                                       : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__29__a), 1U)));
                vlSelfRef.__Vfunc_xtime__29__Vfuncout 
                    = vlSelfRef.__Vfunc_xtime__29__result;
            }(), (IData)(vlSelfRef.__Vfunc_xtime__29__Vfuncout)));
    __Vfunc_mix_column__21__Vfuncout = ((((IData)(__Vfunc_mix_column__21__s0_out) 
                                          << 0x00000018U) 
                                         | ((IData)(__Vfunc_mix_column__21__s1_out) 
                                            << 0x00000010U)) 
                                        | (((IData)(__Vfunc_mix_column__21__s2_out) 
                                            << 8U) 
                                           | (IData)(__Vfunc_mix_column__21__s3_out)));
    __Vfunc_mix_matrix__2__mixed_col2 = __Vfunc_mix_column__21__Vfuncout;
    __Vfunc_mix_column__30__col = __Vfunc_mix_matrix__2__col3;
    __Vfunc_mix_column__30__s0 = (__Vfunc_mix_column__30__col 
                                  >> 0x18U);
    __Vfunc_mix_column__30__s1 = (0x000000ffU & (__Vfunc_mix_column__30__col 
                                                 >> 0x10U));
    __Vfunc_mix_column__30__s2 = (0x000000ffU & (__Vfunc_mix_column__30__col 
                                                 >> 8U));
    __Vfunc_mix_column__30__s3 = (0x000000ffU & __Vfunc_mix_column__30__col);
    __Vfunc_mix_column__30__s0_out = (((([&]() {
                        vlSelfRef.__Vfunc_xtime__31__a 
                            = __Vfunc_mix_column__30__s0;
                        vlSelfRef.__Vfunc_xtime__31__result 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_xtime__31__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__31__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__31__a), 1U)));
                        vlSelfRef.__Vfunc_xtime__31__Vfuncout 
                            = vlSelfRef.__Vfunc_xtime__31__result;
                    }(), (IData)(vlSelfRef.__Vfunc_xtime__31__Vfuncout)) 
                                        ^ (([&]() {
                            vlSelfRef.__Vfunc_xtime__32__a 
                                = __Vfunc_mix_column__30__s1;
                            vlSelfRef.__Vfunc_xtime__32__result 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_xtime__32__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__32__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__32__a), 1U)));
                            vlSelfRef.__Vfunc_xtime__32__Vfuncout 
                                = vlSelfRef.__Vfunc_xtime__32__result;
                        }(), (IData)(vlSelfRef.__Vfunc_xtime__32__Vfuncout)) 
                                           ^ (IData)(__Vfunc_mix_column__30__s1))) 
                                       ^ (IData)(__Vfunc_mix_column__30__s2)) 
                                      ^ (IData)(__Vfunc_mix_column__30__s3));
    __Vfunc_mix_column__30__s1_out = ((((IData)(__Vfunc_mix_column__30__s0) 
                                        ^ ([&]() {
                        vlSelfRef.__Vfunc_xtime__33__a 
                            = __Vfunc_mix_column__30__s1;
                        vlSelfRef.__Vfunc_xtime__33__result 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_xtime__33__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__33__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__33__a), 1U)));
                        vlSelfRef.__Vfunc_xtime__33__Vfuncout 
                            = vlSelfRef.__Vfunc_xtime__33__result;
                    }(), (IData)(vlSelfRef.__Vfunc_xtime__33__Vfuncout))) 
                                       ^ (([&]() {
                        vlSelfRef.__Vfunc_xtime__34__a 
                            = __Vfunc_mix_column__30__s2;
                        vlSelfRef.__Vfunc_xtime__34__result 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_xtime__34__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__34__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__34__a), 1U)));
                        vlSelfRef.__Vfunc_xtime__34__Vfuncout 
                            = vlSelfRef.__Vfunc_xtime__34__result;
                    }(), (IData)(vlSelfRef.__Vfunc_xtime__34__Vfuncout)) 
                                          ^ (IData)(__Vfunc_mix_column__30__s2))) 
                                      ^ (IData)(__Vfunc_mix_column__30__s3));
    __Vfunc_mix_column__30__s2_out = ((((IData)(__Vfunc_mix_column__30__s0) 
                                        ^ (IData)(__Vfunc_mix_column__30__s1)) 
                                       ^ ([&]() {
                    vlSelfRef.__Vfunc_xtime__35__a 
                        = __Vfunc_mix_column__30__s2;
                    vlSelfRef.__Vfunc_xtime__35__result 
                        = (0x000000ffU & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_xtime__35__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__35__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__35__a), 1U)));
                    vlSelfRef.__Vfunc_xtime__35__Vfuncout 
                        = vlSelfRef.__Vfunc_xtime__35__result;
                }(), (IData)(vlSelfRef.__Vfunc_xtime__35__Vfuncout))) 
                                      ^ (([&]() {
                    vlSelfRef.__Vfunc_xtime__36__a 
                        = __Vfunc_mix_column__30__s3;
                    vlSelfRef.__Vfunc_xtime__36__result 
                        = (0x000000ffU & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_xtime__36__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__36__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__36__a), 1U)));
                    vlSelfRef.__Vfunc_xtime__36__Vfuncout 
                        = vlSelfRef.__Vfunc_xtime__36__result;
                }(), (IData)(vlSelfRef.__Vfunc_xtime__36__Vfuncout)) 
                                         ^ (IData)(__Vfunc_mix_column__30__s3)));
    __Vfunc_mix_column__30__s3_out = ((((([&]() {
                            vlSelfRef.__Vfunc_xtime__37__a 
                                = __Vfunc_mix_column__30__s0;
                            vlSelfRef.__Vfunc_xtime__37__result 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_xtime__37__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__37__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__37__a), 1U)));
                            vlSelfRef.__Vfunc_xtime__37__Vfuncout 
                                = vlSelfRef.__Vfunc_xtime__37__result;
                        }(), (IData)(vlSelfRef.__Vfunc_xtime__37__Vfuncout)) 
                                         ^ (IData)(__Vfunc_mix_column__30__s0)) 
                                        ^ (IData)(__Vfunc_mix_column__30__s1)) 
                                       ^ (IData)(__Vfunc_mix_column__30__s2)) 
                                      ^ ([&]() {
                vlSelfRef.__Vfunc_xtime__38__a = __Vfunc_mix_column__30__s3;
                vlSelfRef.__Vfunc_xtime__38__result 
                    = (0x000000ffU & ((0x00000080U 
                                       & (IData)(vlSelfRef.__Vfunc_xtime__38__a))
                                       ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__38__a), 1U))
                                       : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__38__a), 1U)));
                vlSelfRef.__Vfunc_xtime__38__Vfuncout 
                    = vlSelfRef.__Vfunc_xtime__38__result;
            }(), (IData)(vlSelfRef.__Vfunc_xtime__38__Vfuncout)));
    __Vfunc_mix_column__30__Vfuncout = ((((IData)(__Vfunc_mix_column__30__s0_out) 
                                          << 0x00000018U) 
                                         | ((IData)(__Vfunc_mix_column__30__s1_out) 
                                            << 0x00000010U)) 
                                        | (((IData)(__Vfunc_mix_column__30__s2_out) 
                                            << 8U) 
                                           | (IData)(__Vfunc_mix_column__30__s3_out)));
    __Vfunc_mix_matrix__2__mixed_col3 = __Vfunc_mix_column__30__Vfuncout;
    __Vfunc_mix_matrix__2__Vfuncout[0U] = __Vfunc_mix_matrix__2__mixed_col3;
    __Vfunc_mix_matrix__2__Vfuncout[1U] = __Vfunc_mix_matrix__2__mixed_col2;
    __Vfunc_mix_matrix__2__Vfuncout[2U] = (IData)((
                                                   ((QData)((IData)(__Vfunc_mix_matrix__2__mixed_col0)) 
                                                    << 0x00000020U) 
                                                   | (QData)((IData)(__Vfunc_mix_matrix__2__mixed_col1))));
    __Vfunc_mix_matrix__2__Vfuncout[3U] = (IData)((
                                                   (((QData)((IData)(__Vfunc_mix_matrix__2__mixed_col0)) 
                                                     << 0x00000020U) 
                                                    | (QData)((IData)(__Vfunc_mix_matrix__2__mixed_col1))) 
                                                   >> 0x00000020U));
    vlSelfRef.aes__DOT__mix_columns_out[0U] = __Vfunc_mix_matrix__2__Vfuncout[0U];
    vlSelfRef.aes__DOT__mix_columns_out[1U] = __Vfunc_mix_matrix__2__Vfuncout[1U];
    vlSelfRef.aes__DOT__mix_columns_out[2U] = __Vfunc_mix_matrix__2__Vfuncout[2U];
    vlSelfRef.aes__DOT__mix_columns_out[3U] = __Vfunc_mix_matrix__2__Vfuncout[3U];
    vlSelfRef.aes__DOT__kg__DOT__words_out[1U] = aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_1;
    aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_2 
        = (vlSelfRef.aes__DOT__round_key_current[1U] 
           ^ aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_1);
    vlSelfRef.aes__DOT__kg__DOT__words_out[2U] = aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
        = (vlSelfRef.aes__DOT__round_key_current[0U] 
           ^ aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_2);
    vlSelfRef.aes__DOT__kg__DOT__words_out[3U] = aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    vlSelfRef.aes__DOT__kg__DOT__round_key[0U] = aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    vlSelfRef.aes__DOT__kg__DOT__round_key[1U] = aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    vlSelfRef.aes__DOT__kg__DOT__round_key[2U] = (IData)(
                                                         (((QData)((IData)(aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_0)) 
                                                           << 0x00000020U) 
                                                          | (QData)((IData)(aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_1))));
    vlSelfRef.aes__DOT__kg__DOT__round_key[3U] = (IData)(
                                                         ((((QData)((IData)(aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_0)) 
                                                            << 0x00000020U) 
                                                           | (QData)((IData)(aes__DOT__kg__DOT____VdfgRegularize_h801a084d_0_1))) 
                                                          >> 0x00000020U));
    if ((0x0aU > (IData)(vlSelfRef.aes__DOT__round_num))) {
        vlSelfRef.aes__DOT__state_next[0U] = (vlSelfRef.aes__DOT__mix_columns_out[0U] 
                                              ^ vlSelfRef.aes__DOT__kg__DOT__round_key[0U]);
        vlSelfRef.aes__DOT__state_next[1U] = (vlSelfRef.aes__DOT__mix_columns_out[1U] 
                                              ^ vlSelfRef.aes__DOT__kg__DOT__round_key[1U]);
        vlSelfRef.aes__DOT__state_next[2U] = (vlSelfRef.aes__DOT__mix_columns_out[2U] 
                                              ^ vlSelfRef.aes__DOT__kg__DOT__round_key[2U]);
        vlSelfRef.aes__DOT__state_next[3U] = (vlSelfRef.aes__DOT__mix_columns_out[3U] 
                                              ^ vlSelfRef.aes__DOT__kg__DOT__round_key[3U]);
    } else {
        vlSelfRef.aes__DOT__state_next[0U] = (vlSelfRef.aes__DOT__kg__DOT__round_key[0U] 
                                              ^ vlSelfRef.aes__DOT__shift_rows_out[0U]);
        vlSelfRef.aes__DOT__state_next[1U] = (vlSelfRef.aes__DOT__kg__DOT__round_key[1U] 
                                              ^ vlSelfRef.aes__DOT__shift_rows_out[1U]);
        vlSelfRef.aes__DOT__state_next[2U] = (vlSelfRef.aes__DOT__kg__DOT__round_key[2U] 
                                              ^ vlSelfRef.aes__DOT__shift_rows_out[2U]);
        vlSelfRef.aes__DOT__state_next[3U] = (vlSelfRef.aes__DOT__kg__DOT__round_key[3U] 
                                              ^ vlSelfRef.aes__DOT__shift_rows_out[3U]);
    }
    vlSelfRef.ciphertext[0U] = vlSelfRef.aes__DOT__state_next[0U];
    vlSelfRef.ciphertext[1U] = vlSelfRef.aes__DOT__state_next[1U];
    vlSelfRef.ciphertext[2U] = vlSelfRef.aes__DOT__state_next[2U];
    vlSelfRef.ciphertext[3U] = vlSelfRef.aes__DOT__state_next[3U];
}

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

void Vaes___024root___eval_nba(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___eval_nba\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vaes___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
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

void Vaes___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vaes___024root___eval_phase__act(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___eval_phase__act\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaes___024root___eval_triggers__act(vlSelf);
    Vaes___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vaes___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vaes___024root___eval_phase__nba(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___eval_phase__nba\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vaes___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vaes___024root___eval_nba(vlSelf);
        Vaes___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vaes___024root___eval(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___eval\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vaes___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("aes.sv", 3, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vaes___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("aes.sv", 3, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vaes___024root___eval_phase__act(vlSelf));
    } while (Vaes___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vaes___024root___eval_debug_assertions(Vaes___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root___eval_debug_assertions\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
