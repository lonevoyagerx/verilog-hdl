// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhalf_adder.h for the primary calling header

#include "Vhalf_adder__pch.h"
#include "Vhalf_adder___024root.h"

void Vhalf_adder___024root___ico_sequent__TOP__0(Vhalf_adder___024root* vlSelf);

void Vhalf_adder___024root___eval_ico(Vhalf_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder___024root___eval_ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vhalf_adder___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vhalf_adder___024root___ico_sequent__TOP__0(Vhalf_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder___024root___ico_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sum = ((IData)(vlSelfRef.a) ^ (IData)(vlSelfRef.b));
    vlSelfRef.carry = ((IData)(vlSelfRef.a) & (IData)(vlSelfRef.b));
}

void Vhalf_adder___024root___eval_triggers__ico(Vhalf_adder___024root* vlSelf);

bool Vhalf_adder___024root___eval_phase__ico(Vhalf_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder___024root___eval_phase__ico\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vhalf_adder___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vhalf_adder___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vhalf_adder___024root___eval_act(Vhalf_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vhalf_adder___024root___eval_nba(Vhalf_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vhalf_adder___024root___eval_triggers__act(Vhalf_adder___024root* vlSelf);

bool Vhalf_adder___024root___eval_phase__act(Vhalf_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<0> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vhalf_adder___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vhalf_adder___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vhalf_adder___024root___eval_phase__nba(Vhalf_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vhalf_adder___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhalf_adder___024root___dump_triggers__ico(Vhalf_adder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhalf_adder___024root___dump_triggers__nba(Vhalf_adder___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vhalf_adder___024root___dump_triggers__act(Vhalf_adder___024root* vlSelf);
#endif  // VL_DEBUG

void Vhalf_adder___024root___eval(Vhalf_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vhalf_adder___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("half_adder.v", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vhalf_adder___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vhalf_adder___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("half_adder.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vhalf_adder___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("half_adder.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vhalf_adder___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vhalf_adder___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vhalf_adder___024root___eval_debug_assertions(Vhalf_adder___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vhalf_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhalf_adder___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.a & 0xfeU))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelfRef.b & 0xfeU))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
