// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes.h for the primary calling header

#ifndef VERILATED_VAES___024UNIT_H_
#define VERILATED_VAES___024UNIT_H_  // guard

#include "verilated.h"


class Vaes__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaes___024unit final {
  public:

    // INTERNAL VARIABLES
    Vaes__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vaes___024unit() = default;
    ~Vaes___024unit() = default;
    void ctor(Vaes__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vaes___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
