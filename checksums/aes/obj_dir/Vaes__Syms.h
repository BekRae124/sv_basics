// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAES__SYMS_H_
#define VERILATED_VAES__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vaes.h"

// INCLUDE MODULE CLASSES
#include "Vaes___024root.h"
#include "Vaes___024unit.h"
#include "Vaes_sbox.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vaes__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vaes* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vaes___024root                 TOP;
    Vaes_sbox                      TOP__aes__DOT__kg__DOT__sbox_0;
    Vaes_sbox                      TOP__aes__DOT__kg__DOT__sbox_1;
    Vaes_sbox                      TOP__aes__DOT__kg__DOT__sbox_2;
    Vaes_sbox                      TOP__aes__DOT__kg__DOT__sbox_3;
    Vaes_sbox                      TOP__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb;
    Vaes_sbox                      TOP__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb;
    Vaes_sbox                      TOP__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb;
    Vaes_sbox                      TOP__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb;
    Vaes_sbox                      TOP__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb;
    Vaes_sbox                      TOP__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb;
    Vaes_sbox                      TOP__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb;
    Vaes_sbox                      TOP__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb;
    Vaes_sbox                      TOP__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb;
    Vaes_sbox                      TOP__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb;
    Vaes_sbox                      TOP__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb;
    Vaes_sbox                      TOP__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb;
    Vaes_sbox                      TOP__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb;
    Vaes_sbox                      TOP__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb;
    Vaes_sbox                      TOP__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb;
    Vaes_sbox                      TOP__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb;

    // CONSTRUCTORS
    Vaes__Syms(VerilatedContext* contextp, const char* namep, Vaes* modelp);
    ~Vaes__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
