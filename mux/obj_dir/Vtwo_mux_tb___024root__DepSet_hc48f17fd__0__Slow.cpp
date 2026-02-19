// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtwo_mux_tb.h for the primary calling header

#include "Vtwo_mux_tb__pch.h"
#include "Vtwo_mux_tb___024root.h"

VL_ATTR_COLD void Vtwo_mux_tb___024root___eval_static(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___eval_static\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtwo_mux_tb___024root___eval_final(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___eval_final\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwo_mux_tb___024root___dump_triggers__stl(Vtwo_mux_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtwo_mux_tb___024root___eval_phase__stl(Vtwo_mux_tb___024root* vlSelf);

VL_ATTR_COLD void Vtwo_mux_tb___024root___eval_settle(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___eval_settle\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtwo_mux_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("2_1_mux_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtwo_mux_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwo_mux_tb___024root___dump_triggers__stl(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___dump_triggers__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtwo_mux_tb___024root___act_sequent__TOP__0(Vtwo_mux_tb___024root* vlSelf);

VL_ATTR_COLD void Vtwo_mux_tb___024root___eval_stl(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___eval_stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtwo_mux_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtwo_mux_tb___024root___eval_triggers__stl(Vtwo_mux_tb___024root* vlSelf);

VL_ATTR_COLD bool Vtwo_mux_tb___024root___eval_phase__stl(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___eval_phase__stl\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtwo_mux_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtwo_mux_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwo_mux_tb___024root___dump_triggers__act(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___dump_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([changed] two_mux_tb.a)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] two_mux_tb.b)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] two_mux_tb.s)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] two_mux_tb.y)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwo_mux_tb___024root___dump_triggers__nba(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___dump_triggers__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([changed] two_mux_tb.a)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] two_mux_tb.b)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] two_mux_tb.s)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] two_mux_tb.y)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtwo_mux_tb___024root___ctor_var_reset(Vtwo_mux_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root___ctor_var_reset\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->two_mux_tb__DOT__a = VL_RAND_RESET_I(1);
    vlSelf->two_mux_tb__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->two_mux_tb__DOT__s = VL_RAND_RESET_I(1);
    vlSelf->two_mux_tb__DOT__y = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__two_mux_tb__DOT__a__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__two_mux_tb__DOT__b__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__two_mux_tb__DOT__s__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__two_mux_tb__DOT__y__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
