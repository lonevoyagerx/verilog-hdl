// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjk_tb.h for the primary calling header

#include "Vjk_tb__pch.h"
#include "Vjk_tb__Syms.h"
#include "Vjk_tb___024unit.h"

void Vjk_tb___024unit___ctor_var_reset(Vjk_tb___024unit* vlSelf);

Vjk_tb___024unit::Vjk_tb___024unit(Vjk_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vjk_tb___024unit___ctor_var_reset(this);
}

void Vjk_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vjk_tb___024unit::~Vjk_tb___024unit() {
}
