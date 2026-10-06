// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vaes__Syms.h"


VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_0__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_1__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_2__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_3__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+103,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+105,0,"plaintext",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+109,0,"plaintext_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+110,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+114,0,"ciphertext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+118,0,"ciphertext_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("aes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+103,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+104,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+105,0,"plaintext",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+109,0,"plaintext_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+110,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+114,0,"ciphertext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+118,0,"ciphertext_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+1,0,"round_key_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+5,0,"round_key_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+9,0,"state_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+13,0,"state_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+17,0,"rcon_current",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,0,"rcon_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+19,0,"round_num",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declArray(c+20,0,"test_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+24,0,"test_sub_bytes",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+28,0,"test_shift_rows",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+32,0,"test_mix_columns",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+36,0,"sub_bytes_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+40,0,"shift_rows_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+44,0,"mix_columns_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("kg", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+1,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBus(c+17,0,"rcon",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declArray(c+5,0,"round_key",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("words_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+48+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("words_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+52+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+56,0,"shifted_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,0,"sub_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,0,"rcon_word",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("sbox_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+59+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("sbox_0", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_0__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("sbox_1", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("sbox_2", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_2__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("sbox_3", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_3__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declArray(c+9,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+36,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->pushPrefix("gen_sbox[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[10]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[11]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[12]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[13]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[14]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[15]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[4]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[5]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[6]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[7]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[8]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("gen_sbox[9]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("sb", VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_0__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_0__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+63,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+64,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_1__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_1__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+65,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+66,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_2__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_2__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+67,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+68,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_3__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__kg__DOT__sbox_3__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+69,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+70,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+71,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+72,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+73,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+74,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+75,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+76,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+77,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+78,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+79,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+80,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+81,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+82,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+83,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+84,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+85,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+86,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+87,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+88,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+89,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+91,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+92,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+93,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+94,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+95,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+96,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+97,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+98,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+99,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+100,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_sub__TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb__0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBus(c+101,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+102,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
}

VL_ATTR_COLD void Vaes___024root__trace_init_top(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_init_top\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaes___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vaes___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vaes___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaes___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaes___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vaes___024root__trace_register(Vaes___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_register\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vaes___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vaes___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vaes___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vaes___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vaes___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_const_0\n"); );
    // Body
    Vaes___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes___024root*>(voidSelf);
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vaes___024root__trace_full_0_sub_0(Vaes___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vaes___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_full_0\n"); );
    // Body
    Vaes___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes___024root*>(voidSelf);
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vaes___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vaes___024root__trace_full_0_sub_0(Vaes___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes___024root__trace_full_0_sub_0\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullWData(oldp+1,(vlSelfRef.aes__DOT__round_key_current),128);
    bufp->fullWData(oldp+5,(vlSelfRef.aes__DOT__kg__DOT__round_key),128);
    bufp->fullWData(oldp+9,(vlSelfRef.aes__DOT__state_current),128);
    bufp->fullWData(oldp+13,(vlSelfRef.aes__DOT__state_next),128);
    bufp->fullCData(oldp+17,(vlSelfRef.aes__DOT__rcon_current),8);
    bufp->fullCData(oldp+18,(vlSelfRef.aes__DOT__rcon_next),8);
    bufp->fullCData(oldp+19,(vlSelfRef.aes__DOT__round_num),4);
    bufp->fullWData(oldp+20,(vlSelfRef.aes__DOT__test_state),128);
    bufp->fullWData(oldp+24,(vlSelfRef.aes__DOT__test_sub_bytes),128);
    bufp->fullWData(oldp+28,(vlSelfRef.aes__DOT__test_shift_rows),128);
    bufp->fullWData(oldp+32,(vlSelfRef.aes__DOT__test_mix_columns),128);
    bufp->fullWData(oldp+36,(vlSelfRef.aes__DOT__sb__DOT__out),128);
    bufp->fullWData(oldp+40,(vlSelfRef.aes__DOT__shift_rows_out),128);
    bufp->fullWData(oldp+44,(vlSelfRef.aes__DOT__mix_columns_out),128);
    bufp->fullIData(oldp+48,(vlSelfRef.aes__DOT__kg__DOT__words_in[0]),32);
    bufp->fullIData(oldp+49,(vlSelfRef.aes__DOT__kg__DOT__words_in[1]),32);
    bufp->fullIData(oldp+50,(vlSelfRef.aes__DOT__kg__DOT__words_in[2]),32);
    bufp->fullIData(oldp+51,(vlSelfRef.aes__DOT__kg__DOT__words_in[3]),32);
    bufp->fullIData(oldp+52,(vlSelfRef.aes__DOT__kg__DOT__words_out[0]),32);
    bufp->fullIData(oldp+53,(vlSelfRef.aes__DOT__kg__DOT__words_out[1]),32);
    bufp->fullIData(oldp+54,(vlSelfRef.aes__DOT__kg__DOT__words_out[2]),32);
    bufp->fullIData(oldp+55,(vlSelfRef.aes__DOT__kg__DOT__words_out[3]),32);
    bufp->fullIData(oldp+56,(((vlSelfRef.aes__DOT__round_key_current[0U] 
                               << 8U) | (vlSelfRef.aes__DOT__round_key_current[0U] 
                                         >> 0x00000018U))),32);
    bufp->fullIData(oldp+57,(((((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.out) 
                                << 0x00000018U) | ((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.out) 
                                                   << 0x00000010U)) 
                              | (((IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.out) 
                                  << 8U) | (IData)(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.out)))),32);
    bufp->fullIData(oldp+58,(((IData)(vlSelfRef.aes__DOT__rcon_current) 
                              << 0x00000018U)),32);
    bufp->fullCData(oldp+59,(vlSelfRef.aes__DOT__kg__DOT__sbox_out[0]),8);
    bufp->fullCData(oldp+60,(vlSelfRef.aes__DOT__kg__DOT__sbox_out[1]),8);
    bufp->fullCData(oldp+61,(vlSelfRef.aes__DOT__kg__DOT__sbox_out[2]),8);
    bufp->fullCData(oldp+62,(vlSelfRef.aes__DOT__kg__DOT__sbox_out[3]),8);
    bufp->fullCData(oldp+63,((0x000000ffU & (vlSelfRef.aes__DOT__round_key_current[0U] 
                                             >> 0x00000010U))),8);
    bufp->fullCData(oldp+64,(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_0.out),8);
    bufp->fullCData(oldp+65,((0x000000ffU & (vlSelfRef.aes__DOT__round_key_current[0U] 
                                             >> 8U))),8);
    bufp->fullCData(oldp+66,(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_1.out),8);
    bufp->fullCData(oldp+67,((0x000000ffU & vlSelfRef.aes__DOT__round_key_current[0U])),8);
    bufp->fullCData(oldp+68,(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_2.out),8);
    bufp->fullCData(oldp+69,((vlSelfRef.aes__DOT__round_key_current[0U] 
                              >> 0x00000018U)),8);
    bufp->fullCData(oldp+70,(vlSymsp->TOP__aes__DOT__kg__DOT__sbox_3.out),8);
    bufp->fullCData(oldp+71,((0x000000ffU & vlSelfRef.aes__DOT__state_current[0U])),8);
    bufp->fullCData(oldp+72,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb.out),8);
    bufp->fullCData(oldp+73,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[0U] 
                                             >> 8U))),8);
    bufp->fullCData(oldp+74,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb.out),8);
    bufp->fullCData(oldp+75,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[0U] 
                                             >> 0x00000010U))),8);
    bufp->fullCData(oldp+76,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb.out),8);
    bufp->fullCData(oldp+77,((vlSelfRef.aes__DOT__state_current[0U] 
                              >> 0x00000018U)),8);
    bufp->fullCData(oldp+78,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb.out),8);
    bufp->fullCData(oldp+79,((0x000000ffU & vlSelfRef.aes__DOT__state_current[1U])),8);
    bufp->fullCData(oldp+80,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb.out),8);
    bufp->fullCData(oldp+81,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[1U] 
                                             >> 8U))),8);
    bufp->fullCData(oldp+82,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb.out),8);
    bufp->fullCData(oldp+83,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[1U] 
                                             >> 0x00000010U))),8);
    bufp->fullCData(oldp+84,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb.out),8);
    bufp->fullCData(oldp+85,((vlSelfRef.aes__DOT__state_current[1U] 
                              >> 0x00000018U)),8);
    bufp->fullCData(oldp+86,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb.out),8);
    bufp->fullCData(oldp+87,((0x000000ffU & vlSelfRef.aes__DOT__state_current[2U])),8);
    bufp->fullCData(oldp+88,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb.out),8);
    bufp->fullCData(oldp+89,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[2U] 
                                             >> 8U))),8);
    bufp->fullCData(oldp+90,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb.out),8);
    bufp->fullCData(oldp+91,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[2U] 
                                             >> 0x00000010U))),8);
    bufp->fullCData(oldp+92,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb.out),8);
    bufp->fullCData(oldp+93,((vlSelfRef.aes__DOT__state_current[2U] 
                              >> 0x00000018U)),8);
    bufp->fullCData(oldp+94,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb.out),8);
    bufp->fullCData(oldp+95,((0x000000ffU & vlSelfRef.aes__DOT__state_current[3U])),8);
    bufp->fullCData(oldp+96,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb.out),8);
    bufp->fullCData(oldp+97,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[3U] 
                                             >> 8U))),8);
    bufp->fullCData(oldp+98,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb.out),8);
    bufp->fullCData(oldp+99,((0x000000ffU & (vlSelfRef.aes__DOT__state_current[3U] 
                                             >> 0x00000010U))),8);
    bufp->fullCData(oldp+100,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb.out),8);
    bufp->fullCData(oldp+101,((vlSelfRef.aes__DOT__state_current[3U] 
                               >> 0x00000018U)),8);
    bufp->fullCData(oldp+102,(vlSymsp->TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb.out),8);
    bufp->fullBit(oldp+103,(vlSelfRef.clk));
    bufp->fullBit(oldp+104,(vlSelfRef.rst_n));
    bufp->fullWData(oldp+105,(vlSelfRef.plaintext),128);
    bufp->fullBit(oldp+109,(vlSelfRef.plaintext_valid));
    bufp->fullWData(oldp+110,(vlSelfRef.key),128);
    bufp->fullWData(oldp+114,(vlSelfRef.ciphertext),128);
    bufp->fullBit(oldp+118,(vlSelfRef.ciphertext_valid));
}
