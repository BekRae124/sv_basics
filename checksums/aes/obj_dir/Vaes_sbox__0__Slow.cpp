// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes.h for the primary calling header

#include "Vaes__pch.h"

VL_ATTR_COLD void Vaes_sbox___ctor_var_reset(Vaes_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_sbox___ctor_var_reset\n"); );
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5406812645801907143ull);
    vlSelf->out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7519490245117619040ull);
}
