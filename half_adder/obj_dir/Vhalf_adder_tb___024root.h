// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vhalf_adder_tb.h for the primary calling header

#ifndef VERILATED_VHALF_ADDER_TB___024ROOT_H_
#define VERILATED_VHALF_ADDER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vhalf_adder_tb___024unit;


class Vhalf_adder_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vhalf_adder_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vhalf_adder_tb___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ half_adder_tb__DOT__a;
    CData/*0:0*/ half_adder_tb__DOT__b;
    CData/*0:0*/ half_adder_tb__DOT__sum;
    CData/*0:0*/ half_adder_tb__DOT__carry;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__half_adder_tb__DOT__a__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__half_adder_tb__DOT__b__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__half_adder_tb__DOT__carry__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__half_adder_tb__DOT__sum__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vhalf_adder_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vhalf_adder_tb___024root(Vhalf_adder_tb__Syms* symsp, const char* v__name);
    ~Vhalf_adder_tb___024root();
    VL_UNCOPYABLE(Vhalf_adder_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
