// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtwo_mux_tb.h for the primary calling header

#include "Vtwo_mux_tb__pch.h"
#include "Vtwo_mux_tb__Syms.h"
#include "Vtwo_mux_tb___024root.h"

void Vtwo_mux_tb___024root___ctor_var_reset(Vtwo_mux_tb___024root* vlSelf);

Vtwo_mux_tb___024root::Vtwo_mux_tb___024root(Vtwo_mux_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtwo_mux_tb___024root___ctor_var_reset(this);
}

void Vtwo_mux_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtwo_mux_tb___024root::~Vtwo_mux_tb___024root() {
}
