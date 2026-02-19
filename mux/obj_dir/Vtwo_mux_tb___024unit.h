// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtwo_mux_tb.h for the primary calling header

#ifndef VERILATED_VTWO_MUX_TB___024UNIT_H_
#define VERILATED_VTWO_MUX_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtwo_mux_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtwo_mux_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vtwo_mux_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtwo_mux_tb___024unit(Vtwo_mux_tb__Syms* symsp, const char* v__name);
    ~Vtwo_mux_tb___024unit();
    VL_UNCOPYABLE(Vtwo_mux_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
