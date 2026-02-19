// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vjk_tb.h for the primary calling header

#ifndef VERILATED_VJK_TB___024UNIT_H_
#define VERILATED_VJK_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vjk_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vjk_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VmonitorOff;
    QData/*63:0*/ __VmonitorNum;

    // INTERNAL VARIABLES
    Vjk_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vjk_tb___024unit(Vjk_tb__Syms* symsp, const char* v__name);
    ~Vjk_tb___024unit();
    VL_UNCOPYABLE(Vjk_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
