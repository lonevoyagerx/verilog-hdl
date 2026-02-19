// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfull_adder_tb.h for the primary calling header

#include "Vfull_adder_tb__pch.h"
#include "Vfull_adder_tb__Syms.h"
#include "Vfull_adder_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vfull_adder_tb___024root___eval_initial__TOP__Vtiming__0(Vfull_adder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelfRef.full_adder_tb__DOT__a = 0U;
    vlSelfRef.full_adder_tb__DOT__b = 0U;
    vlSelfRef.full_adder_tb__DOT__cin = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "full_adder_tb.v", 
                                         9);
    vlSelfRef.full_adder_tb__DOT__a = 0U;
    vlSelfRef.full_adder_tb__DOT__b = 1U;
    vlSelfRef.full_adder_tb__DOT__cin = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "full_adder_tb.v", 
                                         10);
    vlSelfRef.full_adder_tb__DOT__a = 1U;
    vlSelfRef.full_adder_tb__DOT__b = 0U;
    vlSelfRef.full_adder_tb__DOT__cin = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "full_adder_tb.v", 
                                         11);
    vlSelfRef.full_adder_tb__DOT__a = 1U;
    vlSelfRef.full_adder_tb__DOT__b = 1U;
    vlSelfRef.full_adder_tb__DOT__cin = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "full_adder_tb.v", 
                                         12);
    vlSelfRef.full_adder_tb__DOT__a = 0U;
    vlSelfRef.full_adder_tb__DOT__b = 0U;
    vlSelfRef.full_adder_tb__DOT__cin = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "full_adder_tb.v", 
                                         13);
    vlSelfRef.full_adder_tb__DOT__a = 0U;
    vlSelfRef.full_adder_tb__DOT__b = 1U;
    vlSelfRef.full_adder_tb__DOT__cin = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "full_adder_tb.v", 
                                         14);
    vlSelfRef.full_adder_tb__DOT__a = 1U;
    vlSelfRef.full_adder_tb__DOT__b = 0U;
    vlSelfRef.full_adder_tb__DOT__cin = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "full_adder_tb.v", 
                                         15);
    vlSelfRef.full_adder_tb__DOT__a = 1U;
    vlSelfRef.full_adder_tb__DOT__b = 1U;
    vlSelfRef.full_adder_tb__DOT__cin = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "full_adder_tb.v", 
                                         16);
    VL_FINISH_MT("full_adder_tb.v", 18, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfull_adder_tb___024root___dump_triggers__act(Vfull_adder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfull_adder_tb___024root___eval_triggers__act(Vfull_adder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.full_adder_tb__DOT__a) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__a__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.full_adder_tb__DOT__b) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__b__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.full_adder_tb__DOT__carry) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__carry__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.full_adder_tb__DOT__cin) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__cin__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.full_adder_tb__DOT__sum) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__sum__0)));
    vlSelfRef.__VactTriggered.set(5U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__a__0 
        = vlSelfRef.full_adder_tb__DOT__a;
    vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__b__0 
        = vlSelfRef.full_adder_tb__DOT__b;
    vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__carry__0 
        = vlSelfRef.full_adder_tb__DOT__carry;
    vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__cin__0 
        = vlSelfRef.full_adder_tb__DOT__cin;
    vlSelfRef.__Vtrigprevexpr___TOP__full_adder_tb__DOT__sum__0 
        = vlSelfRef.full_adder_tb__DOT__sum;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfull_adder_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vfull_adder_tb___024root___nba_sequent__TOP__0(Vfull_adder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vfull_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfull_adder_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("a=%b b=%b cin=%b sum=%b carry=%b\n",0,
                     1,vlSelfRef.full_adder_tb__DOT__a,
                     1,(IData)(vlSelfRef.full_adder_tb__DOT__b),
                     1,vlSelfRef.full_adder_tb__DOT__cin,
                     1,(IData)(vlSelfRef.full_adder_tb__DOT__sum),
                     1,vlSelfRef.full_adder_tb__DOT__carry);
    }
}
