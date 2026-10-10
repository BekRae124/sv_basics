// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_functions.h for the primary calling header

#include "Vaes_functions__pch.h"

VL_ATTR_COLD void Vaes_functions_sbox___ctor_var_reset(Vaes_functions_sbox* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vaes_functions_sbox___ctor_var_reset\n"); );
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5406812645801907143ull);
    vlSelf->out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7519490245117619040ull);
    vlSelf->__PVT__y__BRA__20__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16335116644951946321ull);
    vlSelf->__PVT__y__BRA__17__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16177307963838974643ull);
    vlSelf->__PVT__y__BRA__16__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 371541095314492166ull);
    vlSelf->__PVT__y__BRA__15__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11624904886689557286ull);
    vlSelf->__PVT__y__BRA__14__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5655580217203239293ull);
    vlSelf->__PVT__y__BRA__13__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10192979543820998418ull);
    vlSelf->__PVT__y__BRA__12__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4557754973491062654ull);
    vlSelf->__PVT__y__BRA__11__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9773570773348175219ull);
    vlSelf->__PVT__y__BRA__10__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7048168461166060654ull);
    vlSelf->__PVT__y__BRA__9__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8123180773565688133ull);
    vlSelf->__PVT__y__BRA__8__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2128523287099947880ull);
    vlSelf->__PVT__y__BRA__7__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10073803816824858855ull);
    vlSelf->__PVT__y__BRA__6__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13364327308226162857ull);
    vlSelf->__PVT__y__BRA__5__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5602056668056200126ull);
    vlSelf->__PVT__y__BRA__4__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2960273276505531174ull);
    vlSelf->__PVT__y__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1559437564848193922ull);
    vlSelf->__PVT__y__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7204069110974025364ull);
    vlSelf->__PVT__y__BRA__1__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11612664753451039680ull);
    VL_SCOPED_RAND_RESET_W(68, vlSelf->__PVT__t, __VscopeHash, 12247454108283186160ull);
    vlSelf->__PVT__t__BRA__67__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10863508770904200561ull);
    vlSelf->__PVT__t__BRA__66__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14248877984860174256ull);
    vlSelf->__PVT__t__BRA__65__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7920397537875645361ull);
    vlSelf->__PVT__t__BRA__64__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10746801281850131161ull);
    vlSelf->__PVT__t__BRA__63__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7257319308520653584ull);
    vlSelf->__PVT__t__BRA__62__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15357018123864215253ull);
    vlSelf->__PVT__t__BRA__60__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13304745968847162972ull);
    vlSelf->__PVT__t__BRA__59__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3768915376606523791ull);
    vlSelf->__PVT__t__BRA__56__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2588385036804357087ull);
    vlSelf->__PVT__t__BRA__55__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8433562776537675297ull);
    vlSelf->__PVT__t__BRA__51__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4493273214998106377ull);
    vlSelf->__PVT__t__BRA__48__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16492286244923125578ull);
    vlSelf->__PVT__t__BRA__47__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15235633779903580626ull);
    vlSelf->__PVT__t__BRA__44__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6287929036885320656ull);
    vlSelf->__PVT__t__BRA__42__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5624850807530427246ull);
    vlSelf->__PVT__t__BRA__41__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5668018451219842649ull);
    vlSelf->__PVT__t__BRA__40__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11514680328872291501ull);
    vlSelf->__PVT__t__BRA__37__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8941520349214934628ull);
    vlSelf->__PVT__t__BRA__33__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6330386297976974496ull);
    vlSelf->__PVT__t__BRA__29__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17803953752393533219ull);
    vlSelf->__PVT__z__BRA__16__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 549009349908598474ull);
    vlSelf->__PVT__z__BRA__12__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12475006298609444417ull);
    vlSelf->__PVT__z__BRA__10__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10633216360724375056ull);
    vlSelf->__PVT__z__BRA__7__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14102862333651413306ull);
    vlSelf->__PVT__z__BRA__5__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2487545654398904310ull);
    vlSelf->__PVT__z__BRA__4__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9890743178612124469ull);
    vlSelf->__PVT__z__BRA__3__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11769239875875042974ull);
    vlSelf->__PVT__z__BRA__2__KET__ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13921512153448573775ull);
    vlSelf->__VdfgRegularize_h224e5c7b_0_0 = 0;
}
