// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vaes_functions__Syms.h"


VL_ATTR_COLD void Vaes_functions___024root__trace_init_sub__TOP__0(Vaes_functions___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root__trace_init_sub__TOP__0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+56,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+58,0,"plaintext",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+62,0,"plaintext_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+63,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+67,0,"ciphertext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+71,0,"ciphertext_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("aes", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+56,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+58,0,"plaintext",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+62,0,"plaintext_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+63,0,"key",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declArray(c+67,0,"ciphertext",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 127,0);
    tracep->declBit(c+71,0,"ciphertext_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("round_keys", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declArray(c+1+i*4,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 127,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rcon", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 11; ++i) {
        tracep->declBus(c+45+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes_functions___024root__trace_init_top(Vaes_functions___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root__trace_init_top\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaes_functions___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vaes_functions___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vaes_functions___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaes_functions___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vaes_functions___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vaes_functions___024root__trace_register(Vaes_functions___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root__trace_register\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vaes_functions___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vaes_functions___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vaes_functions___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vaes_functions___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vaes_functions___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root__trace_const_0\n"); );
    // Body
    Vaes_functions___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes_functions___024root*>(voidSelf);
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vaes_functions___024root__trace_full_0_sub_0(Vaes_functions___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vaes_functions___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root__trace_full_0\n"); );
    // Body
    Vaes_functions___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes_functions___024root*>(voidSelf);
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vaes_functions___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vaes_functions___024root__trace_full_0_sub_0(Vaes_functions___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaes_functions___024root__trace_full_0_sub_0\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullWData(oldp+1,(vlSelfRef.aes__DOT__round_keys[0]),128);
    bufp->fullWData(oldp+5,(vlSelfRef.aes__DOT__round_keys[1]),128);
    bufp->fullWData(oldp+9,(vlSelfRef.aes__DOT__round_keys[2]),128);
    bufp->fullWData(oldp+13,(vlSelfRef.aes__DOT__round_keys[3]),128);
    bufp->fullWData(oldp+17,(vlSelfRef.aes__DOT__round_keys[4]),128);
    bufp->fullWData(oldp+21,(vlSelfRef.aes__DOT__round_keys[5]),128);
    bufp->fullWData(oldp+25,(vlSelfRef.aes__DOT__round_keys[6]),128);
    bufp->fullWData(oldp+29,(vlSelfRef.aes__DOT__round_keys[7]),128);
    bufp->fullWData(oldp+33,(vlSelfRef.aes__DOT__round_keys[8]),128);
    bufp->fullWData(oldp+37,(vlSelfRef.aes__DOT__round_keys[9]),128);
    bufp->fullWData(oldp+41,(vlSelfRef.aes__DOT__round_keys[10]),128);
    bufp->fullCData(oldp+45,(vlSelfRef.aes__DOT__rcon[0]),8);
    bufp->fullCData(oldp+46,(vlSelfRef.aes__DOT__rcon[1]),8);
    bufp->fullCData(oldp+47,(vlSelfRef.aes__DOT__rcon[2]),8);
    bufp->fullCData(oldp+48,(vlSelfRef.aes__DOT__rcon[3]),8);
    bufp->fullCData(oldp+49,(vlSelfRef.aes__DOT__rcon[4]),8);
    bufp->fullCData(oldp+50,(vlSelfRef.aes__DOT__rcon[5]),8);
    bufp->fullCData(oldp+51,(vlSelfRef.aes__DOT__rcon[6]),8);
    bufp->fullCData(oldp+52,(vlSelfRef.aes__DOT__rcon[7]),8);
    bufp->fullCData(oldp+53,(vlSelfRef.aes__DOT__rcon[8]),8);
    bufp->fullCData(oldp+54,(vlSelfRef.aes__DOT__rcon[9]),8);
    bufp->fullCData(oldp+55,(vlSelfRef.aes__DOT__rcon[10]),8);
    bufp->fullBit(oldp+56,(vlSelfRef.clk));
    bufp->fullBit(oldp+57,(vlSelfRef.rst_n));
    bufp->fullWData(oldp+58,(vlSelfRef.plaintext),128);
    bufp->fullBit(oldp+62,(vlSelfRef.plaintext_valid));
    bufp->fullWData(oldp+63,(vlSelfRef.key),128);
    bufp->fullWData(oldp+67,(vlSelfRef.ciphertext),128);
    bufp->fullBit(oldp+71,(vlSelfRef.ciphertext_valid));
}
