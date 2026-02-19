// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhalf_adder__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vhalf_adder::Vhalf_adder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhalf_adder__Syms(contextp(), _vcname__, this)}
    , sum{vlSymsp->TOP.sum}
    , carry{vlSymsp->TOP.carry}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vhalf_adder::Vhalf_adder(const char* _vcname__)
    : Vhalf_adder(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhalf_adder::~Vhalf_adder() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhalf_adder___024root___eval_debug_assertions(Vhalf_adder___024root* vlSelf);
#endif  // VL_DEBUG
void Vhalf_adder___024root___eval_static(Vhalf_adder___024root* vlSelf);
void Vhalf_adder___024root___eval_initial(Vhalf_adder___024root* vlSelf);
void Vhalf_adder___024root___eval_settle(Vhalf_adder___024root* vlSelf);
void Vhalf_adder___024root___eval(Vhalf_adder___024root* vlSelf);

void Vhalf_adder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhalf_adder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhalf_adder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhalf_adder___024root___eval_static(&(vlSymsp->TOP));
        Vhalf_adder___024root___eval_initial(&(vlSymsp->TOP));
        Vhalf_adder___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhalf_adder___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vhalf_adder::eventsPending() { return false; }

uint64_t Vhalf_adder::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vhalf_adder::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhalf_adder___024root___eval_final(Vhalf_adder___024root* vlSelf);

VL_ATTR_COLD void Vhalf_adder::final() {
    Vhalf_adder___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhalf_adder::hierName() const { return vlSymsp->name(); }
const char* Vhalf_adder::modelName() const { return "Vhalf_adder"; }
unsigned Vhalf_adder::threads() const { return 1; }
void Vhalf_adder::prepareClone() const { contextp()->prepareClone(); }
void Vhalf_adder::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhalf_adder::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vhalf_adder___024root__trace_decl_types(VerilatedVcd* tracep);

void Vhalf_adder___024root__trace_init_top(Vhalf_adder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhalf_adder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhalf_adder___024root*>(voidSelf);
    Vhalf_adder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vhalf_adder___024root__trace_decl_types(tracep);
    Vhalf_adder___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhalf_adder___024root__trace_register(Vhalf_adder___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhalf_adder::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhalf_adder::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vhalf_adder___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
