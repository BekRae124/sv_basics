// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes.h for the primary calling header

#include "Vaes__pch.h"

void Vaes_sbox___ctor_var_reset(Vaes_sbox* vlSelf);

void Vaes_sbox::ctor(Vaes__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vaes_sbox___ctor_var_reset(this);
}

void Vaes_sbox::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vaes_sbox::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
