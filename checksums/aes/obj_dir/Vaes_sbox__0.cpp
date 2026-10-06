// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes.h for the primary calling header

#include "Vaes__pch.h"

extern const VlUnpacked<CData/*7:0*/, 256> Vaes__ConstPool__TABLE_h2aaf3096_0;

void Vaes_sbox___nba_sequent__TOP__aes__DOT__kg__DOT__sbox_0__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__kg__DOT__sbox_0__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (0x000000ffU & (vlSymsp->TOP.aes__DOT__round_key_current[0U] 
                                   >> 0x00000010U));
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx1];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__kg__DOT__sbox_1__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__kg__DOT__sbox_1__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = (0x000000ffU & (vlSymsp->TOP.aes__DOT__round_key_current[0U] 
                                   >> 8U));
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx2];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__kg__DOT__sbox_2__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__kg__DOT__sbox_2__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = (0x000000ffU & vlSymsp->TOP.aes__DOT__round_key_current[0U]);
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx3];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__kg__DOT__sbox_3__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__kg__DOT__sbox_3__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx4 = (vlSymsp->TOP.aes__DOT__round_key_current[0U] 
                    >> 0x00000018U);
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx4];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    __Vtableidx5 = (0x000000ffU & vlSymsp->TOP.aes__DOT__state_current[0U]);
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx5];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    __Vtableidx6 = (0x000000ffU & (vlSymsp->TOP.aes__DOT__state_current[0U] 
                                   >> 8U));
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx6];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    __Vtableidx7 = (0x000000ffU & (vlSymsp->TOP.aes__DOT__state_current[0U] 
                                   >> 0x00000010U));
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx7];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    __Vtableidx8 = (vlSymsp->TOP.aes__DOT__state_current[0U] 
                    >> 0x00000018U);
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx8];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    // Body
    __Vtableidx9 = (0x000000ffU & vlSymsp->TOP.aes__DOT__state_current[1U]);
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx9];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    // Body
    __Vtableidx10 = (0x000000ffU & (vlSymsp->TOP.aes__DOT__state_current[1U] 
                                    >> 8U));
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx10];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    // Body
    __Vtableidx11 = (0x000000ffU & (vlSymsp->TOP.aes__DOT__state_current[1U] 
                                    >> 0x00000010U));
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx11];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    // Body
    __Vtableidx12 = (vlSymsp->TOP.aes__DOT__state_current[1U] 
                     >> 0x00000018U);
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx12];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
    __Vtableidx13 = (0x000000ffU & vlSymsp->TOP.aes__DOT__state_current[2U]);
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx13];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    // Body
    __Vtableidx14 = (0x000000ffU & (vlSymsp->TOP.aes__DOT__state_current[2U] 
                                    >> 8U));
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx14];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    // Body
    __Vtableidx15 = (0x000000ffU & (vlSymsp->TOP.aes__DOT__state_current[2U] 
                                    >> 0x00000010U));
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx15];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    __Vtableidx16 = (vlSymsp->TOP.aes__DOT__state_current[2U] 
                     >> 0x00000018U);
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx16];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx17;
    __Vtableidx17 = 0;
    // Body
    __Vtableidx17 = (0x000000ffU & vlSymsp->TOP.aes__DOT__state_current[3U]);
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx17];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx18;
    __Vtableidx18 = 0;
    // Body
    __Vtableidx18 = (0x000000ffU & (vlSymsp->TOP.aes__DOT__state_current[3U] 
                                    >> 8U));
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx18];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx19;
    __Vtableidx19 = 0;
    // Body
    __Vtableidx19 = (0x000000ffU & (vlSymsp->TOP.aes__DOT__state_current[3U] 
                                    >> 0x00000010U));
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx19];
}

void Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___nba_sequent__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __Vtableidx20;
    __Vtableidx20 = 0;
    // Body
    __Vtableidx20 = (vlSymsp->TOP.aes__DOT__state_current[3U] 
                     >> 0x00000018U);
    vlSelfRef.out = Vaes__ConstPool__TABLE_h2aaf3096_0
        [__Vtableidx20];
}
