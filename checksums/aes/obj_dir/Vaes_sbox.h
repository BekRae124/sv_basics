// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes.h for the primary calling header

#ifndef VERILATED_VAES_SBOX_H_
#define VERILATED_VAES_SBOX_H_  // guard

#include "verilated.h"


class Vaes__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaes_sbox final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(in,7,0);
    VL_OUT8(out,7,0);

    // INTERNAL VARIABLES
    Vaes__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vaes_sbox() = default;
    ~Vaes_sbox() = default;
    void ctor(Vaes__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vaes_sbox);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
