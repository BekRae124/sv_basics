// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vuart_tx.h for the primary calling header

#include "Vuart_tx__pch.h"

void Vuart_tx___024root___ctor_var_reset(Vuart_tx___024root* vlSelf);

Vuart_tx___024root::Vuart_tx___024root(Vuart_tx__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vuart_tx___024root___ctor_var_reset(this);
}

void Vuart_tx___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vuart_tx___024root::~Vuart_tx___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
