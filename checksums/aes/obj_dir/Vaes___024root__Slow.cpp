// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes.h for the primary calling header

#include "Vaes__pch.h"

void Vaes___024root___ctor_var_reset(Vaes___024root* vlSelf);

Vaes___024root::Vaes___024root(Vaes__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vaes___024root___ctor_var_reset(this);
}

void Vaes___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vaes___024root::~Vaes___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
