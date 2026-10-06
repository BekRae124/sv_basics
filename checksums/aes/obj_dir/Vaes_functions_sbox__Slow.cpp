// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_functions.h for the primary calling header

#include "Vaes_functions__pch.h"

void Vaes_functions_sbox___ctor_var_reset(Vaes_functions_sbox* vlSelf);

void Vaes_functions_sbox::ctor(Vaes_functions__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vaes_functions_sbox___ctor_var_reset(this);
}

void Vaes_functions_sbox::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vaes_functions_sbox::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
