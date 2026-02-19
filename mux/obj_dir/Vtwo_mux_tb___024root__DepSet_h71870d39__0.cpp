// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtwo_mux_tb.h for the primary calling header

#include "Vtwo_mux_tb__pch.h"
#include "Vtwo_mux_tb__Syms.h"
#include "Vtwo_mux_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vtwo_mux_tb___024root___eval_initial__TOP__Vtiming__0(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelfRef.two_mux_tb__DOT__a = 0U;
    vlSelfRef.two_mux_tb__DOT__b = 1U;
    vlSelfRef.two_mux_tb__DOT__s = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "2_1_mux_tb.v", 
                                         12);
    vlSelfRef.two_mux_tb__DOT__a = 1U;
    vlSelfRef.two_mux_tb__DOT__b = 0U;
    vlSelfRef.two_mux_tb__DOT__s = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "2_1_mux_tb.v", 
                                         13);
    VL_FINISH_MT("2_1_mux_tb.v", 16, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwo_mux_tb___024root___dump_triggers__act(Vtwo_mux_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtwo_mux_tb___024root___eval_triggers__act(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.two_mux_tb__DOT__a) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__two_mux_tb__DOT__a__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.two_mux_tb__DOT__b) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__two_mux_tb__DOT__b__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.two_mux_tb__DOT__s) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__two_mux_tb__DOT__s__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.two_mux_tb__DOT__y) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__two_mux_tb__DOT__y__0)));
    vlSelfRef.__VactTriggered.set(4U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__two_mux_tb__DOT__a__0 
        = vlSelfRef.two_mux_tb__DOT__a;
    vlSelfRef.__Vtrigprevexpr___TOP__two_mux_tb__DOT__b__0 
        = vlSelfRef.two_mux_tb__DOT__b;
    vlSelfRef.__Vtrigprevexpr___TOP__two_mux_tb__DOT__s__0 
        = vlSelfRef.two_mux_tb__DOT__s;
    vlSelfRef.__Vtrigprevexpr___TOP__two_mux_tb__DOT__y__0 
        = vlSelfRef.two_mux_tb__DOT__y;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtwo_mux_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtwo_mux_tb___024root___nba_sequent__TOP__0(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("a = %b b = %b s = %b y = %b\n",0,
                     1,vlSelfRef.two_mux_tb__DOT__a,
                     1,(IData)(vlSelfRef.two_mux_tb__DOT__b),
                     1,vlSelfRef.two_mux_tb__DOT__s,
                     1,(IData)(vlSelfRef.two_mux_tb__DOT__y));
    }
}
