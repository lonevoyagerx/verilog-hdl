// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtwo_mux_tb.h for the primary calling header

#include "Vtwo_mux_tb__pch.h"
#include "Vtwo_mux_tb___024root.h"

VlCoroutine Vtwo_mux_tb___024root___eval_initial__TOP__Vtiming__0(Vtwo_mux_tb___024root* vlSelf);

void Vtwo_mux_tb___024root___eval_initial(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtwo_mux_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__two_mux_tb__DOT__a__0 
        = vlSelfRef.two_mux_tb__DOT__a;
    vlSelfRef.__Vtrigprevexpr___TOP__two_mux_tb__DOT__b__0 
        = vlSelfRef.two_mux_tb__DOT__b;
    vlSelfRef.__Vtrigprevexpr___TOP__two_mux_tb__DOT__s__0 
        = vlSelfRef.two_mux_tb__DOT__s;
    vlSelfRef.__Vtrigprevexpr___TOP__two_mux_tb__DOT__y__0 
        = vlSelfRef.two_mux_tb__DOT__y;
}

void Vtwo_mux_tb___024root___act_sequent__TOP__0(Vtwo_mux_tb___024root* vlSelf);

void Vtwo_mux_tb___024root___eval_act(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtwo_mux_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtwo_mux_tb___024root___act_sequent__TOP__0(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.two_mux_tb__DOT__y = (((~ (IData)(vlSelfRef.two_mux_tb__DOT__s)) 
                                     & (IData)(vlSelfRef.two_mux_tb__DOT__a)) 
                                    | ((IData)(vlSelfRef.two_mux_tb__DOT__b) 
                                       & (IData)(vlSelfRef.two_mux_tb__DOT__s)));
}

void Vtwo_mux_tb___024root___nba_sequent__TOP__0(Vtwo_mux_tb___024root* vlSelf);

void Vtwo_mux_tb___024root___eval_nba(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtwo_mux_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtwo_mux_tb___024root___timing_resume(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtwo_mux_tb___024root___eval_triggers__act(Vtwo_mux_tb___024root* vlSelf);

bool Vtwo_mux_tb___024root___eval_phase__act(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtwo_mux_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtwo_mux_tb___024root___timing_resume(vlSelf);
        Vtwo_mux_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtwo_mux_tb___024root___eval_phase__nba(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtwo_mux_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwo_mux_tb___024root___dump_triggers__nba(Vtwo_mux_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwo_mux_tb___024root___dump_triggers__act(Vtwo_mux_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtwo_mux_tb___024root___eval(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtwo_mux_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("2_1_mux_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtwo_mux_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("2_1_mux_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtwo_mux_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtwo_mux_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtwo_mux_tb___024root___eval_debug_assertions(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
