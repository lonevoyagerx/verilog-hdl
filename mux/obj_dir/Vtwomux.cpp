// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtwomux__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtwomux::Vtwomux(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtwomux__Syms(contextp(), _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , s{vlSymsp->TOP.s}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtwomux::Vtwomux(const char* _vcname__)
    : Vtwomux(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtwomux::~Vtwomux() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtwomux___024root___eval_debug_assertions(Vtwomux___024root* vlSelf);
#endif  // VL_DEBUG
void Vtwomux___024root___eval_static(Vtwomux___024root* vlSelf);
void Vtwomux___024root___eval_initial(Vtwomux___024root* vlSelf);
void Vtwomux___024root___eval_settle(Vtwomux___024root* vlSelf);
void Vtwomux___024root___eval(Vtwomux___024root* vlSelf);

void Vtwomux::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtwomux::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtwomux___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtwomux___024root___eval_static(&(vlSymsp->TOP));
        Vtwomux___024root___eval_initial(&(vlSymsp->TOP));
        Vtwomux___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtwomux___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtwomux::eventsPending() { return false; }

uint64_t Vtwomux::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtwomux::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtwomux___024root___eval_final(Vtwomux___024root* vlSelf);

VL_ATTR_COLD void Vtwomux::final() {
    Vtwomux___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtwomux::hierName() const { return vlSymsp->name(); }
const char* Vtwomux::modelName() const { return "Vtwomux"; }
unsigned Vtwomux::threads() const { return 1; }
void Vtwomux::prepareClone() const { contextp()->prepareClone(); }
void Vtwomux::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtwomux::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtwomux___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtwomux___024root__trace_init_top(Vtwomux___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtwomux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtwomux___024root*>(voidSelf);
    Vtwomux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtwomux___024root__trace_decl_types(tracep);
    Vtwomux___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtwomux___024root__trace_register(Vtwomux___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtwomux::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtwomux::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtwomux___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
