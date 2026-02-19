// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjk_tb.h for the primary calling header

#include "Vjk_tb__pch.h"
#include "Vjk_tb__Syms.h"
#include "Vjk_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vjk_tb___024root___eval_initial__TOP__Vtiming__0(Vjk_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x77617665U;
    __Vtemp_1[2U] = 0x6a6b5fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSymsp->TOP____024unit.__VmonitorNum = 1U;
    vlSelfRef.jk_tb__DOT__clk = 0U;
    vlSelfRef.jk_tb__DOT__j = 0U;
    vlSelfRef.jk_tb__DOT__k = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "jk_flipflop_tb.v", 
                                         15);
    vlSelfRef.jk_tb__DOT__j = 0U;
    vlSelfRef.jk_tb__DOT__k = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "jk_flipflop_tb.v", 
                                         16);
    vlSelfRef.jk_tb__DOT__j = 1U;
    vlSelfRef.jk_tb__DOT__k = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "jk_flipflop_tb.v", 
                                         17);
    vlSelfRef.jk_tb__DOT__j = 1U;
    vlSelfRef.jk_tb__DOT__k = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "jk_flipflop_tb.v", 
                                         18);
    VL_FINISH_MT("jk_flipflop_tb.v", 20, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_tb___024root___dump_triggers__act(Vjk_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vjk_tb___024root___eval_triggers__act(Vjk_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.jk_tb__DOT__clk) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__jk_tb__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.jk_tb__DOT__j) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__jk_tb__DOT__j__0)));
    vlSelfRef.__VactTriggered.set(2U, ((IData)(vlSelfRef.jk_tb__DOT__k) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__jk_tb__DOT__k__0)));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.jk_tb__DOT__q) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__jk_tb__DOT__q__0)));
    vlSelfRef.__VactTriggered.set(4U, ((~ (IData)(vlSelfRef.jk_tb__DOT__clk)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__jk_tb__DOT__clk__0)));
    vlSelfRef.__VactTriggered.set(5U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__jk_tb__DOT__clk__0 
        = vlSelfRef.jk_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__jk_tb__DOT__j__0 
        = vlSelfRef.jk_tb__DOT__j;
    vlSelfRef.__Vtrigprevexpr___TOP__jk_tb__DOT__k__0 
        = vlSelfRef.jk_tb__DOT__k;
    vlSelfRef.__Vtrigprevexpr___TOP__jk_tb__DOT__q__0 
        = vlSelfRef.jk_tb__DOT__q;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(0U, 1U);
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vjk_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vjk_tb___024root___nba_sequent__TOP__0(Vjk_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSymsp->TOP____024unit.__VmonitorOff)) 
                     & (1U == vlSymsp->TOP____024unit.__VmonitorNum)))) {
        VL_WRITEF_NX("j = %b k = %b clk == %b q == %b qbar == %b\n",0,
                     1,vlSelfRef.jk_tb__DOT__j,1,(IData)(vlSelfRef.jk_tb__DOT__k),
                     1,vlSelfRef.jk_tb__DOT__clk,1,
                     (IData)(vlSelfRef.jk_tb__DOT__q),
                     1,(1U & (~ (IData)(vlSelfRef.jk_tb__DOT__q))));
    }
}
