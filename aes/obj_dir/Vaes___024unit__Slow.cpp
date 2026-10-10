// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes.h for the primary calling header

#include "Vaes__pch.h"

void Vaes___024unit___ctor_var_reset(Vaes___024unit* vlSelf);

void Vaes___024unit::ctor(Vaes__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vaes___024unit___ctor_var_reset(this);
}

void Vaes___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vaes___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
