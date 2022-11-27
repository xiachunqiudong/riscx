// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdecode.h for the primary calling header

#ifndef VERILATED_VDECODE___024ROOT_H_
#define VERILATED_VDECODE___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vdecode__Syms;
class Vdecode_VerilatedVcd;


//----------

VL_MODULE(Vdecode___024root) {
  public:

    // PORTS
    VL_OUT8(dec_rs1_idx_o,4,0);
    VL_OUT8(dec_rs2_idx_o,4,0);
    VL_OUT8(dec_rd_idx_o,4,0);
    VL_OUT8(dec_rs1_en_o,0,0);
    VL_OUT8(dec_rs2_en_o,0,0);
    VL_OUT8(dec_rd_en_o,0,0);
    VL_IN(instr_i,31,0);
    VL_OUT(dec_imm_o,31,0);
    VL_IN(dec_rs1_i,31,0);
    VL_IN(dec_rs2_i,31,0);

    // INTERNAL VARIABLES
    Vdecode__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vdecode___024root);  ///< Copying not allowed
  public:
    Vdecode___024root(const char* name);
    ~Vdecode___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vdecode__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
