// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_functions.h for the primary calling header

#include "Vaes_functions__pch.h"

void Vaes_functions___024root___ico_sequent__TOP__7(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___ico_sequent__TOP__7\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vfunc_shift_matrix__13__Vfuncout;
    VL_ZERO_W(128, __Vfunc_shift_matrix__13__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_shift_matrix__13__s;
    VL_ZERO_W(128, __Vfunc_shift_matrix__13__s);
    IData/*31:0*/ __Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__mix_column__236__Vfuncout;
    __Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__mix_column__236__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__mix_column__245__Vfuncout;
    __Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__mix_column__245__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__mix_column__254__Vfuncout;
    __Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__mix_column__254__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__mix_column__263__Vfuncout;
    __Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__mix_column__263__Vfuncout = 0;
    // Body
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_out[0U] 
        = vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_0.out;
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_out[1U] 
        = vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_1.out;
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_out[2U] 
        = vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_2.out;
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_out[3U] 
        = vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_3.out;
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0 
        = (vlSelfRef.aes__DOT__round__BRA__5__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0 
           ^ (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_0.out) 
                 << 0x00000018U) | ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_1.out) 
                                    << 0x00000010U)) 
               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_2.out) 
                   << 8U) | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_3.out))) 
              ^ vlSelfRef.aes__DOT__rcon[6U]));
    __Vfunc_shift_matrix__13__s[0U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                        << 0x00000010U) 
                                       | ((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 0x0000000cU) 
                                           | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                              << 8U)) 
                                          | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                 << 3U) 
                                                | (4U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                    << 2U))) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                    << 1U)) 
                                                  | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                              << 4U) 
                                             | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    ^ 
                                                    (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                     << 1U)) 
                                                   | (1U 
                                                      ^ 
                                                      ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                       ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    __Vfunc_shift_matrix__13__s[1U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                        << 0x00000010U) 
                                       | ((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 0x0000000cU) 
                                           | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                              << 8U)) 
                                          | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                 << 3U) 
                                                | (4U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                    << 2U))) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                    << 1U)) 
                                                  | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                              << 4U) 
                                             | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    ^ 
                                                    (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                     << 1U)) 
                                                   | (1U 
                                                      ^ 
                                                      ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                       ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    __Vfunc_shift_matrix__13__s[2U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                        << 0x00000010U) 
                                       | ((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 0x0000000cU) 
                                           | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                              << 8U)) 
                                          | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                 << 3U) 
                                                | (4U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                    << 2U))) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                    << 1U)) 
                                                  | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                              << 4U) 
                                             | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    ^ 
                                                    (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                     << 1U)) 
                                                   | (1U 
                                                      ^ 
                                                      ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                       ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    __Vfunc_shift_matrix__13__s[3U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                        << 0x00000010U) 
                                       | ((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 0x0000000cU) 
                                           | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                              << 8U)) 
                                          | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                 << 3U) 
                                                | (4U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                    << 2U))) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                    << 1U)) 
                                                  | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                              << 4U) 
                                             | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    ^ 
                                                    (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                     << 1U)) 
                                                   | (1U 
                                                      ^ 
                                                      ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                       ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vfunc_shift_matrix__13__b[__Vi0] = 0;
    }
    vlSelfRef.__Vfunc_shift_matrix__13__b[0U] = (__Vfunc_shift_matrix__13__s[3U] 
                                                 >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__13__b[1U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__13__s[3U] 
                                                    >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__13__b[2U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__13__s[3U] 
                                                    >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__13__b[3U] = (0x000000ffU 
                                                 & __Vfunc_shift_matrix__13__s[3U]);
    vlSelfRef.__Vfunc_shift_matrix__13__b[4U] = (__Vfunc_shift_matrix__13__s[2U] 
                                                 >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__13__b[5U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__13__s[2U] 
                                                    >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__13__b[6U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__13__s[2U] 
                                                    >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__13__b[7U] = (0x000000ffU 
                                                 & __Vfunc_shift_matrix__13__s[2U]);
    vlSelfRef.__Vfunc_shift_matrix__13__b[8U] = (__Vfunc_shift_matrix__13__s[1U] 
                                                 >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__13__b[9U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__13__s[1U] 
                                                    >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__13__b[0x0aU] = 
        (0x000000ffU & (__Vfunc_shift_matrix__13__s[1U] 
                        >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__13__b[0x0bU] = 
        (0x000000ffU & __Vfunc_shift_matrix__13__s[1U]);
    vlSelfRef.__Vfunc_shift_matrix__13__b[0x0cU] = 
        (__Vfunc_shift_matrix__13__s[0U] >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__13__b[0x0dU] = 
        (0x000000ffU & (__Vfunc_shift_matrix__13__s[0U] 
                        >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__13__b[0x0eU] = 
        (0x000000ffU & (__Vfunc_shift_matrix__13__s[0U] 
                        >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__13__b[0x0fU] = 
        (0x000000ffU & __Vfunc_shift_matrix__13__s[0U]);
    __Vfunc_shift_matrix__13__Vfuncout[0U] = (((vlSelfRef.__Vfunc_shift_matrix__13__b
                                                [0x0fU] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__Vfunc_shift_matrix__13__b
                                                  [3U] 
                                                  << 0x00000010U)) 
                                              | ((vlSelfRef.__Vfunc_shift_matrix__13__b
                                                  [7U] 
                                                  << 8U) 
                                                 | vlSelfRef.__Vfunc_shift_matrix__13__b
                                                 [0x0bU]));
    __Vfunc_shift_matrix__13__Vfuncout[1U] = (((vlSelfRef.__Vfunc_shift_matrix__13__b
                                                [0x0aU] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__Vfunc_shift_matrix__13__b
                                                  [0x0eU] 
                                                  << 0x00000010U)) 
                                              | ((vlSelfRef.__Vfunc_shift_matrix__13__b
                                                  [2U] 
                                                  << 8U) 
                                                 | vlSelfRef.__Vfunc_shift_matrix__13__b
                                                 [6U]));
    __Vfunc_shift_matrix__13__Vfuncout[2U] = (((vlSelfRef.__Vfunc_shift_matrix__13__b
                                                [5U] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__Vfunc_shift_matrix__13__b
                                                  [9U] 
                                                  << 0x00000010U)) 
                                              | ((vlSelfRef.__Vfunc_shift_matrix__13__b
                                                  [0x0dU] 
                                                  << 8U) 
                                                 | vlSelfRef.__Vfunc_shift_matrix__13__b
                                                 [1U]));
    __Vfunc_shift_matrix__13__Vfuncout[3U] = (((vlSelfRef.__Vfunc_shift_matrix__13__b
                                                [0U] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__Vfunc_shift_matrix__13__b
                                                  [4U] 
                                                  << 0x00000010U)) 
                                              | ((vlSelfRef.__Vfunc_shift_matrix__13__b
                                                  [8U] 
                                                  << 8U) 
                                                 | vlSelfRef.__Vfunc_shift_matrix__13__b
                                                 [0x0cU]));
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
        = __Vfunc_shift_matrix__13__Vfuncout[0U];
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[1U] 
        = __Vfunc_shift_matrix__13__Vfuncout[1U];
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[2U] 
        = __Vfunc_shift_matrix__13__Vfuncout[2U];
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[3U] 
        = __Vfunc_shift_matrix__13__Vfuncout[3U];
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT__words_out[0U] 
        = vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0;
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__words_in[0U] 
        = vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0;
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1 
        = (vlSelfRef.aes__DOT__round__BRA__5__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1 
           ^ vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0);
    VL_ASSIGNSEL_WI(128, 8, 0U, vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__237__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__237__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__237__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__237__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__237__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__237__Vfuncout)) 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__238__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__238__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__238__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__238__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__238__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__238__Vfuncout))) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 8U, vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__239__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__239__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__239__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__239__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__239__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__239__Vfuncout))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__240__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__240__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__240__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__240__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__240__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__240__Vfuncout))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x10U, vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                       ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                           << 0x00000018U) 
                                          | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                             >> 8U))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__241__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__241__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__241__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__241__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__241__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__241__Vfuncout))) 
                                     ^ ([&]() {
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__242__a 
                                = (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                   >> 0x00000018U);
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__242__Vfuncout 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__242__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__242__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__242__a), 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__242__Vfuncout))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x18U, vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__243__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__243__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__243__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__243__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__243__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__243__Vfuncout)) 
                                       ^ vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U]) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ([&]() {
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__244__a 
                            = (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                               >> 0x00000018U);
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__244__Vfuncout 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__244__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__244__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__244__a), 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__244__Vfuncout)))));
    __Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__mix_column__236__Vfuncout 
        = vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out[0U];
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out[3U] 
        = __Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__mix_column__236__Vfuncout;
    VL_ASSIGNSEL_WI(128, 8, 0U, vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__246__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__246__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__246__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__246__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__246__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__246__Vfuncout)) 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__247__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__247__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__247__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__247__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__247__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__247__Vfuncout))) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 8U, vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__248__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__248__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__248__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__248__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__248__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__248__Vfuncout))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__249__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__249__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__249__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__249__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__249__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__249__Vfuncout))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x10U, vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                       ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                           << 0x00000018U) 
                                          | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                             >> 8U))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__250__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__250__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__250__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__250__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__250__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__250__Vfuncout))) 
                                     ^ ([&]() {
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__251__a 
                                = (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                   >> 0x00000018U);
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__251__Vfuncout 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__251__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__251__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__251__a), 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__251__Vfuncout))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x18U, vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__252__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__252__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__252__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__252__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__252__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__252__Vfuncout)) 
                                       ^ vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U]) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ([&]() {
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__253__a 
                            = (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                               >> 0x00000018U);
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__253__Vfuncout 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__253__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__253__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__253__a), 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__253__Vfuncout)))));
    __Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__mix_column__245__Vfuncout 
        = vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out[0U];
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out[2U] 
        = __Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__mix_column__245__Vfuncout;
    VL_ASSIGNSEL_WI(128, 8, 0U, vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__255__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__255__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__255__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__255__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__255__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__255__Vfuncout)) 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__256__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__256__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__256__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__256__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__256__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__256__Vfuncout))) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 8U, vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__257__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__257__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__257__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__257__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__257__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__257__Vfuncout))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__258__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__258__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__258__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__258__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__258__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__258__Vfuncout))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x10U, vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                       ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                           << 0x00000018U) 
                                          | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                             >> 8U))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__259__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__259__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__259__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__259__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__259__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__259__Vfuncout))) 
                                     ^ ([&]() {
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__260__a 
                                = (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                   >> 0x00000018U);
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__260__Vfuncout 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__260__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__260__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__260__a), 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__260__Vfuncout))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x18U, vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__261__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__261__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__261__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__261__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__261__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__261__Vfuncout)) 
                                       ^ vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U]) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ([&]() {
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__262__a 
                            = (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                               >> 0x00000018U);
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__262__Vfuncout 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__262__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__262__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__262__a), 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__262__Vfuncout)))));
    __Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__mix_column__254__Vfuncout 
        = vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out[0U];
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out[1U] 
        = __Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__mix_column__254__Vfuncout;
    VL_ASSIGNSEL_WI(128, 8, 0U, vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__264__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__264__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__264__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__264__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__264__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__264__Vfuncout)) 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__265__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__265__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__265__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__265__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__265__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__265__Vfuncout))) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 8U, vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__266__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__266__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__266__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__266__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__266__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__266__Vfuncout))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__267__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__267__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__267__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__267__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__267__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__267__Vfuncout))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x10U, vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                       ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                           << 0x00000018U) 
                                          | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                             >> 8U))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__268__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__268__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__268__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__268__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__268__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__268__Vfuncout))) 
                                     ^ ([&]() {
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__269__a 
                                = (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                   >> 0x00000018U);
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__269__Vfuncout 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__269__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__269__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__269__a), 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__269__Vfuncout))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x18U, vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__270__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__270__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__270__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__270__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__270__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__270__Vfuncout)) 
                                       ^ vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U]) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ([&]() {
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__271__a 
                            = (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__shift_rows_out[0U] 
                               >> 0x00000018U);
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__271__Vfuncout 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__271__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__271__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__271__a), 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__xtime__271__Vfuncout)))));
    __Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__mix_column__263__Vfuncout 
        = vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out[0U];
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out[0U] 
        = __Vfunc_aes__DOT__round__BRA__6__KET____DOT__genblk1__DOT__mc__DOT__mix_column__263__Vfuncout;
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT__words_out[1U] 
        = vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1;
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__words_in[1U] 
        = vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1;
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2 
        = (vlSelfRef.aes__DOT__round__BRA__5__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2 
           ^ vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1);
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT__words_out[2U] 
        = vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__words_in[2U] 
        = vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
        = (vlSelfRef.aes__DOT__round__BRA__5__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
           ^ vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2);
    vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT__words_out[3U] 
        = vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__words_in[3U] 
        = vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__key[0U] 
        = vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__key[1U] 
        = vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__key[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0)) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1))));
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__key[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0)) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1))) 
                   >> 0x00000020U));
    vlSelfRef.aes__DOT__round_keys[7U][0U] = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__key[0U];
    vlSelfRef.aes__DOT__round_keys[7U][1U] = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__key[1U];
    vlSelfRef.aes__DOT__round_keys[7U][2U] = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__key[2U];
    vlSelfRef.aes__DOT__round_keys[7U][3U] = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__key[3U];
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__sb__DOT__in[0U] 
        = (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__key[0U] 
           ^ vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out[0U]);
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__sb__DOT__in[1U] 
        = (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__key[1U] 
           ^ vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out[1U]);
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__sb__DOT__in[2U] 
        = (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__key[2U] 
           ^ vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out[2U]);
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__sb__DOT__in[3U] 
        = (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__key[3U] 
           ^ vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__mix_columns_out[3U]);
    vlSelfRef.aes__DOT__state[7U][0U] = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__sb__DOT__in[0U];
    vlSelfRef.aes__DOT__state[7U][1U] = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__sb__DOT__in[1U];
    vlSelfRef.aes__DOT__state[7U][2U] = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__sb__DOT__in[2U];
    vlSelfRef.aes__DOT__state[7U][3U] = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__sb__DOT__in[3U];
}

void Vaes_functions___024root___ico_sequent__TOP__8(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___ico_sequent__TOP__8\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vfunc_shift_matrix__15__Vfuncout;
    VL_ZERO_W(128, __Vfunc_shift_matrix__15__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_shift_matrix__15__s;
    VL_ZERO_W(128, __Vfunc_shift_matrix__15__s);
    IData/*31:0*/ __Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__mix_column__272__Vfuncout;
    __Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__mix_column__272__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__mix_column__281__Vfuncout;
    __Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__mix_column__281__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__mix_column__290__Vfuncout;
    __Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__mix_column__290__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__mix_column__299__Vfuncout;
    __Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__mix_column__299__Vfuncout = 0;
    // Body
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_out[0U] 
        = vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_0.out;
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_out[1U] 
        = vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_1.out;
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_out[2U] 
        = vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_2.out;
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_out[3U] 
        = vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_3.out;
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0 
        = (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0 
           ^ (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_0.out) 
                 << 0x00000018U) | ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_1.out) 
                                    << 0x00000010U)) 
               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_2.out) 
                   << 8U) | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_3.out))) 
              ^ vlSelfRef.aes__DOT__rcon[7U]));
    __Vfunc_shift_matrix__15__s[0U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                        << 0x00000010U) 
                                       | ((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 0x0000000cU) 
                                           | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                              << 8U)) 
                                          | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                 << 3U) 
                                                | (4U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                    << 2U))) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                    << 1U)) 
                                                  | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                              << 4U) 
                                             | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    ^ 
                                                    (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                     << 1U)) 
                                                   | (1U 
                                                      ^ 
                                                      ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                       ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    __Vfunc_shift_matrix__15__s[1U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                        << 0x00000010U) 
                                       | ((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 0x0000000cU) 
                                           | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                              << 8U)) 
                                          | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                 << 3U) 
                                                | (4U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                    << 2U))) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                    << 1U)) 
                                                  | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                              << 4U) 
                                             | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    ^ 
                                                    (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                     << 1U)) 
                                                   | (1U 
                                                      ^ 
                                                      ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                       ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    __Vfunc_shift_matrix__15__s[2U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                        << 0x00000010U) 
                                       | ((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 0x0000000cU) 
                                           | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                              << 8U)) 
                                          | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                 << 3U) 
                                                | (4U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                    << 2U))) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                    << 1U)) 
                                                  | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                              << 4U) 
                                             | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    ^ 
                                                    (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                     << 1U)) 
                                                   | (1U 
                                                      ^ 
                                                      ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                       ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    __Vfunc_shift_matrix__15__s[3U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                        << 0x00000010U) 
                                       | ((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 0x0000000cU) 
                                           | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                              << 8U)) 
                                          | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                 << 3U) 
                                                | (4U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                    << 2U))) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                    << 1U)) 
                                                  | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                              << 4U) 
                                             | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    ^ 
                                                    (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                     << 1U)) 
                                                   | (1U 
                                                      ^ 
                                                      ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                       ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vfunc_shift_matrix__15__b[__Vi0] = 0;
    }
    vlSelfRef.__Vfunc_shift_matrix__15__b[0U] = (__Vfunc_shift_matrix__15__s[3U] 
                                                 >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__15__b[1U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__15__s[3U] 
                                                    >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__15__b[2U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__15__s[3U] 
                                                    >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__15__b[3U] = (0x000000ffU 
                                                 & __Vfunc_shift_matrix__15__s[3U]);
    vlSelfRef.__Vfunc_shift_matrix__15__b[4U] = (__Vfunc_shift_matrix__15__s[2U] 
                                                 >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__15__b[5U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__15__s[2U] 
                                                    >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__15__b[6U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__15__s[2U] 
                                                    >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__15__b[7U] = (0x000000ffU 
                                                 & __Vfunc_shift_matrix__15__s[2U]);
    vlSelfRef.__Vfunc_shift_matrix__15__b[8U] = (__Vfunc_shift_matrix__15__s[1U] 
                                                 >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__15__b[9U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__15__s[1U] 
                                                    >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__15__b[0x0aU] = 
        (0x000000ffU & (__Vfunc_shift_matrix__15__s[1U] 
                        >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__15__b[0x0bU] = 
        (0x000000ffU & __Vfunc_shift_matrix__15__s[1U]);
    vlSelfRef.__Vfunc_shift_matrix__15__b[0x0cU] = 
        (__Vfunc_shift_matrix__15__s[0U] >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__15__b[0x0dU] = 
        (0x000000ffU & (__Vfunc_shift_matrix__15__s[0U] 
                        >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__15__b[0x0eU] = 
        (0x000000ffU & (__Vfunc_shift_matrix__15__s[0U] 
                        >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__15__b[0x0fU] = 
        (0x000000ffU & __Vfunc_shift_matrix__15__s[0U]);
    __Vfunc_shift_matrix__15__Vfuncout[0U] = (((vlSelfRef.__Vfunc_shift_matrix__15__b
                                                [0x0fU] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__Vfunc_shift_matrix__15__b
                                                  [3U] 
                                                  << 0x00000010U)) 
                                              | ((vlSelfRef.__Vfunc_shift_matrix__15__b
                                                  [7U] 
                                                  << 8U) 
                                                 | vlSelfRef.__Vfunc_shift_matrix__15__b
                                                 [0x0bU]));
    __Vfunc_shift_matrix__15__Vfuncout[1U] = (((vlSelfRef.__Vfunc_shift_matrix__15__b
                                                [0x0aU] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__Vfunc_shift_matrix__15__b
                                                  [0x0eU] 
                                                  << 0x00000010U)) 
                                              | ((vlSelfRef.__Vfunc_shift_matrix__15__b
                                                  [2U] 
                                                  << 8U) 
                                                 | vlSelfRef.__Vfunc_shift_matrix__15__b
                                                 [6U]));
    __Vfunc_shift_matrix__15__Vfuncout[2U] = (((vlSelfRef.__Vfunc_shift_matrix__15__b
                                                [5U] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__Vfunc_shift_matrix__15__b
                                                  [9U] 
                                                  << 0x00000010U)) 
                                              | ((vlSelfRef.__Vfunc_shift_matrix__15__b
                                                  [0x0dU] 
                                                  << 8U) 
                                                 | vlSelfRef.__Vfunc_shift_matrix__15__b
                                                 [1U]));
    __Vfunc_shift_matrix__15__Vfuncout[3U] = (((vlSelfRef.__Vfunc_shift_matrix__15__b
                                                [0U] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__Vfunc_shift_matrix__15__b
                                                  [4U] 
                                                  << 0x00000010U)) 
                                              | ((vlSelfRef.__Vfunc_shift_matrix__15__b
                                                  [8U] 
                                                  << 8U) 
                                                 | vlSelfRef.__Vfunc_shift_matrix__15__b
                                                 [0x0cU]));
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
        = __Vfunc_shift_matrix__15__Vfuncout[0U];
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[1U] 
        = __Vfunc_shift_matrix__15__Vfuncout[1U];
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[2U] 
        = __Vfunc_shift_matrix__15__Vfuncout[2U];
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[3U] 
        = __Vfunc_shift_matrix__15__Vfuncout[3U];
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__words_out[0U] 
        = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0;
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__words_in[0U] 
        = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0;
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1 
        = (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1 
           ^ vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0);
    VL_ASSIGNSEL_WI(128, 8, 0U, vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__273__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__273__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__273__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__273__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__273__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__273__Vfuncout)) 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__274__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__274__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__274__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__274__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__274__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__274__Vfuncout))) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 8U, vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__275__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__275__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__275__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__275__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__275__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__275__Vfuncout))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__276__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__276__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__276__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__276__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__276__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__276__Vfuncout))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x10U, vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                       ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                           << 0x00000018U) 
                                          | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                             >> 8U))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__277__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__277__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__277__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__277__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__277__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__277__Vfuncout))) 
                                     ^ ([&]() {
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__278__a 
                                = (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                   >> 0x00000018U);
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__278__Vfuncout 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__278__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__278__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__278__a), 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__278__Vfuncout))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x18U, vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__279__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__279__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__279__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__279__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__279__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__279__Vfuncout)) 
                                       ^ vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U]) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ([&]() {
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__280__a 
                            = (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                               >> 0x00000018U);
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__280__Vfuncout 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__280__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__280__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__280__a), 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__280__Vfuncout)))));
    __Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__mix_column__272__Vfuncout 
        = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out[0U];
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out[3U] 
        = __Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__mix_column__272__Vfuncout;
    VL_ASSIGNSEL_WI(128, 8, 0U, vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__282__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__282__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__282__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__282__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__282__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__282__Vfuncout)) 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__283__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__283__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__283__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__283__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__283__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__283__Vfuncout))) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 8U, vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__284__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__284__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__284__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__284__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__284__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__284__Vfuncout))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__285__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__285__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__285__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__285__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__285__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__285__Vfuncout))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x10U, vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                       ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                           << 0x00000018U) 
                                          | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                             >> 8U))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__286__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__286__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__286__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__286__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__286__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__286__Vfuncout))) 
                                     ^ ([&]() {
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__287__a 
                                = (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                   >> 0x00000018U);
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__287__Vfuncout 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__287__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__287__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__287__a), 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__287__Vfuncout))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x18U, vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__288__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__288__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__288__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__288__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__288__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__288__Vfuncout)) 
                                       ^ vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U]) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ([&]() {
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__289__a 
                            = (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                               >> 0x00000018U);
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__289__Vfuncout 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__289__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__289__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__289__a), 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__289__Vfuncout)))));
    __Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__mix_column__281__Vfuncout 
        = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out[0U];
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out[2U] 
        = __Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__mix_column__281__Vfuncout;
    VL_ASSIGNSEL_WI(128, 8, 0U, vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__291__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__291__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__291__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__291__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__291__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__291__Vfuncout)) 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__292__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__292__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__292__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__292__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__292__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__292__Vfuncout))) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 8U, vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__293__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__293__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__293__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__293__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__293__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__293__Vfuncout))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__294__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__294__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__294__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__294__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__294__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__294__Vfuncout))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x10U, vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                       ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                           << 0x00000018U) 
                                          | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                             >> 8U))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__295__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__295__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__295__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__295__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__295__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__295__Vfuncout))) 
                                     ^ ([&]() {
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__296__a 
                                = (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                   >> 0x00000018U);
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__296__Vfuncout 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__296__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__296__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__296__a), 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__296__Vfuncout))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x18U, vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__297__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__297__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__297__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__297__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__297__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__297__Vfuncout)) 
                                       ^ vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U]) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ([&]() {
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__298__a 
                            = (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                               >> 0x00000018U);
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__298__Vfuncout 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__298__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__298__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__298__a), 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__298__Vfuncout)))));
    __Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__mix_column__290__Vfuncout 
        = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out[0U];
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out[1U] 
        = __Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__mix_column__290__Vfuncout;
    VL_ASSIGNSEL_WI(128, 8, 0U, vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__300__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__300__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__300__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__300__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__300__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__300__Vfuncout)) 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__301__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__301__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__301__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__301__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__301__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__301__Vfuncout))) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 8U, vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__302__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__302__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__302__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__302__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__302__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__302__Vfuncout))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__303__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__303__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__303__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__303__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__303__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__303__Vfuncout))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x10U, vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                       ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                           << 0x00000018U) 
                                          | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                             >> 8U))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__304__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__304__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__304__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__304__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__304__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__304__Vfuncout))) 
                                     ^ ([&]() {
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__305__a 
                                = (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                   >> 0x00000018U);
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__305__Vfuncout 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__305__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__305__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__305__a), 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__305__Vfuncout))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x18U, vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__306__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__306__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__306__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__306__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__306__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__306__Vfuncout)) 
                                       ^ vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U]) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ([&]() {
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__307__a 
                            = (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__shift_rows_out[0U] 
                               >> 0x00000018U);
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__307__Vfuncout 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__307__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__307__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__307__a), 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__xtime__307__Vfuncout)))));
    __Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__mix_column__299__Vfuncout 
        = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out[0U];
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out[0U] 
        = __Vfunc_aes__DOT__round__BRA__7__KET____DOT__genblk1__DOT__mc__DOT__mix_column__299__Vfuncout;
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__words_out[1U] 
        = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1;
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__words_in[1U] 
        = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1;
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2 
        = (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2 
           ^ vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1);
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__words_out[2U] 
        = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__words_in[2U] 
        = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
        = (vlSelfRef.aes__DOT__round__BRA__6__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
           ^ vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2);
    vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT__words_out[3U] 
        = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__words_in[3U] 
        = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__key[0U] 
        = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__key[1U] 
        = vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__key[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0)) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1))));
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__key[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0)) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1))) 
                   >> 0x00000020U));
    vlSelfRef.aes__DOT__round_keys[8U][0U] = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__key[0U];
    vlSelfRef.aes__DOT__round_keys[8U][1U] = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__key[1U];
    vlSelfRef.aes__DOT__round_keys[8U][2U] = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__key[2U];
    vlSelfRef.aes__DOT__round_keys[8U][3U] = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__key[3U];
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__sb__DOT__in[0U] 
        = (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__key[0U] 
           ^ vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out[0U]);
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__sb__DOT__in[1U] 
        = (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__key[1U] 
           ^ vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out[1U]);
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__sb__DOT__in[2U] 
        = (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__key[2U] 
           ^ vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out[2U]);
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__sb__DOT__in[3U] 
        = (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__key[3U] 
           ^ vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__mix_columns_out[3U]);
    vlSelfRef.aes__DOT__state[8U][0U] = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__sb__DOT__in[0U];
    vlSelfRef.aes__DOT__state[8U][1U] = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__sb__DOT__in[1U];
    vlSelfRef.aes__DOT__state[8U][2U] = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__sb__DOT__in[2U];
    vlSelfRef.aes__DOT__state[8U][3U] = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__sb__DOT__in[3U];
}

void Vaes_functions___024root___ico_sequent__TOP__9(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___ico_sequent__TOP__9\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlWide<4>/*127:0*/ __Vfunc_shift_matrix__17__Vfuncout;
    VL_ZERO_W(128, __Vfunc_shift_matrix__17__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_shift_matrix__17__s;
    VL_ZERO_W(128, __Vfunc_shift_matrix__17__s);
    IData/*31:0*/ __Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__mix_column__308__Vfuncout;
    __Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__mix_column__308__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__mix_column__317__Vfuncout;
    __Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__mix_column__317__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__mix_column__326__Vfuncout;
    __Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__mix_column__326__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__mix_column__335__Vfuncout;
    __Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__mix_column__335__Vfuncout = 0;
    // Body
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_out[0U] 
        = vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_0.out;
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_out[1U] 
        = vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_1.out;
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_out[2U] 
        = vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_2.out;
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_out[3U] 
        = vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_3.out;
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0 
        = (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0 
           ^ (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_0.out) 
                 << 0x00000018U) | ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_1.out) 
                                    << 0x00000010U)) 
               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_2.out) 
                   << 8U) | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_3.out))) 
              ^ vlSelfRef.aes__DOT__rcon[8U]));
    __Vfunc_shift_matrix__17__s[0U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                        << 0x00000010U) 
                                       | ((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 0x0000000cU) 
                                           | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                              << 8U)) 
                                          | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                 << 3U) 
                                                | (4U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                    << 2U))) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                    << 1U)) 
                                                  | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                              << 4U) 
                                             | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    ^ 
                                                    (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                     << 1U)) 
                                                   | (1U 
                                                      ^ 
                                                      ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                       ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    __Vfunc_shift_matrix__17__s[1U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                        << 0x00000010U) 
                                       | ((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 0x0000000cU) 
                                           | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                              << 8U)) 
                                          | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                 << 3U) 
                                                | (4U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                    << 2U))) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                    << 1U)) 
                                                  | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                              << 4U) 
                                             | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    ^ 
                                                    (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                     << 1U)) 
                                                   | (1U 
                                                      ^ 
                                                      ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                       ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    __Vfunc_shift_matrix__17__s[2U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                        << 0x00000010U) 
                                       | ((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 0x0000000cU) 
                                           | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                              << 8U)) 
                                          | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                 << 3U) 
                                                | (4U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                    << 2U))) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                    << 1U)) 
                                                  | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                              << 4U) 
                                             | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    ^ 
                                                    (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                     << 1U)) 
                                                   | (1U 
                                                      ^ 
                                                      ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                       ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    __Vfunc_shift_matrix__17__s[3U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                        << 0x00000010U) 
                                       | ((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 0x0000000cU) 
                                           | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                              << 8U)) 
                                          | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                 << 3U) 
                                                | (4U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                    << 2U))) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                    << 1U)) 
                                                  | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                              << 4U) 
                                             | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    ^ 
                                                    (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                     << 1U)) 
                                                   | (1U 
                                                      ^ 
                                                      ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                       ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vfunc_shift_matrix__17__b[__Vi0] = 0;
    }
    vlSelfRef.__Vfunc_shift_matrix__17__b[0U] = (__Vfunc_shift_matrix__17__s[3U] 
                                                 >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__17__b[1U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__17__s[3U] 
                                                    >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__17__b[2U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__17__s[3U] 
                                                    >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__17__b[3U] = (0x000000ffU 
                                                 & __Vfunc_shift_matrix__17__s[3U]);
    vlSelfRef.__Vfunc_shift_matrix__17__b[4U] = (__Vfunc_shift_matrix__17__s[2U] 
                                                 >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__17__b[5U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__17__s[2U] 
                                                    >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__17__b[6U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__17__s[2U] 
                                                    >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__17__b[7U] = (0x000000ffU 
                                                 & __Vfunc_shift_matrix__17__s[2U]);
    vlSelfRef.__Vfunc_shift_matrix__17__b[8U] = (__Vfunc_shift_matrix__17__s[1U] 
                                                 >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__17__b[9U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__17__s[1U] 
                                                    >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__17__b[0x0aU] = 
        (0x000000ffU & (__Vfunc_shift_matrix__17__s[1U] 
                        >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__17__b[0x0bU] = 
        (0x000000ffU & __Vfunc_shift_matrix__17__s[1U]);
    vlSelfRef.__Vfunc_shift_matrix__17__b[0x0cU] = 
        (__Vfunc_shift_matrix__17__s[0U] >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__17__b[0x0dU] = 
        (0x000000ffU & (__Vfunc_shift_matrix__17__s[0U] 
                        >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__17__b[0x0eU] = 
        (0x000000ffU & (__Vfunc_shift_matrix__17__s[0U] 
                        >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__17__b[0x0fU] = 
        (0x000000ffU & __Vfunc_shift_matrix__17__s[0U]);
    __Vfunc_shift_matrix__17__Vfuncout[0U] = (((vlSelfRef.__Vfunc_shift_matrix__17__b
                                                [0x0fU] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__Vfunc_shift_matrix__17__b
                                                  [3U] 
                                                  << 0x00000010U)) 
                                              | ((vlSelfRef.__Vfunc_shift_matrix__17__b
                                                  [7U] 
                                                  << 8U) 
                                                 | vlSelfRef.__Vfunc_shift_matrix__17__b
                                                 [0x0bU]));
    __Vfunc_shift_matrix__17__Vfuncout[1U] = (((vlSelfRef.__Vfunc_shift_matrix__17__b
                                                [0x0aU] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__Vfunc_shift_matrix__17__b
                                                  [0x0eU] 
                                                  << 0x00000010U)) 
                                              | ((vlSelfRef.__Vfunc_shift_matrix__17__b
                                                  [2U] 
                                                  << 8U) 
                                                 | vlSelfRef.__Vfunc_shift_matrix__17__b
                                                 [6U]));
    __Vfunc_shift_matrix__17__Vfuncout[2U] = (((vlSelfRef.__Vfunc_shift_matrix__17__b
                                                [5U] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__Vfunc_shift_matrix__17__b
                                                  [9U] 
                                                  << 0x00000010U)) 
                                              | ((vlSelfRef.__Vfunc_shift_matrix__17__b
                                                  [0x0dU] 
                                                  << 8U) 
                                                 | vlSelfRef.__Vfunc_shift_matrix__17__b
                                                 [1U]));
    __Vfunc_shift_matrix__17__Vfuncout[3U] = (((vlSelfRef.__Vfunc_shift_matrix__17__b
                                                [0U] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__Vfunc_shift_matrix__17__b
                                                  [4U] 
                                                  << 0x00000010U)) 
                                              | ((vlSelfRef.__Vfunc_shift_matrix__17__b
                                                  [8U] 
                                                  << 8U) 
                                                 | vlSelfRef.__Vfunc_shift_matrix__17__b
                                                 [0x0cU]));
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
        = __Vfunc_shift_matrix__17__Vfuncout[0U];
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[1U] 
        = __Vfunc_shift_matrix__17__Vfuncout[1U];
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[2U] 
        = __Vfunc_shift_matrix__17__Vfuncout[2U];
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[3U] 
        = __Vfunc_shift_matrix__17__Vfuncout[3U];
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__words_out[0U] 
        = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0;
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__words_in[0U] 
        = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0;
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1 
        = (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1 
           ^ vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0);
    VL_ASSIGNSEL_WI(128, 8, 0U, vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__309__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__309__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__309__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__309__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__309__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__309__Vfuncout)) 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__310__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__310__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__310__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__310__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__310__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__310__Vfuncout))) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 8U, vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__311__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__311__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__311__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__311__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__311__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__311__Vfuncout))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__312__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__312__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__312__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__312__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__312__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__312__Vfuncout))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x10U, vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                       ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                           << 0x00000018U) 
                                          | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                             >> 8U))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__313__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__313__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__313__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__313__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__313__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__313__Vfuncout))) 
                                     ^ ([&]() {
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__314__a 
                                = (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                   >> 0x00000018U);
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__314__Vfuncout 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__314__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__314__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__314__a), 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__314__Vfuncout))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x18U, vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__315__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__315__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__315__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__315__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__315__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__315__Vfuncout)) 
                                       ^ vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U]) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ([&]() {
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__316__a 
                            = (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                               >> 0x00000018U);
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__316__Vfuncout 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__316__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__316__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__316__a), 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__316__Vfuncout)))));
    __Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__mix_column__308__Vfuncout 
        = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out[0U];
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out[3U] 
        = __Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__mix_column__308__Vfuncout;
    VL_ASSIGNSEL_WI(128, 8, 0U, vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__318__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__318__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__318__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__318__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__318__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__318__Vfuncout)) 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__319__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__319__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__319__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__319__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__319__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__319__Vfuncout))) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 8U, vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__320__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__320__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__320__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__320__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__320__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__320__Vfuncout))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__321__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__321__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__321__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__321__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__321__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__321__Vfuncout))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x10U, vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                       ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                           << 0x00000018U) 
                                          | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                             >> 8U))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__322__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__322__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__322__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__322__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__322__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__322__Vfuncout))) 
                                     ^ ([&]() {
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__323__a 
                                = (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                   >> 0x00000018U);
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__323__Vfuncout 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__323__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__323__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__323__a), 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__323__Vfuncout))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x18U, vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__324__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__324__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__324__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__324__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__324__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__324__Vfuncout)) 
                                       ^ vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U]) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ([&]() {
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__325__a 
                            = (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                               >> 0x00000018U);
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__325__Vfuncout 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__325__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__325__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__325__a), 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__325__Vfuncout)))));
    __Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__mix_column__317__Vfuncout 
        = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out[0U];
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out[2U] 
        = __Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__mix_column__317__Vfuncout;
    VL_ASSIGNSEL_WI(128, 8, 0U, vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__327__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__327__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__327__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__327__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__327__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__327__Vfuncout)) 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__328__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__328__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__328__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__328__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__328__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__328__Vfuncout))) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 8U, vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__329__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__329__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__329__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__329__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__329__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__329__Vfuncout))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__330__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__330__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__330__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__330__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__330__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__330__Vfuncout))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x10U, vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                       ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                           << 0x00000018U) 
                                          | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                             >> 8U))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__331__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__331__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__331__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__331__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__331__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__331__Vfuncout))) 
                                     ^ ([&]() {
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__332__a 
                                = (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                   >> 0x00000018U);
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__332__Vfuncout 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__332__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__332__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__332__a), 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__332__Vfuncout))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x18U, vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__333__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__333__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__333__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__333__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__333__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__333__Vfuncout)) 
                                       ^ vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U]) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ([&]() {
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__334__a 
                            = (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                               >> 0x00000018U);
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__334__Vfuncout 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__334__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__334__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__334__a), 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__334__Vfuncout)))));
    __Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__mix_column__326__Vfuncout 
        = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out[0U];
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out[1U] 
        = __Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__mix_column__326__Vfuncout;
    VL_ASSIGNSEL_WI(128, 8, 0U, vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__336__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__336__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__336__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__336__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__336__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__336__Vfuncout)) 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__337__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__337__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__337__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__337__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__337__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__337__Vfuncout))) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 8U, vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                       ^ ([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__338__a 
                                        = (0x000000ffU 
                                           & (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                              >> 8U));
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__338__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__338__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__338__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__338__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__338__Vfuncout))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__339__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__339__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__339__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__339__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__339__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__339__Vfuncout))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x10U, vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                       ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                           << 0x00000018U) 
                                          | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                             >> 8U))) 
                                      ^ ([&]() {
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__340__a 
                                    = (0x000000ffU 
                                       & (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                          >> 0x00000010U));
                                vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__340__Vfuncout 
                                    = (0x000000ffU 
                                       & ((0x00000080U 
                                           & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__340__a))
                                           ? (0x1bU 
                                              ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__340__a), 1U))
                                           : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__340__a), 1U)));
                            }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__340__Vfuncout))) 
                                     ^ ([&]() {
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__341__a 
                                = (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                   >> 0x00000018U);
                            vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__341__Vfuncout 
                                = (0x000000ffU & ((0x00000080U 
                                                   & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__341__a))
                                                   ? 
                                                  (0x1bU 
                                                   ^ 
                                                   VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__341__a), 1U))
                                                   : 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__341__a), 1U)));
                        }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__341__Vfuncout))) 
                                    ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                        << 8U) | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                                  >> 0x00000018U)))));
    VL_ASSIGNSEL_WI(128, 8, 0x18U, vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out, 
                    (0x000000ffU & ((((([&]() {
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__342__a 
                                        = (0x000000ffU 
                                           & vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U]);
                                    vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__342__Vfuncout 
                                        = (0x000000ffU 
                                           & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__342__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__342__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__342__a), 1U)));
                                }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__342__Vfuncout)) 
                                       ^ vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U]) 
                                      ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                          << 0x00000018U) 
                                         | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                            >> 8U))) 
                                     ^ ((vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                         << 0x00000010U) 
                                        | (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                                           >> 0x00000010U))) 
                                    ^ ([&]() {
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__343__a 
                            = (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__shift_rows_out[0U] 
                               >> 0x00000018U);
                        vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__343__Vfuncout 
                            = (0x000000ffU & ((0x00000080U 
                                               & (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__343__a))
                                               ? (0x1bU 
                                                  ^ 
                                                  VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__343__a), 1U))
                                               : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__343__a), 1U)));
                    }(), (IData)(vlSelfRef.__Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__xtime__343__Vfuncout)))));
    __Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__mix_column__335__Vfuncout 
        = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out[0U];
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out[0U] 
        = __Vfunc_aes__DOT__round__BRA__8__KET____DOT__genblk1__DOT__mc__DOT__mix_column__335__Vfuncout;
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__words_out[1U] 
        = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1;
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__words_in[1U] 
        = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1;
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2 
        = (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2 
           ^ vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1);
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__words_out[2U] 
        = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__words_in[2U] 
        = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
        = (vlSelfRef.aes__DOT__round__BRA__7__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
           ^ vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2);
    vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT__words_out[3U] 
        = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__words_in[3U] 
        = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__key[0U] 
        = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__key[1U] 
        = vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__key[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0)) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1))));
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__key[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0)) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1))) 
                   >> 0x00000020U));
    vlSelfRef.aes__DOT__round_keys[9U][0U] = vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__key[0U];
    vlSelfRef.aes__DOT__round_keys[9U][1U] = vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__key[1U];
    vlSelfRef.aes__DOT__round_keys[9U][2U] = vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__key[2U];
    vlSelfRef.aes__DOT__round_keys[9U][3U] = vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__key[3U];
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__sb__DOT__in[0U] 
        = (vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__key[0U] 
           ^ vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out[0U]);
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__sb__DOT__in[1U] 
        = (vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__key[1U] 
           ^ vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out[1U]);
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__sb__DOT__in[2U] 
        = (vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__key[2U] 
           ^ vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out[2U]);
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__sb__DOT__in[3U] 
        = (vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__key[3U] 
           ^ vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__mix_columns_out[3U]);
    vlSelfRef.aes__DOT__state[9U][0U] = vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__sb__DOT__in[0U];
    vlSelfRef.aes__DOT__state[9U][1U] = vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__sb__DOT__in[1U];
    vlSelfRef.aes__DOT__state[9U][2U] = vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__sb__DOT__in[2U];
    vlSelfRef.aes__DOT__state[9U][3U] = vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__sb__DOT__in[3U];
}

void Vaes_functions___024root___ico_sequent__TOP__10(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___ico_sequent__TOP__10\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0;
    aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0 = 0;
    IData/*31:0*/ aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1;
    aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1 = 0;
    IData/*31:0*/ aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2 = 0;
    IData/*31:0*/ aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 = 0;
    VlWide<4>/*127:0*/ __Vfunc_shift_matrix__19__Vfuncout;
    VL_ZERO_W(128, __Vfunc_shift_matrix__19__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_shift_matrix__19__s;
    VL_ZERO_W(128, __Vfunc_shift_matrix__19__s);
    // Body
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_out[0U] 
        = vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_0.out;
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_out[1U] 
        = vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_1.out;
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_out[2U] 
        = vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_2.out;
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_out[3U] 
        = vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_3.out;
    aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0 
        = (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0 
           ^ (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_0.out) 
                 << 0x00000018U) | ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_1.out) 
                                    << 0x00000010U)) 
               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_2.out) 
                   << 8U) | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_3.out))) 
              ^ vlSelfRef.aes__DOT__rcon[9U]));
    __Vfunc_shift_matrix__19__s[0U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                        << 0x00000010U) 
                                       | ((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 0x0000000cU) 
                                           | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                              << 8U)) 
                                          | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                 << 3U) 
                                                | (4U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                    << 2U))) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                    << 1U)) 
                                                  | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                              << 4U) 
                                             | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    ^ 
                                                    (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                     << 1U)) 
                                                   | (1U 
                                                      ^ 
                                                      ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                       ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    __Vfunc_shift_matrix__19__s[1U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                        << 0x00000010U) 
                                       | ((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 0x0000000cU) 
                                           | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                              << 8U)) 
                                          | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                 << 3U) 
                                                | (4U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                    << 2U))) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                    << 1U)) 
                                                  | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                              << 4U) 
                                             | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    ^ 
                                                    (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                     << 1U)) 
                                                   | (1U 
                                                      ^ 
                                                      ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                       ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    __Vfunc_shift_matrix__19__s[2U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                        << 0x00000010U) 
                                       | ((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 0x0000000cU) 
                                           | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                              << 8U)) 
                                          | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                 << 3U) 
                                                | (4U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                    << 2U))) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                    << 1U)) 
                                                  | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                              << 4U) 
                                             | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    ^ 
                                                    (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                     << 1U)) 
                                                   | (1U 
                                                      ^ 
                                                      ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                       ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    __Vfunc_shift_matrix__19__s[3U] = ((((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                               ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                              << 3U) 
                                             | (4U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                            | ((2U 
                                                ^ (
                                                   ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                               | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                           << 0x0000000cU) 
                                          | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                  << 2U)) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                   << 1U)) 
                                                 | (1U 
                                                    ^ 
                                                    ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                             << 8U)) 
                                         | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                 ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                << 3U) 
                                               | (4U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                   << 2U))) 
                                              | ((2U 
                                                  ^ 
                                                  (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                   << 1U)) 
                                                 | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                             << 4U) 
                                            | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))) 
                                        << 0x00000010U) 
                                       | ((((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                               << 3U) 
                                              | (4U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                  << 2U))) 
                                             | ((2U 
                                                 ^ 
                                                 (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                  << 1U)) 
                                                | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                            << 0x0000000cU) 
                                           | ((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                    ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                   << 2U)) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                    << 1U)) 
                                                  | (1U 
                                                     ^ 
                                                     ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.__PVT__t__BRA__60__KET__))))) 
                                              << 8U)) 
                                          | (((((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__59__KET__) 
                                                  ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__63__KET__)) 
                                                 << 3U) 
                                                | (4U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__64__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0)) 
                                                    << 2U))) 
                                               | ((2U 
                                                   ^ 
                                                   (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__55__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__67__KET__)) 
                                                    << 1U)) 
                                                  | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__VdfgRegularize_h224e5c7b_0_0))) 
                                              << 4U) 
                                             | (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__51__KET__) 
                                                   ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__66__KET__)) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__47__KET__) 
                                                     ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__65__KET__)) 
                                                    << 2U)) 
                                                | ((2U 
                                                    ^ 
                                                    (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__56__KET__) 
                                                      ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__62__KET__)) 
                                                     << 1U)) 
                                                   | (1U 
                                                      ^ 
                                                      ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__48__KET__) 
                                                       ^ (IData)(vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.__PVT__t__BRA__60__KET__))))))));
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__Vfunc_shift_matrix__19__b[__Vi0] = 0;
    }
    vlSelfRef.__Vfunc_shift_matrix__19__b[0U] = (__Vfunc_shift_matrix__19__s[3U] 
                                                 >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__19__b[1U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__19__s[3U] 
                                                    >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__19__b[2U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__19__s[3U] 
                                                    >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__19__b[3U] = (0x000000ffU 
                                                 & __Vfunc_shift_matrix__19__s[3U]);
    vlSelfRef.__Vfunc_shift_matrix__19__b[4U] = (__Vfunc_shift_matrix__19__s[2U] 
                                                 >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__19__b[5U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__19__s[2U] 
                                                    >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__19__b[6U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__19__s[2U] 
                                                    >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__19__b[7U] = (0x000000ffU 
                                                 & __Vfunc_shift_matrix__19__s[2U]);
    vlSelfRef.__Vfunc_shift_matrix__19__b[8U] = (__Vfunc_shift_matrix__19__s[1U] 
                                                 >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__19__b[9U] = (0x000000ffU 
                                                 & (__Vfunc_shift_matrix__19__s[1U] 
                                                    >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__19__b[0x0aU] = 
        (0x000000ffU & (__Vfunc_shift_matrix__19__s[1U] 
                        >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__19__b[0x0bU] = 
        (0x000000ffU & __Vfunc_shift_matrix__19__s[1U]);
    vlSelfRef.__Vfunc_shift_matrix__19__b[0x0cU] = 
        (__Vfunc_shift_matrix__19__s[0U] >> 0x00000018U);
    vlSelfRef.__Vfunc_shift_matrix__19__b[0x0dU] = 
        (0x000000ffU & (__Vfunc_shift_matrix__19__s[0U] 
                        >> 0x00000010U));
    vlSelfRef.__Vfunc_shift_matrix__19__b[0x0eU] = 
        (0x000000ffU & (__Vfunc_shift_matrix__19__s[0U] 
                        >> 8U));
    vlSelfRef.__Vfunc_shift_matrix__19__b[0x0fU] = 
        (0x000000ffU & __Vfunc_shift_matrix__19__s[0U]);
    __Vfunc_shift_matrix__19__Vfuncout[0U] = (((vlSelfRef.__Vfunc_shift_matrix__19__b
                                                [0x0fU] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__Vfunc_shift_matrix__19__b
                                                  [3U] 
                                                  << 0x00000010U)) 
                                              | ((vlSelfRef.__Vfunc_shift_matrix__19__b
                                                  [7U] 
                                                  << 8U) 
                                                 | vlSelfRef.__Vfunc_shift_matrix__19__b
                                                 [0x0bU]));
    __Vfunc_shift_matrix__19__Vfuncout[1U] = (((vlSelfRef.__Vfunc_shift_matrix__19__b
                                                [0x0aU] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__Vfunc_shift_matrix__19__b
                                                  [0x0eU] 
                                                  << 0x00000010U)) 
                                              | ((vlSelfRef.__Vfunc_shift_matrix__19__b
                                                  [2U] 
                                                  << 8U) 
                                                 | vlSelfRef.__Vfunc_shift_matrix__19__b
                                                 [6U]));
    __Vfunc_shift_matrix__19__Vfuncout[2U] = (((vlSelfRef.__Vfunc_shift_matrix__19__b
                                                [5U] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__Vfunc_shift_matrix__19__b
                                                  [9U] 
                                                  << 0x00000010U)) 
                                              | ((vlSelfRef.__Vfunc_shift_matrix__19__b
                                                  [0x0dU] 
                                                  << 8U) 
                                                 | vlSelfRef.__Vfunc_shift_matrix__19__b
                                                 [1U]));
    __Vfunc_shift_matrix__19__Vfuncout[3U] = (((vlSelfRef.__Vfunc_shift_matrix__19__b
                                                [0U] 
                                                << 0x00000018U) 
                                               | (vlSelfRef.__Vfunc_shift_matrix__19__b
                                                  [4U] 
                                                  << 0x00000010U)) 
                                              | ((vlSelfRef.__Vfunc_shift_matrix__19__b
                                                  [8U] 
                                                  << 8U) 
                                                 | vlSelfRef.__Vfunc_shift_matrix__19__b
                                                 [0x0cU]));
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__shift_rows_out[0U] 
        = __Vfunc_shift_matrix__19__Vfuncout[0U];
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__shift_rows_out[1U] 
        = __Vfunc_shift_matrix__19__Vfuncout[1U];
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__shift_rows_out[2U] 
        = __Vfunc_shift_matrix__19__Vfuncout[2U];
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__shift_rows_out[3U] 
        = __Vfunc_shift_matrix__19__Vfuncout[3U];
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__words_out[0U] 
        = aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0;
    aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1 
        = (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1 
           ^ aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0);
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__words_out[1U] 
        = aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1;
    aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2 
        = (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2 
           ^ aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1);
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__words_out[2U] 
        = aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
        = (vlSelfRef.aes__DOT__round__BRA__8__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
           ^ aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2);
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__words_out[3U] 
        = aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__round_key[0U] 
        = aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__round_key[1U] 
        = aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__round_key[2U] 
        = (IData)((((QData)((IData)(aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0)) 
                    << 0x00000020U) | (QData)((IData)(aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1))));
    vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__round_key[3U] 
        = (IData)(((((QData)((IData)(aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0)) 
                     << 0x00000020U) | (QData)((IData)(aes__DOT__round__BRA__9__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1))) 
                   >> 0x00000020U));
    vlSelfRef.aes__DOT__round_keys[0x0000000aU][0U] 
        = vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__round_key[0U];
    vlSelfRef.aes__DOT__round_keys[0x0000000aU][1U] 
        = vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__round_key[1U];
    vlSelfRef.aes__DOT__round_keys[0x0000000aU][2U] 
        = vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__round_key[2U];
    vlSelfRef.aes__DOT__round_keys[0x0000000aU][3U] 
        = vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__round_key[3U];
    vlSelfRef.ciphertext[0U] = (vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__round_key[0U] 
                                ^ vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__shift_rows_out[0U]);
    vlSelfRef.ciphertext[1U] = (vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__round_key[1U] 
                                ^ vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__shift_rows_out[1U]);
    vlSelfRef.ciphertext[2U] = (vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__round_key[2U] 
                                ^ vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__shift_rows_out[2U]);
    vlSelfRef.ciphertext[3U] = (vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__kg__DOT__round_key[3U] 
                                ^ vlSelfRef.aes__DOT__round__BRA__9__KET____DOT__shift_rows_out[3U]);
    vlSelfRef.aes__DOT__state[0x0000000aU][0U] = vlSelfRef.ciphertext[0U];
    vlSelfRef.aes__DOT__state[0x0000000aU][1U] = vlSelfRef.ciphertext[1U];
    vlSelfRef.aes__DOT__state[0x0000000aU][2U] = vlSelfRef.ciphertext[2U];
    vlSelfRef.aes__DOT__state[0x0000000aU][3U] = vlSelfRef.ciphertext[3U];
}

void Vaes_functions___024root___ico_sequent__TOP__0(Vaes_functions___024root* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__kg__DOT__sbox_0__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__kg__DOT__sbox_1__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__kg__DOT__sbox_2__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__kg__DOT__sbox_3__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions___024root___ico_sequent__TOP__1(Vaes_functions___024root* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_0__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_1__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_2__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_3__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions___024root___ico_sequent__TOP__2(Vaes_functions___024root* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_0__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_1__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_2__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_3__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions___024root___ico_sequent__TOP__3(Vaes_functions___024root* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_0__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_1__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_2__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_3__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions___024root___ico_sequent__TOP__4(Vaes_functions___024root* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_0__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_1__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_2__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_3__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions___024root___ico_sequent__TOP__5(Vaes_functions___024root* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_0__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_1__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_2__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_3__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions___024root___ico_sequent__TOP__6(Vaes_functions___024root* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_0__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_1__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_2__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_3__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_0__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_1__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_2__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_3__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_0__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_1__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_2__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_3__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_0__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_1__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_2__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_3__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);
void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf);

void Vaes_functions___024root___eval_ico(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_ico\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vaes_functions___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__1(vlSelf);
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__2(vlSelf);
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__3(vlSelf);
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__4(vlSelf);
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__5(vlSelf);
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__6(vlSelf);
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__7(vlSelf);
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__8(vlSelf);
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__9(vlSelf);
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__10(vlSelf);
    }
}

void Vaes_functions___024root___eval_triggers__ico(Vaes_functions___024root* vlSelf);
bool Vaes_functions___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

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
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(vlSelfRef.__Vtrigprevexpr___TOP__aes__DOT__rcon__1.neq(vlSelfRef.aes__DOT__rcon)));
    vlSelfRef.__Vtrigprevexpr___TOP__aes__DOT__rcon__1.assign(vlSelfRef.aes__DOT__rcon);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered[0U] = (1ULL | vlSelfRef.__VactTriggered
                                         [0U]);
    }
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

void Vaes_functions___024root___act_sequent__TOP__0(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___act_sequent__TOP__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtemp_1;
    IData/*31:0*/ __Vtemp_2;
    IData/*31:0*/ __Vtemp_3;
    IData/*31:0*/ __Vtemp_4;
    IData/*31:0*/ __Vtemp_5;
    IData/*31:0*/ __Vtemp_6;
    IData/*31:0*/ __Vtemp_7;
    IData/*31:0*/ __Vtemp_8;
    IData/*31:0*/ __Vtemp_9;
    IData/*31:0*/ __Vtemp_10;
    // Body
    __Vtemp_1 = VL_EXTEND_II(32,8, ([&]() {
                vlSelfRef.__Vfunc_xtime__0__a = (0x000000ffU 
                                                 & vlSelfRef.aes__DOT__rcon
                                                 [0U]);
                vlSelfRef.__Vfunc_xtime__0__result 
                    = (0x000000ffU & ((0x00000080U 
                                       & (IData)(vlSelfRef.__Vfunc_xtime__0__a))
                                       ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__0__a), 1U))
                                       : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__0__a), 1U)));
                vlSelfRef.__Vfunc_xtime__0__Vfuncout 
                    = vlSelfRef.__Vfunc_xtime__0__result;
            }(), (IData)(vlSelfRef.__Vfunc_xtime__0__Vfuncout)));
    vlSelfRef.aes__DOT__rcon[1U] = __Vtemp_1;
    __Vtemp_2 = VL_EXTEND_II(32,8, ([&]() {
                vlSelfRef.__Vfunc_xtime__2__a = (0x000000ffU 
                                                 & vlSelfRef.aes__DOT__rcon
                                                 [1U]);
                vlSelfRef.__Vfunc_xtime__2__result 
                    = (0x000000ffU & ((0x00000080U 
                                       & (IData)(vlSelfRef.__Vfunc_xtime__2__a))
                                       ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__2__a), 1U))
                                       : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__2__a), 1U)));
                vlSelfRef.__Vfunc_xtime__2__Vfuncout 
                    = vlSelfRef.__Vfunc_xtime__2__result;
            }(), (IData)(vlSelfRef.__Vfunc_xtime__2__Vfuncout)));
    vlSelfRef.aes__DOT__rcon[2U] = __Vtemp_2;
    __Vtemp_3 = VL_EXTEND_II(32,8, ([&]() {
                vlSelfRef.__Vfunc_xtime__4__a = (0x000000ffU 
                                                 & vlSelfRef.aes__DOT__rcon
                                                 [2U]);
                vlSelfRef.__Vfunc_xtime__4__result 
                    = (0x000000ffU & ((0x00000080U 
                                       & (IData)(vlSelfRef.__Vfunc_xtime__4__a))
                                       ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__4__a), 1U))
                                       : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__4__a), 1U)));
                vlSelfRef.__Vfunc_xtime__4__Vfuncout 
                    = vlSelfRef.__Vfunc_xtime__4__result;
            }(), (IData)(vlSelfRef.__Vfunc_xtime__4__Vfuncout)));
    vlSelfRef.aes__DOT__rcon[3U] = __Vtemp_3;
    __Vtemp_4 = VL_EXTEND_II(32,8, ([&]() {
                vlSelfRef.__Vfunc_xtime__6__a = (0x000000ffU 
                                                 & vlSelfRef.aes__DOT__rcon
                                                 [3U]);
                vlSelfRef.__Vfunc_xtime__6__result 
                    = (0x000000ffU & ((0x00000080U 
                                       & (IData)(vlSelfRef.__Vfunc_xtime__6__a))
                                       ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__6__a), 1U))
                                       : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__6__a), 1U)));
                vlSelfRef.__Vfunc_xtime__6__Vfuncout 
                    = vlSelfRef.__Vfunc_xtime__6__result;
            }(), (IData)(vlSelfRef.__Vfunc_xtime__6__Vfuncout)));
    vlSelfRef.aes__DOT__rcon[4U] = __Vtemp_4;
    __Vtemp_5 = VL_EXTEND_II(32,8, ([&]() {
                vlSelfRef.__Vfunc_xtime__8__a = (0x000000ffU 
                                                 & vlSelfRef.aes__DOT__rcon
                                                 [4U]);
                vlSelfRef.__Vfunc_xtime__8__result 
                    = (0x000000ffU & ((0x00000080U 
                                       & (IData)(vlSelfRef.__Vfunc_xtime__8__a))
                                       ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__8__a), 1U))
                                       : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__8__a), 1U)));
                vlSelfRef.__Vfunc_xtime__8__Vfuncout 
                    = vlSelfRef.__Vfunc_xtime__8__result;
            }(), (IData)(vlSelfRef.__Vfunc_xtime__8__Vfuncout)));
    vlSelfRef.aes__DOT__rcon[5U] = __Vtemp_5;
    __Vtemp_6 = VL_EXTEND_II(32,8, ([&]() {
                vlSelfRef.__Vfunc_xtime__10__a = (0x000000ffU 
                                                  & vlSelfRef.aes__DOT__rcon
                                                  [5U]);
                vlSelfRef.__Vfunc_xtime__10__result 
                    = (0x000000ffU & ((0x00000080U 
                                       & (IData)(vlSelfRef.__Vfunc_xtime__10__a))
                                       ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__10__a), 1U))
                                       : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__10__a), 1U)));
                vlSelfRef.__Vfunc_xtime__10__Vfuncout 
                    = vlSelfRef.__Vfunc_xtime__10__result;
            }(), (IData)(vlSelfRef.__Vfunc_xtime__10__Vfuncout)));
    vlSelfRef.aes__DOT__rcon[6U] = __Vtemp_6;
    __Vtemp_7 = VL_EXTEND_II(32,8, ([&]() {
                vlSelfRef.__Vfunc_xtime__12__a = (0x000000ffU 
                                                  & vlSelfRef.aes__DOT__rcon
                                                  [6U]);
                vlSelfRef.__Vfunc_xtime__12__result 
                    = (0x000000ffU & ((0x00000080U 
                                       & (IData)(vlSelfRef.__Vfunc_xtime__12__a))
                                       ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__12__a), 1U))
                                       : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__12__a), 1U)));
                vlSelfRef.__Vfunc_xtime__12__Vfuncout 
                    = vlSelfRef.__Vfunc_xtime__12__result;
            }(), (IData)(vlSelfRef.__Vfunc_xtime__12__Vfuncout)));
    vlSelfRef.aes__DOT__rcon[7U] = __Vtemp_7;
    __Vtemp_8 = VL_EXTEND_II(32,8, ([&]() {
                vlSelfRef.__Vfunc_xtime__14__a = (0x000000ffU 
                                                  & vlSelfRef.aes__DOT__rcon
                                                  [7U]);
                vlSelfRef.__Vfunc_xtime__14__result 
                    = (0x000000ffU & ((0x00000080U 
                                       & (IData)(vlSelfRef.__Vfunc_xtime__14__a))
                                       ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__14__a), 1U))
                                       : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__14__a), 1U)));
                vlSelfRef.__Vfunc_xtime__14__Vfuncout 
                    = vlSelfRef.__Vfunc_xtime__14__result;
            }(), (IData)(vlSelfRef.__Vfunc_xtime__14__Vfuncout)));
    vlSelfRef.aes__DOT__rcon[8U] = __Vtemp_8;
    __Vtemp_9 = VL_EXTEND_II(32,8, ([&]() {
                vlSelfRef.__Vfunc_xtime__16__a = (0x000000ffU 
                                                  & vlSelfRef.aes__DOT__rcon
                                                  [8U]);
                vlSelfRef.__Vfunc_xtime__16__result 
                    = (0x000000ffU & ((0x00000080U 
                                       & (IData)(vlSelfRef.__Vfunc_xtime__16__a))
                                       ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__16__a), 1U))
                                       : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__16__a), 1U)));
                vlSelfRef.__Vfunc_xtime__16__Vfuncout 
                    = vlSelfRef.__Vfunc_xtime__16__result;
            }(), (IData)(vlSelfRef.__Vfunc_xtime__16__Vfuncout)));
    vlSelfRef.aes__DOT__rcon[9U] = __Vtemp_9;
    __Vtemp_10 = VL_EXTEND_II(32,8, ([&]() {
                vlSelfRef.__Vfunc_xtime__18__a = (0x000000ffU 
                                                  & vlSelfRef.aes__DOT__rcon
                                                  [9U]);
                vlSelfRef.__Vfunc_xtime__18__result 
                    = (0x000000ffU & ((0x00000080U 
                                       & (IData)(vlSelfRef.__Vfunc_xtime__18__a))
                                       ? (0x1bU ^ VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__18__a), 1U))
                                       : VL_SHIFTL_III(8,8,32, (IData)(vlSelfRef.__Vfunc_xtime__18__a), 1U)));
                vlSelfRef.__Vfunc_xtime__18__Vfuncout 
                    = vlSelfRef.__Vfunc_xtime__18__result;
            }(), (IData)(vlSelfRef.__Vfunc_xtime__18__Vfuncout)));
    vlSelfRef.aes__DOT__rcon[0x0aU] = __Vtemp_10;
    vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0 
        = (vlSelfRef.key[3U] ^ (((((IData)(vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__kg__DOT__sbox_0.out) 
                                   << 0x00000018U) 
                                  | ((IData)(vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__kg__DOT__sbox_1.out) 
                                     << 0x00000010U)) 
                                 | (((IData)(vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__kg__DOT__sbox_2.out) 
                                     << 8U) | (IData)(vlSymsp->TOP__aes__DOT__round__BRA__0__KET____DOT__kg__DOT__sbox_3.out))) 
                                ^ vlSelfRef.aes__DOT__rcon
                                [0U]));
    vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT__words_out[0U] 
        = vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0;
    vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__kg__DOT__words_in[0U] 
        = vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0;
    vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1 
        = (vlSelfRef.key[2U] ^ vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0);
    vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT__words_out[1U] 
        = vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1;
    vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__kg__DOT__words_in[1U] 
        = vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1;
    vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2 
        = (vlSelfRef.key[1U] ^ vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1);
    vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT__words_out[2U] 
        = vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__kg__DOT__words_in[2U] 
        = vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
        = (vlSelfRef.key[0U] ^ vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2);
    vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT__words_out[3U] 
        = vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__kg__DOT__words_in[3U] 
        = vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__kg__DOT__key[0U] 
        = vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3;
    vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__kg__DOT__key[1U] 
        = vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_2;
    vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__kg__DOT__key[2U] 
        = (IData)((((QData)((IData)(vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0)) 
                    << 0x00000020U) | (QData)((IData)(vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1))));
    vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__kg__DOT__key[3U] 
        = (IData)(((((QData)((IData)(vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_0)) 
                     << 0x00000020U) | (QData)((IData)(vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_1))) 
                   >> 0x00000020U));
    vlSelfRef.aes__DOT__round_keys[1U][0U] = vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__kg__DOT__key[0U];
    vlSelfRef.aes__DOT__round_keys[1U][1U] = vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__kg__DOT__key[1U];
    vlSelfRef.aes__DOT__round_keys[1U][2U] = vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__kg__DOT__key[2U];
    vlSelfRef.aes__DOT__round_keys[1U][3U] = vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__kg__DOT__key[3U];
    vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__sb__DOT__in[0U] 
        = (vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__kg__DOT__key[0U] 
           ^ vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__mix_columns_out[0U]);
    vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__sb__DOT__in[1U] 
        = (vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__kg__DOT__key[1U] 
           ^ vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__mix_columns_out[1U]);
    vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__sb__DOT__in[2U] 
        = (vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__kg__DOT__key[2U] 
           ^ vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__mix_columns_out[2U]);
    vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__sb__DOT__in[3U] 
        = (vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__kg__DOT__key[3U] 
           ^ vlSelfRef.aes__DOT__round__BRA__0__KET____DOT__mix_columns_out[3U]);
    vlSelfRef.aes__DOT__state[1U][0U] = vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__sb__DOT__in[0U];
    vlSelfRef.aes__DOT__state[1U][1U] = vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__sb__DOT__in[1U];
    vlSelfRef.aes__DOT__state[1U][2U] = vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__sb__DOT__in[2U];
    vlSelfRef.aes__DOT__state[1U][3U] = vlSelfRef.aes__DOT__round__BRA__1__KET____DOT__sb__DOT__in[3U];
}

void Vaes_functions___024root___eval_act(Vaes_functions___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root___eval_act\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        Vaes_functions___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__1__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__2(vlSelf);
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__2__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__3(vlSelf);
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__4(vlSelf);
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__4__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__5(vlSelf);
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__5__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__6(vlSelf);
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__6__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__7(vlSelf);
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__7__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__8(vlSelf);
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__8__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__9(vlSelf);
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_0__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_0));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_1__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_1));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_2__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_2));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_3__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__kg__DOT__sbox_3));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb));
        Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0((&vlSymsp->TOP__aes__DOT__round__BRA__9__KET____DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb));
        Vaes_functions___024root___ico_sequent__TOP__10(vlSelf);
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
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vaes_functions___024root___eval_triggers__act(vlSelf);
    Vaes_functions___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vaes_functions___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vaes_functions___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
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
        Vaes_functions___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaes_functions___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

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
