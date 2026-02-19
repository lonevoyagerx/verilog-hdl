// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhalf_adder_tb.h for the primary calling header

#include "Vhalf_adder_tb__pch.h"
#include "Vhalf_adder_tb___024root.h"

VlCoroutine Vhalf_adder_tb___024root___eval_initial__TOP__Vtiming__0(Vhalf_adder_tb___024root* vlSelf);

void Vhalf_adder_tb___024root___eval_initial(Vhalf_adder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhalf_adder_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__half_adder_tb__DOT__a__0 
        = vlSelfRef.half_adder_tb__DOT__a;
    vlSelfRef.__Vtrigprevexpr___TOP__half_adder_tb__DOT__b__0 
        = vlSelfRef.half_adder_tb__DOT__b;
    vlSelfRef.__Vtrigprevexpr___TOP__half_adder_tb__DOT__carry__0 
        = vlSelfRef.half_adder_tb__DOT__carry;
    vlSelfRef.__Vtrigprevexpr___TOP__half_adder_tb__DOT__sum__0 
        = vlSelfRef.half_adder_tb__DOT__sum;
}

void Vhalf_adder_tb___024root___act_sequent__TOP__0(Vhalf_adder_tb___024root* vlSelf);

void Vhalf_adder_tb___024root___eval_act(Vhalf_adder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vhalf_adder_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vhalf_adder_tb___024root___act_sequent__TOP__0(Vhalf_adder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_tb___024root___act_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.half_adder_tb__DOT__sum = ((IData)(vlSelfRef.half_adder_tb__DOT__a) 
                                         ^ (IData)(vlSelfRef.half_adder_tb__DOT__b));
    vlSelfRef.half_adder_tb__DOT__carry = ((IData)(vlSelfRef.half_adder_tb__DOT__a) 
                                           & (IData)(vlSelfRef.half_adder_tb__DOT__b));
}

void Vhalf_adder_tb___024root___nba_sequent__TOP__0(Vhalf_adder_tb___024root* vlSelf);

void Vhalf_adder_tb___024root___eval_nba(Vhalf_adder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vhalf_adder_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vhalf_adder_tb___024root___timing_resume(Vhalf_adder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vhalf_adder_tb___024root___eval_triggers__act(Vhalf_adder_tb___024root* vlSelf);

bool Vhalf_adder_tb___024root___eval_phase__act(Vhalf_adder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vhalf_adder_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vhalf_adder_tb___024root___timing_resume(vlSelf);
        Vhalf_adder_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vhalf_adder_tb___024root___eval_phase__nba(Vhalf_adder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vhalf_adder_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhalf_adder_tb___024root___dump_triggers__nba(Vhalf_adder_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhalf_adder_tb___024root___dump_triggers__act(Vhalf_adder_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhalf_adder_tb___024root___eval(Vhalf_adder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_tb___024root___eval\n"); );
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
            Vhalf_adder_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("half_adder_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vhalf_adder_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("half_adder_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vhalf_adder_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vhalf_adder_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vhalf_adder_tb___024root___eval_debug_assertions(Vhalf_adder_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
