// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtwo_mux_tb__Syms.h"


void Vtwo_mux_tb___024root__trace_chg_0_sub_0(Vtwo_mux_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtwo_mux_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root__trace_chg_0\n"); );
    // Init
    Vtwo_mux_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtwo_mux_tb___024root*>(voidSelf);
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtwo_mux_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtwo_mux_tb___024root__trace_chg_0_sub_0(Vtwo_mux_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root__trace_chg_0_sub_0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelfRef.two_mux_tb__DOT__a));
    bufp->chgBit(oldp+1,(vlSelfRef.two_mux_tb__DOT__b));
    bufp->chgBit(oldp+2,(vlSelfRef.two_mux_tb__DOT__s));
    bufp->chgBit(oldp+3,(vlSelfRef.two_mux_tb__DOT__y));
}

void Vtwo_mux_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwo_mux_tb___024root__trace_cleanup\n"); );
    // Init
    Vtwo_mux_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtwo_mux_tb___024root*>(voidSelf);
    Vtwo_mux_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = 0;
    }
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
