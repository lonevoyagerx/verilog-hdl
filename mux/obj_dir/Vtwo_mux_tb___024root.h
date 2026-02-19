// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtwo_mux_tb.h for the primary calling header

#ifndef VERILATED_VTWO_MUX_TB___024ROOT_H_
#define VERILATED_VTWO_MUX_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtwo_mux_tb___024unit;


class Vtwo_mux_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtwo_mux_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtwo_mux_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ two_mux_tb__DOT__a;
    CData/*0:0*/ two_mux_tb__DOT__b;
    CData/*0:0*/ two_mux_tb__DOT__s;
    CData/*0:0*/ two_mux_tb__DOT__y;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__two_mux_tb__DOT__a__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__two_mux_tb__DOT__b__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__two_mux_tb__DOT__s__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__two_mux_tb__DOT__y__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtwo_mux_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtwo_mux_tb___024root(Vtwo_mux_tb__Syms* symsp, const char* v__name);
    ~Vtwo_mux_tb___024root();
    VL_UNCOPYABLE(Vtwo_mux_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
