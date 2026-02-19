// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vjk_tb.h for the primary calling header

#include "Vjk_tb__pch.h"
#include "Vjk_tb___024root.h"

VlCoroutine Vjk_tb___024root___eval_initial__TOP__Vtiming__0(Vjk_tb___024root* vlSelf);
VlCoroutine Vjk_tb___024root___eval_initial__TOP__Vtiming__1(Vjk_tb___024root* vlSelf);

void Vjk_tb___024root___eval_initial(Vjk_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vjk_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vjk_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__jk_tb__DOT__clk__0 
        = vlSelfRef.jk_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__jk_tb__DOT__j__0 
        = vlSelfRef.jk_tb__DOT__j;
    vlSelfRef.__Vtrigprevexpr___TOP__jk_tb__DOT__k__0 
        = vlSelfRef.jk_tb__DOT__k;
    vlSelfRef.__Vtrigprevexpr___TOP__jk_tb__DOT__q__0 
        = vlSelfRef.jk_tb__DOT__q;
}

VL_INLINE_OPT VlCoroutine Vjk_tb___024root___eval_initial__TOP__Vtiming__1(Vjk_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "jk_flipflop_tb.v", 
                                             6);
        vlSelfRef.jk_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.jk_tb__DOT__clk)));
    }
}

void Vjk_tb___024root___eval_act(Vjk_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vjk_tb___024root___nba_sequent__TOP__0(Vjk_tb___024root* vlSelf);
void Vjk_tb___024root___nba_sequent__TOP__1(Vjk_tb___024root* vlSelf);

void Vjk_tb___024root___eval_nba(Vjk_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0xfULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vjk_tb___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vjk_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vjk_tb___024root___nba_sequent__TOP__1(Vjk_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___nba_sequent__TOP__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.jk_tb__DOT__q = (1U & ((1U & ((~ (IData)(vlSelfRef.jk_tb__DOT__j)) 
                                            & (~ (IData)(vlSelfRef.jk_tb__DOT__k))))
                                      ? (IData)(vlSelfRef.jk_tb__DOT__q)
                                      : ((~ ((~ (IData)(vlSelfRef.jk_tb__DOT__j)) 
                                             & (IData)(vlSelfRef.jk_tb__DOT__k))) 
                                         & (((IData)(vlSelfRef.jk_tb__DOT__j) 
                                             & (~ (IData)(vlSelfRef.jk_tb__DOT__k))) 
                                            | (~ (IData)(vlSelfRef.jk_tb__DOT__q))))));
}

void Vjk_tb___024root___timing_resume(Vjk_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vjk_tb___024root___eval_triggers__act(Vjk_tb___024root* vlSelf);

bool Vjk_tb___024root___eval_phase__act(Vjk_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<6> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vjk_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vjk_tb___024root___timing_resume(vlSelf);
        Vjk_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vjk_tb___024root___eval_phase__nba(Vjk_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vjk_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_tb___024root___dump_triggers__nba(Vjk_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vjk_tb___024root___dump_triggers__act(Vjk_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vjk_tb___024root___eval(Vjk_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval\n"); );
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
            Vjk_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("jk_flipflop_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vjk_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("jk_flipflop_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vjk_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vjk_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vjk_tb___024root___eval_debug_assertions(Vjk_tb___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vjk_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vjk_tb___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
