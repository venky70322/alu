// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Valu___024unit;


class Valu__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu___024root final {
  public:
    // CELLS
    Valu___024unit* __PVT____024unit;

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ tb__DOT__a;
    CData/*3:0*/ tb__DOT__b;
    CData/*2:0*/ tb__DOT__sel;
    CData/*4:0*/ tb__DOT__y;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*3:0*/ __Vtrigprevexpr___TOP__tb__DOT__a__0;
    CData/*3:0*/ __Vtrigprevexpr___TOP__tb__DOT__b__0;
    CData/*2:0*/ __Vtrigprevexpr___TOP__tb__DOT__sel__0;
    CData/*4:0*/ __Vtrigprevexpr___TOP__tb__DOT__y__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Valu__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Valu___024root(Valu__Syms* symsp, const char* namep);
    ~Valu___024root();
    VL_UNCOPYABLE(Valu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
