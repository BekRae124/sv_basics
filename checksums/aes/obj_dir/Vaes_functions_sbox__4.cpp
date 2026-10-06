// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_functions.h for the primary calling header

#include "Vaes_functions__pch.h"

void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_3__0(Vaes_functions_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__kg__DOT__sbox_3__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__t__BRA__67__KET__;
    __PVT__t__BRA__67__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__66__KET__;
    __PVT__t__BRA__66__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__65__KET__;
    __PVT__t__BRA__65__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__64__KET__;
    __PVT__t__BRA__64__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__63__KET__;
    __PVT__t__BRA__63__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__62__KET__;
    __PVT__t__BRA__62__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__61__KET__;
    __PVT__t__BRA__61__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__60__KET__;
    __PVT__t__BRA__60__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__59__KET__;
    __PVT__t__BRA__59__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__58__KET__;
    __PVT__t__BRA__58__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__57__KET__;
    __PVT__t__BRA__57__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__56__KET__;
    __PVT__t__BRA__56__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__55__KET__;
    __PVT__t__BRA__55__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__54__KET__;
    __PVT__t__BRA__54__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__53__KET__;
    __PVT__t__BRA__53__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__52__KET__;
    __PVT__t__BRA__52__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__51__KET__;
    __PVT__t__BRA__51__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__50__KET__;
    __PVT__t__BRA__50__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__49__KET__;
    __PVT__t__BRA__49__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__48__KET__;
    __PVT__t__BRA__48__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__47__KET__;
    __PVT__t__BRA__47__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__46__KET__;
    __PVT__t__BRA__46__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__45__KET__;
    __PVT__t__BRA__45__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__43__KET__;
    __PVT__t__BRA__43__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__39__KET__;
    __PVT__t__BRA__39__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__38__KET__;
    __PVT__t__BRA__38__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__36__KET__;
    __PVT__t__BRA__36__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__35__KET__;
    __PVT__t__BRA__35__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__34__KET__;
    __PVT__t__BRA__34__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__32__KET__;
    __PVT__t__BRA__32__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__31__KET__;
    __PVT__t__BRA__31__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__30__KET__;
    __PVT__t__BRA__30__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__28__KET__;
    __PVT__t__BRA__28__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__27__KET__;
    __PVT__t__BRA__27__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__26__KET__;
    __PVT__t__BRA__26__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__25__KET__;
    __PVT__t__BRA__25__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__24__KET__;
    __PVT__t__BRA__24__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__23__KET__;
    __PVT__t__BRA__23__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__22__KET__;
    __PVT__t__BRA__22__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__21__KET__;
    __PVT__t__BRA__21__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__20__KET__;
    __PVT__t__BRA__20__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__19__KET__;
    __PVT__t__BRA__19__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__18__KET__;
    __PVT__t__BRA__18__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__17__KET__;
    __PVT__t__BRA__17__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__16__KET__;
    __PVT__t__BRA__16__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__15__KET__;
    __PVT__t__BRA__15__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__14__KET__;
    __PVT__t__BRA__14__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__13__KET__;
    __PVT__t__BRA__13__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__12__KET__;
    __PVT__t__BRA__12__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__11__KET__;
    __PVT__t__BRA__11__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__10__KET__;
    __PVT__t__BRA__10__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__9__KET__;
    __PVT__t__BRA__9__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__8__KET__;
    __PVT__t__BRA__8__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__7__KET__;
    __PVT__t__BRA__7__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__6__KET__;
    __PVT__t__BRA__6__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__5__KET__;
    __PVT__t__BRA__5__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__4__KET__;
    __PVT__t__BRA__4__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__3__KET__;
    __PVT__t__BRA__3__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__2__KET__;
    __PVT__t__BRA__2__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__1__KET__;
    __PVT__t__BRA__1__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__0__KET__;
    __PVT__t__BRA__0__KET__ = 0;
    CData/*0:0*/ __VdfgRegularize_h224e5c7b_0_0;
    __VdfgRegularize_h224e5c7b_0_0 = 0;
    // Body
    vlSelfRef.__PVT__y__BRA__8__KET__ = (1U & VL_REDXOR_32(
                                                           (0x84000000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__2__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3)));
    __PVT__t__BRA__0__KET__ = (1U & VL_REDXOR_32((0x60000000U 
                                                  & vlSymsp->TOP.aes__DOT__round__BRA__2__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3)));
    vlSelfRef.__PVT__y__BRA__9__KET__ = (1U & VL_REDXOR_32(
                                                           (0x90000000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__2__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3)));
    vlSelfRef.__PVT__y__BRA__14__KET__ = (1U & VL_REDXOR_32(
                                                            (0x14000000U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__2__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3)));
    vlSelfRef.__PVT__y__BRA__13__KET__ = (1U & VL_REDXOR_32(
                                                            (0x82000000U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__2__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3)));
    vlSelfRef.__PVT__y__BRA__1__KET__ = (1U & ((IData)(__PVT__t__BRA__0__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__2__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
                                                  >> 0x00000018U)));
    vlSelfRef.__PVT__y__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    vlSelfRef.__PVT__y__BRA__4__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__2__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
                                                  >> 0x0000001cU)));
    vlSelfRef.__PVT__y__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                         ^ (vlSymsp->TOP.aes__DOT__round__BRA__2__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
                                            >> 0x0000001fU));
    vlSelfRef.__PVT__y__BRA__5__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__2__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
                                                  >> 0x00000019U)));
    __PVT__t__BRA__1__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__2__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
                                      >> 0x0000001bU) 
                                     ^ (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)));
    __PVT__t__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__4__KET__) 
                               & (vlSymsp->TOP.aes__DOT__round__BRA__2__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
                                  >> 0x00000018U));
    vlSelfRef.__PVT__y__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__));
    __PVT__t__BRA__8__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    vlSelfRef.__PVT__y__BRA__15__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (vlSymsp->TOP.aes__DOT__round__BRA__2__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
                                                   >> 0x0000001aU)));
    vlSelfRef.__PVT__y__BRA__20__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (vlSymsp->TOP.aes__DOT__round__BRA__2__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
                                                   >> 0x0000001eU)));
    vlSelfRef.__PVT__y__BRA__6__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__2__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
                                                  >> 0x00000018U)));
    __PVT__t__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__12__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__));
    vlSelfRef.__PVT__y__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                          ^ (IData)(__PVT__t__BRA__0__KET__));
    vlSelfRef.__PVT__y__BRA__11__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__20__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__9__KET__));
    __PVT__t__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__3__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__));
    __PVT__t__BRA__6__KET__ = ((IData)(__PVT__t__BRA__5__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__15__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__8__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__));
    vlSelfRef.__PVT__y__BRA__7__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__2__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
                                                >> 0x00000018U) 
                                               ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)));
    vlSelfRef.__PVT__y__BRA__17__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__9__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    vlSelfRef.__PVT__y__BRA__16__KET__ = ((IData)(__PVT__t__BRA__0__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__4__KET__ = ((IData)(__PVT__t__BRA__3__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__2__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    __PVT__t__BRA__13__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__14__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    __PVT__t__BRA__16__KET__ = ((IData)(__PVT__t__BRA__15__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__7__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__14__KET__ = ((IData)(__PVT__t__BRA__13__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__18__KET__ = ((IData)(__PVT__t__BRA__6__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__9__KET__ = ((IData)(__PVT__t__BRA__8__KET__) 
                               ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__11__KET__ = ((IData)(__PVT__t__BRA__10__KET__) 
                                ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__17__KET__ = ((IData)(__PVT__t__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__22__KET__ = ((IData)(__PVT__t__BRA__18__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__19__KET__ = ((IData)(__PVT__t__BRA__9__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__20__KET__ = ((IData)(__PVT__t__BRA__11__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__21__KET__ = ((IData)(__PVT__t__BRA__17__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__20__KET__));
    __PVT__t__BRA__23__KET__ = ((IData)(__PVT__t__BRA__19__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__)));
    __PVT__t__BRA__24__KET__ = (((IData)(__PVT__t__BRA__20__KET__) 
                                 ^ (vlSymsp->TOP.aes__DOT__round__BRA__2__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
                                    >> 0x0000001fU)) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__25__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                ^ (IData)(__PVT__t__BRA__22__KET__));
    __PVT__t__BRA__26__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                & (IData)(__PVT__t__BRA__23__KET__));
    __PVT__t__BRA__30__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(__PVT__t__BRA__24__KET__));
    __PVT__t__BRA__31__KET__ = ((IData)(__PVT__t__BRA__22__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__27__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__32__KET__ = ((IData)(__PVT__t__BRA__31__KET__) 
                                & (IData)(__PVT__t__BRA__30__KET__));
    __PVT__t__BRA__28__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                & (IData)(__PVT__t__BRA__27__KET__));
    vlSelfRef.__PVT__t__BRA__33__KET__ = ((IData)(__PVT__t__BRA__32__KET__) 
                                          ^ (IData)(__PVT__t__BRA__24__KET__));
    vlSelfRef.__PVT__t__BRA__29__KET__ = ((IData)(__PVT__t__BRA__28__KET__) 
                                          ^ (IData)(__PVT__t__BRA__22__KET__));
    vlSelfRef.__PVT__z__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                         & (vlSymsp->TOP.aes__DOT__round__BRA__2__KET____DOT__kg__DOT____VdfgRegularize_h801a084d_0_3 
                                            >> 0x00000018U));
    __PVT__t__BRA__34__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__35__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    vlSelfRef.__PVT__z__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    vlSelfRef.__PVT__t__BRA__42__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__36__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                & (IData)(__PVT__t__BRA__35__KET__));
    __PVT__t__BRA__51__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__5__KET__));
    vlSelfRef.__PVT__t__BRA__37__KET__ = ((IData)(__PVT__t__BRA__36__KET__) 
                                          ^ (IData)(__PVT__t__BRA__34__KET__));
    __PVT__t__BRA__38__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(__PVT__t__BRA__36__KET__));
    vlSelfRef.__PVT__z__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__3__KET__));
    vlSelfRef.__PVT__t__BRA__44__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    __PVT__t__BRA__39__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                & (IData)(__PVT__t__BRA__38__KET__));
    __PVT__t__BRA__47__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__10__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__4__KET__)));
    __PVT__t__BRA__49__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__10__KET__));
    vlSelfRef.__PVT__t__BRA__40__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                          ^ (IData)(__PVT__t__BRA__39__KET__));
    __PVT__t__BRA__48__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__5__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__5__KET__)));
    vlSelfRef.__PVT__z__BRA__4__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    __PVT__t__BRA__43__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__40__KET__));
    vlSelfRef.__PVT__t__BRA__41__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    vlSelfRef.__PVT__z__BRA__12__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__13__KET__));
    vlSelfRef.__PVT__z__BRA__3__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__45__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__41__KET__));
    __PVT__t__BRA__56__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__12__KET__) 
                                ^ (IData)(__PVT__t__BRA__48__KET__));
    __PVT__t__BRA__50__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__12__KET__));
    __PVT__t__BRA__53__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__3__KET__));
    vlSelfRef.__PVT__z__BRA__7__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    vlSelfRef.__PVT__z__BRA__16__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    __PVT__t__BRA__57__KET__ = ((IData)(__PVT__t__BRA__50__KET__) 
                                ^ (IData)(__PVT__t__BRA__53__KET__));
    __PVT__t__BRA__54__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__7__KET__));
    __PVT__t__BRA__52__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__7__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__)));
    __PVT__t__BRA__55__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__16__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__46__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__9__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__16__KET__));
    __PVT__t__BRA__61__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__2__KET__)) 
                                ^ (IData)(__PVT__t__BRA__57__KET__));
    __PVT__t__BRA__59__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__3__KET__) 
                                ^ (IData)(__PVT__t__BRA__54__KET__));
    __PVT__t__BRA__60__KET__ = ((IData)(__PVT__t__BRA__46__KET__) 
                                ^ (IData)(__PVT__t__BRA__57__KET__));
    __PVT__t__BRA__58__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__46__KET__));
    __PVT__t__BRA__64__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__59__KET__));
    __PVT__t__BRA__63__KET__ = ((IData)(__PVT__t__BRA__49__KET__) 
                                ^ (IData)(__PVT__t__BRA__58__KET__));
    __PVT__t__BRA__62__KET__ = ((IData)(__PVT__t__BRA__52__KET__) 
                                ^ (IData)(__PVT__t__BRA__58__KET__));
    __PVT__t__BRA__66__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__)) 
                                ^ (IData)(__PVT__t__BRA__63__KET__));
    __PVT__t__BRA__65__KET__ = ((IData)(__PVT__t__BRA__61__KET__) 
                                ^ (IData)(__PVT__t__BRA__62__KET__));
    __VdfgRegularize_h224e5c7b_0_0 = ((IData)(__PVT__t__BRA__53__KET__) 
                                      ^ (IData)(__PVT__t__BRA__66__KET__));
    __PVT__t__BRA__67__KET__ = ((IData)(__PVT__t__BRA__64__KET__) 
                                ^ (IData)(__PVT__t__BRA__65__KET__));
    vlSelfRef.__PVT__t[0U] = (((((((((IData)(__PVT__t__BRA__31__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__30__KET__) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__28__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(__PVT__t__BRA__27__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__26__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__25__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__24__KET__))) 
                                  << 8U)) | ((((((IData)(__PVT__t__BRA__23__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__22__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__21__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__20__KET__))) 
                                              << 4U) 
                                             | ((((IData)(__PVT__t__BRA__19__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__18__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(__PVT__t__BRA__16__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(__PVT__t__BRA__15__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__14__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__13__KET__) 
                                                         << 1U) 
                                                        | (IData)(__PVT__t__BRA__12__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__11__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__10__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__9__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__8__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__7__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__6__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__5__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__4__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__3__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__2__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(__PVT__t__BRA__1__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__0__KET__))))));
    vlSelfRef.__PVT__t[1U] = (((((((((IData)(__PVT__t__BRA__63__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__62__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__61__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__60__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(__PVT__t__BRA__59__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__58__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__57__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__56__KET__))) 
                                  << 8U)) | ((((((IData)(__PVT__t__BRA__55__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__54__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__53__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__52__KET__))) 
                                              << 4U) 
                                             | ((((IData)(__PVT__t__BRA__51__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__50__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__49__KET__) 
                                                    << 1U) 
                                                   | (IData)(__PVT__t__BRA__48__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(__PVT__t__BRA__47__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__46__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__45__KET__) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__t__BRA__44__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__43__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__t__BRA__40__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__39__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__38__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__36__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__35__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__34__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__32__KET__))))));
    vlSelfRef.__PVT__t[2U] = (0x0000000fU & ((((IData)(__PVT__t__BRA__67__KET__) 
                                               << 3U) 
                                              | ((IData)(__PVT__t__BRA__66__KET__) 
                                                 << 2U)) 
                                             | (((IData)(__PVT__t__BRA__65__KET__) 
                                                 << 1U) 
                                                | (IData)(__PVT__t__BRA__64__KET__))));
    vlSelfRef.out = (((((((IData)(__PVT__t__BRA__59__KET__) 
                          ^ (IData)(__PVT__t__BRA__63__KET__)) 
                         << 3U) | (4U ^ (((IData)(__PVT__t__BRA__64__KET__) 
                                          ^ (IData)(__VdfgRegularize_h224e5c7b_0_0)) 
                                         << 2U))) | 
                       ((2U ^ (((IData)(__PVT__t__BRA__55__KET__) 
                                ^ (IData)(__PVT__t__BRA__67__KET__)) 
                               << 1U)) | (IData)(__VdfgRegularize_h224e5c7b_0_0))) 
                      << 4U) | (((((IData)(__PVT__t__BRA__51__KET__) 
                                   ^ (IData)(__PVT__t__BRA__66__KET__)) 
                                  << 3U) | (((IData)(__PVT__t__BRA__47__KET__) 
                                             ^ (IData)(__PVT__t__BRA__65__KET__)) 
                                            << 2U)) 
                                | ((2U ^ (((IData)(__PVT__t__BRA__56__KET__) 
                                           ^ (IData)(__PVT__t__BRA__62__KET__)) 
                                          << 1U)) | 
                                   (1U ^ ((IData)(__PVT__t__BRA__48__KET__) 
                                          ^ (IData)(__PVT__t__BRA__60__KET__))))));
}

void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__t__BRA__61__KET__;
    __PVT__t__BRA__61__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__58__KET__;
    __PVT__t__BRA__58__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__57__KET__;
    __PVT__t__BRA__57__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__54__KET__;
    __PVT__t__BRA__54__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__53__KET__;
    __PVT__t__BRA__53__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__52__KET__;
    __PVT__t__BRA__52__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__50__KET__;
    __PVT__t__BRA__50__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__49__KET__;
    __PVT__t__BRA__49__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__46__KET__;
    __PVT__t__BRA__46__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__45__KET__;
    __PVT__t__BRA__45__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__43__KET__;
    __PVT__t__BRA__43__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__39__KET__;
    __PVT__t__BRA__39__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__38__KET__;
    __PVT__t__BRA__38__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__36__KET__;
    __PVT__t__BRA__36__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__35__KET__;
    __PVT__t__BRA__35__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__34__KET__;
    __PVT__t__BRA__34__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__32__KET__;
    __PVT__t__BRA__32__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__31__KET__;
    __PVT__t__BRA__31__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__30__KET__;
    __PVT__t__BRA__30__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__28__KET__;
    __PVT__t__BRA__28__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__27__KET__;
    __PVT__t__BRA__27__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__26__KET__;
    __PVT__t__BRA__26__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__25__KET__;
    __PVT__t__BRA__25__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__24__KET__;
    __PVT__t__BRA__24__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__23__KET__;
    __PVT__t__BRA__23__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__22__KET__;
    __PVT__t__BRA__22__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__21__KET__;
    __PVT__t__BRA__21__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__20__KET__;
    __PVT__t__BRA__20__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__19__KET__;
    __PVT__t__BRA__19__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__18__KET__;
    __PVT__t__BRA__18__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__17__KET__;
    __PVT__t__BRA__17__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__16__KET__;
    __PVT__t__BRA__16__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__15__KET__;
    __PVT__t__BRA__15__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__14__KET__;
    __PVT__t__BRA__14__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__13__KET__;
    __PVT__t__BRA__13__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__12__KET__;
    __PVT__t__BRA__12__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__11__KET__;
    __PVT__t__BRA__11__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__10__KET__;
    __PVT__t__BRA__10__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__9__KET__;
    __PVT__t__BRA__9__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__8__KET__;
    __PVT__t__BRA__8__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__7__KET__;
    __PVT__t__BRA__7__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__6__KET__;
    __PVT__t__BRA__6__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__5__KET__;
    __PVT__t__BRA__5__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__4__KET__;
    __PVT__t__BRA__4__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__3__KET__;
    __PVT__t__BRA__3__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__2__KET__;
    __PVT__t__BRA__2__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__1__KET__;
    __PVT__t__BRA__1__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__0__KET__;
    __PVT__t__BRA__0__KET__ = 0;
    // Body
    vlSelfRef.__PVT__y__BRA__8__KET__ = (1U & VL_REDXOR_8(
                                                          (0x00000084U 
                                                           & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    __PVT__t__BRA__0__KET__ = (1U & VL_REDXOR_8((0x00000060U 
                                                 & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    vlSelfRef.__PVT__y__BRA__9__KET__ = (1U & VL_REDXOR_8(
                                                          (0x00000090U 
                                                           & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    vlSelfRef.__PVT__y__BRA__14__KET__ = (1U & VL_REDXOR_8(
                                                           (0x00000014U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    vlSelfRef.__PVT__y__BRA__13__KET__ = (1U & VL_REDXOR_8(
                                                           (0x00000082U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    vlSelfRef.__PVT__y__BRA__1__KET__ = (1U & ((IData)(__PVT__t__BRA__0__KET__) 
                                               ^ vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U]));
    vlSelfRef.__PVT__y__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    vlSelfRef.__PVT__y__BRA__4__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                  >> 4U)));
    vlSelfRef.__PVT__y__BRA__2__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                  >> 7U)));
    vlSelfRef.__PVT__y__BRA__5__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                  >> 1U)));
    __PVT__t__BRA__1__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                      >> 3U) ^ (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)));
    __PVT__t__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__4__KET__) 
                               & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U]);
    vlSelfRef.__PVT__y__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__));
    __PVT__t__BRA__8__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    vlSelfRef.__PVT__y__BRA__15__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                   >> 2U)));
    vlSelfRef.__PVT__y__BRA__20__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                   >> 6U)));
    vlSelfRef.__PVT__y__BRA__6__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                               ^ vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U]));
    __PVT__t__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__12__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__));
    vlSelfRef.__PVT__y__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                          ^ (IData)(__PVT__t__BRA__0__KET__));
    vlSelfRef.__PVT__y__BRA__11__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__20__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__9__KET__));
    __PVT__t__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__3__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__));
    __PVT__t__BRA__6__KET__ = ((IData)(__PVT__t__BRA__5__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__15__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__8__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__));
    vlSelfRef.__PVT__y__BRA__7__KET__ = (1U & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                               ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)));
    vlSelfRef.__PVT__y__BRA__17__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__9__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    vlSelfRef.__PVT__y__BRA__16__KET__ = ((IData)(__PVT__t__BRA__0__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__4__KET__ = ((IData)(__PVT__t__BRA__3__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__2__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    __PVT__t__BRA__13__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__14__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    __PVT__t__BRA__16__KET__ = ((IData)(__PVT__t__BRA__15__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__7__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__14__KET__ = ((IData)(__PVT__t__BRA__13__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__18__KET__ = ((IData)(__PVT__t__BRA__6__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__9__KET__ = ((IData)(__PVT__t__BRA__8__KET__) 
                               ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__11__KET__ = ((IData)(__PVT__t__BRA__10__KET__) 
                                ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__17__KET__ = ((IData)(__PVT__t__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__22__KET__ = ((IData)(__PVT__t__BRA__18__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__19__KET__ = ((IData)(__PVT__t__BRA__9__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__20__KET__ = ((IData)(__PVT__t__BRA__11__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__21__KET__ = ((IData)(__PVT__t__BRA__17__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__20__KET__));
    __PVT__t__BRA__23__KET__ = ((IData)(__PVT__t__BRA__19__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__)));
    __PVT__t__BRA__24__KET__ = (1U & ((IData)(__PVT__t__BRA__20__KET__) 
                                      ^ ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                          >> 7U) ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__))));
    __PVT__t__BRA__25__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                ^ (IData)(__PVT__t__BRA__22__KET__));
    __PVT__t__BRA__26__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                & (IData)(__PVT__t__BRA__23__KET__));
    __PVT__t__BRA__30__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(__PVT__t__BRA__24__KET__));
    __PVT__t__BRA__31__KET__ = ((IData)(__PVT__t__BRA__22__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__27__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__32__KET__ = ((IData)(__PVT__t__BRA__31__KET__) 
                                & (IData)(__PVT__t__BRA__30__KET__));
    __PVT__t__BRA__28__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                & (IData)(__PVT__t__BRA__27__KET__));
    vlSelfRef.__PVT__t__BRA__33__KET__ = ((IData)(__PVT__t__BRA__32__KET__) 
                                          ^ (IData)(__PVT__t__BRA__24__KET__));
    vlSelfRef.__PVT__t__BRA__29__KET__ = ((IData)(__PVT__t__BRA__28__KET__) 
                                          ^ (IData)(__PVT__t__BRA__22__KET__));
    vlSelfRef.__PVT__z__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                         & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U]);
    __PVT__t__BRA__34__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__35__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    vlSelfRef.__PVT__z__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    vlSelfRef.__PVT__t__BRA__42__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__36__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                & (IData)(__PVT__t__BRA__35__KET__));
    vlSelfRef.__PVT__t__BRA__51__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__z__BRA__5__KET__));
    vlSelfRef.__PVT__t__BRA__37__KET__ = ((IData)(__PVT__t__BRA__36__KET__) 
                                          ^ (IData)(__PVT__t__BRA__34__KET__));
    __PVT__t__BRA__38__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(__PVT__t__BRA__36__KET__));
    vlSelfRef.__PVT__z__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__3__KET__));
    vlSelfRef.__PVT__t__BRA__44__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    __PVT__t__BRA__39__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                & (IData)(__PVT__t__BRA__38__KET__));
    vlSelfRef.__PVT__t__BRA__47__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__10__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__4__KET__)));
    __PVT__t__BRA__49__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__10__KET__));
    vlSelfRef.__PVT__t__BRA__40__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                          ^ (IData)(__PVT__t__BRA__39__KET__));
    vlSelfRef.__PVT__t__BRA__48__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__5__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__5__KET__)));
    vlSelfRef.__PVT__z__BRA__4__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    __PVT__t__BRA__43__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__40__KET__));
    vlSelfRef.__PVT__t__BRA__41__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    vlSelfRef.__PVT__z__BRA__12__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__13__KET__));
    vlSelfRef.__PVT__z__BRA__3__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__45__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__41__KET__));
    vlSelfRef.__PVT__t__BRA__56__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__12__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__48__KET__));
    __PVT__t__BRA__50__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__12__KET__));
    __PVT__t__BRA__53__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__3__KET__));
    vlSelfRef.__PVT__z__BRA__7__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    vlSelfRef.__PVT__z__BRA__16__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    __PVT__t__BRA__57__KET__ = ((IData)(__PVT__t__BRA__50__KET__) 
                                ^ (IData)(__PVT__t__BRA__53__KET__));
    __PVT__t__BRA__54__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__7__KET__));
    __PVT__t__BRA__52__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__7__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__)));
    vlSelfRef.__PVT__t__BRA__55__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__16__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__46__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__9__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__16__KET__));
    __PVT__t__BRA__61__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__2__KET__)) 
                                ^ (IData)(__PVT__t__BRA__57__KET__));
    vlSelfRef.__PVT__t__BRA__59__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__3__KET__) 
                                          ^ (IData)(__PVT__t__BRA__54__KET__));
    vlSelfRef.__PVT__t__BRA__60__KET__ = ((IData)(__PVT__t__BRA__46__KET__) 
                                          ^ (IData)(__PVT__t__BRA__57__KET__));
    __PVT__t__BRA__58__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__46__KET__));
    vlSelfRef.__PVT__t__BRA__64__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__59__KET__));
    vlSelfRef.__PVT__t__BRA__63__KET__ = ((IData)(__PVT__t__BRA__49__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__62__KET__ = ((IData)(__PVT__t__BRA__52__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__66__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                           & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__)) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__63__KET__));
    vlSelfRef.__PVT__t__BRA__65__KET__ = ((IData)(__PVT__t__BRA__61__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__62__KET__));
    vlSelfRef.__VdfgRegularize_h224e5c7b_0_0 = ((IData)(__PVT__t__BRA__53__KET__) 
                                                ^ (IData)(vlSelfRef.__PVT__t__BRA__66__KET__));
    vlSelfRef.__PVT__t__BRA__67__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__64__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__65__KET__));
    vlSelfRef.__PVT__t[0U] = (((((((((IData)(__PVT__t__BRA__31__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__30__KET__) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__28__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(__PVT__t__BRA__27__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__26__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__25__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__24__KET__))) 
                                  << 8U)) | ((((((IData)(__PVT__t__BRA__23__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__22__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__21__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__20__KET__))) 
                                              << 4U) 
                                             | ((((IData)(__PVT__t__BRA__19__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__18__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(__PVT__t__BRA__16__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(__PVT__t__BRA__15__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__14__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__13__KET__) 
                                                         << 1U) 
                                                        | (IData)(__PVT__t__BRA__12__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__11__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__10__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__9__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__8__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__7__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__6__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__5__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__4__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__3__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__2__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(__PVT__t__BRA__1__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__0__KET__))))));
    vlSelfRef.__PVT__t[1U] = (((((((((IData)(vlSelfRef.__PVT__t__BRA__63__KET__) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__t__BRA__62__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__61__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__60__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(vlSelfRef.__PVT__t__BRA__59__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__58__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__57__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__56__KET__))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.__PVT__t__BRA__55__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__54__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__53__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__52__KET__))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.__PVT__t__BRA__51__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__50__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__49__KET__) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__t__BRA__48__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(vlSelfRef.__PVT__t__BRA__47__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__46__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__45__KET__) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__t__BRA__44__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__43__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__t__BRA__40__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__39__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__38__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__36__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__35__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__34__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__32__KET__))))));
    vlSelfRef.__PVT__t[2U] = (0x0000000fU & ((((IData)(vlSelfRef.__PVT__t__BRA__67__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__t__BRA__66__KET__) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__t__BRA__65__KET__) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__t__BRA__64__KET__))));
}

void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__t__BRA__61__KET__;
    __PVT__t__BRA__61__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__58__KET__;
    __PVT__t__BRA__58__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__57__KET__;
    __PVT__t__BRA__57__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__54__KET__;
    __PVT__t__BRA__54__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__53__KET__;
    __PVT__t__BRA__53__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__52__KET__;
    __PVT__t__BRA__52__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__50__KET__;
    __PVT__t__BRA__50__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__49__KET__;
    __PVT__t__BRA__49__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__46__KET__;
    __PVT__t__BRA__46__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__45__KET__;
    __PVT__t__BRA__45__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__43__KET__;
    __PVT__t__BRA__43__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__39__KET__;
    __PVT__t__BRA__39__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__38__KET__;
    __PVT__t__BRA__38__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__36__KET__;
    __PVT__t__BRA__36__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__35__KET__;
    __PVT__t__BRA__35__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__34__KET__;
    __PVT__t__BRA__34__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__32__KET__;
    __PVT__t__BRA__32__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__31__KET__;
    __PVT__t__BRA__31__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__30__KET__;
    __PVT__t__BRA__30__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__28__KET__;
    __PVT__t__BRA__28__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__27__KET__;
    __PVT__t__BRA__27__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__26__KET__;
    __PVT__t__BRA__26__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__25__KET__;
    __PVT__t__BRA__25__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__24__KET__;
    __PVT__t__BRA__24__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__23__KET__;
    __PVT__t__BRA__23__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__22__KET__;
    __PVT__t__BRA__22__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__21__KET__;
    __PVT__t__BRA__21__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__20__KET__;
    __PVT__t__BRA__20__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__19__KET__;
    __PVT__t__BRA__19__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__18__KET__;
    __PVT__t__BRA__18__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__17__KET__;
    __PVT__t__BRA__17__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__16__KET__;
    __PVT__t__BRA__16__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__15__KET__;
    __PVT__t__BRA__15__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__14__KET__;
    __PVT__t__BRA__14__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__13__KET__;
    __PVT__t__BRA__13__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__12__KET__;
    __PVT__t__BRA__12__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__11__KET__;
    __PVT__t__BRA__11__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__10__KET__;
    __PVT__t__BRA__10__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__9__KET__;
    __PVT__t__BRA__9__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__8__KET__;
    __PVT__t__BRA__8__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__7__KET__;
    __PVT__t__BRA__7__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__6__KET__;
    __PVT__t__BRA__6__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__5__KET__;
    __PVT__t__BRA__5__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__4__KET__;
    __PVT__t__BRA__4__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__3__KET__;
    __PVT__t__BRA__3__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__2__KET__;
    __PVT__t__BRA__2__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__1__KET__;
    __PVT__t__BRA__1__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__0__KET__;
    __PVT__t__BRA__0__KET__ = 0;
    // Body
    vlSelfRef.__PVT__y__BRA__8__KET__ = (1U & VL_REDXOR_16(
                                                           (0x00008400U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    __PVT__t__BRA__0__KET__ = (1U & VL_REDXOR_16((0x00006000U 
                                                  & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    vlSelfRef.__PVT__y__BRA__9__KET__ = (1U & VL_REDXOR_16(
                                                           (0x00009000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    vlSelfRef.__PVT__y__BRA__14__KET__ = (1U & VL_REDXOR_16(
                                                            (0x00001400U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    vlSelfRef.__PVT__y__BRA__13__KET__ = (1U & VL_REDXOR_16(
                                                            (0x00008200U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    vlSelfRef.__PVT__y__BRA__1__KET__ = (1U & ((IData)(__PVT__t__BRA__0__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                  >> 8U)));
    vlSelfRef.__PVT__y__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    vlSelfRef.__PVT__y__BRA__4__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                  >> 0x0000000cU)));
    vlSelfRef.__PVT__y__BRA__2__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                  >> 0x0000000fU)));
    vlSelfRef.__PVT__y__BRA__5__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                  >> 9U)));
    __PVT__t__BRA__1__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                      >> 0x0000000bU) 
                                     ^ (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)));
    __PVT__t__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__4__KET__) 
                               & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                  >> 8U));
    vlSelfRef.__PVT__y__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__));
    __PVT__t__BRA__8__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    vlSelfRef.__PVT__y__BRA__15__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                   >> 0x0000000aU)));
    vlSelfRef.__PVT__y__BRA__20__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                   >> 0x0000000eU)));
    vlSelfRef.__PVT__y__BRA__6__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                  >> 8U)));
    __PVT__t__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__12__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__));
    vlSelfRef.__PVT__y__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                          ^ (IData)(__PVT__t__BRA__0__KET__));
    vlSelfRef.__PVT__y__BRA__11__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__20__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__9__KET__));
    __PVT__t__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__3__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__));
    __PVT__t__BRA__6__KET__ = ((IData)(__PVT__t__BRA__5__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__15__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__8__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__));
    vlSelfRef.__PVT__y__BRA__7__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                >> 8U) 
                                               ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)));
    vlSelfRef.__PVT__y__BRA__17__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__9__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    vlSelfRef.__PVT__y__BRA__16__KET__ = ((IData)(__PVT__t__BRA__0__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__4__KET__ = ((IData)(__PVT__t__BRA__3__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__2__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    __PVT__t__BRA__13__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__14__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    __PVT__t__BRA__16__KET__ = ((IData)(__PVT__t__BRA__15__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__7__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__14__KET__ = ((IData)(__PVT__t__BRA__13__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__18__KET__ = ((IData)(__PVT__t__BRA__6__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__9__KET__ = ((IData)(__PVT__t__BRA__8__KET__) 
                               ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__11__KET__ = ((IData)(__PVT__t__BRA__10__KET__) 
                                ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__17__KET__ = ((IData)(__PVT__t__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__22__KET__ = ((IData)(__PVT__t__BRA__18__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__19__KET__ = ((IData)(__PVT__t__BRA__9__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__20__KET__ = ((IData)(__PVT__t__BRA__11__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__21__KET__ = ((IData)(__PVT__t__BRA__17__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__20__KET__));
    __PVT__t__BRA__23__KET__ = ((IData)(__PVT__t__BRA__19__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__)));
    __PVT__t__BRA__24__KET__ = (1U & ((IData)(__PVT__t__BRA__20__KET__) 
                                      ^ ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                          >> 0x0000000fU) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__))));
    __PVT__t__BRA__25__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                ^ (IData)(__PVT__t__BRA__22__KET__));
    __PVT__t__BRA__26__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                & (IData)(__PVT__t__BRA__23__KET__));
    __PVT__t__BRA__30__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(__PVT__t__BRA__24__KET__));
    __PVT__t__BRA__31__KET__ = ((IData)(__PVT__t__BRA__22__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__27__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__32__KET__ = ((IData)(__PVT__t__BRA__31__KET__) 
                                & (IData)(__PVT__t__BRA__30__KET__));
    __PVT__t__BRA__28__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                & (IData)(__PVT__t__BRA__27__KET__));
    vlSelfRef.__PVT__t__BRA__33__KET__ = ((IData)(__PVT__t__BRA__32__KET__) 
                                          ^ (IData)(__PVT__t__BRA__24__KET__));
    vlSelfRef.__PVT__t__BRA__29__KET__ = ((IData)(__PVT__t__BRA__28__KET__) 
                                          ^ (IData)(__PVT__t__BRA__22__KET__));
    vlSelfRef.__PVT__z__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                         & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                            >> 8U));
    __PVT__t__BRA__34__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__35__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    vlSelfRef.__PVT__z__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    vlSelfRef.__PVT__t__BRA__42__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__36__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                & (IData)(__PVT__t__BRA__35__KET__));
    vlSelfRef.__PVT__t__BRA__51__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__z__BRA__5__KET__));
    vlSelfRef.__PVT__t__BRA__37__KET__ = ((IData)(__PVT__t__BRA__36__KET__) 
                                          ^ (IData)(__PVT__t__BRA__34__KET__));
    __PVT__t__BRA__38__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(__PVT__t__BRA__36__KET__));
    vlSelfRef.__PVT__z__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__3__KET__));
    vlSelfRef.__PVT__t__BRA__44__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    __PVT__t__BRA__39__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                & (IData)(__PVT__t__BRA__38__KET__));
    vlSelfRef.__PVT__t__BRA__47__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__10__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__4__KET__)));
    __PVT__t__BRA__49__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__10__KET__));
    vlSelfRef.__PVT__t__BRA__40__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                          ^ (IData)(__PVT__t__BRA__39__KET__));
    vlSelfRef.__PVT__t__BRA__48__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__5__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__5__KET__)));
    vlSelfRef.__PVT__z__BRA__4__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    __PVT__t__BRA__43__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__40__KET__));
    vlSelfRef.__PVT__t__BRA__41__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    vlSelfRef.__PVT__z__BRA__12__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__13__KET__));
    vlSelfRef.__PVT__z__BRA__3__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__45__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__41__KET__));
    vlSelfRef.__PVT__t__BRA__56__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__12__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__48__KET__));
    __PVT__t__BRA__50__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__12__KET__));
    __PVT__t__BRA__53__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__3__KET__));
    vlSelfRef.__PVT__z__BRA__7__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    vlSelfRef.__PVT__z__BRA__16__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    __PVT__t__BRA__57__KET__ = ((IData)(__PVT__t__BRA__50__KET__) 
                                ^ (IData)(__PVT__t__BRA__53__KET__));
    __PVT__t__BRA__54__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__7__KET__));
    __PVT__t__BRA__52__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__7__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__)));
    vlSelfRef.__PVT__t__BRA__55__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__16__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__46__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__9__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__16__KET__));
    __PVT__t__BRA__61__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__2__KET__)) 
                                ^ (IData)(__PVT__t__BRA__57__KET__));
    vlSelfRef.__PVT__t__BRA__59__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__3__KET__) 
                                          ^ (IData)(__PVT__t__BRA__54__KET__));
    vlSelfRef.__PVT__t__BRA__60__KET__ = ((IData)(__PVT__t__BRA__46__KET__) 
                                          ^ (IData)(__PVT__t__BRA__57__KET__));
    __PVT__t__BRA__58__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__46__KET__));
    vlSelfRef.__PVT__t__BRA__64__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__59__KET__));
    vlSelfRef.__PVT__t__BRA__63__KET__ = ((IData)(__PVT__t__BRA__49__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__62__KET__ = ((IData)(__PVT__t__BRA__52__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__66__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                           & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__)) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__63__KET__));
    vlSelfRef.__PVT__t__BRA__65__KET__ = ((IData)(__PVT__t__BRA__61__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__62__KET__));
    vlSelfRef.__VdfgRegularize_h224e5c7b_0_0 = ((IData)(__PVT__t__BRA__53__KET__) 
                                                ^ (IData)(vlSelfRef.__PVT__t__BRA__66__KET__));
    vlSelfRef.__PVT__t__BRA__67__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__64__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__65__KET__));
    vlSelfRef.__PVT__t[0U] = (((((((((IData)(__PVT__t__BRA__31__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__30__KET__) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__28__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(__PVT__t__BRA__27__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__26__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__25__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__24__KET__))) 
                                  << 8U)) | ((((((IData)(__PVT__t__BRA__23__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__22__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__21__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__20__KET__))) 
                                              << 4U) 
                                             | ((((IData)(__PVT__t__BRA__19__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__18__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(__PVT__t__BRA__16__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(__PVT__t__BRA__15__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__14__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__13__KET__) 
                                                         << 1U) 
                                                        | (IData)(__PVT__t__BRA__12__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__11__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__10__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__9__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__8__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__7__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__6__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__5__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__4__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__3__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__2__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(__PVT__t__BRA__1__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__0__KET__))))));
    vlSelfRef.__PVT__t[1U] = (((((((((IData)(vlSelfRef.__PVT__t__BRA__63__KET__) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__t__BRA__62__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__61__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__60__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(vlSelfRef.__PVT__t__BRA__59__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__58__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__57__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__56__KET__))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.__PVT__t__BRA__55__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__54__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__53__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__52__KET__))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.__PVT__t__BRA__51__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__50__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__49__KET__) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__t__BRA__48__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(vlSelfRef.__PVT__t__BRA__47__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__46__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__45__KET__) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__t__BRA__44__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__43__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__t__BRA__40__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__39__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__38__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__36__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__35__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__34__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__32__KET__))))));
    vlSelfRef.__PVT__t[2U] = (0x0000000fU & ((((IData)(vlSelfRef.__PVT__t__BRA__67__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__t__BRA__66__KET__) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__t__BRA__65__KET__) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__t__BRA__64__KET__))));
}

void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__t__BRA__61__KET__;
    __PVT__t__BRA__61__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__58__KET__;
    __PVT__t__BRA__58__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__57__KET__;
    __PVT__t__BRA__57__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__54__KET__;
    __PVT__t__BRA__54__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__53__KET__;
    __PVT__t__BRA__53__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__52__KET__;
    __PVT__t__BRA__52__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__50__KET__;
    __PVT__t__BRA__50__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__49__KET__;
    __PVT__t__BRA__49__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__46__KET__;
    __PVT__t__BRA__46__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__45__KET__;
    __PVT__t__BRA__45__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__43__KET__;
    __PVT__t__BRA__43__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__39__KET__;
    __PVT__t__BRA__39__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__38__KET__;
    __PVT__t__BRA__38__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__36__KET__;
    __PVT__t__BRA__36__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__35__KET__;
    __PVT__t__BRA__35__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__34__KET__;
    __PVT__t__BRA__34__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__32__KET__;
    __PVT__t__BRA__32__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__31__KET__;
    __PVT__t__BRA__31__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__30__KET__;
    __PVT__t__BRA__30__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__28__KET__;
    __PVT__t__BRA__28__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__27__KET__;
    __PVT__t__BRA__27__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__26__KET__;
    __PVT__t__BRA__26__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__25__KET__;
    __PVT__t__BRA__25__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__24__KET__;
    __PVT__t__BRA__24__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__23__KET__;
    __PVT__t__BRA__23__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__22__KET__;
    __PVT__t__BRA__22__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__21__KET__;
    __PVT__t__BRA__21__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__20__KET__;
    __PVT__t__BRA__20__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__19__KET__;
    __PVT__t__BRA__19__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__18__KET__;
    __PVT__t__BRA__18__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__17__KET__;
    __PVT__t__BRA__17__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__16__KET__;
    __PVT__t__BRA__16__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__15__KET__;
    __PVT__t__BRA__15__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__14__KET__;
    __PVT__t__BRA__14__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__13__KET__;
    __PVT__t__BRA__13__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__12__KET__;
    __PVT__t__BRA__12__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__11__KET__;
    __PVT__t__BRA__11__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__10__KET__;
    __PVT__t__BRA__10__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__9__KET__;
    __PVT__t__BRA__9__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__8__KET__;
    __PVT__t__BRA__8__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__7__KET__;
    __PVT__t__BRA__7__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__6__KET__;
    __PVT__t__BRA__6__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__5__KET__;
    __PVT__t__BRA__5__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__4__KET__;
    __PVT__t__BRA__4__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__3__KET__;
    __PVT__t__BRA__3__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__2__KET__;
    __PVT__t__BRA__2__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__1__KET__;
    __PVT__t__BRA__1__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__0__KET__;
    __PVT__t__BRA__0__KET__ = 0;
    // Body
    vlSelfRef.__PVT__y__BRA__8__KET__ = (1U & VL_REDXOR_32(
                                                           (0x00840000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    __PVT__t__BRA__0__KET__ = (1U & VL_REDXOR_32((0x00600000U 
                                                  & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    vlSelfRef.__PVT__y__BRA__9__KET__ = (1U & VL_REDXOR_32(
                                                           (0x00900000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    vlSelfRef.__PVT__y__BRA__14__KET__ = (1U & VL_REDXOR_32(
                                                            (0x00140000U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    vlSelfRef.__PVT__y__BRA__13__KET__ = (1U & VL_REDXOR_32(
                                                            (0x00820000U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    vlSelfRef.__PVT__y__BRA__1__KET__ = (1U & ((IData)(__PVT__t__BRA__0__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                  >> 0x00000010U)));
    vlSelfRef.__PVT__y__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    vlSelfRef.__PVT__y__BRA__4__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                  >> 0x00000014U)));
    vlSelfRef.__PVT__y__BRA__2__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                  >> 0x00000017U)));
    vlSelfRef.__PVT__y__BRA__5__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                  >> 0x00000011U)));
    __PVT__t__BRA__1__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                      >> 0x00000013U) 
                                     ^ (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)));
    __PVT__t__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__4__KET__) 
                               & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                  >> 0x00000010U));
    vlSelfRef.__PVT__y__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__));
    __PVT__t__BRA__8__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    vlSelfRef.__PVT__y__BRA__15__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                   >> 0x00000012U)));
    vlSelfRef.__PVT__y__BRA__20__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                   >> 0x00000016U)));
    vlSelfRef.__PVT__y__BRA__6__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                  >> 0x00000010U)));
    __PVT__t__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__12__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__));
    vlSelfRef.__PVT__y__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                          ^ (IData)(__PVT__t__BRA__0__KET__));
    vlSelfRef.__PVT__y__BRA__11__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__20__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__9__KET__));
    __PVT__t__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__3__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__));
    __PVT__t__BRA__6__KET__ = ((IData)(__PVT__t__BRA__5__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__15__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__8__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__));
    vlSelfRef.__PVT__y__BRA__7__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                >> 0x00000010U) 
                                               ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)));
    vlSelfRef.__PVT__y__BRA__17__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__9__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    vlSelfRef.__PVT__y__BRA__16__KET__ = ((IData)(__PVT__t__BRA__0__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__4__KET__ = ((IData)(__PVT__t__BRA__3__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__2__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    __PVT__t__BRA__13__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__14__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    __PVT__t__BRA__16__KET__ = ((IData)(__PVT__t__BRA__15__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__7__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__14__KET__ = ((IData)(__PVT__t__BRA__13__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__18__KET__ = ((IData)(__PVT__t__BRA__6__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__9__KET__ = ((IData)(__PVT__t__BRA__8__KET__) 
                               ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__11__KET__ = ((IData)(__PVT__t__BRA__10__KET__) 
                                ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__17__KET__ = ((IData)(__PVT__t__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__22__KET__ = ((IData)(__PVT__t__BRA__18__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__19__KET__ = ((IData)(__PVT__t__BRA__9__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__20__KET__ = ((IData)(__PVT__t__BRA__11__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__21__KET__ = ((IData)(__PVT__t__BRA__17__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__20__KET__));
    __PVT__t__BRA__23__KET__ = ((IData)(__PVT__t__BRA__19__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__)));
    __PVT__t__BRA__24__KET__ = (1U & ((IData)(__PVT__t__BRA__20__KET__) 
                                      ^ ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                          >> 0x00000017U) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__))));
    __PVT__t__BRA__25__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                ^ (IData)(__PVT__t__BRA__22__KET__));
    __PVT__t__BRA__26__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                & (IData)(__PVT__t__BRA__23__KET__));
    __PVT__t__BRA__30__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(__PVT__t__BRA__24__KET__));
    __PVT__t__BRA__31__KET__ = ((IData)(__PVT__t__BRA__22__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__27__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__32__KET__ = ((IData)(__PVT__t__BRA__31__KET__) 
                                & (IData)(__PVT__t__BRA__30__KET__));
    __PVT__t__BRA__28__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                & (IData)(__PVT__t__BRA__27__KET__));
    vlSelfRef.__PVT__t__BRA__33__KET__ = ((IData)(__PVT__t__BRA__32__KET__) 
                                          ^ (IData)(__PVT__t__BRA__24__KET__));
    vlSelfRef.__PVT__t__BRA__29__KET__ = ((IData)(__PVT__t__BRA__28__KET__) 
                                          ^ (IData)(__PVT__t__BRA__22__KET__));
    vlSelfRef.__PVT__z__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                         & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                            >> 0x00000010U));
    __PVT__t__BRA__34__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__35__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    vlSelfRef.__PVT__z__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    vlSelfRef.__PVT__t__BRA__42__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__36__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                & (IData)(__PVT__t__BRA__35__KET__));
    vlSelfRef.__PVT__t__BRA__51__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__z__BRA__5__KET__));
    vlSelfRef.__PVT__t__BRA__37__KET__ = ((IData)(__PVT__t__BRA__36__KET__) 
                                          ^ (IData)(__PVT__t__BRA__34__KET__));
    __PVT__t__BRA__38__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(__PVT__t__BRA__36__KET__));
    vlSelfRef.__PVT__z__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__3__KET__));
    vlSelfRef.__PVT__t__BRA__44__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    __PVT__t__BRA__39__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                & (IData)(__PVT__t__BRA__38__KET__));
    vlSelfRef.__PVT__t__BRA__47__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__10__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__4__KET__)));
    __PVT__t__BRA__49__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__10__KET__));
    vlSelfRef.__PVT__t__BRA__40__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                          ^ (IData)(__PVT__t__BRA__39__KET__));
    vlSelfRef.__PVT__t__BRA__48__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__5__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__5__KET__)));
    vlSelfRef.__PVT__z__BRA__4__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    __PVT__t__BRA__43__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__40__KET__));
    vlSelfRef.__PVT__t__BRA__41__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    vlSelfRef.__PVT__z__BRA__12__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__13__KET__));
    vlSelfRef.__PVT__z__BRA__3__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__45__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__41__KET__));
    vlSelfRef.__PVT__t__BRA__56__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__12__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__48__KET__));
    __PVT__t__BRA__50__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__12__KET__));
    __PVT__t__BRA__53__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__3__KET__));
    vlSelfRef.__PVT__z__BRA__7__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    vlSelfRef.__PVT__z__BRA__16__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    __PVT__t__BRA__57__KET__ = ((IData)(__PVT__t__BRA__50__KET__) 
                                ^ (IData)(__PVT__t__BRA__53__KET__));
    __PVT__t__BRA__54__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__7__KET__));
    __PVT__t__BRA__52__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__7__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__)));
    vlSelfRef.__PVT__t__BRA__55__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__16__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__46__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__9__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__16__KET__));
    __PVT__t__BRA__61__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__2__KET__)) 
                                ^ (IData)(__PVT__t__BRA__57__KET__));
    vlSelfRef.__PVT__t__BRA__59__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__3__KET__) 
                                          ^ (IData)(__PVT__t__BRA__54__KET__));
    vlSelfRef.__PVT__t__BRA__60__KET__ = ((IData)(__PVT__t__BRA__46__KET__) 
                                          ^ (IData)(__PVT__t__BRA__57__KET__));
    __PVT__t__BRA__58__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__46__KET__));
    vlSelfRef.__PVT__t__BRA__64__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__59__KET__));
    vlSelfRef.__PVT__t__BRA__63__KET__ = ((IData)(__PVT__t__BRA__49__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__62__KET__ = ((IData)(__PVT__t__BRA__52__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__66__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                           & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__)) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__63__KET__));
    vlSelfRef.__PVT__t__BRA__65__KET__ = ((IData)(__PVT__t__BRA__61__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__62__KET__));
    vlSelfRef.__VdfgRegularize_h224e5c7b_0_0 = ((IData)(__PVT__t__BRA__53__KET__) 
                                                ^ (IData)(vlSelfRef.__PVT__t__BRA__66__KET__));
    vlSelfRef.__PVT__t__BRA__67__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__64__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__65__KET__));
    vlSelfRef.__PVT__t[0U] = (((((((((IData)(__PVT__t__BRA__31__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__30__KET__) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__28__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(__PVT__t__BRA__27__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__26__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__25__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__24__KET__))) 
                                  << 8U)) | ((((((IData)(__PVT__t__BRA__23__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__22__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__21__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__20__KET__))) 
                                              << 4U) 
                                             | ((((IData)(__PVT__t__BRA__19__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__18__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(__PVT__t__BRA__16__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(__PVT__t__BRA__15__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__14__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__13__KET__) 
                                                         << 1U) 
                                                        | (IData)(__PVT__t__BRA__12__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__11__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__10__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__9__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__8__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__7__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__6__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__5__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__4__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__3__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__2__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(__PVT__t__BRA__1__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__0__KET__))))));
    vlSelfRef.__PVT__t[1U] = (((((((((IData)(vlSelfRef.__PVT__t__BRA__63__KET__) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__t__BRA__62__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__61__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__60__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(vlSelfRef.__PVT__t__BRA__59__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__58__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__57__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__56__KET__))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.__PVT__t__BRA__55__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__54__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__53__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__52__KET__))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.__PVT__t__BRA__51__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__50__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__49__KET__) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__t__BRA__48__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(vlSelfRef.__PVT__t__BRA__47__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__46__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__45__KET__) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__t__BRA__44__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__43__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__t__BRA__40__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__39__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__38__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__36__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__35__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__34__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__32__KET__))))));
    vlSelfRef.__PVT__t[2U] = (0x0000000fU & ((((IData)(vlSelfRef.__PVT__t__BRA__67__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__t__BRA__66__KET__) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__t__BRA__65__KET__) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__t__BRA__64__KET__))));
}

void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__t__BRA__61__KET__;
    __PVT__t__BRA__61__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__58__KET__;
    __PVT__t__BRA__58__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__57__KET__;
    __PVT__t__BRA__57__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__54__KET__;
    __PVT__t__BRA__54__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__53__KET__;
    __PVT__t__BRA__53__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__52__KET__;
    __PVT__t__BRA__52__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__50__KET__;
    __PVT__t__BRA__50__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__49__KET__;
    __PVT__t__BRA__49__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__46__KET__;
    __PVT__t__BRA__46__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__45__KET__;
    __PVT__t__BRA__45__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__43__KET__;
    __PVT__t__BRA__43__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__39__KET__;
    __PVT__t__BRA__39__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__38__KET__;
    __PVT__t__BRA__38__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__36__KET__;
    __PVT__t__BRA__36__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__35__KET__;
    __PVT__t__BRA__35__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__34__KET__;
    __PVT__t__BRA__34__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__32__KET__;
    __PVT__t__BRA__32__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__31__KET__;
    __PVT__t__BRA__31__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__30__KET__;
    __PVT__t__BRA__30__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__28__KET__;
    __PVT__t__BRA__28__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__27__KET__;
    __PVT__t__BRA__27__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__26__KET__;
    __PVT__t__BRA__26__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__25__KET__;
    __PVT__t__BRA__25__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__24__KET__;
    __PVT__t__BRA__24__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__23__KET__;
    __PVT__t__BRA__23__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__22__KET__;
    __PVT__t__BRA__22__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__21__KET__;
    __PVT__t__BRA__21__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__20__KET__;
    __PVT__t__BRA__20__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__19__KET__;
    __PVT__t__BRA__19__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__18__KET__;
    __PVT__t__BRA__18__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__17__KET__;
    __PVT__t__BRA__17__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__16__KET__;
    __PVT__t__BRA__16__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__15__KET__;
    __PVT__t__BRA__15__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__14__KET__;
    __PVT__t__BRA__14__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__13__KET__;
    __PVT__t__BRA__13__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__12__KET__;
    __PVT__t__BRA__12__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__11__KET__;
    __PVT__t__BRA__11__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__10__KET__;
    __PVT__t__BRA__10__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__9__KET__;
    __PVT__t__BRA__9__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__8__KET__;
    __PVT__t__BRA__8__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__7__KET__;
    __PVT__t__BRA__7__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__6__KET__;
    __PVT__t__BRA__6__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__5__KET__;
    __PVT__t__BRA__5__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__4__KET__;
    __PVT__t__BRA__4__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__3__KET__;
    __PVT__t__BRA__3__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__2__KET__;
    __PVT__t__BRA__2__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__1__KET__;
    __PVT__t__BRA__1__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__0__KET__;
    __PVT__t__BRA__0__KET__ = 0;
    // Body
    vlSelfRef.__PVT__y__BRA__8__KET__ = (1U & VL_REDXOR_32(
                                                           (0x84000000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    __PVT__t__BRA__0__KET__ = (1U & VL_REDXOR_32((0x60000000U 
                                                  & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    vlSelfRef.__PVT__y__BRA__9__KET__ = (1U & VL_REDXOR_32(
                                                           (0x90000000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    vlSelfRef.__PVT__y__BRA__14__KET__ = (1U & VL_REDXOR_32(
                                                            (0x14000000U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    vlSelfRef.__PVT__y__BRA__13__KET__ = (1U & VL_REDXOR_32(
                                                            (0x82000000U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U])));
    vlSelfRef.__PVT__y__BRA__1__KET__ = (1U & ((IData)(__PVT__t__BRA__0__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                  >> 0x00000018U)));
    vlSelfRef.__PVT__y__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    vlSelfRef.__PVT__y__BRA__4__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                  >> 0x0000001cU)));
    vlSelfRef.__PVT__y__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                         ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                            >> 0x0000001fU));
    vlSelfRef.__PVT__y__BRA__5__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                  >> 0x00000019U)));
    __PVT__t__BRA__1__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                      >> 0x0000001bU) 
                                     ^ (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)));
    __PVT__t__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__4__KET__) 
                               & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                  >> 0x00000018U));
    vlSelfRef.__PVT__y__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__));
    __PVT__t__BRA__8__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    vlSelfRef.__PVT__y__BRA__15__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                   >> 0x0000001aU)));
    vlSelfRef.__PVT__y__BRA__20__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                   >> 0x0000001eU)));
    vlSelfRef.__PVT__y__BRA__6__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                  >> 0x00000018U)));
    __PVT__t__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__12__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__));
    vlSelfRef.__PVT__y__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                          ^ (IData)(__PVT__t__BRA__0__KET__));
    vlSelfRef.__PVT__y__BRA__11__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__20__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__9__KET__));
    __PVT__t__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__3__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__));
    __PVT__t__BRA__6__KET__ = ((IData)(__PVT__t__BRA__5__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__15__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__8__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__));
    vlSelfRef.__PVT__y__BRA__7__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                                >> 0x00000018U) 
                                               ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)));
    vlSelfRef.__PVT__y__BRA__17__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__9__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    vlSelfRef.__PVT__y__BRA__16__KET__ = ((IData)(__PVT__t__BRA__0__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__4__KET__ = ((IData)(__PVT__t__BRA__3__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__2__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    __PVT__t__BRA__13__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__14__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    __PVT__t__BRA__16__KET__ = ((IData)(__PVT__t__BRA__15__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__7__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__14__KET__ = ((IData)(__PVT__t__BRA__13__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__18__KET__ = ((IData)(__PVT__t__BRA__6__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__9__KET__ = ((IData)(__PVT__t__BRA__8__KET__) 
                               ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__11__KET__ = ((IData)(__PVT__t__BRA__10__KET__) 
                                ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__17__KET__ = ((IData)(__PVT__t__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__22__KET__ = ((IData)(__PVT__t__BRA__18__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__19__KET__ = ((IData)(__PVT__t__BRA__9__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__20__KET__ = ((IData)(__PVT__t__BRA__11__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__21__KET__ = ((IData)(__PVT__t__BRA__17__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__20__KET__));
    __PVT__t__BRA__23__KET__ = ((IData)(__PVT__t__BRA__19__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__)));
    __PVT__t__BRA__24__KET__ = (((IData)(__PVT__t__BRA__20__KET__) 
                                 ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                    >> 0x0000001fU)) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__25__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                ^ (IData)(__PVT__t__BRA__22__KET__));
    __PVT__t__BRA__26__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                & (IData)(__PVT__t__BRA__23__KET__));
    __PVT__t__BRA__30__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(__PVT__t__BRA__24__KET__));
    __PVT__t__BRA__31__KET__ = ((IData)(__PVT__t__BRA__22__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__27__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__32__KET__ = ((IData)(__PVT__t__BRA__31__KET__) 
                                & (IData)(__PVT__t__BRA__30__KET__));
    __PVT__t__BRA__28__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                & (IData)(__PVT__t__BRA__27__KET__));
    vlSelfRef.__PVT__t__BRA__33__KET__ = ((IData)(__PVT__t__BRA__32__KET__) 
                                          ^ (IData)(__PVT__t__BRA__24__KET__));
    vlSelfRef.__PVT__t__BRA__29__KET__ = ((IData)(__PVT__t__BRA__28__KET__) 
                                          ^ (IData)(__PVT__t__BRA__22__KET__));
    vlSelfRef.__PVT__z__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                         & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[0U] 
                                            >> 0x00000018U));
    __PVT__t__BRA__34__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__35__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    vlSelfRef.__PVT__z__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    vlSelfRef.__PVT__t__BRA__42__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__36__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                & (IData)(__PVT__t__BRA__35__KET__));
    vlSelfRef.__PVT__t__BRA__51__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__z__BRA__5__KET__));
    vlSelfRef.__PVT__t__BRA__37__KET__ = ((IData)(__PVT__t__BRA__36__KET__) 
                                          ^ (IData)(__PVT__t__BRA__34__KET__));
    __PVT__t__BRA__38__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(__PVT__t__BRA__36__KET__));
    vlSelfRef.__PVT__z__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__3__KET__));
    vlSelfRef.__PVT__t__BRA__44__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    __PVT__t__BRA__39__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                & (IData)(__PVT__t__BRA__38__KET__));
    vlSelfRef.__PVT__t__BRA__47__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__10__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__4__KET__)));
    __PVT__t__BRA__49__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__10__KET__));
    vlSelfRef.__PVT__t__BRA__40__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                          ^ (IData)(__PVT__t__BRA__39__KET__));
    vlSelfRef.__PVT__t__BRA__48__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__5__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__5__KET__)));
    vlSelfRef.__PVT__z__BRA__4__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    __PVT__t__BRA__43__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__40__KET__));
    vlSelfRef.__PVT__t__BRA__41__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    vlSelfRef.__PVT__z__BRA__12__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__13__KET__));
    vlSelfRef.__PVT__z__BRA__3__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__45__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__41__KET__));
    vlSelfRef.__PVT__t__BRA__56__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__12__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__48__KET__));
    __PVT__t__BRA__50__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__12__KET__));
    __PVT__t__BRA__53__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__3__KET__));
    vlSelfRef.__PVT__z__BRA__7__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    vlSelfRef.__PVT__z__BRA__16__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    __PVT__t__BRA__57__KET__ = ((IData)(__PVT__t__BRA__50__KET__) 
                                ^ (IData)(__PVT__t__BRA__53__KET__));
    __PVT__t__BRA__54__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__7__KET__));
    __PVT__t__BRA__52__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__7__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__)));
    vlSelfRef.__PVT__t__BRA__55__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__16__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__46__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__9__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__16__KET__));
    __PVT__t__BRA__61__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__2__KET__)) 
                                ^ (IData)(__PVT__t__BRA__57__KET__));
    vlSelfRef.__PVT__t__BRA__59__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__3__KET__) 
                                          ^ (IData)(__PVT__t__BRA__54__KET__));
    vlSelfRef.__PVT__t__BRA__60__KET__ = ((IData)(__PVT__t__BRA__46__KET__) 
                                          ^ (IData)(__PVT__t__BRA__57__KET__));
    __PVT__t__BRA__58__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__46__KET__));
    vlSelfRef.__PVT__t__BRA__64__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__59__KET__));
    vlSelfRef.__PVT__t__BRA__63__KET__ = ((IData)(__PVT__t__BRA__49__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__62__KET__ = ((IData)(__PVT__t__BRA__52__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__66__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                           & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__)) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__63__KET__));
    vlSelfRef.__PVT__t__BRA__65__KET__ = ((IData)(__PVT__t__BRA__61__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__62__KET__));
    vlSelfRef.__VdfgRegularize_h224e5c7b_0_0 = ((IData)(__PVT__t__BRA__53__KET__) 
                                                ^ (IData)(vlSelfRef.__PVT__t__BRA__66__KET__));
    vlSelfRef.__PVT__t__BRA__67__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__64__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__65__KET__));
    vlSelfRef.__PVT__t[0U] = (((((((((IData)(__PVT__t__BRA__31__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__30__KET__) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__28__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(__PVT__t__BRA__27__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__26__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__25__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__24__KET__))) 
                                  << 8U)) | ((((((IData)(__PVT__t__BRA__23__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__22__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__21__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__20__KET__))) 
                                              << 4U) 
                                             | ((((IData)(__PVT__t__BRA__19__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__18__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(__PVT__t__BRA__16__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(__PVT__t__BRA__15__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__14__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__13__KET__) 
                                                         << 1U) 
                                                        | (IData)(__PVT__t__BRA__12__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__11__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__10__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__9__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__8__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__7__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__6__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__5__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__4__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__3__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__2__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(__PVT__t__BRA__1__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__0__KET__))))));
    vlSelfRef.__PVT__t[1U] = (((((((((IData)(vlSelfRef.__PVT__t__BRA__63__KET__) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__t__BRA__62__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__61__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__60__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(vlSelfRef.__PVT__t__BRA__59__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__58__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__57__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__56__KET__))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.__PVT__t__BRA__55__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__54__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__53__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__52__KET__))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.__PVT__t__BRA__51__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__50__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__49__KET__) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__t__BRA__48__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(vlSelfRef.__PVT__t__BRA__47__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__46__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__45__KET__) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__t__BRA__44__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__43__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__t__BRA__40__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__39__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__38__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__36__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__35__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__34__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__32__KET__))))));
    vlSelfRef.__PVT__t[2U] = (0x0000000fU & ((((IData)(vlSelfRef.__PVT__t__BRA__67__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__t__BRA__66__KET__) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__t__BRA__65__KET__) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__t__BRA__64__KET__))));
}

void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__t__BRA__61__KET__;
    __PVT__t__BRA__61__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__58__KET__;
    __PVT__t__BRA__58__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__57__KET__;
    __PVT__t__BRA__57__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__54__KET__;
    __PVT__t__BRA__54__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__53__KET__;
    __PVT__t__BRA__53__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__52__KET__;
    __PVT__t__BRA__52__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__50__KET__;
    __PVT__t__BRA__50__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__49__KET__;
    __PVT__t__BRA__49__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__46__KET__;
    __PVT__t__BRA__46__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__45__KET__;
    __PVT__t__BRA__45__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__43__KET__;
    __PVT__t__BRA__43__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__39__KET__;
    __PVT__t__BRA__39__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__38__KET__;
    __PVT__t__BRA__38__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__36__KET__;
    __PVT__t__BRA__36__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__35__KET__;
    __PVT__t__BRA__35__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__34__KET__;
    __PVT__t__BRA__34__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__32__KET__;
    __PVT__t__BRA__32__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__31__KET__;
    __PVT__t__BRA__31__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__30__KET__;
    __PVT__t__BRA__30__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__28__KET__;
    __PVT__t__BRA__28__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__27__KET__;
    __PVT__t__BRA__27__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__26__KET__;
    __PVT__t__BRA__26__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__25__KET__;
    __PVT__t__BRA__25__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__24__KET__;
    __PVT__t__BRA__24__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__23__KET__;
    __PVT__t__BRA__23__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__22__KET__;
    __PVT__t__BRA__22__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__21__KET__;
    __PVT__t__BRA__21__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__20__KET__;
    __PVT__t__BRA__20__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__19__KET__;
    __PVT__t__BRA__19__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__18__KET__;
    __PVT__t__BRA__18__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__17__KET__;
    __PVT__t__BRA__17__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__16__KET__;
    __PVT__t__BRA__16__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__15__KET__;
    __PVT__t__BRA__15__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__14__KET__;
    __PVT__t__BRA__14__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__13__KET__;
    __PVT__t__BRA__13__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__12__KET__;
    __PVT__t__BRA__12__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__11__KET__;
    __PVT__t__BRA__11__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__10__KET__;
    __PVT__t__BRA__10__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__9__KET__;
    __PVT__t__BRA__9__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__8__KET__;
    __PVT__t__BRA__8__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__7__KET__;
    __PVT__t__BRA__7__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__6__KET__;
    __PVT__t__BRA__6__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__5__KET__;
    __PVT__t__BRA__5__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__4__KET__;
    __PVT__t__BRA__4__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__3__KET__;
    __PVT__t__BRA__3__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__2__KET__;
    __PVT__t__BRA__2__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__1__KET__;
    __PVT__t__BRA__1__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__0__KET__;
    __PVT__t__BRA__0__KET__ = 0;
    // Body
    vlSelfRef.__PVT__y__BRA__8__KET__ = (1U & VL_REDXOR_8(
                                                          (0x00000084U 
                                                           & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    __PVT__t__BRA__0__KET__ = (1U & VL_REDXOR_8((0x00000060U 
                                                 & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    vlSelfRef.__PVT__y__BRA__9__KET__ = (1U & VL_REDXOR_8(
                                                          (0x00000090U 
                                                           & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    vlSelfRef.__PVT__y__BRA__14__KET__ = (1U & VL_REDXOR_8(
                                                           (0x00000014U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    vlSelfRef.__PVT__y__BRA__13__KET__ = (1U & VL_REDXOR_8(
                                                           (0x00000082U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    vlSelfRef.__PVT__y__BRA__1__KET__ = (1U & ((IData)(__PVT__t__BRA__0__KET__) 
                                               ^ vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U]));
    vlSelfRef.__PVT__y__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    vlSelfRef.__PVT__y__BRA__4__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                  >> 4U)));
    vlSelfRef.__PVT__y__BRA__2__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                  >> 7U)));
    vlSelfRef.__PVT__y__BRA__5__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                  >> 1U)));
    __PVT__t__BRA__1__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                      >> 3U) ^ (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)));
    __PVT__t__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__4__KET__) 
                               & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U]);
    vlSelfRef.__PVT__y__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__));
    __PVT__t__BRA__8__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    vlSelfRef.__PVT__y__BRA__15__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                   >> 2U)));
    vlSelfRef.__PVT__y__BRA__20__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                   >> 6U)));
    vlSelfRef.__PVT__y__BRA__6__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                               ^ vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U]));
    __PVT__t__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__12__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__));
    vlSelfRef.__PVT__y__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                          ^ (IData)(__PVT__t__BRA__0__KET__));
    vlSelfRef.__PVT__y__BRA__11__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__20__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__9__KET__));
    __PVT__t__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__3__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__));
    __PVT__t__BRA__6__KET__ = ((IData)(__PVT__t__BRA__5__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__15__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__8__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__));
    vlSelfRef.__PVT__y__BRA__7__KET__ = (1U & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                               ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)));
    vlSelfRef.__PVT__y__BRA__17__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__9__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    vlSelfRef.__PVT__y__BRA__16__KET__ = ((IData)(__PVT__t__BRA__0__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__4__KET__ = ((IData)(__PVT__t__BRA__3__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__2__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    __PVT__t__BRA__13__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__14__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    __PVT__t__BRA__16__KET__ = ((IData)(__PVT__t__BRA__15__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__7__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__14__KET__ = ((IData)(__PVT__t__BRA__13__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__18__KET__ = ((IData)(__PVT__t__BRA__6__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__9__KET__ = ((IData)(__PVT__t__BRA__8__KET__) 
                               ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__11__KET__ = ((IData)(__PVT__t__BRA__10__KET__) 
                                ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__17__KET__ = ((IData)(__PVT__t__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__22__KET__ = ((IData)(__PVT__t__BRA__18__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__19__KET__ = ((IData)(__PVT__t__BRA__9__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__20__KET__ = ((IData)(__PVT__t__BRA__11__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__21__KET__ = ((IData)(__PVT__t__BRA__17__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__20__KET__));
    __PVT__t__BRA__23__KET__ = ((IData)(__PVT__t__BRA__19__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__)));
    __PVT__t__BRA__24__KET__ = (1U & ((IData)(__PVT__t__BRA__20__KET__) 
                                      ^ ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                          >> 7U) ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__))));
    __PVT__t__BRA__25__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                ^ (IData)(__PVT__t__BRA__22__KET__));
    __PVT__t__BRA__26__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                & (IData)(__PVT__t__BRA__23__KET__));
    __PVT__t__BRA__30__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(__PVT__t__BRA__24__KET__));
    __PVT__t__BRA__31__KET__ = ((IData)(__PVT__t__BRA__22__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__27__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__32__KET__ = ((IData)(__PVT__t__BRA__31__KET__) 
                                & (IData)(__PVT__t__BRA__30__KET__));
    __PVT__t__BRA__28__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                & (IData)(__PVT__t__BRA__27__KET__));
    vlSelfRef.__PVT__t__BRA__33__KET__ = ((IData)(__PVT__t__BRA__32__KET__) 
                                          ^ (IData)(__PVT__t__BRA__24__KET__));
    vlSelfRef.__PVT__t__BRA__29__KET__ = ((IData)(__PVT__t__BRA__28__KET__) 
                                          ^ (IData)(__PVT__t__BRA__22__KET__));
    vlSelfRef.__PVT__z__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                         & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U]);
    __PVT__t__BRA__34__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__35__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    vlSelfRef.__PVT__z__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    vlSelfRef.__PVT__t__BRA__42__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__36__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                & (IData)(__PVT__t__BRA__35__KET__));
    vlSelfRef.__PVT__t__BRA__51__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__z__BRA__5__KET__));
    vlSelfRef.__PVT__t__BRA__37__KET__ = ((IData)(__PVT__t__BRA__36__KET__) 
                                          ^ (IData)(__PVT__t__BRA__34__KET__));
    __PVT__t__BRA__38__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(__PVT__t__BRA__36__KET__));
    vlSelfRef.__PVT__z__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__3__KET__));
    vlSelfRef.__PVT__t__BRA__44__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    __PVT__t__BRA__39__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                & (IData)(__PVT__t__BRA__38__KET__));
    vlSelfRef.__PVT__t__BRA__47__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__10__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__4__KET__)));
    __PVT__t__BRA__49__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__10__KET__));
    vlSelfRef.__PVT__t__BRA__40__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                          ^ (IData)(__PVT__t__BRA__39__KET__));
    vlSelfRef.__PVT__t__BRA__48__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__5__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__5__KET__)));
    vlSelfRef.__PVT__z__BRA__4__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    __PVT__t__BRA__43__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__40__KET__));
    vlSelfRef.__PVT__t__BRA__41__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    vlSelfRef.__PVT__z__BRA__12__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__13__KET__));
    vlSelfRef.__PVT__z__BRA__3__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__45__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__41__KET__));
    vlSelfRef.__PVT__t__BRA__56__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__12__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__48__KET__));
    __PVT__t__BRA__50__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__12__KET__));
    __PVT__t__BRA__53__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__3__KET__));
    vlSelfRef.__PVT__z__BRA__7__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    vlSelfRef.__PVT__z__BRA__16__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    __PVT__t__BRA__57__KET__ = ((IData)(__PVT__t__BRA__50__KET__) 
                                ^ (IData)(__PVT__t__BRA__53__KET__));
    __PVT__t__BRA__54__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__7__KET__));
    __PVT__t__BRA__52__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__7__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__)));
    vlSelfRef.__PVT__t__BRA__55__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__16__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__46__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__9__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__16__KET__));
    __PVT__t__BRA__61__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__2__KET__)) 
                                ^ (IData)(__PVT__t__BRA__57__KET__));
    vlSelfRef.__PVT__t__BRA__59__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__3__KET__) 
                                          ^ (IData)(__PVT__t__BRA__54__KET__));
    vlSelfRef.__PVT__t__BRA__60__KET__ = ((IData)(__PVT__t__BRA__46__KET__) 
                                          ^ (IData)(__PVT__t__BRA__57__KET__));
    __PVT__t__BRA__58__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__46__KET__));
    vlSelfRef.__PVT__t__BRA__64__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__59__KET__));
    vlSelfRef.__PVT__t__BRA__63__KET__ = ((IData)(__PVT__t__BRA__49__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__62__KET__ = ((IData)(__PVT__t__BRA__52__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__66__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                           & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__)) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__63__KET__));
    vlSelfRef.__PVT__t__BRA__65__KET__ = ((IData)(__PVT__t__BRA__61__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__62__KET__));
    vlSelfRef.__VdfgRegularize_h224e5c7b_0_0 = ((IData)(__PVT__t__BRA__53__KET__) 
                                                ^ (IData)(vlSelfRef.__PVT__t__BRA__66__KET__));
    vlSelfRef.__PVT__t__BRA__67__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__64__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__65__KET__));
    vlSelfRef.__PVT__t[0U] = (((((((((IData)(__PVT__t__BRA__31__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__30__KET__) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__28__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(__PVT__t__BRA__27__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__26__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__25__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__24__KET__))) 
                                  << 8U)) | ((((((IData)(__PVT__t__BRA__23__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__22__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__21__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__20__KET__))) 
                                              << 4U) 
                                             | ((((IData)(__PVT__t__BRA__19__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__18__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(__PVT__t__BRA__16__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(__PVT__t__BRA__15__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__14__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__13__KET__) 
                                                         << 1U) 
                                                        | (IData)(__PVT__t__BRA__12__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__11__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__10__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__9__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__8__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__7__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__6__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__5__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__4__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__3__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__2__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(__PVT__t__BRA__1__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__0__KET__))))));
    vlSelfRef.__PVT__t[1U] = (((((((((IData)(vlSelfRef.__PVT__t__BRA__63__KET__) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__t__BRA__62__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__61__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__60__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(vlSelfRef.__PVT__t__BRA__59__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__58__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__57__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__56__KET__))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.__PVT__t__BRA__55__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__54__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__53__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__52__KET__))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.__PVT__t__BRA__51__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__50__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__49__KET__) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__t__BRA__48__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(vlSelfRef.__PVT__t__BRA__47__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__46__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__45__KET__) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__t__BRA__44__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__43__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__t__BRA__40__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__39__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__38__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__36__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__35__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__34__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__32__KET__))))));
    vlSelfRef.__PVT__t[2U] = (0x0000000fU & ((((IData)(vlSelfRef.__PVT__t__BRA__67__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__t__BRA__66__KET__) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__t__BRA__65__KET__) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__t__BRA__64__KET__))));
}

void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__t__BRA__61__KET__;
    __PVT__t__BRA__61__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__58__KET__;
    __PVT__t__BRA__58__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__57__KET__;
    __PVT__t__BRA__57__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__54__KET__;
    __PVT__t__BRA__54__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__53__KET__;
    __PVT__t__BRA__53__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__52__KET__;
    __PVT__t__BRA__52__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__50__KET__;
    __PVT__t__BRA__50__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__49__KET__;
    __PVT__t__BRA__49__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__46__KET__;
    __PVT__t__BRA__46__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__45__KET__;
    __PVT__t__BRA__45__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__43__KET__;
    __PVT__t__BRA__43__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__39__KET__;
    __PVT__t__BRA__39__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__38__KET__;
    __PVT__t__BRA__38__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__36__KET__;
    __PVT__t__BRA__36__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__35__KET__;
    __PVT__t__BRA__35__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__34__KET__;
    __PVT__t__BRA__34__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__32__KET__;
    __PVT__t__BRA__32__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__31__KET__;
    __PVT__t__BRA__31__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__30__KET__;
    __PVT__t__BRA__30__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__28__KET__;
    __PVT__t__BRA__28__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__27__KET__;
    __PVT__t__BRA__27__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__26__KET__;
    __PVT__t__BRA__26__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__25__KET__;
    __PVT__t__BRA__25__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__24__KET__;
    __PVT__t__BRA__24__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__23__KET__;
    __PVT__t__BRA__23__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__22__KET__;
    __PVT__t__BRA__22__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__21__KET__;
    __PVT__t__BRA__21__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__20__KET__;
    __PVT__t__BRA__20__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__19__KET__;
    __PVT__t__BRA__19__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__18__KET__;
    __PVT__t__BRA__18__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__17__KET__;
    __PVT__t__BRA__17__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__16__KET__;
    __PVT__t__BRA__16__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__15__KET__;
    __PVT__t__BRA__15__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__14__KET__;
    __PVT__t__BRA__14__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__13__KET__;
    __PVT__t__BRA__13__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__12__KET__;
    __PVT__t__BRA__12__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__11__KET__;
    __PVT__t__BRA__11__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__10__KET__;
    __PVT__t__BRA__10__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__9__KET__;
    __PVT__t__BRA__9__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__8__KET__;
    __PVT__t__BRA__8__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__7__KET__;
    __PVT__t__BRA__7__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__6__KET__;
    __PVT__t__BRA__6__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__5__KET__;
    __PVT__t__BRA__5__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__4__KET__;
    __PVT__t__BRA__4__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__3__KET__;
    __PVT__t__BRA__3__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__2__KET__;
    __PVT__t__BRA__2__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__1__KET__;
    __PVT__t__BRA__1__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__0__KET__;
    __PVT__t__BRA__0__KET__ = 0;
    // Body
    vlSelfRef.__PVT__y__BRA__8__KET__ = (1U & VL_REDXOR_16(
                                                           (0x00008400U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    __PVT__t__BRA__0__KET__ = (1U & VL_REDXOR_16((0x00006000U 
                                                  & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    vlSelfRef.__PVT__y__BRA__9__KET__ = (1U & VL_REDXOR_16(
                                                           (0x00009000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    vlSelfRef.__PVT__y__BRA__14__KET__ = (1U & VL_REDXOR_16(
                                                            (0x00001400U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    vlSelfRef.__PVT__y__BRA__13__KET__ = (1U & VL_REDXOR_16(
                                                            (0x00008200U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    vlSelfRef.__PVT__y__BRA__1__KET__ = (1U & ((IData)(__PVT__t__BRA__0__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                  >> 8U)));
    vlSelfRef.__PVT__y__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    vlSelfRef.__PVT__y__BRA__4__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                  >> 0x0000000cU)));
    vlSelfRef.__PVT__y__BRA__2__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                  >> 0x0000000fU)));
    vlSelfRef.__PVT__y__BRA__5__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                  >> 9U)));
    __PVT__t__BRA__1__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                      >> 0x0000000bU) 
                                     ^ (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)));
    __PVT__t__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__4__KET__) 
                               & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                  >> 8U));
    vlSelfRef.__PVT__y__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__));
    __PVT__t__BRA__8__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    vlSelfRef.__PVT__y__BRA__15__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                   >> 0x0000000aU)));
    vlSelfRef.__PVT__y__BRA__20__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                   >> 0x0000000eU)));
    vlSelfRef.__PVT__y__BRA__6__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                  >> 8U)));
    __PVT__t__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__12__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__));
    vlSelfRef.__PVT__y__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                          ^ (IData)(__PVT__t__BRA__0__KET__));
    vlSelfRef.__PVT__y__BRA__11__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__20__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__9__KET__));
    __PVT__t__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__3__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__));
    __PVT__t__BRA__6__KET__ = ((IData)(__PVT__t__BRA__5__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__15__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__8__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__));
    vlSelfRef.__PVT__y__BRA__7__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                >> 8U) 
                                               ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)));
    vlSelfRef.__PVT__y__BRA__17__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__9__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    vlSelfRef.__PVT__y__BRA__16__KET__ = ((IData)(__PVT__t__BRA__0__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__4__KET__ = ((IData)(__PVT__t__BRA__3__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__2__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    __PVT__t__BRA__13__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__14__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    __PVT__t__BRA__16__KET__ = ((IData)(__PVT__t__BRA__15__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__7__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__14__KET__ = ((IData)(__PVT__t__BRA__13__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__18__KET__ = ((IData)(__PVT__t__BRA__6__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__9__KET__ = ((IData)(__PVT__t__BRA__8__KET__) 
                               ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__11__KET__ = ((IData)(__PVT__t__BRA__10__KET__) 
                                ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__17__KET__ = ((IData)(__PVT__t__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__22__KET__ = ((IData)(__PVT__t__BRA__18__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__19__KET__ = ((IData)(__PVT__t__BRA__9__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__20__KET__ = ((IData)(__PVT__t__BRA__11__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__21__KET__ = ((IData)(__PVT__t__BRA__17__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__20__KET__));
    __PVT__t__BRA__23__KET__ = ((IData)(__PVT__t__BRA__19__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__)));
    __PVT__t__BRA__24__KET__ = (1U & ((IData)(__PVT__t__BRA__20__KET__) 
                                      ^ ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                          >> 0x0000000fU) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__))));
    __PVT__t__BRA__25__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                ^ (IData)(__PVT__t__BRA__22__KET__));
    __PVT__t__BRA__26__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                & (IData)(__PVT__t__BRA__23__KET__));
    __PVT__t__BRA__30__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(__PVT__t__BRA__24__KET__));
    __PVT__t__BRA__31__KET__ = ((IData)(__PVT__t__BRA__22__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__27__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__32__KET__ = ((IData)(__PVT__t__BRA__31__KET__) 
                                & (IData)(__PVT__t__BRA__30__KET__));
    __PVT__t__BRA__28__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                & (IData)(__PVT__t__BRA__27__KET__));
    vlSelfRef.__PVT__t__BRA__33__KET__ = ((IData)(__PVT__t__BRA__32__KET__) 
                                          ^ (IData)(__PVT__t__BRA__24__KET__));
    vlSelfRef.__PVT__t__BRA__29__KET__ = ((IData)(__PVT__t__BRA__28__KET__) 
                                          ^ (IData)(__PVT__t__BRA__22__KET__));
    vlSelfRef.__PVT__z__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                         & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                            >> 8U));
    __PVT__t__BRA__34__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__35__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    vlSelfRef.__PVT__z__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    vlSelfRef.__PVT__t__BRA__42__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__36__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                & (IData)(__PVT__t__BRA__35__KET__));
    vlSelfRef.__PVT__t__BRA__51__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__z__BRA__5__KET__));
    vlSelfRef.__PVT__t__BRA__37__KET__ = ((IData)(__PVT__t__BRA__36__KET__) 
                                          ^ (IData)(__PVT__t__BRA__34__KET__));
    __PVT__t__BRA__38__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(__PVT__t__BRA__36__KET__));
    vlSelfRef.__PVT__z__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__3__KET__));
    vlSelfRef.__PVT__t__BRA__44__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    __PVT__t__BRA__39__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                & (IData)(__PVT__t__BRA__38__KET__));
    vlSelfRef.__PVT__t__BRA__47__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__10__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__4__KET__)));
    __PVT__t__BRA__49__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__10__KET__));
    vlSelfRef.__PVT__t__BRA__40__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                          ^ (IData)(__PVT__t__BRA__39__KET__));
    vlSelfRef.__PVT__t__BRA__48__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__5__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__5__KET__)));
    vlSelfRef.__PVT__z__BRA__4__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    __PVT__t__BRA__43__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__40__KET__));
    vlSelfRef.__PVT__t__BRA__41__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    vlSelfRef.__PVT__z__BRA__12__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__13__KET__));
    vlSelfRef.__PVT__z__BRA__3__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__45__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__41__KET__));
    vlSelfRef.__PVT__t__BRA__56__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__12__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__48__KET__));
    __PVT__t__BRA__50__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__12__KET__));
    __PVT__t__BRA__53__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__3__KET__));
    vlSelfRef.__PVT__z__BRA__7__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    vlSelfRef.__PVT__z__BRA__16__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    __PVT__t__BRA__57__KET__ = ((IData)(__PVT__t__BRA__50__KET__) 
                                ^ (IData)(__PVT__t__BRA__53__KET__));
    __PVT__t__BRA__54__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__7__KET__));
    __PVT__t__BRA__52__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__7__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__)));
    vlSelfRef.__PVT__t__BRA__55__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__16__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__46__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__9__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__16__KET__));
    __PVT__t__BRA__61__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__2__KET__)) 
                                ^ (IData)(__PVT__t__BRA__57__KET__));
    vlSelfRef.__PVT__t__BRA__59__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__3__KET__) 
                                          ^ (IData)(__PVT__t__BRA__54__KET__));
    vlSelfRef.__PVT__t__BRA__60__KET__ = ((IData)(__PVT__t__BRA__46__KET__) 
                                          ^ (IData)(__PVT__t__BRA__57__KET__));
    __PVT__t__BRA__58__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__46__KET__));
    vlSelfRef.__PVT__t__BRA__64__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__59__KET__));
    vlSelfRef.__PVT__t__BRA__63__KET__ = ((IData)(__PVT__t__BRA__49__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__62__KET__ = ((IData)(__PVT__t__BRA__52__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__66__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                           & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__)) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__63__KET__));
    vlSelfRef.__PVT__t__BRA__65__KET__ = ((IData)(__PVT__t__BRA__61__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__62__KET__));
    vlSelfRef.__VdfgRegularize_h224e5c7b_0_0 = ((IData)(__PVT__t__BRA__53__KET__) 
                                                ^ (IData)(vlSelfRef.__PVT__t__BRA__66__KET__));
    vlSelfRef.__PVT__t__BRA__67__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__64__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__65__KET__));
    vlSelfRef.__PVT__t[0U] = (((((((((IData)(__PVT__t__BRA__31__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__30__KET__) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__28__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(__PVT__t__BRA__27__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__26__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__25__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__24__KET__))) 
                                  << 8U)) | ((((((IData)(__PVT__t__BRA__23__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__22__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__21__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__20__KET__))) 
                                              << 4U) 
                                             | ((((IData)(__PVT__t__BRA__19__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__18__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(__PVT__t__BRA__16__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(__PVT__t__BRA__15__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__14__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__13__KET__) 
                                                         << 1U) 
                                                        | (IData)(__PVT__t__BRA__12__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__11__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__10__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__9__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__8__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__7__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__6__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__5__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__4__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__3__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__2__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(__PVT__t__BRA__1__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__0__KET__))))));
    vlSelfRef.__PVT__t[1U] = (((((((((IData)(vlSelfRef.__PVT__t__BRA__63__KET__) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__t__BRA__62__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__61__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__60__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(vlSelfRef.__PVT__t__BRA__59__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__58__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__57__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__56__KET__))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.__PVT__t__BRA__55__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__54__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__53__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__52__KET__))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.__PVT__t__BRA__51__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__50__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__49__KET__) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__t__BRA__48__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(vlSelfRef.__PVT__t__BRA__47__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__46__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__45__KET__) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__t__BRA__44__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__43__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__t__BRA__40__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__39__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__38__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__36__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__35__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__34__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__32__KET__))))));
    vlSelfRef.__PVT__t[2U] = (0x0000000fU & ((((IData)(vlSelfRef.__PVT__t__BRA__67__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__t__BRA__66__KET__) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__t__BRA__65__KET__) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__t__BRA__64__KET__))));
}

void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__t__BRA__61__KET__;
    __PVT__t__BRA__61__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__58__KET__;
    __PVT__t__BRA__58__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__57__KET__;
    __PVT__t__BRA__57__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__54__KET__;
    __PVT__t__BRA__54__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__53__KET__;
    __PVT__t__BRA__53__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__52__KET__;
    __PVT__t__BRA__52__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__50__KET__;
    __PVT__t__BRA__50__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__49__KET__;
    __PVT__t__BRA__49__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__46__KET__;
    __PVT__t__BRA__46__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__45__KET__;
    __PVT__t__BRA__45__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__43__KET__;
    __PVT__t__BRA__43__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__39__KET__;
    __PVT__t__BRA__39__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__38__KET__;
    __PVT__t__BRA__38__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__36__KET__;
    __PVT__t__BRA__36__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__35__KET__;
    __PVT__t__BRA__35__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__34__KET__;
    __PVT__t__BRA__34__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__32__KET__;
    __PVT__t__BRA__32__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__31__KET__;
    __PVT__t__BRA__31__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__30__KET__;
    __PVT__t__BRA__30__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__28__KET__;
    __PVT__t__BRA__28__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__27__KET__;
    __PVT__t__BRA__27__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__26__KET__;
    __PVT__t__BRA__26__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__25__KET__;
    __PVT__t__BRA__25__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__24__KET__;
    __PVT__t__BRA__24__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__23__KET__;
    __PVT__t__BRA__23__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__22__KET__;
    __PVT__t__BRA__22__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__21__KET__;
    __PVT__t__BRA__21__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__20__KET__;
    __PVT__t__BRA__20__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__19__KET__;
    __PVT__t__BRA__19__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__18__KET__;
    __PVT__t__BRA__18__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__17__KET__;
    __PVT__t__BRA__17__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__16__KET__;
    __PVT__t__BRA__16__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__15__KET__;
    __PVT__t__BRA__15__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__14__KET__;
    __PVT__t__BRA__14__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__13__KET__;
    __PVT__t__BRA__13__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__12__KET__;
    __PVT__t__BRA__12__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__11__KET__;
    __PVT__t__BRA__11__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__10__KET__;
    __PVT__t__BRA__10__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__9__KET__;
    __PVT__t__BRA__9__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__8__KET__;
    __PVT__t__BRA__8__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__7__KET__;
    __PVT__t__BRA__7__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__6__KET__;
    __PVT__t__BRA__6__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__5__KET__;
    __PVT__t__BRA__5__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__4__KET__;
    __PVT__t__BRA__4__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__3__KET__;
    __PVT__t__BRA__3__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__2__KET__;
    __PVT__t__BRA__2__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__1__KET__;
    __PVT__t__BRA__1__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__0__KET__;
    __PVT__t__BRA__0__KET__ = 0;
    // Body
    vlSelfRef.__PVT__y__BRA__8__KET__ = (1U & VL_REDXOR_32(
                                                           (0x00840000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    __PVT__t__BRA__0__KET__ = (1U & VL_REDXOR_32((0x00600000U 
                                                  & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    vlSelfRef.__PVT__y__BRA__9__KET__ = (1U & VL_REDXOR_32(
                                                           (0x00900000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    vlSelfRef.__PVT__y__BRA__14__KET__ = (1U & VL_REDXOR_32(
                                                            (0x00140000U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    vlSelfRef.__PVT__y__BRA__13__KET__ = (1U & VL_REDXOR_32(
                                                            (0x00820000U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    vlSelfRef.__PVT__y__BRA__1__KET__ = (1U & ((IData)(__PVT__t__BRA__0__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                  >> 0x00000010U)));
    vlSelfRef.__PVT__y__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    vlSelfRef.__PVT__y__BRA__4__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                  >> 0x00000014U)));
    vlSelfRef.__PVT__y__BRA__2__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                  >> 0x00000017U)));
    vlSelfRef.__PVT__y__BRA__5__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                  >> 0x00000011U)));
    __PVT__t__BRA__1__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                      >> 0x00000013U) 
                                     ^ (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)));
    __PVT__t__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__4__KET__) 
                               & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                  >> 0x00000010U));
    vlSelfRef.__PVT__y__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__));
    __PVT__t__BRA__8__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    vlSelfRef.__PVT__y__BRA__15__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                   >> 0x00000012U)));
    vlSelfRef.__PVT__y__BRA__20__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                   >> 0x00000016U)));
    vlSelfRef.__PVT__y__BRA__6__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                  >> 0x00000010U)));
    __PVT__t__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__12__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__));
    vlSelfRef.__PVT__y__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                          ^ (IData)(__PVT__t__BRA__0__KET__));
    vlSelfRef.__PVT__y__BRA__11__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__20__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__9__KET__));
    __PVT__t__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__3__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__));
    __PVT__t__BRA__6__KET__ = ((IData)(__PVT__t__BRA__5__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__15__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__8__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__));
    vlSelfRef.__PVT__y__BRA__7__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                >> 0x00000010U) 
                                               ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)));
    vlSelfRef.__PVT__y__BRA__17__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__9__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    vlSelfRef.__PVT__y__BRA__16__KET__ = ((IData)(__PVT__t__BRA__0__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__4__KET__ = ((IData)(__PVT__t__BRA__3__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__2__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    __PVT__t__BRA__13__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__14__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    __PVT__t__BRA__16__KET__ = ((IData)(__PVT__t__BRA__15__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__7__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__14__KET__ = ((IData)(__PVT__t__BRA__13__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__18__KET__ = ((IData)(__PVT__t__BRA__6__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__9__KET__ = ((IData)(__PVT__t__BRA__8__KET__) 
                               ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__11__KET__ = ((IData)(__PVT__t__BRA__10__KET__) 
                                ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__17__KET__ = ((IData)(__PVT__t__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__22__KET__ = ((IData)(__PVT__t__BRA__18__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__19__KET__ = ((IData)(__PVT__t__BRA__9__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__20__KET__ = ((IData)(__PVT__t__BRA__11__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__21__KET__ = ((IData)(__PVT__t__BRA__17__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__20__KET__));
    __PVT__t__BRA__23__KET__ = ((IData)(__PVT__t__BRA__19__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__)));
    __PVT__t__BRA__24__KET__ = (1U & ((IData)(__PVT__t__BRA__20__KET__) 
                                      ^ ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                          >> 0x00000017U) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__))));
    __PVT__t__BRA__25__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                ^ (IData)(__PVT__t__BRA__22__KET__));
    __PVT__t__BRA__26__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                & (IData)(__PVT__t__BRA__23__KET__));
    __PVT__t__BRA__30__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(__PVT__t__BRA__24__KET__));
    __PVT__t__BRA__31__KET__ = ((IData)(__PVT__t__BRA__22__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__27__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__32__KET__ = ((IData)(__PVT__t__BRA__31__KET__) 
                                & (IData)(__PVT__t__BRA__30__KET__));
    __PVT__t__BRA__28__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                & (IData)(__PVT__t__BRA__27__KET__));
    vlSelfRef.__PVT__t__BRA__33__KET__ = ((IData)(__PVT__t__BRA__32__KET__) 
                                          ^ (IData)(__PVT__t__BRA__24__KET__));
    vlSelfRef.__PVT__t__BRA__29__KET__ = ((IData)(__PVT__t__BRA__28__KET__) 
                                          ^ (IData)(__PVT__t__BRA__22__KET__));
    vlSelfRef.__PVT__z__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                         & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                            >> 0x00000010U));
    __PVT__t__BRA__34__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__35__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    vlSelfRef.__PVT__z__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    vlSelfRef.__PVT__t__BRA__42__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__36__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                & (IData)(__PVT__t__BRA__35__KET__));
    vlSelfRef.__PVT__t__BRA__51__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__z__BRA__5__KET__));
    vlSelfRef.__PVT__t__BRA__37__KET__ = ((IData)(__PVT__t__BRA__36__KET__) 
                                          ^ (IData)(__PVT__t__BRA__34__KET__));
    __PVT__t__BRA__38__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(__PVT__t__BRA__36__KET__));
    vlSelfRef.__PVT__z__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__3__KET__));
    vlSelfRef.__PVT__t__BRA__44__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    __PVT__t__BRA__39__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                & (IData)(__PVT__t__BRA__38__KET__));
    vlSelfRef.__PVT__t__BRA__47__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__10__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__4__KET__)));
    __PVT__t__BRA__49__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__10__KET__));
    vlSelfRef.__PVT__t__BRA__40__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                          ^ (IData)(__PVT__t__BRA__39__KET__));
    vlSelfRef.__PVT__t__BRA__48__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__5__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__5__KET__)));
    vlSelfRef.__PVT__z__BRA__4__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    __PVT__t__BRA__43__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__40__KET__));
    vlSelfRef.__PVT__t__BRA__41__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    vlSelfRef.__PVT__z__BRA__12__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__13__KET__));
    vlSelfRef.__PVT__z__BRA__3__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__45__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__41__KET__));
    vlSelfRef.__PVT__t__BRA__56__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__12__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__48__KET__));
    __PVT__t__BRA__50__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__12__KET__));
    __PVT__t__BRA__53__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__3__KET__));
    vlSelfRef.__PVT__z__BRA__7__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    vlSelfRef.__PVT__z__BRA__16__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    __PVT__t__BRA__57__KET__ = ((IData)(__PVT__t__BRA__50__KET__) 
                                ^ (IData)(__PVT__t__BRA__53__KET__));
    __PVT__t__BRA__54__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__7__KET__));
    __PVT__t__BRA__52__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__7__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__)));
    vlSelfRef.__PVT__t__BRA__55__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__16__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__46__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__9__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__16__KET__));
    __PVT__t__BRA__61__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__2__KET__)) 
                                ^ (IData)(__PVT__t__BRA__57__KET__));
    vlSelfRef.__PVT__t__BRA__59__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__3__KET__) 
                                          ^ (IData)(__PVT__t__BRA__54__KET__));
    vlSelfRef.__PVT__t__BRA__60__KET__ = ((IData)(__PVT__t__BRA__46__KET__) 
                                          ^ (IData)(__PVT__t__BRA__57__KET__));
    __PVT__t__BRA__58__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__46__KET__));
    vlSelfRef.__PVT__t__BRA__64__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__59__KET__));
    vlSelfRef.__PVT__t__BRA__63__KET__ = ((IData)(__PVT__t__BRA__49__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__62__KET__ = ((IData)(__PVT__t__BRA__52__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__66__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                           & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__)) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__63__KET__));
    vlSelfRef.__PVT__t__BRA__65__KET__ = ((IData)(__PVT__t__BRA__61__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__62__KET__));
    vlSelfRef.__VdfgRegularize_h224e5c7b_0_0 = ((IData)(__PVT__t__BRA__53__KET__) 
                                                ^ (IData)(vlSelfRef.__PVT__t__BRA__66__KET__));
    vlSelfRef.__PVT__t__BRA__67__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__64__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__65__KET__));
    vlSelfRef.__PVT__t[0U] = (((((((((IData)(__PVT__t__BRA__31__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__30__KET__) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__28__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(__PVT__t__BRA__27__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__26__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__25__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__24__KET__))) 
                                  << 8U)) | ((((((IData)(__PVT__t__BRA__23__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__22__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__21__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__20__KET__))) 
                                              << 4U) 
                                             | ((((IData)(__PVT__t__BRA__19__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__18__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(__PVT__t__BRA__16__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(__PVT__t__BRA__15__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__14__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__13__KET__) 
                                                         << 1U) 
                                                        | (IData)(__PVT__t__BRA__12__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__11__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__10__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__9__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__8__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__7__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__6__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__5__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__4__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__3__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__2__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(__PVT__t__BRA__1__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__0__KET__))))));
    vlSelfRef.__PVT__t[1U] = (((((((((IData)(vlSelfRef.__PVT__t__BRA__63__KET__) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__t__BRA__62__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__61__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__60__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(vlSelfRef.__PVT__t__BRA__59__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__58__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__57__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__56__KET__))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.__PVT__t__BRA__55__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__54__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__53__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__52__KET__))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.__PVT__t__BRA__51__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__50__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__49__KET__) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__t__BRA__48__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(vlSelfRef.__PVT__t__BRA__47__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__46__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__45__KET__) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__t__BRA__44__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__43__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__t__BRA__40__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__39__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__38__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__36__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__35__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__34__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__32__KET__))))));
    vlSelfRef.__PVT__t[2U] = (0x0000000fU & ((((IData)(vlSelfRef.__PVT__t__BRA__67__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__t__BRA__66__KET__) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__t__BRA__65__KET__) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__t__BRA__64__KET__))));
}

void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__t__BRA__61__KET__;
    __PVT__t__BRA__61__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__58__KET__;
    __PVT__t__BRA__58__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__57__KET__;
    __PVT__t__BRA__57__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__54__KET__;
    __PVT__t__BRA__54__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__53__KET__;
    __PVT__t__BRA__53__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__52__KET__;
    __PVT__t__BRA__52__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__50__KET__;
    __PVT__t__BRA__50__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__49__KET__;
    __PVT__t__BRA__49__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__46__KET__;
    __PVT__t__BRA__46__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__45__KET__;
    __PVT__t__BRA__45__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__43__KET__;
    __PVT__t__BRA__43__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__39__KET__;
    __PVT__t__BRA__39__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__38__KET__;
    __PVT__t__BRA__38__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__36__KET__;
    __PVT__t__BRA__36__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__35__KET__;
    __PVT__t__BRA__35__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__34__KET__;
    __PVT__t__BRA__34__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__32__KET__;
    __PVT__t__BRA__32__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__31__KET__;
    __PVT__t__BRA__31__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__30__KET__;
    __PVT__t__BRA__30__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__28__KET__;
    __PVT__t__BRA__28__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__27__KET__;
    __PVT__t__BRA__27__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__26__KET__;
    __PVT__t__BRA__26__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__25__KET__;
    __PVT__t__BRA__25__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__24__KET__;
    __PVT__t__BRA__24__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__23__KET__;
    __PVT__t__BRA__23__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__22__KET__;
    __PVT__t__BRA__22__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__21__KET__;
    __PVT__t__BRA__21__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__20__KET__;
    __PVT__t__BRA__20__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__19__KET__;
    __PVT__t__BRA__19__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__18__KET__;
    __PVT__t__BRA__18__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__17__KET__;
    __PVT__t__BRA__17__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__16__KET__;
    __PVT__t__BRA__16__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__15__KET__;
    __PVT__t__BRA__15__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__14__KET__;
    __PVT__t__BRA__14__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__13__KET__;
    __PVT__t__BRA__13__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__12__KET__;
    __PVT__t__BRA__12__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__11__KET__;
    __PVT__t__BRA__11__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__10__KET__;
    __PVT__t__BRA__10__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__9__KET__;
    __PVT__t__BRA__9__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__8__KET__;
    __PVT__t__BRA__8__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__7__KET__;
    __PVT__t__BRA__7__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__6__KET__;
    __PVT__t__BRA__6__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__5__KET__;
    __PVT__t__BRA__5__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__4__KET__;
    __PVT__t__BRA__4__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__3__KET__;
    __PVT__t__BRA__3__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__2__KET__;
    __PVT__t__BRA__2__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__1__KET__;
    __PVT__t__BRA__1__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__0__KET__;
    __PVT__t__BRA__0__KET__ = 0;
    // Body
    vlSelfRef.__PVT__y__BRA__8__KET__ = (1U & VL_REDXOR_32(
                                                           (0x84000000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    __PVT__t__BRA__0__KET__ = (1U & VL_REDXOR_32((0x60000000U 
                                                  & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    vlSelfRef.__PVT__y__BRA__9__KET__ = (1U & VL_REDXOR_32(
                                                           (0x90000000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    vlSelfRef.__PVT__y__BRA__14__KET__ = (1U & VL_REDXOR_32(
                                                            (0x14000000U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    vlSelfRef.__PVT__y__BRA__13__KET__ = (1U & VL_REDXOR_32(
                                                            (0x82000000U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U])));
    vlSelfRef.__PVT__y__BRA__1__KET__ = (1U & ((IData)(__PVT__t__BRA__0__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                  >> 0x00000018U)));
    vlSelfRef.__PVT__y__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    vlSelfRef.__PVT__y__BRA__4__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                  >> 0x0000001cU)));
    vlSelfRef.__PVT__y__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                         ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                            >> 0x0000001fU));
    vlSelfRef.__PVT__y__BRA__5__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                  >> 0x00000019U)));
    __PVT__t__BRA__1__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                      >> 0x0000001bU) 
                                     ^ (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)));
    __PVT__t__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__4__KET__) 
                               & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                  >> 0x00000018U));
    vlSelfRef.__PVT__y__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__));
    __PVT__t__BRA__8__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    vlSelfRef.__PVT__y__BRA__15__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                   >> 0x0000001aU)));
    vlSelfRef.__PVT__y__BRA__20__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                   >> 0x0000001eU)));
    vlSelfRef.__PVT__y__BRA__6__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                  >> 0x00000018U)));
    __PVT__t__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__12__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__));
    vlSelfRef.__PVT__y__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                          ^ (IData)(__PVT__t__BRA__0__KET__));
    vlSelfRef.__PVT__y__BRA__11__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__20__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__9__KET__));
    __PVT__t__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__3__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__));
    __PVT__t__BRA__6__KET__ = ((IData)(__PVT__t__BRA__5__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__15__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__8__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__));
    vlSelfRef.__PVT__y__BRA__7__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                                >> 0x00000018U) 
                                               ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)));
    vlSelfRef.__PVT__y__BRA__17__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__9__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    vlSelfRef.__PVT__y__BRA__16__KET__ = ((IData)(__PVT__t__BRA__0__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__4__KET__ = ((IData)(__PVT__t__BRA__3__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__2__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    __PVT__t__BRA__13__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__14__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    __PVT__t__BRA__16__KET__ = ((IData)(__PVT__t__BRA__15__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__7__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__14__KET__ = ((IData)(__PVT__t__BRA__13__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__18__KET__ = ((IData)(__PVT__t__BRA__6__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__9__KET__ = ((IData)(__PVT__t__BRA__8__KET__) 
                               ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__11__KET__ = ((IData)(__PVT__t__BRA__10__KET__) 
                                ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__17__KET__ = ((IData)(__PVT__t__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__22__KET__ = ((IData)(__PVT__t__BRA__18__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__19__KET__ = ((IData)(__PVT__t__BRA__9__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__20__KET__ = ((IData)(__PVT__t__BRA__11__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__21__KET__ = ((IData)(__PVT__t__BRA__17__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__20__KET__));
    __PVT__t__BRA__23__KET__ = ((IData)(__PVT__t__BRA__19__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__)));
    __PVT__t__BRA__24__KET__ = (((IData)(__PVT__t__BRA__20__KET__) 
                                 ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                    >> 0x0000001fU)) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__25__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                ^ (IData)(__PVT__t__BRA__22__KET__));
    __PVT__t__BRA__26__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                & (IData)(__PVT__t__BRA__23__KET__));
    __PVT__t__BRA__30__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(__PVT__t__BRA__24__KET__));
    __PVT__t__BRA__31__KET__ = ((IData)(__PVT__t__BRA__22__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__27__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__32__KET__ = ((IData)(__PVT__t__BRA__31__KET__) 
                                & (IData)(__PVT__t__BRA__30__KET__));
    __PVT__t__BRA__28__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                & (IData)(__PVT__t__BRA__27__KET__));
    vlSelfRef.__PVT__t__BRA__33__KET__ = ((IData)(__PVT__t__BRA__32__KET__) 
                                          ^ (IData)(__PVT__t__BRA__24__KET__));
    vlSelfRef.__PVT__t__BRA__29__KET__ = ((IData)(__PVT__t__BRA__28__KET__) 
                                          ^ (IData)(__PVT__t__BRA__22__KET__));
    vlSelfRef.__PVT__z__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                         & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[1U] 
                                            >> 0x00000018U));
    __PVT__t__BRA__34__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__35__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    vlSelfRef.__PVT__z__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    vlSelfRef.__PVT__t__BRA__42__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__36__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                & (IData)(__PVT__t__BRA__35__KET__));
    vlSelfRef.__PVT__t__BRA__51__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__z__BRA__5__KET__));
    vlSelfRef.__PVT__t__BRA__37__KET__ = ((IData)(__PVT__t__BRA__36__KET__) 
                                          ^ (IData)(__PVT__t__BRA__34__KET__));
    __PVT__t__BRA__38__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(__PVT__t__BRA__36__KET__));
    vlSelfRef.__PVT__z__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__3__KET__));
    vlSelfRef.__PVT__t__BRA__44__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    __PVT__t__BRA__39__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                & (IData)(__PVT__t__BRA__38__KET__));
    vlSelfRef.__PVT__t__BRA__47__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__10__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__4__KET__)));
    __PVT__t__BRA__49__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__10__KET__));
    vlSelfRef.__PVT__t__BRA__40__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                          ^ (IData)(__PVT__t__BRA__39__KET__));
    vlSelfRef.__PVT__t__BRA__48__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__5__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__5__KET__)));
    vlSelfRef.__PVT__z__BRA__4__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    __PVT__t__BRA__43__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__40__KET__));
    vlSelfRef.__PVT__t__BRA__41__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    vlSelfRef.__PVT__z__BRA__12__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__13__KET__));
    vlSelfRef.__PVT__z__BRA__3__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__45__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__41__KET__));
    vlSelfRef.__PVT__t__BRA__56__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__12__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__48__KET__));
    __PVT__t__BRA__50__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__12__KET__));
    __PVT__t__BRA__53__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__3__KET__));
    vlSelfRef.__PVT__z__BRA__7__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    vlSelfRef.__PVT__z__BRA__16__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    __PVT__t__BRA__57__KET__ = ((IData)(__PVT__t__BRA__50__KET__) 
                                ^ (IData)(__PVT__t__BRA__53__KET__));
    __PVT__t__BRA__54__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__7__KET__));
    __PVT__t__BRA__52__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__7__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__)));
    vlSelfRef.__PVT__t__BRA__55__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__16__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__46__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__9__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__16__KET__));
    __PVT__t__BRA__61__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__2__KET__)) 
                                ^ (IData)(__PVT__t__BRA__57__KET__));
    vlSelfRef.__PVT__t__BRA__59__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__3__KET__) 
                                          ^ (IData)(__PVT__t__BRA__54__KET__));
    vlSelfRef.__PVT__t__BRA__60__KET__ = ((IData)(__PVT__t__BRA__46__KET__) 
                                          ^ (IData)(__PVT__t__BRA__57__KET__));
    __PVT__t__BRA__58__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__46__KET__));
    vlSelfRef.__PVT__t__BRA__64__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__59__KET__));
    vlSelfRef.__PVT__t__BRA__63__KET__ = ((IData)(__PVT__t__BRA__49__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__62__KET__ = ((IData)(__PVT__t__BRA__52__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__66__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                           & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__)) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__63__KET__));
    vlSelfRef.__PVT__t__BRA__65__KET__ = ((IData)(__PVT__t__BRA__61__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__62__KET__));
    vlSelfRef.__VdfgRegularize_h224e5c7b_0_0 = ((IData)(__PVT__t__BRA__53__KET__) 
                                                ^ (IData)(vlSelfRef.__PVT__t__BRA__66__KET__));
    vlSelfRef.__PVT__t__BRA__67__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__64__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__65__KET__));
    vlSelfRef.__PVT__t[0U] = (((((((((IData)(__PVT__t__BRA__31__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__30__KET__) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__28__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(__PVT__t__BRA__27__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__26__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__25__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__24__KET__))) 
                                  << 8U)) | ((((((IData)(__PVT__t__BRA__23__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__22__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__21__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__20__KET__))) 
                                              << 4U) 
                                             | ((((IData)(__PVT__t__BRA__19__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__18__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(__PVT__t__BRA__16__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(__PVT__t__BRA__15__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__14__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__13__KET__) 
                                                         << 1U) 
                                                        | (IData)(__PVT__t__BRA__12__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__11__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__10__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__9__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__8__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__7__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__6__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__5__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__4__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__3__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__2__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(__PVT__t__BRA__1__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__0__KET__))))));
    vlSelfRef.__PVT__t[1U] = (((((((((IData)(vlSelfRef.__PVT__t__BRA__63__KET__) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__t__BRA__62__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__61__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__60__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(vlSelfRef.__PVT__t__BRA__59__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__58__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__57__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__56__KET__))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.__PVT__t__BRA__55__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__54__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__53__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__52__KET__))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.__PVT__t__BRA__51__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__50__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__49__KET__) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__t__BRA__48__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(vlSelfRef.__PVT__t__BRA__47__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__46__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__45__KET__) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__t__BRA__44__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__43__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__t__BRA__40__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__39__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__38__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__36__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__35__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__34__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__32__KET__))))));
    vlSelfRef.__PVT__t[2U] = (0x0000000fU & ((((IData)(vlSelfRef.__PVT__t__BRA__67__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__t__BRA__66__KET__) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__t__BRA__65__KET__) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__t__BRA__64__KET__))));
}

void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__t__BRA__61__KET__;
    __PVT__t__BRA__61__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__58__KET__;
    __PVT__t__BRA__58__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__57__KET__;
    __PVT__t__BRA__57__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__54__KET__;
    __PVT__t__BRA__54__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__53__KET__;
    __PVT__t__BRA__53__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__52__KET__;
    __PVT__t__BRA__52__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__50__KET__;
    __PVT__t__BRA__50__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__49__KET__;
    __PVT__t__BRA__49__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__46__KET__;
    __PVT__t__BRA__46__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__45__KET__;
    __PVT__t__BRA__45__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__43__KET__;
    __PVT__t__BRA__43__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__39__KET__;
    __PVT__t__BRA__39__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__38__KET__;
    __PVT__t__BRA__38__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__36__KET__;
    __PVT__t__BRA__36__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__35__KET__;
    __PVT__t__BRA__35__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__34__KET__;
    __PVT__t__BRA__34__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__32__KET__;
    __PVT__t__BRA__32__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__31__KET__;
    __PVT__t__BRA__31__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__30__KET__;
    __PVT__t__BRA__30__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__28__KET__;
    __PVT__t__BRA__28__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__27__KET__;
    __PVT__t__BRA__27__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__26__KET__;
    __PVT__t__BRA__26__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__25__KET__;
    __PVT__t__BRA__25__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__24__KET__;
    __PVT__t__BRA__24__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__23__KET__;
    __PVT__t__BRA__23__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__22__KET__;
    __PVT__t__BRA__22__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__21__KET__;
    __PVT__t__BRA__21__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__20__KET__;
    __PVT__t__BRA__20__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__19__KET__;
    __PVT__t__BRA__19__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__18__KET__;
    __PVT__t__BRA__18__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__17__KET__;
    __PVT__t__BRA__17__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__16__KET__;
    __PVT__t__BRA__16__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__15__KET__;
    __PVT__t__BRA__15__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__14__KET__;
    __PVT__t__BRA__14__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__13__KET__;
    __PVT__t__BRA__13__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__12__KET__;
    __PVT__t__BRA__12__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__11__KET__;
    __PVT__t__BRA__11__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__10__KET__;
    __PVT__t__BRA__10__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__9__KET__;
    __PVT__t__BRA__9__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__8__KET__;
    __PVT__t__BRA__8__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__7__KET__;
    __PVT__t__BRA__7__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__6__KET__;
    __PVT__t__BRA__6__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__5__KET__;
    __PVT__t__BRA__5__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__4__KET__;
    __PVT__t__BRA__4__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__3__KET__;
    __PVT__t__BRA__3__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__2__KET__;
    __PVT__t__BRA__2__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__1__KET__;
    __PVT__t__BRA__1__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__0__KET__;
    __PVT__t__BRA__0__KET__ = 0;
    // Body
    vlSelfRef.__PVT__y__BRA__8__KET__ = (1U & VL_REDXOR_8(
                                                          (0x00000084U 
                                                           & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    __PVT__t__BRA__0__KET__ = (1U & VL_REDXOR_8((0x00000060U 
                                                 & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    vlSelfRef.__PVT__y__BRA__9__KET__ = (1U & VL_REDXOR_8(
                                                          (0x00000090U 
                                                           & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    vlSelfRef.__PVT__y__BRA__14__KET__ = (1U & VL_REDXOR_8(
                                                           (0x00000014U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    vlSelfRef.__PVT__y__BRA__13__KET__ = (1U & VL_REDXOR_8(
                                                           (0x00000082U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    vlSelfRef.__PVT__y__BRA__1__KET__ = (1U & ((IData)(__PVT__t__BRA__0__KET__) 
                                               ^ vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U]));
    vlSelfRef.__PVT__y__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    vlSelfRef.__PVT__y__BRA__4__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                  >> 4U)));
    vlSelfRef.__PVT__y__BRA__2__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                  >> 7U)));
    vlSelfRef.__PVT__y__BRA__5__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                  >> 1U)));
    __PVT__t__BRA__1__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                      >> 3U) ^ (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)));
    __PVT__t__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__4__KET__) 
                               & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U]);
    vlSelfRef.__PVT__y__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__));
    __PVT__t__BRA__8__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    vlSelfRef.__PVT__y__BRA__15__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                   >> 2U)));
    vlSelfRef.__PVT__y__BRA__20__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                   >> 6U)));
    vlSelfRef.__PVT__y__BRA__6__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                               ^ vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U]));
    __PVT__t__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__12__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__));
    vlSelfRef.__PVT__y__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                          ^ (IData)(__PVT__t__BRA__0__KET__));
    vlSelfRef.__PVT__y__BRA__11__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__20__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__9__KET__));
    __PVT__t__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__3__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__));
    __PVT__t__BRA__6__KET__ = ((IData)(__PVT__t__BRA__5__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__15__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__8__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__));
    vlSelfRef.__PVT__y__BRA__7__KET__ = (1U & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                               ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)));
    vlSelfRef.__PVT__y__BRA__17__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__9__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    vlSelfRef.__PVT__y__BRA__16__KET__ = ((IData)(__PVT__t__BRA__0__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__4__KET__ = ((IData)(__PVT__t__BRA__3__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__2__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    __PVT__t__BRA__13__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__14__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    __PVT__t__BRA__16__KET__ = ((IData)(__PVT__t__BRA__15__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__7__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__14__KET__ = ((IData)(__PVT__t__BRA__13__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__18__KET__ = ((IData)(__PVT__t__BRA__6__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__9__KET__ = ((IData)(__PVT__t__BRA__8__KET__) 
                               ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__11__KET__ = ((IData)(__PVT__t__BRA__10__KET__) 
                                ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__17__KET__ = ((IData)(__PVT__t__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__22__KET__ = ((IData)(__PVT__t__BRA__18__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__19__KET__ = ((IData)(__PVT__t__BRA__9__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__20__KET__ = ((IData)(__PVT__t__BRA__11__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__21__KET__ = ((IData)(__PVT__t__BRA__17__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__20__KET__));
    __PVT__t__BRA__23__KET__ = ((IData)(__PVT__t__BRA__19__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__)));
    __PVT__t__BRA__24__KET__ = (1U & ((IData)(__PVT__t__BRA__20__KET__) 
                                      ^ ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                          >> 7U) ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__))));
    __PVT__t__BRA__25__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                ^ (IData)(__PVT__t__BRA__22__KET__));
    __PVT__t__BRA__26__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                & (IData)(__PVT__t__BRA__23__KET__));
    __PVT__t__BRA__30__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(__PVT__t__BRA__24__KET__));
    __PVT__t__BRA__31__KET__ = ((IData)(__PVT__t__BRA__22__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__27__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__32__KET__ = ((IData)(__PVT__t__BRA__31__KET__) 
                                & (IData)(__PVT__t__BRA__30__KET__));
    __PVT__t__BRA__28__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                & (IData)(__PVT__t__BRA__27__KET__));
    vlSelfRef.__PVT__t__BRA__33__KET__ = ((IData)(__PVT__t__BRA__32__KET__) 
                                          ^ (IData)(__PVT__t__BRA__24__KET__));
    vlSelfRef.__PVT__t__BRA__29__KET__ = ((IData)(__PVT__t__BRA__28__KET__) 
                                          ^ (IData)(__PVT__t__BRA__22__KET__));
    vlSelfRef.__PVT__z__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                         & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U]);
    __PVT__t__BRA__34__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__35__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    vlSelfRef.__PVT__z__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    vlSelfRef.__PVT__t__BRA__42__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__36__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                & (IData)(__PVT__t__BRA__35__KET__));
    vlSelfRef.__PVT__t__BRA__51__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__z__BRA__5__KET__));
    vlSelfRef.__PVT__t__BRA__37__KET__ = ((IData)(__PVT__t__BRA__36__KET__) 
                                          ^ (IData)(__PVT__t__BRA__34__KET__));
    __PVT__t__BRA__38__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(__PVT__t__BRA__36__KET__));
    vlSelfRef.__PVT__z__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__3__KET__));
    vlSelfRef.__PVT__t__BRA__44__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    __PVT__t__BRA__39__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                & (IData)(__PVT__t__BRA__38__KET__));
    vlSelfRef.__PVT__t__BRA__47__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__10__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__4__KET__)));
    __PVT__t__BRA__49__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__10__KET__));
    vlSelfRef.__PVT__t__BRA__40__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                          ^ (IData)(__PVT__t__BRA__39__KET__));
    vlSelfRef.__PVT__t__BRA__48__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__5__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__5__KET__)));
    vlSelfRef.__PVT__z__BRA__4__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    __PVT__t__BRA__43__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__40__KET__));
    vlSelfRef.__PVT__t__BRA__41__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    vlSelfRef.__PVT__z__BRA__12__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__13__KET__));
    vlSelfRef.__PVT__z__BRA__3__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__45__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__41__KET__));
    vlSelfRef.__PVT__t__BRA__56__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__12__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__48__KET__));
    __PVT__t__BRA__50__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__12__KET__));
    __PVT__t__BRA__53__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__3__KET__));
    vlSelfRef.__PVT__z__BRA__7__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    vlSelfRef.__PVT__z__BRA__16__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    __PVT__t__BRA__57__KET__ = ((IData)(__PVT__t__BRA__50__KET__) 
                                ^ (IData)(__PVT__t__BRA__53__KET__));
    __PVT__t__BRA__54__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__7__KET__));
    __PVT__t__BRA__52__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__7__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__)));
    vlSelfRef.__PVT__t__BRA__55__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__16__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__46__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__9__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__16__KET__));
    __PVT__t__BRA__61__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__2__KET__)) 
                                ^ (IData)(__PVT__t__BRA__57__KET__));
    vlSelfRef.__PVT__t__BRA__59__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__3__KET__) 
                                          ^ (IData)(__PVT__t__BRA__54__KET__));
    vlSelfRef.__PVT__t__BRA__60__KET__ = ((IData)(__PVT__t__BRA__46__KET__) 
                                          ^ (IData)(__PVT__t__BRA__57__KET__));
    __PVT__t__BRA__58__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__46__KET__));
    vlSelfRef.__PVT__t__BRA__64__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__59__KET__));
    vlSelfRef.__PVT__t__BRA__63__KET__ = ((IData)(__PVT__t__BRA__49__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__62__KET__ = ((IData)(__PVT__t__BRA__52__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__66__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                           & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__)) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__63__KET__));
    vlSelfRef.__PVT__t__BRA__65__KET__ = ((IData)(__PVT__t__BRA__61__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__62__KET__));
    vlSelfRef.__VdfgRegularize_h224e5c7b_0_0 = ((IData)(__PVT__t__BRA__53__KET__) 
                                                ^ (IData)(vlSelfRef.__PVT__t__BRA__66__KET__));
    vlSelfRef.__PVT__t__BRA__67__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__64__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__65__KET__));
    vlSelfRef.__PVT__t[0U] = (((((((((IData)(__PVT__t__BRA__31__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__30__KET__) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__28__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(__PVT__t__BRA__27__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__26__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__25__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__24__KET__))) 
                                  << 8U)) | ((((((IData)(__PVT__t__BRA__23__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__22__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__21__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__20__KET__))) 
                                              << 4U) 
                                             | ((((IData)(__PVT__t__BRA__19__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__18__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(__PVT__t__BRA__16__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(__PVT__t__BRA__15__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__14__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__13__KET__) 
                                                         << 1U) 
                                                        | (IData)(__PVT__t__BRA__12__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__11__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__10__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__9__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__8__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__7__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__6__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__5__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__4__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__3__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__2__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(__PVT__t__BRA__1__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__0__KET__))))));
    vlSelfRef.__PVT__t[1U] = (((((((((IData)(vlSelfRef.__PVT__t__BRA__63__KET__) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__t__BRA__62__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__61__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__60__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(vlSelfRef.__PVT__t__BRA__59__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__58__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__57__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__56__KET__))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.__PVT__t__BRA__55__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__54__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__53__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__52__KET__))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.__PVT__t__BRA__51__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__50__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__49__KET__) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__t__BRA__48__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(vlSelfRef.__PVT__t__BRA__47__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__46__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__45__KET__) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__t__BRA__44__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__43__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__t__BRA__40__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__39__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__38__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__36__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__35__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__34__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__32__KET__))))));
    vlSelfRef.__PVT__t[2U] = (0x0000000fU & ((((IData)(vlSelfRef.__PVT__t__BRA__67__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__t__BRA__66__KET__) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__t__BRA__65__KET__) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__t__BRA__64__KET__))));
}

void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__t__BRA__61__KET__;
    __PVT__t__BRA__61__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__58__KET__;
    __PVT__t__BRA__58__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__57__KET__;
    __PVT__t__BRA__57__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__54__KET__;
    __PVT__t__BRA__54__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__53__KET__;
    __PVT__t__BRA__53__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__52__KET__;
    __PVT__t__BRA__52__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__50__KET__;
    __PVT__t__BRA__50__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__49__KET__;
    __PVT__t__BRA__49__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__46__KET__;
    __PVT__t__BRA__46__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__45__KET__;
    __PVT__t__BRA__45__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__43__KET__;
    __PVT__t__BRA__43__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__39__KET__;
    __PVT__t__BRA__39__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__38__KET__;
    __PVT__t__BRA__38__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__36__KET__;
    __PVT__t__BRA__36__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__35__KET__;
    __PVT__t__BRA__35__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__34__KET__;
    __PVT__t__BRA__34__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__32__KET__;
    __PVT__t__BRA__32__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__31__KET__;
    __PVT__t__BRA__31__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__30__KET__;
    __PVT__t__BRA__30__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__28__KET__;
    __PVT__t__BRA__28__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__27__KET__;
    __PVT__t__BRA__27__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__26__KET__;
    __PVT__t__BRA__26__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__25__KET__;
    __PVT__t__BRA__25__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__24__KET__;
    __PVT__t__BRA__24__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__23__KET__;
    __PVT__t__BRA__23__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__22__KET__;
    __PVT__t__BRA__22__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__21__KET__;
    __PVT__t__BRA__21__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__20__KET__;
    __PVT__t__BRA__20__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__19__KET__;
    __PVT__t__BRA__19__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__18__KET__;
    __PVT__t__BRA__18__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__17__KET__;
    __PVT__t__BRA__17__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__16__KET__;
    __PVT__t__BRA__16__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__15__KET__;
    __PVT__t__BRA__15__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__14__KET__;
    __PVT__t__BRA__14__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__13__KET__;
    __PVT__t__BRA__13__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__12__KET__;
    __PVT__t__BRA__12__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__11__KET__;
    __PVT__t__BRA__11__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__10__KET__;
    __PVT__t__BRA__10__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__9__KET__;
    __PVT__t__BRA__9__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__8__KET__;
    __PVT__t__BRA__8__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__7__KET__;
    __PVT__t__BRA__7__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__6__KET__;
    __PVT__t__BRA__6__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__5__KET__;
    __PVT__t__BRA__5__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__4__KET__;
    __PVT__t__BRA__4__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__3__KET__;
    __PVT__t__BRA__3__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__2__KET__;
    __PVT__t__BRA__2__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__1__KET__;
    __PVT__t__BRA__1__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__0__KET__;
    __PVT__t__BRA__0__KET__ = 0;
    // Body
    vlSelfRef.__PVT__y__BRA__8__KET__ = (1U & VL_REDXOR_16(
                                                           (0x00008400U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    __PVT__t__BRA__0__KET__ = (1U & VL_REDXOR_16((0x00006000U 
                                                  & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    vlSelfRef.__PVT__y__BRA__9__KET__ = (1U & VL_REDXOR_16(
                                                           (0x00009000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    vlSelfRef.__PVT__y__BRA__14__KET__ = (1U & VL_REDXOR_16(
                                                            (0x00001400U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    vlSelfRef.__PVT__y__BRA__13__KET__ = (1U & VL_REDXOR_16(
                                                            (0x00008200U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    vlSelfRef.__PVT__y__BRA__1__KET__ = (1U & ((IData)(__PVT__t__BRA__0__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                  >> 8U)));
    vlSelfRef.__PVT__y__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    vlSelfRef.__PVT__y__BRA__4__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                  >> 0x0000000cU)));
    vlSelfRef.__PVT__y__BRA__2__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                  >> 0x0000000fU)));
    vlSelfRef.__PVT__y__BRA__5__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                  >> 9U)));
    __PVT__t__BRA__1__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                      >> 0x0000000bU) 
                                     ^ (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)));
    __PVT__t__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__4__KET__) 
                               & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                  >> 8U));
    vlSelfRef.__PVT__y__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__));
    __PVT__t__BRA__8__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    vlSelfRef.__PVT__y__BRA__15__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                   >> 0x0000000aU)));
    vlSelfRef.__PVT__y__BRA__20__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                   >> 0x0000000eU)));
    vlSelfRef.__PVT__y__BRA__6__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                  >> 8U)));
    __PVT__t__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__12__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__));
    vlSelfRef.__PVT__y__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                          ^ (IData)(__PVT__t__BRA__0__KET__));
    vlSelfRef.__PVT__y__BRA__11__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__20__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__9__KET__));
    __PVT__t__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__3__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__));
    __PVT__t__BRA__6__KET__ = ((IData)(__PVT__t__BRA__5__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__15__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__8__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__));
    vlSelfRef.__PVT__y__BRA__7__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                >> 8U) 
                                               ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)));
    vlSelfRef.__PVT__y__BRA__17__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__9__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    vlSelfRef.__PVT__y__BRA__16__KET__ = ((IData)(__PVT__t__BRA__0__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__4__KET__ = ((IData)(__PVT__t__BRA__3__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__2__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    __PVT__t__BRA__13__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__14__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    __PVT__t__BRA__16__KET__ = ((IData)(__PVT__t__BRA__15__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__7__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__14__KET__ = ((IData)(__PVT__t__BRA__13__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__18__KET__ = ((IData)(__PVT__t__BRA__6__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__9__KET__ = ((IData)(__PVT__t__BRA__8__KET__) 
                               ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__11__KET__ = ((IData)(__PVT__t__BRA__10__KET__) 
                                ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__17__KET__ = ((IData)(__PVT__t__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__22__KET__ = ((IData)(__PVT__t__BRA__18__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__19__KET__ = ((IData)(__PVT__t__BRA__9__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__20__KET__ = ((IData)(__PVT__t__BRA__11__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__21__KET__ = ((IData)(__PVT__t__BRA__17__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__20__KET__));
    __PVT__t__BRA__23__KET__ = ((IData)(__PVT__t__BRA__19__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__)));
    __PVT__t__BRA__24__KET__ = (1U & ((IData)(__PVT__t__BRA__20__KET__) 
                                      ^ ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                          >> 0x0000000fU) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__))));
    __PVT__t__BRA__25__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                ^ (IData)(__PVT__t__BRA__22__KET__));
    __PVT__t__BRA__26__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                & (IData)(__PVT__t__BRA__23__KET__));
    __PVT__t__BRA__30__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(__PVT__t__BRA__24__KET__));
    __PVT__t__BRA__31__KET__ = ((IData)(__PVT__t__BRA__22__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__27__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__32__KET__ = ((IData)(__PVT__t__BRA__31__KET__) 
                                & (IData)(__PVT__t__BRA__30__KET__));
    __PVT__t__BRA__28__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                & (IData)(__PVT__t__BRA__27__KET__));
    vlSelfRef.__PVT__t__BRA__33__KET__ = ((IData)(__PVT__t__BRA__32__KET__) 
                                          ^ (IData)(__PVT__t__BRA__24__KET__));
    vlSelfRef.__PVT__t__BRA__29__KET__ = ((IData)(__PVT__t__BRA__28__KET__) 
                                          ^ (IData)(__PVT__t__BRA__22__KET__));
    vlSelfRef.__PVT__z__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                         & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                            >> 8U));
    __PVT__t__BRA__34__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__35__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    vlSelfRef.__PVT__z__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    vlSelfRef.__PVT__t__BRA__42__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__36__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                & (IData)(__PVT__t__BRA__35__KET__));
    vlSelfRef.__PVT__t__BRA__51__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__z__BRA__5__KET__));
    vlSelfRef.__PVT__t__BRA__37__KET__ = ((IData)(__PVT__t__BRA__36__KET__) 
                                          ^ (IData)(__PVT__t__BRA__34__KET__));
    __PVT__t__BRA__38__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(__PVT__t__BRA__36__KET__));
    vlSelfRef.__PVT__z__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__3__KET__));
    vlSelfRef.__PVT__t__BRA__44__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    __PVT__t__BRA__39__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                & (IData)(__PVT__t__BRA__38__KET__));
    vlSelfRef.__PVT__t__BRA__47__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__10__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__4__KET__)));
    __PVT__t__BRA__49__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__10__KET__));
    vlSelfRef.__PVT__t__BRA__40__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                          ^ (IData)(__PVT__t__BRA__39__KET__));
    vlSelfRef.__PVT__t__BRA__48__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__5__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__5__KET__)));
    vlSelfRef.__PVT__z__BRA__4__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    __PVT__t__BRA__43__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__40__KET__));
    vlSelfRef.__PVT__t__BRA__41__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    vlSelfRef.__PVT__z__BRA__12__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__13__KET__));
    vlSelfRef.__PVT__z__BRA__3__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__45__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__41__KET__));
    vlSelfRef.__PVT__t__BRA__56__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__12__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__48__KET__));
    __PVT__t__BRA__50__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__12__KET__));
    __PVT__t__BRA__53__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__3__KET__));
    vlSelfRef.__PVT__z__BRA__7__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    vlSelfRef.__PVT__z__BRA__16__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    __PVT__t__BRA__57__KET__ = ((IData)(__PVT__t__BRA__50__KET__) 
                                ^ (IData)(__PVT__t__BRA__53__KET__));
    __PVT__t__BRA__54__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__7__KET__));
    __PVT__t__BRA__52__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__7__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__)));
    vlSelfRef.__PVT__t__BRA__55__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__16__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__46__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__9__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__16__KET__));
    __PVT__t__BRA__61__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__2__KET__)) 
                                ^ (IData)(__PVT__t__BRA__57__KET__));
    vlSelfRef.__PVT__t__BRA__59__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__3__KET__) 
                                          ^ (IData)(__PVT__t__BRA__54__KET__));
    vlSelfRef.__PVT__t__BRA__60__KET__ = ((IData)(__PVT__t__BRA__46__KET__) 
                                          ^ (IData)(__PVT__t__BRA__57__KET__));
    __PVT__t__BRA__58__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__46__KET__));
    vlSelfRef.__PVT__t__BRA__64__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__59__KET__));
    vlSelfRef.__PVT__t__BRA__63__KET__ = ((IData)(__PVT__t__BRA__49__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__62__KET__ = ((IData)(__PVT__t__BRA__52__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__66__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                           & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__)) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__63__KET__));
    vlSelfRef.__PVT__t__BRA__65__KET__ = ((IData)(__PVT__t__BRA__61__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__62__KET__));
    vlSelfRef.__VdfgRegularize_h224e5c7b_0_0 = ((IData)(__PVT__t__BRA__53__KET__) 
                                                ^ (IData)(vlSelfRef.__PVT__t__BRA__66__KET__));
    vlSelfRef.__PVT__t__BRA__67__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__64__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__65__KET__));
    vlSelfRef.__PVT__t[0U] = (((((((((IData)(__PVT__t__BRA__31__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__30__KET__) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__28__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(__PVT__t__BRA__27__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__26__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__25__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__24__KET__))) 
                                  << 8U)) | ((((((IData)(__PVT__t__BRA__23__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__22__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__21__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__20__KET__))) 
                                              << 4U) 
                                             | ((((IData)(__PVT__t__BRA__19__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__18__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(__PVT__t__BRA__16__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(__PVT__t__BRA__15__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__14__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__13__KET__) 
                                                         << 1U) 
                                                        | (IData)(__PVT__t__BRA__12__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__11__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__10__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__9__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__8__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__7__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__6__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__5__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__4__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__3__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__2__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(__PVT__t__BRA__1__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__0__KET__))))));
    vlSelfRef.__PVT__t[1U] = (((((((((IData)(vlSelfRef.__PVT__t__BRA__63__KET__) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__t__BRA__62__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__61__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__60__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(vlSelfRef.__PVT__t__BRA__59__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__58__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__57__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__56__KET__))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.__PVT__t__BRA__55__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__54__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__53__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__52__KET__))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.__PVT__t__BRA__51__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__50__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__49__KET__) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__t__BRA__48__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(vlSelfRef.__PVT__t__BRA__47__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__46__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__45__KET__) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__t__BRA__44__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__43__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__t__BRA__40__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__39__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__38__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__36__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__35__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__34__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__32__KET__))))));
    vlSelfRef.__PVT__t[2U] = (0x0000000fU & ((((IData)(vlSelfRef.__PVT__t__BRA__67__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__t__BRA__66__KET__) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__t__BRA__65__KET__) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__t__BRA__64__KET__))));
}

void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__t__BRA__61__KET__;
    __PVT__t__BRA__61__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__58__KET__;
    __PVT__t__BRA__58__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__57__KET__;
    __PVT__t__BRA__57__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__54__KET__;
    __PVT__t__BRA__54__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__53__KET__;
    __PVT__t__BRA__53__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__52__KET__;
    __PVT__t__BRA__52__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__50__KET__;
    __PVT__t__BRA__50__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__49__KET__;
    __PVT__t__BRA__49__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__46__KET__;
    __PVT__t__BRA__46__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__45__KET__;
    __PVT__t__BRA__45__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__43__KET__;
    __PVT__t__BRA__43__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__39__KET__;
    __PVT__t__BRA__39__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__38__KET__;
    __PVT__t__BRA__38__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__36__KET__;
    __PVT__t__BRA__36__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__35__KET__;
    __PVT__t__BRA__35__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__34__KET__;
    __PVT__t__BRA__34__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__32__KET__;
    __PVT__t__BRA__32__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__31__KET__;
    __PVT__t__BRA__31__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__30__KET__;
    __PVT__t__BRA__30__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__28__KET__;
    __PVT__t__BRA__28__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__27__KET__;
    __PVT__t__BRA__27__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__26__KET__;
    __PVT__t__BRA__26__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__25__KET__;
    __PVT__t__BRA__25__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__24__KET__;
    __PVT__t__BRA__24__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__23__KET__;
    __PVT__t__BRA__23__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__22__KET__;
    __PVT__t__BRA__22__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__21__KET__;
    __PVT__t__BRA__21__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__20__KET__;
    __PVT__t__BRA__20__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__19__KET__;
    __PVT__t__BRA__19__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__18__KET__;
    __PVT__t__BRA__18__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__17__KET__;
    __PVT__t__BRA__17__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__16__KET__;
    __PVT__t__BRA__16__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__15__KET__;
    __PVT__t__BRA__15__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__14__KET__;
    __PVT__t__BRA__14__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__13__KET__;
    __PVT__t__BRA__13__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__12__KET__;
    __PVT__t__BRA__12__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__11__KET__;
    __PVT__t__BRA__11__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__10__KET__;
    __PVT__t__BRA__10__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__9__KET__;
    __PVT__t__BRA__9__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__8__KET__;
    __PVT__t__BRA__8__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__7__KET__;
    __PVT__t__BRA__7__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__6__KET__;
    __PVT__t__BRA__6__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__5__KET__;
    __PVT__t__BRA__5__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__4__KET__;
    __PVT__t__BRA__4__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__3__KET__;
    __PVT__t__BRA__3__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__2__KET__;
    __PVT__t__BRA__2__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__1__KET__;
    __PVT__t__BRA__1__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__0__KET__;
    __PVT__t__BRA__0__KET__ = 0;
    // Body
    vlSelfRef.__PVT__y__BRA__8__KET__ = (1U & VL_REDXOR_32(
                                                           (0x00840000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    __PVT__t__BRA__0__KET__ = (1U & VL_REDXOR_32((0x00600000U 
                                                  & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    vlSelfRef.__PVT__y__BRA__9__KET__ = (1U & VL_REDXOR_32(
                                                           (0x00900000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    vlSelfRef.__PVT__y__BRA__14__KET__ = (1U & VL_REDXOR_32(
                                                            (0x00140000U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    vlSelfRef.__PVT__y__BRA__13__KET__ = (1U & VL_REDXOR_32(
                                                            (0x00820000U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    vlSelfRef.__PVT__y__BRA__1__KET__ = (1U & ((IData)(__PVT__t__BRA__0__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                  >> 0x00000010U)));
    vlSelfRef.__PVT__y__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    vlSelfRef.__PVT__y__BRA__4__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                  >> 0x00000014U)));
    vlSelfRef.__PVT__y__BRA__2__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                  >> 0x00000017U)));
    vlSelfRef.__PVT__y__BRA__5__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                  >> 0x00000011U)));
    __PVT__t__BRA__1__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                      >> 0x00000013U) 
                                     ^ (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)));
    __PVT__t__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__4__KET__) 
                               & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                  >> 0x00000010U));
    vlSelfRef.__PVT__y__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__));
    __PVT__t__BRA__8__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    vlSelfRef.__PVT__y__BRA__15__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                   >> 0x00000012U)));
    vlSelfRef.__PVT__y__BRA__20__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                   >> 0x00000016U)));
    vlSelfRef.__PVT__y__BRA__6__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                  >> 0x00000010U)));
    __PVT__t__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__12__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__));
    vlSelfRef.__PVT__y__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                          ^ (IData)(__PVT__t__BRA__0__KET__));
    vlSelfRef.__PVT__y__BRA__11__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__20__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__9__KET__));
    __PVT__t__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__3__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__));
    __PVT__t__BRA__6__KET__ = ((IData)(__PVT__t__BRA__5__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__15__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__8__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__));
    vlSelfRef.__PVT__y__BRA__7__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                >> 0x00000010U) 
                                               ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)));
    vlSelfRef.__PVT__y__BRA__17__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__9__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    vlSelfRef.__PVT__y__BRA__16__KET__ = ((IData)(__PVT__t__BRA__0__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__4__KET__ = ((IData)(__PVT__t__BRA__3__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__2__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    __PVT__t__BRA__13__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__14__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    __PVT__t__BRA__16__KET__ = ((IData)(__PVT__t__BRA__15__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__7__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__14__KET__ = ((IData)(__PVT__t__BRA__13__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__18__KET__ = ((IData)(__PVT__t__BRA__6__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__9__KET__ = ((IData)(__PVT__t__BRA__8__KET__) 
                               ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__11__KET__ = ((IData)(__PVT__t__BRA__10__KET__) 
                                ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__17__KET__ = ((IData)(__PVT__t__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__22__KET__ = ((IData)(__PVT__t__BRA__18__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__19__KET__ = ((IData)(__PVT__t__BRA__9__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__20__KET__ = ((IData)(__PVT__t__BRA__11__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__21__KET__ = ((IData)(__PVT__t__BRA__17__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__20__KET__));
    __PVT__t__BRA__23__KET__ = ((IData)(__PVT__t__BRA__19__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__)));
    __PVT__t__BRA__24__KET__ = (1U & ((IData)(__PVT__t__BRA__20__KET__) 
                                      ^ ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                          >> 0x00000017U) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__))));
    __PVT__t__BRA__25__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                ^ (IData)(__PVT__t__BRA__22__KET__));
    __PVT__t__BRA__26__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                & (IData)(__PVT__t__BRA__23__KET__));
    __PVT__t__BRA__30__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(__PVT__t__BRA__24__KET__));
    __PVT__t__BRA__31__KET__ = ((IData)(__PVT__t__BRA__22__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__27__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__32__KET__ = ((IData)(__PVT__t__BRA__31__KET__) 
                                & (IData)(__PVT__t__BRA__30__KET__));
    __PVT__t__BRA__28__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                & (IData)(__PVT__t__BRA__27__KET__));
    vlSelfRef.__PVT__t__BRA__33__KET__ = ((IData)(__PVT__t__BRA__32__KET__) 
                                          ^ (IData)(__PVT__t__BRA__24__KET__));
    vlSelfRef.__PVT__t__BRA__29__KET__ = ((IData)(__PVT__t__BRA__28__KET__) 
                                          ^ (IData)(__PVT__t__BRA__22__KET__));
    vlSelfRef.__PVT__z__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                         & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                            >> 0x00000010U));
    __PVT__t__BRA__34__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__35__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    vlSelfRef.__PVT__z__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    vlSelfRef.__PVT__t__BRA__42__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__36__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                & (IData)(__PVT__t__BRA__35__KET__));
    vlSelfRef.__PVT__t__BRA__51__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__z__BRA__5__KET__));
    vlSelfRef.__PVT__t__BRA__37__KET__ = ((IData)(__PVT__t__BRA__36__KET__) 
                                          ^ (IData)(__PVT__t__BRA__34__KET__));
    __PVT__t__BRA__38__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(__PVT__t__BRA__36__KET__));
    vlSelfRef.__PVT__z__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__3__KET__));
    vlSelfRef.__PVT__t__BRA__44__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    __PVT__t__BRA__39__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                & (IData)(__PVT__t__BRA__38__KET__));
    vlSelfRef.__PVT__t__BRA__47__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__10__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__4__KET__)));
    __PVT__t__BRA__49__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__10__KET__));
    vlSelfRef.__PVT__t__BRA__40__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                          ^ (IData)(__PVT__t__BRA__39__KET__));
    vlSelfRef.__PVT__t__BRA__48__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__5__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__5__KET__)));
    vlSelfRef.__PVT__z__BRA__4__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    __PVT__t__BRA__43__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__40__KET__));
    vlSelfRef.__PVT__t__BRA__41__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    vlSelfRef.__PVT__z__BRA__12__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__13__KET__));
    vlSelfRef.__PVT__z__BRA__3__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__45__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__41__KET__));
    vlSelfRef.__PVT__t__BRA__56__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__12__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__48__KET__));
    __PVT__t__BRA__50__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__12__KET__));
    __PVT__t__BRA__53__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__3__KET__));
    vlSelfRef.__PVT__z__BRA__7__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    vlSelfRef.__PVT__z__BRA__16__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    __PVT__t__BRA__57__KET__ = ((IData)(__PVT__t__BRA__50__KET__) 
                                ^ (IData)(__PVT__t__BRA__53__KET__));
    __PVT__t__BRA__54__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__7__KET__));
    __PVT__t__BRA__52__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__7__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__)));
    vlSelfRef.__PVT__t__BRA__55__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__16__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__46__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__9__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__16__KET__));
    __PVT__t__BRA__61__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__2__KET__)) 
                                ^ (IData)(__PVT__t__BRA__57__KET__));
    vlSelfRef.__PVT__t__BRA__59__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__3__KET__) 
                                          ^ (IData)(__PVT__t__BRA__54__KET__));
    vlSelfRef.__PVT__t__BRA__60__KET__ = ((IData)(__PVT__t__BRA__46__KET__) 
                                          ^ (IData)(__PVT__t__BRA__57__KET__));
    __PVT__t__BRA__58__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__46__KET__));
    vlSelfRef.__PVT__t__BRA__64__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__59__KET__));
    vlSelfRef.__PVT__t__BRA__63__KET__ = ((IData)(__PVT__t__BRA__49__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__62__KET__ = ((IData)(__PVT__t__BRA__52__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__66__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                           & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__)) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__63__KET__));
    vlSelfRef.__PVT__t__BRA__65__KET__ = ((IData)(__PVT__t__BRA__61__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__62__KET__));
    vlSelfRef.__VdfgRegularize_h224e5c7b_0_0 = ((IData)(__PVT__t__BRA__53__KET__) 
                                                ^ (IData)(vlSelfRef.__PVT__t__BRA__66__KET__));
    vlSelfRef.__PVT__t__BRA__67__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__64__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__65__KET__));
    vlSelfRef.__PVT__t[0U] = (((((((((IData)(__PVT__t__BRA__31__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__30__KET__) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__28__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(__PVT__t__BRA__27__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__26__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__25__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__24__KET__))) 
                                  << 8U)) | ((((((IData)(__PVT__t__BRA__23__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__22__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__21__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__20__KET__))) 
                                              << 4U) 
                                             | ((((IData)(__PVT__t__BRA__19__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__18__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(__PVT__t__BRA__16__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(__PVT__t__BRA__15__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__14__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__13__KET__) 
                                                         << 1U) 
                                                        | (IData)(__PVT__t__BRA__12__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__11__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__10__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__9__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__8__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__7__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__6__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__5__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__4__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__3__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__2__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(__PVT__t__BRA__1__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__0__KET__))))));
    vlSelfRef.__PVT__t[1U] = (((((((((IData)(vlSelfRef.__PVT__t__BRA__63__KET__) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__t__BRA__62__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__61__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__60__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(vlSelfRef.__PVT__t__BRA__59__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__58__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__57__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__56__KET__))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.__PVT__t__BRA__55__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__54__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__53__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__52__KET__))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.__PVT__t__BRA__51__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__50__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__49__KET__) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__t__BRA__48__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(vlSelfRef.__PVT__t__BRA__47__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__46__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__45__KET__) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__t__BRA__44__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__43__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__t__BRA__40__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__39__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__38__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__36__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__35__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__34__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__32__KET__))))));
    vlSelfRef.__PVT__t[2U] = (0x0000000fU & ((((IData)(vlSelfRef.__PVT__t__BRA__67__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__t__BRA__66__KET__) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__t__BRA__65__KET__) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__t__BRA__64__KET__))));
}

void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__t__BRA__61__KET__;
    __PVT__t__BRA__61__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__58__KET__;
    __PVT__t__BRA__58__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__57__KET__;
    __PVT__t__BRA__57__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__54__KET__;
    __PVT__t__BRA__54__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__53__KET__;
    __PVT__t__BRA__53__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__52__KET__;
    __PVT__t__BRA__52__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__50__KET__;
    __PVT__t__BRA__50__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__49__KET__;
    __PVT__t__BRA__49__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__46__KET__;
    __PVT__t__BRA__46__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__45__KET__;
    __PVT__t__BRA__45__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__43__KET__;
    __PVT__t__BRA__43__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__39__KET__;
    __PVT__t__BRA__39__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__38__KET__;
    __PVT__t__BRA__38__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__36__KET__;
    __PVT__t__BRA__36__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__35__KET__;
    __PVT__t__BRA__35__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__34__KET__;
    __PVT__t__BRA__34__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__32__KET__;
    __PVT__t__BRA__32__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__31__KET__;
    __PVT__t__BRA__31__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__30__KET__;
    __PVT__t__BRA__30__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__28__KET__;
    __PVT__t__BRA__28__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__27__KET__;
    __PVT__t__BRA__27__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__26__KET__;
    __PVT__t__BRA__26__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__25__KET__;
    __PVT__t__BRA__25__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__24__KET__;
    __PVT__t__BRA__24__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__23__KET__;
    __PVT__t__BRA__23__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__22__KET__;
    __PVT__t__BRA__22__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__21__KET__;
    __PVT__t__BRA__21__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__20__KET__;
    __PVT__t__BRA__20__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__19__KET__;
    __PVT__t__BRA__19__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__18__KET__;
    __PVT__t__BRA__18__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__17__KET__;
    __PVT__t__BRA__17__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__16__KET__;
    __PVT__t__BRA__16__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__15__KET__;
    __PVT__t__BRA__15__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__14__KET__;
    __PVT__t__BRA__14__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__13__KET__;
    __PVT__t__BRA__13__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__12__KET__;
    __PVT__t__BRA__12__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__11__KET__;
    __PVT__t__BRA__11__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__10__KET__;
    __PVT__t__BRA__10__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__9__KET__;
    __PVT__t__BRA__9__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__8__KET__;
    __PVT__t__BRA__8__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__7__KET__;
    __PVT__t__BRA__7__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__6__KET__;
    __PVT__t__BRA__6__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__5__KET__;
    __PVT__t__BRA__5__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__4__KET__;
    __PVT__t__BRA__4__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__3__KET__;
    __PVT__t__BRA__3__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__2__KET__;
    __PVT__t__BRA__2__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__1__KET__;
    __PVT__t__BRA__1__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__0__KET__;
    __PVT__t__BRA__0__KET__ = 0;
    // Body
    vlSelfRef.__PVT__y__BRA__8__KET__ = (1U & VL_REDXOR_32(
                                                           (0x84000000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    __PVT__t__BRA__0__KET__ = (1U & VL_REDXOR_32((0x60000000U 
                                                  & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    vlSelfRef.__PVT__y__BRA__9__KET__ = (1U & VL_REDXOR_32(
                                                           (0x90000000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    vlSelfRef.__PVT__y__BRA__14__KET__ = (1U & VL_REDXOR_32(
                                                            (0x14000000U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    vlSelfRef.__PVT__y__BRA__13__KET__ = (1U & VL_REDXOR_32(
                                                            (0x82000000U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U])));
    vlSelfRef.__PVT__y__BRA__1__KET__ = (1U & ((IData)(__PVT__t__BRA__0__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                  >> 0x00000018U)));
    vlSelfRef.__PVT__y__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    vlSelfRef.__PVT__y__BRA__4__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                  >> 0x0000001cU)));
    vlSelfRef.__PVT__y__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                         ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                            >> 0x0000001fU));
    vlSelfRef.__PVT__y__BRA__5__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                  >> 0x00000019U)));
    __PVT__t__BRA__1__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                      >> 0x0000001bU) 
                                     ^ (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)));
    __PVT__t__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__4__KET__) 
                               & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                  >> 0x00000018U));
    vlSelfRef.__PVT__y__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__));
    __PVT__t__BRA__8__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    vlSelfRef.__PVT__y__BRA__15__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                   >> 0x0000001aU)));
    vlSelfRef.__PVT__y__BRA__20__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                   >> 0x0000001eU)));
    vlSelfRef.__PVT__y__BRA__6__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                  >> 0x00000018U)));
    __PVT__t__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__12__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__));
    vlSelfRef.__PVT__y__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                          ^ (IData)(__PVT__t__BRA__0__KET__));
    vlSelfRef.__PVT__y__BRA__11__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__20__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__9__KET__));
    __PVT__t__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__3__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__));
    __PVT__t__BRA__6__KET__ = ((IData)(__PVT__t__BRA__5__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__15__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__8__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__));
    vlSelfRef.__PVT__y__BRA__7__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                                >> 0x00000018U) 
                                               ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)));
    vlSelfRef.__PVT__y__BRA__17__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__9__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    vlSelfRef.__PVT__y__BRA__16__KET__ = ((IData)(__PVT__t__BRA__0__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__4__KET__ = ((IData)(__PVT__t__BRA__3__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__2__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    __PVT__t__BRA__13__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__14__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    __PVT__t__BRA__16__KET__ = ((IData)(__PVT__t__BRA__15__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__7__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__14__KET__ = ((IData)(__PVT__t__BRA__13__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__18__KET__ = ((IData)(__PVT__t__BRA__6__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__9__KET__ = ((IData)(__PVT__t__BRA__8__KET__) 
                               ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__11__KET__ = ((IData)(__PVT__t__BRA__10__KET__) 
                                ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__17__KET__ = ((IData)(__PVT__t__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__22__KET__ = ((IData)(__PVT__t__BRA__18__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__19__KET__ = ((IData)(__PVT__t__BRA__9__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__20__KET__ = ((IData)(__PVT__t__BRA__11__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__21__KET__ = ((IData)(__PVT__t__BRA__17__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__20__KET__));
    __PVT__t__BRA__23__KET__ = ((IData)(__PVT__t__BRA__19__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__)));
    __PVT__t__BRA__24__KET__ = (((IData)(__PVT__t__BRA__20__KET__) 
                                 ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                    >> 0x0000001fU)) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__25__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                ^ (IData)(__PVT__t__BRA__22__KET__));
    __PVT__t__BRA__26__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                & (IData)(__PVT__t__BRA__23__KET__));
    __PVT__t__BRA__30__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(__PVT__t__BRA__24__KET__));
    __PVT__t__BRA__31__KET__ = ((IData)(__PVT__t__BRA__22__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__27__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__32__KET__ = ((IData)(__PVT__t__BRA__31__KET__) 
                                & (IData)(__PVT__t__BRA__30__KET__));
    __PVT__t__BRA__28__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                & (IData)(__PVT__t__BRA__27__KET__));
    vlSelfRef.__PVT__t__BRA__33__KET__ = ((IData)(__PVT__t__BRA__32__KET__) 
                                          ^ (IData)(__PVT__t__BRA__24__KET__));
    vlSelfRef.__PVT__t__BRA__29__KET__ = ((IData)(__PVT__t__BRA__28__KET__) 
                                          ^ (IData)(__PVT__t__BRA__22__KET__));
    vlSelfRef.__PVT__z__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                         & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[2U] 
                                            >> 0x00000018U));
    __PVT__t__BRA__34__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__35__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    vlSelfRef.__PVT__z__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    vlSelfRef.__PVT__t__BRA__42__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__36__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                & (IData)(__PVT__t__BRA__35__KET__));
    vlSelfRef.__PVT__t__BRA__51__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__z__BRA__5__KET__));
    vlSelfRef.__PVT__t__BRA__37__KET__ = ((IData)(__PVT__t__BRA__36__KET__) 
                                          ^ (IData)(__PVT__t__BRA__34__KET__));
    __PVT__t__BRA__38__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(__PVT__t__BRA__36__KET__));
    vlSelfRef.__PVT__z__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__3__KET__));
    vlSelfRef.__PVT__t__BRA__44__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    __PVT__t__BRA__39__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                & (IData)(__PVT__t__BRA__38__KET__));
    vlSelfRef.__PVT__t__BRA__47__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__10__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__4__KET__)));
    __PVT__t__BRA__49__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__10__KET__));
    vlSelfRef.__PVT__t__BRA__40__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                          ^ (IData)(__PVT__t__BRA__39__KET__));
    vlSelfRef.__PVT__t__BRA__48__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__5__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__5__KET__)));
    vlSelfRef.__PVT__z__BRA__4__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    __PVT__t__BRA__43__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__40__KET__));
    vlSelfRef.__PVT__t__BRA__41__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    vlSelfRef.__PVT__z__BRA__12__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__13__KET__));
    vlSelfRef.__PVT__z__BRA__3__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__45__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__41__KET__));
    vlSelfRef.__PVT__t__BRA__56__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__12__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__48__KET__));
    __PVT__t__BRA__50__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__12__KET__));
    __PVT__t__BRA__53__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__3__KET__));
    vlSelfRef.__PVT__z__BRA__7__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    vlSelfRef.__PVT__z__BRA__16__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    __PVT__t__BRA__57__KET__ = ((IData)(__PVT__t__BRA__50__KET__) 
                                ^ (IData)(__PVT__t__BRA__53__KET__));
    __PVT__t__BRA__54__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__7__KET__));
    __PVT__t__BRA__52__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__7__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__)));
    vlSelfRef.__PVT__t__BRA__55__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__16__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__46__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__9__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__16__KET__));
    __PVT__t__BRA__61__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__2__KET__)) 
                                ^ (IData)(__PVT__t__BRA__57__KET__));
    vlSelfRef.__PVT__t__BRA__59__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__3__KET__) 
                                          ^ (IData)(__PVT__t__BRA__54__KET__));
    vlSelfRef.__PVT__t__BRA__60__KET__ = ((IData)(__PVT__t__BRA__46__KET__) 
                                          ^ (IData)(__PVT__t__BRA__57__KET__));
    __PVT__t__BRA__58__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__46__KET__));
    vlSelfRef.__PVT__t__BRA__64__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__59__KET__));
    vlSelfRef.__PVT__t__BRA__63__KET__ = ((IData)(__PVT__t__BRA__49__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__62__KET__ = ((IData)(__PVT__t__BRA__52__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__66__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                           & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__)) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__63__KET__));
    vlSelfRef.__PVT__t__BRA__65__KET__ = ((IData)(__PVT__t__BRA__61__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__62__KET__));
    vlSelfRef.__VdfgRegularize_h224e5c7b_0_0 = ((IData)(__PVT__t__BRA__53__KET__) 
                                                ^ (IData)(vlSelfRef.__PVT__t__BRA__66__KET__));
    vlSelfRef.__PVT__t__BRA__67__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__64__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__65__KET__));
    vlSelfRef.__PVT__t[0U] = (((((((((IData)(__PVT__t__BRA__31__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__30__KET__) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__28__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(__PVT__t__BRA__27__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__26__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__25__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__24__KET__))) 
                                  << 8U)) | ((((((IData)(__PVT__t__BRA__23__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__22__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__21__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__20__KET__))) 
                                              << 4U) 
                                             | ((((IData)(__PVT__t__BRA__19__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__18__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(__PVT__t__BRA__16__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(__PVT__t__BRA__15__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__14__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__13__KET__) 
                                                         << 1U) 
                                                        | (IData)(__PVT__t__BRA__12__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__11__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__10__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__9__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__8__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__7__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__6__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__5__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__4__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__3__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__2__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(__PVT__t__BRA__1__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__0__KET__))))));
    vlSelfRef.__PVT__t[1U] = (((((((((IData)(vlSelfRef.__PVT__t__BRA__63__KET__) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__t__BRA__62__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__61__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__60__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(vlSelfRef.__PVT__t__BRA__59__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__58__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__57__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__56__KET__))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.__PVT__t__BRA__55__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__54__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__53__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__52__KET__))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.__PVT__t__BRA__51__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__50__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__49__KET__) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__t__BRA__48__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(vlSelfRef.__PVT__t__BRA__47__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__46__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__45__KET__) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__t__BRA__44__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__43__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__t__BRA__40__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__39__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__38__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__36__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__35__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__34__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__32__KET__))))));
    vlSelfRef.__PVT__t[2U] = (0x0000000fU & ((((IData)(vlSelfRef.__PVT__t__BRA__67__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__t__BRA__66__KET__) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__t__BRA__65__KET__) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__t__BRA__64__KET__))));
}

void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__t__BRA__61__KET__;
    __PVT__t__BRA__61__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__58__KET__;
    __PVT__t__BRA__58__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__57__KET__;
    __PVT__t__BRA__57__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__54__KET__;
    __PVT__t__BRA__54__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__53__KET__;
    __PVT__t__BRA__53__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__52__KET__;
    __PVT__t__BRA__52__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__50__KET__;
    __PVT__t__BRA__50__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__49__KET__;
    __PVT__t__BRA__49__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__46__KET__;
    __PVT__t__BRA__46__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__45__KET__;
    __PVT__t__BRA__45__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__43__KET__;
    __PVT__t__BRA__43__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__39__KET__;
    __PVT__t__BRA__39__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__38__KET__;
    __PVT__t__BRA__38__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__36__KET__;
    __PVT__t__BRA__36__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__35__KET__;
    __PVT__t__BRA__35__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__34__KET__;
    __PVT__t__BRA__34__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__32__KET__;
    __PVT__t__BRA__32__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__31__KET__;
    __PVT__t__BRA__31__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__30__KET__;
    __PVT__t__BRA__30__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__28__KET__;
    __PVT__t__BRA__28__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__27__KET__;
    __PVT__t__BRA__27__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__26__KET__;
    __PVT__t__BRA__26__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__25__KET__;
    __PVT__t__BRA__25__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__24__KET__;
    __PVT__t__BRA__24__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__23__KET__;
    __PVT__t__BRA__23__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__22__KET__;
    __PVT__t__BRA__22__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__21__KET__;
    __PVT__t__BRA__21__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__20__KET__;
    __PVT__t__BRA__20__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__19__KET__;
    __PVT__t__BRA__19__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__18__KET__;
    __PVT__t__BRA__18__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__17__KET__;
    __PVT__t__BRA__17__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__16__KET__;
    __PVT__t__BRA__16__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__15__KET__;
    __PVT__t__BRA__15__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__14__KET__;
    __PVT__t__BRA__14__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__13__KET__;
    __PVT__t__BRA__13__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__12__KET__;
    __PVT__t__BRA__12__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__11__KET__;
    __PVT__t__BRA__11__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__10__KET__;
    __PVT__t__BRA__10__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__9__KET__;
    __PVT__t__BRA__9__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__8__KET__;
    __PVT__t__BRA__8__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__7__KET__;
    __PVT__t__BRA__7__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__6__KET__;
    __PVT__t__BRA__6__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__5__KET__;
    __PVT__t__BRA__5__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__4__KET__;
    __PVT__t__BRA__4__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__3__KET__;
    __PVT__t__BRA__3__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__2__KET__;
    __PVT__t__BRA__2__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__1__KET__;
    __PVT__t__BRA__1__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__0__KET__;
    __PVT__t__BRA__0__KET__ = 0;
    // Body
    vlSelfRef.__PVT__y__BRA__8__KET__ = (1U & VL_REDXOR_8(
                                                          (0x00000084U 
                                                           & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U])));
    __PVT__t__BRA__0__KET__ = (1U & VL_REDXOR_8((0x00000060U 
                                                 & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U])));
    vlSelfRef.__PVT__y__BRA__9__KET__ = (1U & VL_REDXOR_8(
                                                          (0x00000090U 
                                                           & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U])));
    vlSelfRef.__PVT__y__BRA__14__KET__ = (1U & VL_REDXOR_8(
                                                           (0x00000014U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U])));
    vlSelfRef.__PVT__y__BRA__13__KET__ = (1U & VL_REDXOR_8(
                                                           (0x00000082U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U])));
    vlSelfRef.__PVT__y__BRA__1__KET__ = (1U & ((IData)(__PVT__t__BRA__0__KET__) 
                                               ^ vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U]));
    vlSelfRef.__PVT__y__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    vlSelfRef.__PVT__y__BRA__4__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                  >> 4U)));
    vlSelfRef.__PVT__y__BRA__2__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                  >> 7U)));
    vlSelfRef.__PVT__y__BRA__5__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                  >> 1U)));
    __PVT__t__BRA__1__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                      >> 3U) ^ (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)));
    __PVT__t__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__4__KET__) 
                               & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U]);
    vlSelfRef.__PVT__y__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__));
    __PVT__t__BRA__8__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    vlSelfRef.__PVT__y__BRA__15__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                   >> 2U)));
    vlSelfRef.__PVT__y__BRA__20__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                   >> 6U)));
    vlSelfRef.__PVT__y__BRA__6__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                               ^ vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U]));
    __PVT__t__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__12__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__));
    vlSelfRef.__PVT__y__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                          ^ (IData)(__PVT__t__BRA__0__KET__));
    vlSelfRef.__PVT__y__BRA__11__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__20__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__9__KET__));
    __PVT__t__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__3__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__));
    __PVT__t__BRA__6__KET__ = ((IData)(__PVT__t__BRA__5__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__15__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__8__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__));
    vlSelfRef.__PVT__y__BRA__7__KET__ = (1U & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                               ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)));
    vlSelfRef.__PVT__y__BRA__17__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__9__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    vlSelfRef.__PVT__y__BRA__16__KET__ = ((IData)(__PVT__t__BRA__0__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__4__KET__ = ((IData)(__PVT__t__BRA__3__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__2__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    __PVT__t__BRA__13__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__14__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    __PVT__t__BRA__16__KET__ = ((IData)(__PVT__t__BRA__15__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__7__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__14__KET__ = ((IData)(__PVT__t__BRA__13__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__18__KET__ = ((IData)(__PVT__t__BRA__6__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__9__KET__ = ((IData)(__PVT__t__BRA__8__KET__) 
                               ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__11__KET__ = ((IData)(__PVT__t__BRA__10__KET__) 
                                ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__17__KET__ = ((IData)(__PVT__t__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__22__KET__ = ((IData)(__PVT__t__BRA__18__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__19__KET__ = ((IData)(__PVT__t__BRA__9__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__20__KET__ = ((IData)(__PVT__t__BRA__11__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__21__KET__ = ((IData)(__PVT__t__BRA__17__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__20__KET__));
    __PVT__t__BRA__23__KET__ = ((IData)(__PVT__t__BRA__19__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__)));
    __PVT__t__BRA__24__KET__ = (1U & ((IData)(__PVT__t__BRA__20__KET__) 
                                      ^ ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                          >> 7U) ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__))));
    __PVT__t__BRA__25__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                ^ (IData)(__PVT__t__BRA__22__KET__));
    __PVT__t__BRA__26__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                & (IData)(__PVT__t__BRA__23__KET__));
    __PVT__t__BRA__30__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(__PVT__t__BRA__24__KET__));
    __PVT__t__BRA__31__KET__ = ((IData)(__PVT__t__BRA__22__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__27__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__32__KET__ = ((IData)(__PVT__t__BRA__31__KET__) 
                                & (IData)(__PVT__t__BRA__30__KET__));
    __PVT__t__BRA__28__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                & (IData)(__PVT__t__BRA__27__KET__));
    vlSelfRef.__PVT__t__BRA__33__KET__ = ((IData)(__PVT__t__BRA__32__KET__) 
                                          ^ (IData)(__PVT__t__BRA__24__KET__));
    vlSelfRef.__PVT__t__BRA__29__KET__ = ((IData)(__PVT__t__BRA__28__KET__) 
                                          ^ (IData)(__PVT__t__BRA__22__KET__));
    vlSelfRef.__PVT__z__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                         & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U]);
    __PVT__t__BRA__34__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__35__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    vlSelfRef.__PVT__z__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    vlSelfRef.__PVT__t__BRA__42__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__36__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                & (IData)(__PVT__t__BRA__35__KET__));
    vlSelfRef.__PVT__t__BRA__51__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__z__BRA__5__KET__));
    vlSelfRef.__PVT__t__BRA__37__KET__ = ((IData)(__PVT__t__BRA__36__KET__) 
                                          ^ (IData)(__PVT__t__BRA__34__KET__));
    __PVT__t__BRA__38__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(__PVT__t__BRA__36__KET__));
    vlSelfRef.__PVT__z__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__3__KET__));
    vlSelfRef.__PVT__t__BRA__44__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    __PVT__t__BRA__39__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                & (IData)(__PVT__t__BRA__38__KET__));
    vlSelfRef.__PVT__t__BRA__47__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__10__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__4__KET__)));
    __PVT__t__BRA__49__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__10__KET__));
    vlSelfRef.__PVT__t__BRA__40__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                          ^ (IData)(__PVT__t__BRA__39__KET__));
    vlSelfRef.__PVT__t__BRA__48__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__5__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__5__KET__)));
    vlSelfRef.__PVT__z__BRA__4__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    __PVT__t__BRA__43__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__40__KET__));
    vlSelfRef.__PVT__t__BRA__41__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    vlSelfRef.__PVT__z__BRA__12__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__13__KET__));
    vlSelfRef.__PVT__z__BRA__3__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__45__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__41__KET__));
    vlSelfRef.__PVT__t__BRA__56__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__12__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__48__KET__));
    __PVT__t__BRA__50__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__12__KET__));
    __PVT__t__BRA__53__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__3__KET__));
    vlSelfRef.__PVT__z__BRA__7__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    vlSelfRef.__PVT__z__BRA__16__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    __PVT__t__BRA__57__KET__ = ((IData)(__PVT__t__BRA__50__KET__) 
                                ^ (IData)(__PVT__t__BRA__53__KET__));
    __PVT__t__BRA__54__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__7__KET__));
    __PVT__t__BRA__52__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__7__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__)));
    vlSelfRef.__PVT__t__BRA__55__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__16__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__46__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__9__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__16__KET__));
    __PVT__t__BRA__61__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__2__KET__)) 
                                ^ (IData)(__PVT__t__BRA__57__KET__));
    vlSelfRef.__PVT__t__BRA__59__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__3__KET__) 
                                          ^ (IData)(__PVT__t__BRA__54__KET__));
    vlSelfRef.__PVT__t__BRA__60__KET__ = ((IData)(__PVT__t__BRA__46__KET__) 
                                          ^ (IData)(__PVT__t__BRA__57__KET__));
    __PVT__t__BRA__58__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__46__KET__));
    vlSelfRef.__PVT__t__BRA__64__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__59__KET__));
    vlSelfRef.__PVT__t__BRA__63__KET__ = ((IData)(__PVT__t__BRA__49__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__62__KET__ = ((IData)(__PVT__t__BRA__52__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__66__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                           & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__)) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__63__KET__));
    vlSelfRef.__PVT__t__BRA__65__KET__ = ((IData)(__PVT__t__BRA__61__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__62__KET__));
    vlSelfRef.__VdfgRegularize_h224e5c7b_0_0 = ((IData)(__PVT__t__BRA__53__KET__) 
                                                ^ (IData)(vlSelfRef.__PVT__t__BRA__66__KET__));
    vlSelfRef.__PVT__t__BRA__67__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__64__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__65__KET__));
    vlSelfRef.__PVT__t[0U] = (((((((((IData)(__PVT__t__BRA__31__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__30__KET__) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__28__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(__PVT__t__BRA__27__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__26__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__25__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__24__KET__))) 
                                  << 8U)) | ((((((IData)(__PVT__t__BRA__23__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__22__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__21__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__20__KET__))) 
                                              << 4U) 
                                             | ((((IData)(__PVT__t__BRA__19__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__18__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(__PVT__t__BRA__16__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(__PVT__t__BRA__15__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__14__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__13__KET__) 
                                                         << 1U) 
                                                        | (IData)(__PVT__t__BRA__12__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__11__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__10__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__9__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__8__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__7__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__6__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__5__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__4__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__3__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__2__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(__PVT__t__BRA__1__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__0__KET__))))));
    vlSelfRef.__PVT__t[1U] = (((((((((IData)(vlSelfRef.__PVT__t__BRA__63__KET__) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__t__BRA__62__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__61__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__60__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(vlSelfRef.__PVT__t__BRA__59__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__58__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__57__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__56__KET__))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.__PVT__t__BRA__55__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__54__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__53__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__52__KET__))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.__PVT__t__BRA__51__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__50__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__49__KET__) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__t__BRA__48__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(vlSelfRef.__PVT__t__BRA__47__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__46__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__45__KET__) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__t__BRA__44__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__43__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__t__BRA__40__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__39__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__38__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__36__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__35__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__34__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__32__KET__))))));
    vlSelfRef.__PVT__t[2U] = (0x0000000fU & ((((IData)(vlSelfRef.__PVT__t__BRA__67__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__t__BRA__66__KET__) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__t__BRA__65__KET__) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__t__BRA__64__KET__))));
}

void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__t__BRA__61__KET__;
    __PVT__t__BRA__61__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__58__KET__;
    __PVT__t__BRA__58__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__57__KET__;
    __PVT__t__BRA__57__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__54__KET__;
    __PVT__t__BRA__54__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__53__KET__;
    __PVT__t__BRA__53__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__52__KET__;
    __PVT__t__BRA__52__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__50__KET__;
    __PVT__t__BRA__50__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__49__KET__;
    __PVT__t__BRA__49__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__46__KET__;
    __PVT__t__BRA__46__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__45__KET__;
    __PVT__t__BRA__45__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__43__KET__;
    __PVT__t__BRA__43__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__39__KET__;
    __PVT__t__BRA__39__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__38__KET__;
    __PVT__t__BRA__38__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__36__KET__;
    __PVT__t__BRA__36__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__35__KET__;
    __PVT__t__BRA__35__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__34__KET__;
    __PVT__t__BRA__34__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__32__KET__;
    __PVT__t__BRA__32__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__31__KET__;
    __PVT__t__BRA__31__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__30__KET__;
    __PVT__t__BRA__30__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__28__KET__;
    __PVT__t__BRA__28__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__27__KET__;
    __PVT__t__BRA__27__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__26__KET__;
    __PVT__t__BRA__26__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__25__KET__;
    __PVT__t__BRA__25__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__24__KET__;
    __PVT__t__BRA__24__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__23__KET__;
    __PVT__t__BRA__23__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__22__KET__;
    __PVT__t__BRA__22__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__21__KET__;
    __PVT__t__BRA__21__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__20__KET__;
    __PVT__t__BRA__20__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__19__KET__;
    __PVT__t__BRA__19__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__18__KET__;
    __PVT__t__BRA__18__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__17__KET__;
    __PVT__t__BRA__17__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__16__KET__;
    __PVT__t__BRA__16__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__15__KET__;
    __PVT__t__BRA__15__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__14__KET__;
    __PVT__t__BRA__14__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__13__KET__;
    __PVT__t__BRA__13__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__12__KET__;
    __PVT__t__BRA__12__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__11__KET__;
    __PVT__t__BRA__11__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__10__KET__;
    __PVT__t__BRA__10__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__9__KET__;
    __PVT__t__BRA__9__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__8__KET__;
    __PVT__t__BRA__8__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__7__KET__;
    __PVT__t__BRA__7__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__6__KET__;
    __PVT__t__BRA__6__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__5__KET__;
    __PVT__t__BRA__5__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__4__KET__;
    __PVT__t__BRA__4__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__3__KET__;
    __PVT__t__BRA__3__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__2__KET__;
    __PVT__t__BRA__2__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__1__KET__;
    __PVT__t__BRA__1__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__0__KET__;
    __PVT__t__BRA__0__KET__ = 0;
    // Body
    vlSelfRef.__PVT__y__BRA__8__KET__ = (1U & VL_REDXOR_16(
                                                           (0x00008400U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U])));
    __PVT__t__BRA__0__KET__ = (1U & VL_REDXOR_16((0x00006000U 
                                                  & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U])));
    vlSelfRef.__PVT__y__BRA__9__KET__ = (1U & VL_REDXOR_16(
                                                           (0x00009000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U])));
    vlSelfRef.__PVT__y__BRA__14__KET__ = (1U & VL_REDXOR_16(
                                                            (0x00001400U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U])));
    vlSelfRef.__PVT__y__BRA__13__KET__ = (1U & VL_REDXOR_16(
                                                            (0x00008200U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U])));
    vlSelfRef.__PVT__y__BRA__1__KET__ = (1U & ((IData)(__PVT__t__BRA__0__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                  >> 8U)));
    vlSelfRef.__PVT__y__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    vlSelfRef.__PVT__y__BRA__4__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                  >> 0x0000000cU)));
    vlSelfRef.__PVT__y__BRA__2__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                  >> 0x0000000fU)));
    vlSelfRef.__PVT__y__BRA__5__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                  >> 9U)));
    __PVT__t__BRA__1__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                      >> 0x0000000bU) 
                                     ^ (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)));
    __PVT__t__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__4__KET__) 
                               & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                  >> 8U));
    vlSelfRef.__PVT__y__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__));
    __PVT__t__BRA__8__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    vlSelfRef.__PVT__y__BRA__15__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                   >> 0x0000000aU)));
    vlSelfRef.__PVT__y__BRA__20__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                   >> 0x0000000eU)));
    vlSelfRef.__PVT__y__BRA__6__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                  >> 8U)));
    __PVT__t__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__12__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__));
    vlSelfRef.__PVT__y__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                          ^ (IData)(__PVT__t__BRA__0__KET__));
    vlSelfRef.__PVT__y__BRA__11__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__20__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__9__KET__));
    __PVT__t__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__3__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__));
    __PVT__t__BRA__6__KET__ = ((IData)(__PVT__t__BRA__5__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__15__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__8__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__));
    vlSelfRef.__PVT__y__BRA__7__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                >> 8U) 
                                               ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)));
    vlSelfRef.__PVT__y__BRA__17__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__9__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    vlSelfRef.__PVT__y__BRA__16__KET__ = ((IData)(__PVT__t__BRA__0__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__4__KET__ = ((IData)(__PVT__t__BRA__3__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__2__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    __PVT__t__BRA__13__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__14__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    __PVT__t__BRA__16__KET__ = ((IData)(__PVT__t__BRA__15__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__7__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__14__KET__ = ((IData)(__PVT__t__BRA__13__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__18__KET__ = ((IData)(__PVT__t__BRA__6__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__9__KET__ = ((IData)(__PVT__t__BRA__8__KET__) 
                               ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__11__KET__ = ((IData)(__PVT__t__BRA__10__KET__) 
                                ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__17__KET__ = ((IData)(__PVT__t__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__22__KET__ = ((IData)(__PVT__t__BRA__18__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__19__KET__ = ((IData)(__PVT__t__BRA__9__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__20__KET__ = ((IData)(__PVT__t__BRA__11__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__21__KET__ = ((IData)(__PVT__t__BRA__17__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__20__KET__));
    __PVT__t__BRA__23__KET__ = ((IData)(__PVT__t__BRA__19__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__)));
    __PVT__t__BRA__24__KET__ = (1U & ((IData)(__PVT__t__BRA__20__KET__) 
                                      ^ ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                          >> 0x0000000fU) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__))));
    __PVT__t__BRA__25__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                ^ (IData)(__PVT__t__BRA__22__KET__));
    __PVT__t__BRA__26__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                & (IData)(__PVT__t__BRA__23__KET__));
    __PVT__t__BRA__30__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(__PVT__t__BRA__24__KET__));
    __PVT__t__BRA__31__KET__ = ((IData)(__PVT__t__BRA__22__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__27__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__32__KET__ = ((IData)(__PVT__t__BRA__31__KET__) 
                                & (IData)(__PVT__t__BRA__30__KET__));
    __PVT__t__BRA__28__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                & (IData)(__PVT__t__BRA__27__KET__));
    vlSelfRef.__PVT__t__BRA__33__KET__ = ((IData)(__PVT__t__BRA__32__KET__) 
                                          ^ (IData)(__PVT__t__BRA__24__KET__));
    vlSelfRef.__PVT__t__BRA__29__KET__ = ((IData)(__PVT__t__BRA__28__KET__) 
                                          ^ (IData)(__PVT__t__BRA__22__KET__));
    vlSelfRef.__PVT__z__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                         & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                            >> 8U));
    __PVT__t__BRA__34__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__35__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    vlSelfRef.__PVT__z__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    vlSelfRef.__PVT__t__BRA__42__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__36__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                & (IData)(__PVT__t__BRA__35__KET__));
    vlSelfRef.__PVT__t__BRA__51__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__z__BRA__5__KET__));
    vlSelfRef.__PVT__t__BRA__37__KET__ = ((IData)(__PVT__t__BRA__36__KET__) 
                                          ^ (IData)(__PVT__t__BRA__34__KET__));
    __PVT__t__BRA__38__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(__PVT__t__BRA__36__KET__));
    vlSelfRef.__PVT__z__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__3__KET__));
    vlSelfRef.__PVT__t__BRA__44__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    __PVT__t__BRA__39__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                & (IData)(__PVT__t__BRA__38__KET__));
    vlSelfRef.__PVT__t__BRA__47__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__10__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__4__KET__)));
    __PVT__t__BRA__49__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__10__KET__));
    vlSelfRef.__PVT__t__BRA__40__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                          ^ (IData)(__PVT__t__BRA__39__KET__));
    vlSelfRef.__PVT__t__BRA__48__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__5__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__5__KET__)));
    vlSelfRef.__PVT__z__BRA__4__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    __PVT__t__BRA__43__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__40__KET__));
    vlSelfRef.__PVT__t__BRA__41__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    vlSelfRef.__PVT__z__BRA__12__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__13__KET__));
    vlSelfRef.__PVT__z__BRA__3__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__45__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__41__KET__));
    vlSelfRef.__PVT__t__BRA__56__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__12__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__48__KET__));
    __PVT__t__BRA__50__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__12__KET__));
    __PVT__t__BRA__53__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__3__KET__));
    vlSelfRef.__PVT__z__BRA__7__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    vlSelfRef.__PVT__z__BRA__16__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    __PVT__t__BRA__57__KET__ = ((IData)(__PVT__t__BRA__50__KET__) 
                                ^ (IData)(__PVT__t__BRA__53__KET__));
    __PVT__t__BRA__54__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__7__KET__));
    __PVT__t__BRA__52__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__7__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__)));
    vlSelfRef.__PVT__t__BRA__55__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__16__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__46__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__9__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__16__KET__));
    __PVT__t__BRA__61__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__2__KET__)) 
                                ^ (IData)(__PVT__t__BRA__57__KET__));
    vlSelfRef.__PVT__t__BRA__59__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__3__KET__) 
                                          ^ (IData)(__PVT__t__BRA__54__KET__));
    vlSelfRef.__PVT__t__BRA__60__KET__ = ((IData)(__PVT__t__BRA__46__KET__) 
                                          ^ (IData)(__PVT__t__BRA__57__KET__));
    __PVT__t__BRA__58__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__46__KET__));
    vlSelfRef.__PVT__t__BRA__64__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__59__KET__));
    vlSelfRef.__PVT__t__BRA__63__KET__ = ((IData)(__PVT__t__BRA__49__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__62__KET__ = ((IData)(__PVT__t__BRA__52__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__66__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                           & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__)) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__63__KET__));
    vlSelfRef.__PVT__t__BRA__65__KET__ = ((IData)(__PVT__t__BRA__61__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__62__KET__));
    vlSelfRef.__VdfgRegularize_h224e5c7b_0_0 = ((IData)(__PVT__t__BRA__53__KET__) 
                                                ^ (IData)(vlSelfRef.__PVT__t__BRA__66__KET__));
    vlSelfRef.__PVT__t__BRA__67__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__64__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__65__KET__));
    vlSelfRef.__PVT__t[0U] = (((((((((IData)(__PVT__t__BRA__31__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__30__KET__) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__28__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(__PVT__t__BRA__27__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__26__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__25__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__24__KET__))) 
                                  << 8U)) | ((((((IData)(__PVT__t__BRA__23__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__22__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__21__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__20__KET__))) 
                                              << 4U) 
                                             | ((((IData)(__PVT__t__BRA__19__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__18__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(__PVT__t__BRA__16__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(__PVT__t__BRA__15__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__14__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__13__KET__) 
                                                         << 1U) 
                                                        | (IData)(__PVT__t__BRA__12__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__11__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__10__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__9__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__8__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__7__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__6__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__5__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__4__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__3__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__2__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(__PVT__t__BRA__1__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__0__KET__))))));
    vlSelfRef.__PVT__t[1U] = (((((((((IData)(vlSelfRef.__PVT__t__BRA__63__KET__) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__t__BRA__62__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__61__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__60__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(vlSelfRef.__PVT__t__BRA__59__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__58__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__57__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__56__KET__))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.__PVT__t__BRA__55__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__54__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__53__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__52__KET__))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.__PVT__t__BRA__51__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__50__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__49__KET__) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__t__BRA__48__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(vlSelfRef.__PVT__t__BRA__47__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__46__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__45__KET__) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__t__BRA__44__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__43__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__t__BRA__40__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__39__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__38__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__36__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__35__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__34__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__32__KET__))))));
    vlSelfRef.__PVT__t[2U] = (0x0000000fU & ((((IData)(vlSelfRef.__PVT__t__BRA__67__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__t__BRA__66__KET__) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__t__BRA__65__KET__) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__t__BRA__64__KET__))));
}

void Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(Vaes_functions_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_functions_sbox___ico_sequent__TOP__aes__DOT__round__BRA__3__KET____DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __PVT__t__BRA__61__KET__;
    __PVT__t__BRA__61__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__58__KET__;
    __PVT__t__BRA__58__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__57__KET__;
    __PVT__t__BRA__57__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__54__KET__;
    __PVT__t__BRA__54__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__53__KET__;
    __PVT__t__BRA__53__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__52__KET__;
    __PVT__t__BRA__52__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__50__KET__;
    __PVT__t__BRA__50__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__49__KET__;
    __PVT__t__BRA__49__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__46__KET__;
    __PVT__t__BRA__46__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__45__KET__;
    __PVT__t__BRA__45__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__43__KET__;
    __PVT__t__BRA__43__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__39__KET__;
    __PVT__t__BRA__39__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__38__KET__;
    __PVT__t__BRA__38__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__36__KET__;
    __PVT__t__BRA__36__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__35__KET__;
    __PVT__t__BRA__35__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__34__KET__;
    __PVT__t__BRA__34__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__32__KET__;
    __PVT__t__BRA__32__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__31__KET__;
    __PVT__t__BRA__31__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__30__KET__;
    __PVT__t__BRA__30__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__28__KET__;
    __PVT__t__BRA__28__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__27__KET__;
    __PVT__t__BRA__27__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__26__KET__;
    __PVT__t__BRA__26__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__25__KET__;
    __PVT__t__BRA__25__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__24__KET__;
    __PVT__t__BRA__24__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__23__KET__;
    __PVT__t__BRA__23__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__22__KET__;
    __PVT__t__BRA__22__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__21__KET__;
    __PVT__t__BRA__21__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__20__KET__;
    __PVT__t__BRA__20__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__19__KET__;
    __PVT__t__BRA__19__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__18__KET__;
    __PVT__t__BRA__18__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__17__KET__;
    __PVT__t__BRA__17__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__16__KET__;
    __PVT__t__BRA__16__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__15__KET__;
    __PVT__t__BRA__15__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__14__KET__;
    __PVT__t__BRA__14__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__13__KET__;
    __PVT__t__BRA__13__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__12__KET__;
    __PVT__t__BRA__12__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__11__KET__;
    __PVT__t__BRA__11__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__10__KET__;
    __PVT__t__BRA__10__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__9__KET__;
    __PVT__t__BRA__9__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__8__KET__;
    __PVT__t__BRA__8__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__7__KET__;
    __PVT__t__BRA__7__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__6__KET__;
    __PVT__t__BRA__6__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__5__KET__;
    __PVT__t__BRA__5__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__4__KET__;
    __PVT__t__BRA__4__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__3__KET__;
    __PVT__t__BRA__3__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__2__KET__;
    __PVT__t__BRA__2__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__1__KET__;
    __PVT__t__BRA__1__KET__ = 0;
    CData/*0:0*/ __PVT__t__BRA__0__KET__;
    __PVT__t__BRA__0__KET__ = 0;
    // Body
    vlSelfRef.__PVT__y__BRA__8__KET__ = (1U & VL_REDXOR_32(
                                                           (0x00840000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U])));
    __PVT__t__BRA__0__KET__ = (1U & VL_REDXOR_32((0x00600000U 
                                                  & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U])));
    vlSelfRef.__PVT__y__BRA__9__KET__ = (1U & VL_REDXOR_32(
                                                           (0x00900000U 
                                                            & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U])));
    vlSelfRef.__PVT__y__BRA__14__KET__ = (1U & VL_REDXOR_32(
                                                            (0x00140000U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U])));
    vlSelfRef.__PVT__y__BRA__13__KET__ = (1U & VL_REDXOR_32(
                                                            (0x00820000U 
                                                             & vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U])));
    vlSelfRef.__PVT__y__BRA__1__KET__ = (1U & ((IData)(__PVT__t__BRA__0__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                  >> 0x00000010U)));
    vlSelfRef.__PVT__y__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    vlSelfRef.__PVT__y__BRA__4__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                  >> 0x00000014U)));
    vlSelfRef.__PVT__y__BRA__2__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                  >> 0x00000017U)));
    vlSelfRef.__PVT__y__BRA__5__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__1__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                  >> 0x00000011U)));
    __PVT__t__BRA__1__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                      >> 0x00000013U) 
                                     ^ (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)));
    __PVT__t__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__4__KET__) 
                               & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                  >> 0x00000010U));
    vlSelfRef.__PVT__y__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__));
    __PVT__t__BRA__8__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__5__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    vlSelfRef.__PVT__y__BRA__15__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                   >> 0x00000012U)));
    vlSelfRef.__PVT__y__BRA__20__KET__ = (1U & ((IData)(__PVT__t__BRA__1__KET__) 
                                                ^ (
                                                   vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                   >> 0x00000016U)));
    vlSelfRef.__PVT__y__BRA__6__KET__ = (1U & ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                               ^ (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                  >> 0x00000010U)));
    __PVT__t__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__12__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__));
    vlSelfRef.__PVT__y__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__15__KET__) 
                                          ^ (IData)(__PVT__t__BRA__0__KET__));
    vlSelfRef.__PVT__y__BRA__11__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__20__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__9__KET__));
    __PVT__t__BRA__3__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__3__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__));
    __PVT__t__BRA__6__KET__ = ((IData)(__PVT__t__BRA__5__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__15__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__8__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__));
    vlSelfRef.__PVT__y__BRA__7__KET__ = (1U & ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                                >> 0x00000010U) 
                                               ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)));
    vlSelfRef.__PVT__y__BRA__17__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__12__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__9__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    vlSelfRef.__PVT__y__BRA__16__KET__ = ((IData)(__PVT__t__BRA__0__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__y__BRA__11__KET__));
    __PVT__t__BRA__4__KET__ = ((IData)(__PVT__t__BRA__3__KET__) 
                               ^ (IData)(__PVT__t__BRA__2__KET__));
    __PVT__t__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__2__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    __PVT__t__BRA__13__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__14__KET__) 
                                & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    __PVT__t__BRA__16__KET__ = ((IData)(__PVT__t__BRA__15__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__7__KET__ = ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                               & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__14__KET__ = ((IData)(__PVT__t__BRA__13__KET__) 
                                ^ (IData)(__PVT__t__BRA__12__KET__));
    __PVT__t__BRA__18__KET__ = ((IData)(__PVT__t__BRA__6__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__9__KET__ = ((IData)(__PVT__t__BRA__8__KET__) 
                               ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__11__KET__ = ((IData)(__PVT__t__BRA__10__KET__) 
                                ^ (IData)(__PVT__t__BRA__7__KET__));
    __PVT__t__BRA__17__KET__ = ((IData)(__PVT__t__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__22__KET__ = ((IData)(__PVT__t__BRA__18__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__10__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__19__KET__ = ((IData)(__PVT__t__BRA__9__KET__) 
                                ^ (IData)(__PVT__t__BRA__14__KET__));
    __PVT__t__BRA__20__KET__ = ((IData)(__PVT__t__BRA__11__KET__) 
                                ^ (IData)(__PVT__t__BRA__16__KET__));
    __PVT__t__BRA__21__KET__ = ((IData)(__PVT__t__BRA__17__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__y__BRA__20__KET__));
    __PVT__t__BRA__23__KET__ = ((IData)(__PVT__t__BRA__19__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__y__BRA__13__KET__) 
                                   ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__)));
    __PVT__t__BRA__24__KET__ = (1U & ((IData)(__PVT__t__BRA__20__KET__) 
                                      ^ ((vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                          >> 0x00000017U) 
                                         ^ (IData)(vlSelfRef.__PVT__y__BRA__16__KET__))));
    __PVT__t__BRA__25__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                ^ (IData)(__PVT__t__BRA__22__KET__));
    __PVT__t__BRA__26__KET__ = ((IData)(__PVT__t__BRA__21__KET__) 
                                & (IData)(__PVT__t__BRA__23__KET__));
    __PVT__t__BRA__30__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(__PVT__t__BRA__24__KET__));
    __PVT__t__BRA__31__KET__ = ((IData)(__PVT__t__BRA__22__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__27__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                ^ (IData)(__PVT__t__BRA__26__KET__));
    __PVT__t__BRA__32__KET__ = ((IData)(__PVT__t__BRA__31__KET__) 
                                & (IData)(__PVT__t__BRA__30__KET__));
    __PVT__t__BRA__28__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                & (IData)(__PVT__t__BRA__27__KET__));
    vlSelfRef.__PVT__t__BRA__33__KET__ = ((IData)(__PVT__t__BRA__32__KET__) 
                                          ^ (IData)(__PVT__t__BRA__24__KET__));
    vlSelfRef.__PVT__t__BRA__29__KET__ = ((IData)(__PVT__t__BRA__28__KET__) 
                                          ^ (IData)(__PVT__t__BRA__22__KET__));
    vlSelfRef.__PVT__z__BRA__2__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                         & (vlSymsp->TOP.aes__DOT__round__BRA__3__KET____DOT__sb__DOT__in[3U] 
                                            >> 0x00000010U));
    __PVT__t__BRA__34__KET__ = ((IData)(__PVT__t__BRA__23__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__35__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    vlSelfRef.__PVT__z__BRA__5__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__7__KET__));
    vlSelfRef.__PVT__t__BRA__42__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__33__KET__));
    __PVT__t__BRA__36__KET__ = ((IData)(__PVT__t__BRA__24__KET__) 
                                & (IData)(__PVT__t__BRA__35__KET__));
    vlSelfRef.__PVT__t__BRA__51__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__z__BRA__5__KET__));
    vlSelfRef.__PVT__t__BRA__37__KET__ = ((IData)(__PVT__t__BRA__36__KET__) 
                                          ^ (IData)(__PVT__t__BRA__34__KET__));
    __PVT__t__BRA__38__KET__ = ((IData)(__PVT__t__BRA__27__KET__) 
                                ^ (IData)(__PVT__t__BRA__36__KET__));
    vlSelfRef.__PVT__z__BRA__10__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__3__KET__));
    vlSelfRef.__PVT__t__BRA__44__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    __PVT__t__BRA__39__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                & (IData)(__PVT__t__BRA__38__KET__));
    vlSelfRef.__PVT__t__BRA__47__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__10__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__4__KET__)));
    __PVT__t__BRA__49__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__12__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__10__KET__));
    vlSelfRef.__PVT__t__BRA__40__KET__ = ((IData)(__PVT__t__BRA__25__KET__) 
                                          ^ (IData)(__PVT__t__BRA__39__KET__));
    vlSelfRef.__PVT__t__BRA__48__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__5__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__5__KET__)));
    vlSelfRef.__PVT__z__BRA__4__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__1__KET__));
    __PVT__t__BRA__43__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__40__KET__));
    vlSelfRef.__PVT__t__BRA__41__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__40__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__37__KET__));
    vlSelfRef.__PVT__z__BRA__12__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__13__KET__));
    vlSelfRef.__PVT__z__BRA__3__KET__ = ((IData)(__PVT__t__BRA__43__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__16__KET__));
    __PVT__t__BRA__45__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__t__BRA__41__KET__));
    vlSelfRef.__PVT__t__BRA__56__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__12__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__48__KET__));
    __PVT__t__BRA__50__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__2__KET__) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__12__KET__));
    __PVT__t__BRA__53__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__44__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__15__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__3__KET__));
    vlSelfRef.__PVT__z__BRA__7__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                         & (IData)(vlSelfRef.__PVT__y__BRA__17__KET__));
    vlSelfRef.__PVT__z__BRA__16__KET__ = ((IData)(__PVT__t__BRA__45__KET__) 
                                          & (IData)(vlSelfRef.__PVT__y__BRA__14__KET__));
    __PVT__t__BRA__57__KET__ = ((IData)(__PVT__t__BRA__50__KET__) 
                                ^ (IData)(__PVT__t__BRA__53__KET__));
    __PVT__t__BRA__54__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__11__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__7__KET__));
    __PVT__t__BRA__52__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__7__KET__) 
                                ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                   & (IData)(vlSelfRef.__PVT__y__BRA__10__KET__)));
    vlSelfRef.__PVT__t__BRA__55__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__16__KET__) 
                                          ^ ((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                             & (IData)(vlSelfRef.__PVT__y__BRA__8__KET__)));
    __PVT__t__BRA__46__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__9__KET__)) 
                                ^ (IData)(vlSelfRef.__PVT__z__BRA__16__KET__));
    __PVT__t__BRA__61__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                 & (IData)(vlSelfRef.__PVT__y__BRA__2__KET__)) 
                                ^ (IData)(__PVT__t__BRA__57__KET__));
    vlSelfRef.__PVT__t__BRA__59__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__3__KET__) 
                                          ^ (IData)(__PVT__t__BRA__54__KET__));
    vlSelfRef.__PVT__t__BRA__60__KET__ = ((IData)(__PVT__t__BRA__46__KET__) 
                                          ^ (IData)(__PVT__t__BRA__57__KET__));
    __PVT__t__BRA__58__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                ^ (IData)(__PVT__t__BRA__46__KET__));
    vlSelfRef.__PVT__t__BRA__64__KET__ = ((IData)(vlSelfRef.__PVT__z__BRA__4__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__59__KET__));
    vlSelfRef.__PVT__t__BRA__63__KET__ = ((IData)(__PVT__t__BRA__49__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__62__KET__ = ((IData)(__PVT__t__BRA__52__KET__) 
                                          ^ (IData)(__PVT__t__BRA__58__KET__));
    vlSelfRef.__PVT__t__BRA__66__KET__ = (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                           & (IData)(vlSelfRef.__PVT__y__BRA__6__KET__)) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__63__KET__));
    vlSelfRef.__PVT__t__BRA__65__KET__ = ((IData)(__PVT__t__BRA__61__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__62__KET__));
    vlSelfRef.__VdfgRegularize_h224e5c7b_0_0 = ((IData)(__PVT__t__BRA__53__KET__) 
                                                ^ (IData)(vlSelfRef.__PVT__t__BRA__66__KET__));
    vlSelfRef.__PVT__t__BRA__67__KET__ = ((IData)(vlSelfRef.__PVT__t__BRA__64__KET__) 
                                          ^ (IData)(vlSelfRef.__PVT__t__BRA__65__KET__));
    vlSelfRef.__PVT__t[0U] = (((((((((IData)(__PVT__t__BRA__31__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__30__KET__) 
                                               << 2U)) 
                                   | (((IData)(vlSelfRef.__PVT__t__BRA__29__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__28__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(__PVT__t__BRA__27__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__26__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__25__KET__) 
                                       << 1U) | (IData)(__PVT__t__BRA__24__KET__))) 
                                  << 8U)) | ((((((IData)(__PVT__t__BRA__23__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__22__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__21__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__20__KET__))) 
                                              << 4U) 
                                             | ((((IData)(__PVT__t__BRA__19__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__18__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__17__KET__) 
                                                    << 1U) 
                                                   | (IData)(__PVT__t__BRA__16__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(__PVT__t__BRA__15__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__14__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__13__KET__) 
                                                         << 1U) 
                                                        | (IData)(__PVT__t__BRA__12__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__11__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__10__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__9__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__8__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__7__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__6__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(__PVT__t__BRA__5__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__4__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__3__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__2__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(__PVT__t__BRA__1__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__0__KET__))))));
    vlSelfRef.__PVT__t[1U] = (((((((((IData)(vlSelfRef.__PVT__t__BRA__63__KET__) 
                                     << 3U) | ((IData)(vlSelfRef.__PVT__t__BRA__62__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__61__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__60__KET__))) 
                                  << 0x0000000cU) | 
                                 (((((IData)(vlSelfRef.__PVT__t__BRA__59__KET__) 
                                     << 3U) | ((IData)(__PVT__t__BRA__58__KET__) 
                                               << 2U)) 
                                   | (((IData)(__PVT__t__BRA__57__KET__) 
                                       << 1U) | (IData)(vlSelfRef.__PVT__t__BRA__56__KET__))) 
                                  << 8U)) | ((((((IData)(vlSelfRef.__PVT__t__BRA__55__KET__) 
                                                 << 3U) 
                                                | ((IData)(__PVT__t__BRA__54__KET__) 
                                                   << 2U)) 
                                               | (((IData)(__PVT__t__BRA__53__KET__) 
                                                   << 1U) 
                                                  | (IData)(__PVT__t__BRA__52__KET__))) 
                                              << 4U) 
                                             | ((((IData)(vlSelfRef.__PVT__t__BRA__51__KET__) 
                                                  << 3U) 
                                                 | ((IData)(__PVT__t__BRA__50__KET__) 
                                                    << 2U)) 
                                                | (((IData)(__PVT__t__BRA__49__KET__) 
                                                    << 1U) 
                                                   | (IData)(vlSelfRef.__PVT__t__BRA__48__KET__))))) 
                               << 0x00000010U) | ((
                                                   (((((IData)(vlSelfRef.__PVT__t__BRA__47__KET__) 
                                                       << 3U) 
                                                      | ((IData)(__PVT__t__BRA__46__KET__) 
                                                         << 2U)) 
                                                     | (((IData)(__PVT__t__BRA__45__KET__) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.__PVT__t__BRA__44__KET__))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(__PVT__t__BRA__43__KET__) 
                                                         << 3U) 
                                                        | ((IData)(vlSelfRef.__PVT__t__BRA__42__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__41__KET__) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.__PVT__t__BRA__40__KET__))) 
                                                      << 8U)) 
                                                  | ((((((IData)(__PVT__t__BRA__39__KET__) 
                                                         << 3U) 
                                                        | ((IData)(__PVT__t__BRA__38__KET__) 
                                                           << 2U)) 
                                                       | (((IData)(vlSelfRef.__PVT__t__BRA__37__KET__) 
                                                           << 1U) 
                                                          | (IData)(__PVT__t__BRA__36__KET__))) 
                                                      << 4U) 
                                                     | ((((IData)(__PVT__t__BRA__35__KET__) 
                                                          << 3U) 
                                                         | ((IData)(__PVT__t__BRA__34__KET__) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.__PVT__t__BRA__33__KET__) 
                                                            << 1U) 
                                                           | (IData)(__PVT__t__BRA__32__KET__))))));
    vlSelfRef.__PVT__t[2U] = (0x0000000fU & ((((IData)(vlSelfRef.__PVT__t__BRA__67__KET__) 
                                               << 3U) 
                                              | ((IData)(vlSelfRef.__PVT__t__BRA__66__KET__) 
                                                 << 2U)) 
                                             | (((IData)(vlSelfRef.__PVT__t__BRA__65__KET__) 
                                                 << 1U) 
                                                | (IData)(vlSelfRef.__PVT__t__BRA__64__KET__))));
}
