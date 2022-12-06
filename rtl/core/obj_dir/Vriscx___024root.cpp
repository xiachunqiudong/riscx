// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscx.h for the primary calling header

#include "Vriscx___024root.h"
#include "Vriscx__Syms.h"

//==========

VL_INLINE_OPT void Vriscx___024root___sequent__TOP__2(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v0;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v0;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v1;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v1;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v2;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v2;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v3;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v3;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v4;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v4;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v5;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v5;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v6;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v6;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v7;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v7;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v8;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v8;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v9;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v9;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v10;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v10;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v11;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v11;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v12;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v12;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v13;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v13;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v14;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v14;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v15;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v15;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v16;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v16;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v17;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v17;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v18;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v18;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v19;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v19;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v20;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v20;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v21;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v21;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v22;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v22;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v23;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v23;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v24;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v24;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v25;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v25;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v26;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v26;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v27;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v27;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v28;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v28;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v29;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v29;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v30;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v30;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v31;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v31;
    CData/*4:0*/ __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v32;
    CData/*0:0*/ __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v32;
    IData/*31:0*/ __Vdly__riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v0;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v1;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v2;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v3;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v4;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v5;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v6;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v7;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v8;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v9;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v10;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v11;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v12;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v13;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v14;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v15;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v16;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v17;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v18;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v19;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v20;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v21;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v22;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v23;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v24;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v25;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v26;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v27;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v28;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v29;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v30;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v31;
    IData/*31:0*/ __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v32;
    // Body
    __Vdly__riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r 
        = vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r;
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        vlSelf->riscx__DOT__regfile_u__DOT__i = 0x20U;
    }
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v0 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v1 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v2 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v3 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v4 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v5 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v6 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v7 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v8 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v9 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v10 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v11 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v12 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v13 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v14 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v15 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v16 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v17 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v18 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v19 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v20 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v21 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v22 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v23 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v24 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v25 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v26 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v27 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v28 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v29 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v30 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v31 = 0U;
    __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v32 = 0U;
    vlSelf->riscx__DOT__id_ex_u__DOT__rd_en_dff__DOT__qout_r 
        = ((IData)(vlSelf->rst_n) & (IData)(vlSelf->riscx__DOT__dec_rd_en));
    if (vlSelf->rst_n) {
        vlSelf->riscx__DOT__ex_mem_u__DOT__alu_res_dff__DOT__qout_r 
            = vlSelf->riscx__DOT__ex_alu_res;
        vlSelf->riscx__DOT__id_ex_u__DOT__rd_idx_dff__DOT__qout_r 
            = (0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                        >> 7U));
        vlSelf->riscx__DOT__ex_mem_u__DOT__pc_dff__DOT__qout_r 
            = vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r;
        vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r 
            = vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r;
        __Vdly__riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r 
            = ((IData)(vlSelf->riscx__DOT__ex_pipe_flush)
                ? (vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r 
                   + ((IData)(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r)
                       ? 4U : vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r))
                : (vlSelf->riscx__DOT__if_u__DOT__pc_add_op1 
                   + (((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                       & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                       ? vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm
                       : 4U)));
        vlSelf->riscx__DOT__id_ex_u__DOT__alu_op2_dff__DOT__qout_r 
            = (((((IData)(vlSelf->riscx__DOT__ex_rd_en) 
                  & (IData)(vlSelf->riscx__DOT__dec_rs2_en)) 
                 & (0U != (0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                    >> 0x14U)))) & 
                ((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                           >> 0x14U)) == (0x1fU & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 7U))))
                ? vlSelf->riscx__DOT__ex_alu_res : 
               (((((IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_en_dff__DOT__qout_r) 
                   & (IData)(vlSelf->riscx__DOT__dec_rs2_en)) 
                  & (0U != (0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                     >> 0x14U)))) & 
                 ((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                            >> 0x14U)) == (IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_idx_dff__DOT__qout_r)))
                 ? vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_wdata_dff__DOT__qout_r
                 : vlSelf->riscx__DOT__rf_rs1_rdata));
        vlSelf->riscx__DOT__id_ex_u__DOT__alu_op1_dff__DOT__qout_r 
            = (((((IData)(vlSelf->riscx__DOT__ex_rd_en) 
                  & (IData)(vlSelf->riscx__DOT__dec_rs1_en)) 
                 & (0U != (0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                    >> 0xfU)))) & (
                                                   (0x1fU 
                                                    & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                       >> 0xfU)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                       >> 7U))))
                ? vlSelf->riscx__DOT__ex_alu_res : 
               (((((IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_en_dff__DOT__qout_r) 
                   & (IData)(vlSelf->riscx__DOT__dec_rs1_en)) 
                  & (0U != (0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                     >> 0xfU)))) & 
                 ((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                            >> 0xfU)) == (IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_idx_dff__DOT__qout_r)))
                 ? vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_wdata_dff__DOT__qout_r
                 : vlSelf->riscx__DOT__rf_rs1_rdata));
    } else {
        vlSelf->riscx__DOT__ex_mem_u__DOT__alu_res_dff__DOT__qout_r = 0U;
        vlSelf->riscx__DOT__id_ex_u__DOT__rd_idx_dff__DOT__qout_r = 0U;
        vlSelf->riscx__DOT__ex_mem_u__DOT__pc_dff__DOT__qout_r = 0U;
        vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r = 0U;
        __Vdly__riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r = 0U;
        vlSelf->riscx__DOT__id_ex_u__DOT__alu_op2_dff__DOT__qout_r = 0U;
        vlSelf->riscx__DOT__id_ex_u__DOT__alu_op1_dff__DOT__qout_r = 0U;
    }
    if (vlSelf->rst_n) {
        if (((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_en_i) 
             & (0U != (IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i)))) {
            vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound1 
                = vlSelf->riscx__DOT__regfile_u__DOT__rd_wdata_i;
            if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                    - (IData)(1U))))) {
                __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v0 
                    = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound1;
                __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v0 = 1U;
                __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v0 
                    = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U)));
            }
        }
    } else {
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v1 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v1 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v1 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v2 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v2 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v2 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v3 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v3 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v3 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v4 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v4 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v4 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v5 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v5 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v5 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v6 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v6 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v6 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v7 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v7 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v7 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v8 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v8 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v8 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v9 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v9 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v9 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v10 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v10 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v10 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v11 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v11 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v11 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v12 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v12 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v12 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v13 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v13 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v13 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v14 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v14 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v14 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v15 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v15 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v15 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v16 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v16 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v16 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v17 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v17 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v17 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v18 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v18 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v18 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v19 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v19 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v19 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v20 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v20 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v20 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v21 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v21 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v21 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v22 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v22 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v22 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v23 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v23 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v23 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v24 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v24 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v24 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v25 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v25 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v25 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v26 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v26 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v26 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v27 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v27 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v27 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v28 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v28 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v28 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v29 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v29 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v29 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v30 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v30 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v30 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v31 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v31 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v31 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
        vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2 = 0U;
        if ((0x1eU >= (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                                - (IData)(1U))))) {
            __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v32 
                = vlSelf->riscx__DOT__regfile_u__DOT____Vlvbound2;
            __Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v32 = 1U;
            __Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v32 
                = (0x1fU & ((IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i) 
                            - (IData)(1U)));
        }
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v0) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v0] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v0;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v1) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v1] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v1;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v2) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v2] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v2;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v3) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v3] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v3;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v4) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v4] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v4;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v5) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v5] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v5;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v6) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v6] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v6;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v7) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v7] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v7;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v8) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v8] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v8;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v9) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v9] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v9;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v10) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v10] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v10;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v11) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v11] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v11;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v12) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v12] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v12;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v13) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v13] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v13;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v14) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v14] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v14;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v15) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v15] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v15;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v16) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v16] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v16;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v17) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v17] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v17;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v18) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v18] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v18;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v19) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v19] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v19;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v20) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v20] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v20;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v21) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v21] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v21;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v22) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v22] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v22;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v23) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v23] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v23;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v24) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v24] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v24;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v25) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v25] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v25;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v26) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v26] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v26;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v27) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v27] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v27;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v28) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v28] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v28;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v29) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v29] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v29;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v30) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v30] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v30;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v31) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v31] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v31;
    }
    if (__Vdlyvset__riscx__DOT__regfile_u__DOT__reg_data__v32) {
        vlSelf->riscx__DOT__regfile_u__DOT__reg_data[__Vdlyvdim0__riscx__DOT__regfile_u__DOT__reg_data__v32] 
            = __Vdlyvval__riscx__DOT__regfile_u__DOT__reg_data__v32;
    }
    vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r 
        = ((IData)(vlSelf->rst_n) & (IData)(vlSelf->riscx__DOT__if_id_prdt_taken));
    if (vlSelf->rst_n) {
        vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r 
            = vlSelf->riscx__DOT__dec_imm;
        vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r 
            = vlSelf->riscx__DOT__if_id_u__DOT__pc_dff__DOT__qout_r;
        vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_en_dff__DOT__qout_r 
            = ((IData)(vlSelf->riscx__DOT__ex_rd_en) 
               & 1U);
        vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_wdata_dff__DOT__qout_r 
            = vlSelf->riscx__DOT__ex_alu_res;
        vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_idx_dff__DOT__qout_r 
            = (0x1fU & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                        >> 7U));
        vlSelf->riscx__DOT__if_id_u__DOT__pc_dff__DOT__qout_r 
            = vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r;
        vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
            = vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r;
    } else {
        vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r = 0U;
        vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r = 0U;
        vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_en_dff__DOT__qout_r = 0U;
        vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_wdata_dff__DOT__qout_r = 0U;
        vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_idx_dff__DOT__qout_r = 0U;
        vlSelf->riscx__DOT__if_id_u__DOT__pc_dff__DOT__qout_r = 0U;
        vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r = 0U;
    }
    vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r 
        = __Vdly__riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r;
    vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
        = ((IData)(vlSelf->rst_n) ? vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr
            : 0U);
    vlSelf->riscx__DOT__ex_u__DOT__al_ali = ((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)) 
                                             | (0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)));
    vlSelf->riscx__DOT__ex_u__DOT__alu_op1 = ((0x37U 
                                               == (0x7fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))
                                               ? 0U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))
                                                   ? vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r
                                                   : vlSelf->riscx__DOT__id_ex_u__DOT__alu_op1_dff__DOT__qout_r));
    vlSelf->riscx__DOT__ex_u__DOT__alu_op2 = (((0x33U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)) 
                                               | (0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))
                                               ? vlSelf->riscx__DOT__id_ex_u__DOT__alu_op2_dff__DOT__qout_r
                                               : vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r);
    vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
        = ((vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr_mem
            [(0x3ffU & ((IData)(3U) + vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r))] 
            << 0x18U) | ((vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr_mem
                          [(0x3ffU & ((IData)(2U) + vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r))] 
                          << 0x10U) | ((vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr_mem
                                        [(0x3ffU & 
                                          ((IData)(1U) 
                                           + vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r))] 
                                        << 8U) | vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr_mem
                                       [(0x3ffU & vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)])));
    vlSelf->riscx__DOT__ex_rd_en = (((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                     | (0x37U == (0x7fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)));
    vlSelf->riscx__DOT__ex_u__DOT__sub_res = ((IData)(1U) 
                                              + (vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                                 + 
                                                 (~ vlSelf->riscx__DOT__ex_u__DOT__alu_op2)));
    vlSelf->riscx__DOT__ex_u__DOT__xor_res = (vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                              ^ vlSelf->riscx__DOT__ex_u__DOT__alu_op2);
    if ((0x40U & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)) {
        vlSelf->riscx__DOT__dec_imm = ((0x20U & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                        ? ((0x10U & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                            ? 0U : 
                                           ((8U & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                             ? ((4U 
                                                 & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                >> 0x1fU))) 
                                                    << 0x15U) 
                                                   | ((0x100000U 
                                                       & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                          >> 0xbU)) 
                                                      | ((0xff000U 
                                                          & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r) 
                                                         | ((0x800U 
                                                             & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                  >> 0x14U))))))
                                                   : 0U)
                                                  : 0U)
                                                 : 0U)
                                             : ((4U 
                                                 & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                 ? 
                                                ((2U 
                                                  & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                      >> 0x14U))
                                                   : 0U)
                                                  : 0U)
                                                 : 
                                                ((2U 
                                                  & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                  ? 
                                                 ((1U 
                                                   & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                   ? 
                                                  (((- (IData)(
                                                               (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                >> 0x1fU))) 
                                                    << 0xdU) 
                                                   | ((0x1000U 
                                                       & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                          >> 0x13U)) 
                                                      | ((0x800U 
                                                          & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                  >> 7U))))))
                                                   : 0U)
                                                  : 0U))))
                                        : 0U);
        vlSelf->riscx__DOT__dec_rs2_en = (1U & (IData)(
                                                       (0x23U 
                                                        == 
                                                        (0x3fU 
                                                         & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r))));
        vlSelf->riscx__DOT__dec_rd_en = (1U & ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                >> 5U) 
                                               & ((0x10U 
                                                   & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                   ? (IData)(
                                                             (3U 
                                                              == 
                                                              (0xfU 
                                                               & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))
                                                   : 
                                                  ((8U 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                    ? (IData)(
                                                              (7U 
                                                               == 
                                                               (7U 
                                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))
                                                    : (IData)(
                                                              (7U 
                                                               == 
                                                               (7U 
                                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))))));
        vlSelf->riscx__DOT__dec_rs1_en = (1U & ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                 >> 5U) 
                                                & ((0x10U 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                    ? (IData)(
                                                              (3U 
                                                               == 
                                                               (0x400fU 
                                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))
                                                    : 
                                                   ((~ 
                                                     (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                      >> 3U)) 
                                                    & ((4U 
                                                        & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                        ? 
                                                       ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                         >> 1U) 
                                                        & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                        : 
                                                       ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                         >> 1U) 
                                                        & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r))))));
    } else {
        vlSelf->riscx__DOT__dec_imm = ((0x20U & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                        ? ((0x10U & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                            ? ((8U 
                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                ? 0U
                                                : (
                                                   (4U 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                      : 0U)
                                                     : 0U)
                                                    : 0U))
                                            : ((8U 
                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                ? 0U
                                                : (
                                                   (4U 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | ((0xfe0U 
                                                          & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                               >> 7U))))
                                                      : 0U)
                                                     : 0U))))
                                        : ((0x10U & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                            ? ((8U 
                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                ? 0U
                                                : (
                                                   (4U 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                      ? 
                                                     (0xfffff000U 
                                                      & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                      : 0U)
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                         >> 0x14U))
                                                      : 0U)
                                                     : 0U)))
                                            : ((8U 
                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                ? 0U
                                                : (
                                                   (4U 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                      ? 
                                                     (((- (IData)(
                                                                  (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                   >> 0x1fU))) 
                                                       << 0xcU) 
                                                      | (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                         >> 0x14U))
                                                      : 0U)
                                                     : 0U)))));
        vlSelf->riscx__DOT__dec_rs2_en = (1U & ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                 >> 5U) 
                                                & ((0x10U 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                    ? (IData)(
                                                              (3U 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))
                                                    : (IData)(
                                                              (3U 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r))))));
        vlSelf->riscx__DOT__dec_rd_en = (1U & ((0x20U 
                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                ? (IData)(
                                                          ((0x10U 
                                                            == 
                                                            (0x18U 
                                                             & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)) 
                                                           & ((4U 
                                                               & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                               ? 
                                                              ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                >> 1U) 
                                                               & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                               : 
                                                              ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                                >> 1U) 
                                                               & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r))))
                                                : (
                                                   (0x10U 
                                                    & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                    ? 
                                                   ((~ 
                                                     (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                      >> 3U)) 
                                                    & ((4U 
                                                        & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                        ? 
                                                       ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                         >> 1U) 
                                                        & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                        : 
                                                       ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                         >> 1U) 
                                                        & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))
                                                    : (IData)(
                                                              (3U 
                                                               == 
                                                               (0xfU 
                                                                & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r))))));
        vlSelf->riscx__DOT__dec_rs1_en = (1U & ((0x20U 
                                                 & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                 ? 
                                                ((0x10U 
                                                  & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                  ? (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))
                                                  : (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r))))
                                                 : 
                                                ((0x10U 
                                                  & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)
                                                  ? (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)))
                                                  : (IData)(
                                                            (3U 
                                                             == 
                                                             (0xfU 
                                                              & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r))))));
    }
    vlSelf->riscx__DOT__if_u__DOT__dec_bjp = (((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)) 
                                               | (0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))) 
                                              | (0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)));
    vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm = ((
                                                   ((- (IData)(
                                                               (0x63U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)))) 
                                                    & (((- (IData)(
                                                                   (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                                    >> 0x1fU))) 
                                                        << 0xdU) 
                                                       | ((0x1000U 
                                                           & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                              >> 0x13U)) 
                                                          | ((0x800U 
                                                              & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                                 << 4U)) 
                                                             | ((0x7e0U 
                                                                 & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                                    >> 0x14U)) 
                                                                | (0x1eU 
                                                                   & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                                      >> 7U))))))) 
                                                   | ((- (IData)(
                                                                 (0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)))) 
                                                      & (((- (IData)(
                                                                     (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                                      >> 0x1fU))) 
                                                          << 0x15U) 
                                                         | ((0x100000U 
                                                             & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                                >> 0xbU)) 
                                                            | ((0xff000U 
                                                                & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr) 
                                                               | ((0x800U 
                                                                   & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                                      >> 9U)) 
                                                                  | (0x7feU 
                                                                     & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                                        >> 0x14U)))))))) 
                                                  | ((- (IData)(
                                                                (0x67U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)))) 
                                                     & (((- (IData)(
                                                                    (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                           >> 0x14U))));
    vlSelf->riscx__DOT__ex_u__DOT__branch_res = (((
                                                   ((((IData)(
                                                              (0x63U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != vlSelf->riscx__DOT__ex_u__DOT__xor_res)))) 
                                                     | ((IData)(
                                                                (0x1063U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                                        & (0U 
                                                           != vlSelf->riscx__DOT__ex_u__DOT__xor_res))) 
                                                    | ((IData)(
                                                               (0x4063U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                                       & (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                                          >> 0x1fU))) 
                                                   | ((IData)(
                                                              (0x5063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                                      & (~ 
                                                         (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                                          >> 0x1fU)))) 
                                                  | ((IData)(
                                                             (0x6063U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                                     & (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                                        >> 0x1fU))) 
                                                 | ((IData)(
                                                            (0x7063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                                    & (~ 
                                                       (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                                        >> 0x1fU))));
    vlSelf->riscx__DOT__ex_alu_res = (((((((((((- (IData)(
                                                          (((((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                              & (0U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                                     >> 0xcU)))) 
                                                             | ((3U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)) 
                                                                | (0x23U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))) 
                                                            | (0x37U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                                           | (0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))))) 
                                               & (vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                                  + vlSelf->riscx__DOT__ex_u__DOT__alu_op2)) 
                                              | ((- (IData)((IData)(
                                                                    (0x40000033U 
                                                                     == 
                                                                     (0x4000707fU 
                                                                      & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))))) 
                                                 & vlSelf->riscx__DOT__ex_u__DOT__sub_res)) 
                                             | ((- (IData)(
                                                           ((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                            & (1U 
                                                               == 
                                                               (7U 
                                                                & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                                   >> 0xcU)))))) 
                                                & vlSelf->riscx__DOT__ex_u__DOT__sll_res)) 
                                            | ((- (IData)(
                                                          ((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                           & (IData)(
                                                                     (0x5000U 
                                                                      == 
                                                                      (0x40007000U 
                                                                       & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))))) 
                                               & vlSelf->riscx__DOT__ex_u__DOT__srl_res)) 
                                           | ((- (IData)(
                                                         ((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                          & (IData)(
                                                                    (0x40005000U 
                                                                     == 
                                                                     (0x40007000U 
                                                                      & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))))) 
                                              & vlSelf->riscx__DOT__ex_u__DOT__sra_res)) 
                                          | ((- (IData)(
                                                        ((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                         & (7U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                                >> 0xcU)))))) 
                                             & (vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                                & vlSelf->riscx__DOT__ex_u__DOT__alu_op2))) 
                                         | ((- (IData)(
                                                       ((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                        & (6U 
                                                           == 
                                                           (7U 
                                                            & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                               >> 0xcU)))))) 
                                            & (vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                               | vlSelf->riscx__DOT__ex_u__DOT__alu_op2))) 
                                        | ((- (IData)(
                                                      ((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                       & (4U 
                                                          == 
                                                          (7U 
                                                           & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                              >> 0xcU)))))) 
                                           & vlSelf->riscx__DOT__ex_u__DOT__xor_res)) 
                                       | ((- (IData)(
                                                     ((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                      & (2U 
                                                         == 
                                                         (7U 
                                                          & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                             >> 0xcU)))))) 
                                          & (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                             >> 0x1fU))) 
                                      | ((- (IData)(
                                                    ((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                                     & (3U 
                                                        == 
                                                        (7U 
                                                         & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                            >> 0xcU)))))) 
                                         & (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                            >> 0x1fU)));
    vlSelf->riscx__DOT__rf_rs1_rdata = ((1U & ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                    >> 0xfU))) 
                                               | (~ (IData)(vlSelf->riscx__DOT__dec_rs1_en))))
                                         ? 0U : (((0x1fU 
                                                   & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                      >> 0xfU)) 
                                                  == (IData)(vlSelf->riscx__DOT__regfile_u__DOT__rd_idx_i))
                                                  ? vlSelf->riscx__DOT__regfile_u__DOT__rd_wdata_i
                                                  : 
                                                 ((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                        >> 0xfU) 
                                                       - (IData)(1U))))
                                                   ? 
                                                  vlSelf->riscx__DOT__regfile_u__DOT__reg_data
                                                  [
                                                  (0x1fU 
                                                   & ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                       >> 0xfU) 
                                                      - (IData)(1U)))]
                                                   : 0U)));
    vlSelf->riscx__DOT__if_u__DOT__prdt_taken = (((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)) 
                                                  | (0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))) 
                                                 | ((0x63U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)) 
                                                    & (vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm 
                                                       >> 0x1fU)));
    vlSelf->riscx__DOT__if_u__DOT__pc_add_op1 = (((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                                  & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                                  ? 
                                                 ((0x67U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                        >> 0xfU)))
                                                    ? 0U
                                                    : 4U)
                                                   : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)
                                                  : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r);
}

void Vriscx___024root___eval(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst_n)) & (IData)(vlSelf->__Vclklast__TOP__rst_n)))) {
        Vriscx___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst_n = vlSelf->rst_n;
}

QData Vriscx___024root___change_request_1(Vriscx___024root* vlSelf);

VL_INLINE_OPT QData Vriscx___024root___change_request(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___change_request\n"); );
    // Body
    return (Vriscx___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vriscx___024root___change_request_1(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vriscx___024root___eval_debug_assertions(Vriscx___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscx___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
}
#endif  // VL_DEBUG
