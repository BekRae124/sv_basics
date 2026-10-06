// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaes_functions.h for the primary calling header

#ifndef VERILATED_VAES_FUNCTIONS___024UNIT_H_
#define VERILATED_VAES_FUNCTIONS___024UNIT_H_  // guard

#include "verilated.h"


class Vaes_functions__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaes_functions___024unit final {
  public:

    // INTERNAL VARIABLES
    Vaes_functions__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vaes_functions___024unit() = default;
    ~Vaes_functions___024unit() = default;
    void ctor(Vaes_functions__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vaes_functions___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
