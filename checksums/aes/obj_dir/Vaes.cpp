// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaes__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vaes::Vaes(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vaes__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , plaintext_valid{vlSymsp->TOP.plaintext_valid}
    , ciphertext_valid{vlSymsp->TOP.ciphertext_valid}
    , plaintext{vlSymsp->TOP.plaintext}
    , key{vlSymsp->TOP.key}
    , ciphertext{vlSymsp->TOP.ciphertext}
    , __PVT__aes__DOT__kg__DOT__sbox_0{vlSymsp->TOP.__PVT__aes__DOT__kg__DOT__sbox_0}
    , __PVT__aes__DOT__kg__DOT__sbox_1{vlSymsp->TOP.__PVT__aes__DOT__kg__DOT__sbox_1}
    , __PVT__aes__DOT__kg__DOT__sbox_2{vlSymsp->TOP.__PVT__aes__DOT__kg__DOT__sbox_2}
    , __PVT__aes__DOT__kg__DOT__sbox_3{vlSymsp->TOP.__PVT__aes__DOT__kg__DOT__sbox_3}
    , __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb{vlSymsp->TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__0__KET____DOT__sb}
    , __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb{vlSymsp->TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__1__KET____DOT__sb}
    , __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb{vlSymsp->TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__2__KET____DOT__sb}
    , __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb{vlSymsp->TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__3__KET____DOT__sb}
    , __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb{vlSymsp->TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__4__KET____DOT__sb}
    , __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb{vlSymsp->TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__5__KET____DOT__sb}
    , __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb{vlSymsp->TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__6__KET____DOT__sb}
    , __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb{vlSymsp->TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__7__KET____DOT__sb}
    , __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb{vlSymsp->TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__8__KET____DOT__sb}
    , __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb{vlSymsp->TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__9__KET____DOT__sb}
    , __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb{vlSymsp->TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__10__KET____DOT__sb}
    , __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb{vlSymsp->TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__11__KET____DOT__sb}
    , __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb{vlSymsp->TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__12__KET____DOT__sb}
    , __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb{vlSymsp->TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__13__KET____DOT__sb}
    , __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb{vlSymsp->TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__14__KET____DOT__sb}
    , __PVT__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb{vlSymsp->TOP.__PVT__aes__DOT__sb__DOT__gen_sbox__BRA__15__KET____DOT__sb}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vaes::Vaes(const char* _vcname__)
    : Vaes(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vaes::~Vaes() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vaes___024root___eval_debug_assertions(Vaes___024root* vlSelf);
#endif  // VL_DEBUG
void Vaes___024root___eval_static(Vaes___024root* vlSelf);
void Vaes___024root___eval_initial(Vaes___024root* vlSelf);
void Vaes___024root___eval_settle(Vaes___024root* vlSelf);
void Vaes___024root___eval(Vaes___024root* vlSelf);

void Vaes::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaes::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaes___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vaes___024root___eval_static(&(vlSymsp->TOP));
        Vaes___024root___eval_initial(&(vlSymsp->TOP));
        Vaes___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vaes___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vaes::eventsPending() { return false; }

uint64_t Vaes::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vaes::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vaes___024root___eval_final(Vaes___024root* vlSelf);

VL_ATTR_COLD void Vaes::final() {
    Vaes___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vaes::hierName() const { return vlSymsp->name(); }
const char* Vaes::modelName() const { return "Vaes"; }
unsigned Vaes::threads() const { return 1; }
void Vaes::prepareClone() const { contextp()->prepareClone(); }
void Vaes::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vaes::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vaes___024root__trace_decl_types(VerilatedVcd* tracep);

void Vaes___024root__trace_init_top(Vaes___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vaes___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vaes___024root*>(voidSelf);
    Vaes__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vaes___024root__trace_decl_types(tracep);
    Vaes___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vaes___024root__trace_register(Vaes___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vaes::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vaes::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vaes___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
