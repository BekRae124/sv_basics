// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaes_functions__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vaes_functions::Vaes_functions(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vaes_functions__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , plaintext_valid{vlSymsp->TOP.plaintext_valid}
    , ciphertext_valid{vlSymsp->TOP.ciphertext_valid}
    , plaintext{vlSymsp->TOP.plaintext}
    , key{vlSymsp->TOP.key}
    , ciphertext{vlSymsp->TOP.ciphertext}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vaes_functions::Vaes_functions(const char* _vcname__)
    : Vaes_functions(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vaes_functions::~Vaes_functions() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vaes_functions___024root___eval_debug_assertions(Vaes_functions___024root* vlSelf);
#endif  // VL_DEBUG
void Vaes_functions___024root___eval_static(Vaes_functions___024root* vlSelf);
void Vaes_functions___024root___eval_initial(Vaes_functions___024root* vlSelf);
void Vaes_functions___024root___eval_settle(Vaes_functions___024root* vlSelf);
void Vaes_functions___024root___eval(Vaes_functions___024root* vlSelf);

void Vaes_functions::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaes_functions::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaes_functions___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vaes_functions___024root___eval_static(&(vlSymsp->TOP));
        Vaes_functions___024root___eval_initial(&(vlSymsp->TOP));
        Vaes_functions___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vaes_functions___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vaes_functions::eventsPending() { return false; }

uint64_t Vaes_functions::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vaes_functions::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vaes_functions___024root___eval_final(Vaes_functions___024root* vlSelf);

VL_ATTR_COLD void Vaes_functions::final() {
    Vaes_functions___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vaes_functions::hierName() const { return vlSymsp->name(); }
const char* Vaes_functions::modelName() const { return "Vaes_functions"; }
unsigned Vaes_functions::threads() const { return 1; }
void Vaes_functions::prepareClone() const { contextp()->prepareClone(); }
void Vaes_functions::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vaes_functions::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vaes_functions___024root__trace_decl_types(VerilatedVcd* tracep);

void Vaes_functions___024root__trace_init_top(Vaes_functions___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vaes_functions___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes_functions___024root*>(voidSelf);
    Vaes_functions__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes_functions___024root__trace_decl_types(tracep);
    Vaes_functions___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes_functions___024root__trace_register(Vaes_functions___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vaes_functions::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vaes_functions::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vaes_functions___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
