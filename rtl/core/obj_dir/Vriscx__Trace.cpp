// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscx__Syms.h"


void Vriscx___024root__traceChgSub0(Vriscx___024root* vlSelf, VerilatedVcd* tracep);

void Vriscx___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vriscx___024root* const __restrict vlSelf = static_cast<Vriscx___024root*>(voidSelf);
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vriscx___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vriscx___024root__traceChgSub0(Vriscx___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                        & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                        ? ((0x67U == 
                                            (0x7fU 
                                             & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))
                                            ? ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0xfU)))
                                                ? 0U
                                                : 4U)
                                            : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)
                                        : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r) 
                                      + (((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                          & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                          ? vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm
                                          : 4U))),32);
            tracep->chgIData(oldp+1,(vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+2,(vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr),32);
            tracep->chgBit(oldp+3,(vlSelf->riscx__DOT__if_u__DOT__prdt_taken));
            tracep->chgIData(oldp+4,(vlSelf->riscx__DOT__if_id_u__DOT__pc_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+5,(vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r),32);
            tracep->chgBit(oldp+6,(vlSelf->riscx__DOT__dec_rs1_en));
            tracep->chgBit(oldp+7,(vlSelf->riscx__DOT__dec_rs2_en));
            tracep->chgCData(oldp+8,((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                               >> 0xfU))),5);
            tracep->chgCData(oldp+9,((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                               >> 0x14U))),5);
            tracep->chgIData(oldp+10,(vlSelf->riscx__DOT__rf_rs1_rdata),32);
            tracep->chgIData(oldp+11,(((1U & ((0U == 
                                               (0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0x14U))) 
                                              | (~ (IData)(vlSelf->riscx__DOT__dec_rs2_en))))
                                        ? 0U : (((0x1fU 
                                                  & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                     >> 0xfU)) 
                                                 == (IData)(vlSelf->riscx__DOT__wb_rd_idx))
                                                 ? vlSelf->riscx__DOT__wb_rd_wdata
                                                 : 
                                                ((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                       >> 0x14U) 
                                                      - (IData)(1U))))
                                                  ? 
                                                 vlSelf->riscx__DOT__regfile_u__DOT__reg_data
                                                 [(0x1fU 
                                                   & ((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                       >> 0x14U) 
                                                      - (IData)(1U)))]
                                                  : 0U)))),32);
            tracep->chgIData(oldp+12,((((((IData)(vlSelf->riscx__DOT__ex_rd_en) 
                                          & (IData)(vlSelf->riscx__DOT__dec_rs1_en)) 
                                         & (0U != (0x1fU 
                                                   & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                      >> 0xfU)))) 
                                        & ((0x1fU & 
                                            (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                             >> 0xfU)) 
                                           == (0x1fU 
                                               & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 7U))))
                                        ? vlSelf->riscx__DOT__ex_alu_res
                                        : (((((IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_en_dff__DOT__qout_r) 
                                              & (IData)(vlSelf->riscx__DOT__dec_rs1_en)) 
                                             & (0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                    >> 0xfU)))) 
                                            & ((0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xfU)) 
                                               == (IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_idx_dff__DOT__qout_r)))
                                            ? vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_wdata_dff__DOT__qout_r
                                            : (((((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r)) 
                                                  & (IData)(vlSelf->riscx__DOT__dec_rs1_en)) 
                                                 & (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                        >> 0xfU)))) 
                                                & ((0x1fU 
                                                    & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                       >> 0xfU)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r 
                                                       >> 7U))))
                                                ? vlSelf->riscx__DOT__mem_rd_wdata
                                                : vlSelf->riscx__DOT__rf_rs1_rdata)))),32);
            tracep->chgIData(oldp+13,((((((IData)(vlSelf->riscx__DOT__ex_rd_en) 
                                          & (IData)(vlSelf->riscx__DOT__dec_rs2_en)) 
                                         & (0U != (0x1fU 
                                                   & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                      >> 0x14U)))) 
                                        & ((0x1fU & 
                                            (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                             >> 0x14U)) 
                                           == (0x1fU 
                                               & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 7U))))
                                        ? vlSelf->riscx__DOT__ex_alu_res
                                        : (((((IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_en_dff__DOT__qout_r) 
                                              & (IData)(vlSelf->riscx__DOT__dec_rs2_en)) 
                                             & (0U 
                                                != 
                                                (0x1fU 
                                                 & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                    >> 0x14U)))) 
                                            & ((0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0x14U)) 
                                               == (IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_idx_dff__DOT__qout_r)))
                                            ? vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_wdata_dff__DOT__qout_r
                                            : (((((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r)) 
                                                  & (IData)(vlSelf->riscx__DOT__dec_rs2_en)) 
                                                 & (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                        >> 0x14U)))) 
                                                & ((0x1fU 
                                                    & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                       >> 0x14U)) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r 
                                                       >> 7U))))
                                                ? vlSelf->riscx__DOT__mem_rd_wdata
                                                : vlSelf->riscx__DOT__rf_rs1_rdata)))),32);
            tracep->chgIData(oldp+14,(vlSelf->riscx__DOT__dec_imm),32);
            tracep->chgCData(oldp+15,((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                >> 7U))),5);
            tracep->chgBit(oldp+16,(vlSelf->riscx__DOT__dec_rd_en));
            tracep->chgIData(oldp+17,(vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+18,(vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+19,(vlSelf->riscx__DOT__id_ex_u__DOT__alu_op1_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+20,(vlSelf->riscx__DOT__id_ex_u__DOT__alu_op2_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+21,(vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r),32);
            tracep->chgBit(oldp+22,(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r));
            tracep->chgCData(oldp+23,(vlSelf->riscx__DOT__id_ex_u__DOT__rd_idx_dff__DOT__qout_r),5);
            tracep->chgBit(oldp+24,(vlSelf->riscx__DOT__id_ex_u__DOT__rd_en_dff__DOT__qout_r));
            tracep->chgIData(oldp+25,((vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r 
                                       + ((IData)(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r)
                                           ? 4U : vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r))),32);
            tracep->chgIData(oldp+26,(vlSelf->riscx__DOT__ex_alu_res),32);
            tracep->chgCData(oldp+27,((0x1fU & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                >> 7U))),5);
            tracep->chgBit(oldp+28,(vlSelf->riscx__DOT__ex_rd_en));
            tracep->chgIData(oldp+29,(vlSelf->riscx__DOT__ex_mem_u__DOT__pc_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+30,(vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+31,(vlSelf->riscx__DOT__ex_mem_u__DOT__rs2_rdata_dff__DOT__qout_r),32);
            tracep->chgIData(oldp+32,(vlSelf->riscx__DOT__ex_mem_u__DOT__alu_res_dff__DOT__qout_r),32);
            tracep->chgCData(oldp+33,(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_idx_dff__DOT__qout_r),5);
            tracep->chgBit(oldp+34,(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_en_dff__DOT__qout_r));
            tracep->chgIData(oldp+35,(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_wdata_dff__DOT__qout_r),32);
            tracep->chgCData(oldp+36,((0x1fU & (vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r 
                                                >> 7U))),5);
            tracep->chgBit(oldp+37,((3U == (0x7fU & vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r))));
            tracep->chgIData(oldp+38,(vlSelf->riscx__DOT__mem_rd_wdata),32);
            tracep->chgIData(oldp+39,(vlSelf->riscx__DOT__mem_wb_u__DOT__pc_dff__DOT__qout_r),32);
            tracep->chgCData(oldp+40,(vlSelf->riscx__DOT__mem_wb_u__DOT__ex_rd_idx_dff__DOT__qout_r),5);
            tracep->chgBit(oldp+41,(vlSelf->riscx__DOT__mem_wb_u__DOT__ex_rd_en_dff__DOT__qout_r));
            tracep->chgIData(oldp+42,(vlSelf->riscx__DOT__mem_wb_u__DOT__ex_rd_wdata_dff__DOT__qout_r),32);
            tracep->chgCData(oldp+43,(vlSelf->riscx__DOT__mem_wb_u__DOT__mem_rd_idx_dff__DOT__qout_r),5);
            tracep->chgBit(oldp+44,(vlSelf->riscx__DOT__mem_wb_u__DOT__mem_rd_en_dff__DOT__qout_r));
            tracep->chgIData(oldp+45,(vlSelf->riscx__DOT__mem_wb_u__DOT__mem_rd_wdata_dff__DOT__qout_r),32);
            tracep->chgCData(oldp+46,(vlSelf->riscx__DOT__wb_rd_idx),5);
            tracep->chgBit(oldp+47,(((IData)(vlSelf->riscx__DOT__mem_wb_u__DOT__ex_rd_en_dff__DOT__qout_r) 
                                     | (IData)(vlSelf->riscx__DOT__mem_wb_u__DOT__mem_rd_en_dff__DOT__qout_r))));
            tracep->chgIData(oldp+48,(vlSelf->riscx__DOT__wb_rd_wdata),32);
            tracep->chgIData(oldp+49,(((IData)(vlSelf->riscx__DOT__ex_pipe_flush)
                                        ? (vlSelf->riscx__DOT__id_ex_u__DOT__pc_dff__DOT__qout_r 
                                           + ((IData)(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r)
                                               ? 4U
                                               : vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r))
                                        : ((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                             & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                             ? ((0x67U 
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
                                             : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r) 
                                           + (((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                               & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                               ? vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm
                                               : 4U)))),32);
            tracep->chgBit(oldp+50,(vlSelf->riscx__DOT__if_u__DOT__dec_bjp));
            tracep->chgBit(oldp+51,((0x63U == (0x7fU 
                                               & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))));
            tracep->chgBit(oldp+52,((0x6fU == (0x7fU 
                                               & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))));
            tracep->chgBit(oldp+53,((0x67U == (0x7fU 
                                               & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))));
            tracep->chgCData(oldp+54,((0x1fU & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                >> 0xfU))),5);
            tracep->chgIData(oldp+55,(vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm),32);
            tracep->chgBit(oldp+56,((0U == (0x1fU & 
                                            (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                             >> 0xfU)))));
            tracep->chgBit(oldp+57,((1U == (0x1fU & 
                                            (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                             >> 0xfU)))));
            tracep->chgIData(oldp+58,(((0x67U == (0x7fU 
                                                  & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))
                                        ? ((0U == (0x1fU 
                                                   & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                      >> 0xfU)))
                                            ? 0U : 4U)
                                        : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)),32);
            tracep->chgIData(oldp+59,((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                        & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                        ? ((0x67U == 
                                            (0x7fU 
                                             & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr))
                                            ? ((0U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0xfU)))
                                                ? 0U
                                                : 4U)
                                            : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)
                                        : vlSelf->riscx__DOT__pc_reg_u__DOT__pc_dff__DOT__qout_r)),32);
            tracep->chgIData(oldp+60,((((IData)(vlSelf->riscx__DOT__if_u__DOT__dec_bjp) 
                                        & (IData)(vlSelf->riscx__DOT__if_u__DOT__prdt_taken))
                                        ? vlSelf->riscx__DOT__if_u__DOT__dec_bjp_imm
                                        : 4U)),32);
            tracep->chgCData(oldp+61,((0x7fU & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr)),7);
            tracep->chgIData(oldp+62,((((- (IData)(
                                                   (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xdU) | 
                                       ((0x1000U & 
                                         (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                          >> 0x13U)) 
                                        | ((0x800U 
                                            & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 7U))))))),32);
            tracep->chgIData(oldp+63,((((- (IData)(
                                                   (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0x15U) | 
                                       ((0x100000U 
                                         & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                            >> 0xbU)) 
                                        | ((0xff000U 
                                            & vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr) 
                                           | ((0x800U 
                                               & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                  >> 9U)) 
                                              | (0x7feU 
                                                 & (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0x14U))))))),32);
            tracep->chgIData(oldp+64,((((- (IData)(
                                                   (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->riscx__DOT__if_u__DOT__fetch_if2icb_u__DOT__instr 
                                        >> 0x14U))),32);
            tracep->chgBit(oldp+65,((0U != (0x1fU & 
                                            (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                             >> 0xfU)))));
            tracep->chgBit(oldp+66,((0U != (0x1fU & 
                                            (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                             >> 0x14U)))));
            tracep->chgBit(oldp+67,(((((IData)(vlSelf->riscx__DOT__ex_rd_en) 
                                       & (IData)(vlSelf->riscx__DOT__dec_rs1_en)) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xfU)))) 
                                     & ((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 0xfU)) 
                                        == (0x1fU & 
                                            (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                             >> 7U))))));
            tracep->chgBit(oldp+68,(((((IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_en_dff__DOT__qout_r) 
                                       & (IData)(vlSelf->riscx__DOT__dec_rs1_en)) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xfU)))) 
                                     & ((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 0xfU)) 
                                        == (IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_idx_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+69,(((((3U == (0x7fU 
                                               & vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r)) 
                                       & (IData)(vlSelf->riscx__DOT__dec_rs1_en)) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xfU)))) 
                                     & ((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 0xfU)) 
                                        == (0x1fU & 
                                            (vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r 
                                             >> 7U))))));
            tracep->chgBit(oldp+70,(((((IData)(vlSelf->riscx__DOT__ex_rd_en) 
                                       & (IData)(vlSelf->riscx__DOT__dec_rs2_en)) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0x14U)))) 
                                     & ((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 0x14U)) 
                                        == (0x1fU & 
                                            (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                             >> 7U))))));
            tracep->chgBit(oldp+71,(((((IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_en_dff__DOT__qout_r) 
                                       & (IData)(vlSelf->riscx__DOT__dec_rs2_en)) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0x14U)))) 
                                     & ((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 0x14U)) 
                                        == (IData)(vlSelf->riscx__DOT__ex_mem_u__DOT__ex_rd_idx_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+72,(((((3U == (0x7fU 
                                               & vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r)) 
                                       & (IData)(vlSelf->riscx__DOT__dec_rs2_en)) 
                                      & (0U != (0x1fU 
                                                & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0x14U)))) 
                                     & ((0x1fU & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                                  >> 0x14U)) 
                                        == (0x1fU & 
                                            (vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r 
                                             >> 7U))))));
            tracep->chgCData(oldp+73,((0x7fU & vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r)),7);
            tracep->chgCData(oldp+74,((7U & (vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                             >> 0xcU))),3);
            tracep->chgCData(oldp+75,((vlSelf->riscx__DOT__if_id_u__DOT__instr_dff__DOT__qout_r 
                                       >> 0x19U)),7);
            tracep->chgIData(oldp+76,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[0]),32);
            tracep->chgIData(oldp+77,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[1]),32);
            tracep->chgIData(oldp+78,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[2]),32);
            tracep->chgIData(oldp+79,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[3]),32);
            tracep->chgIData(oldp+80,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[4]),32);
            tracep->chgIData(oldp+81,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[5]),32);
            tracep->chgIData(oldp+82,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[6]),32);
            tracep->chgIData(oldp+83,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[7]),32);
            tracep->chgIData(oldp+84,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[8]),32);
            tracep->chgIData(oldp+85,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[9]),32);
            tracep->chgIData(oldp+86,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[10]),32);
            tracep->chgIData(oldp+87,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[11]),32);
            tracep->chgIData(oldp+88,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[12]),32);
            tracep->chgIData(oldp+89,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[13]),32);
            tracep->chgIData(oldp+90,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[14]),32);
            tracep->chgIData(oldp+91,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[15]),32);
            tracep->chgIData(oldp+92,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[16]),32);
            tracep->chgIData(oldp+93,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[17]),32);
            tracep->chgIData(oldp+94,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[18]),32);
            tracep->chgIData(oldp+95,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[19]),32);
            tracep->chgIData(oldp+96,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[20]),32);
            tracep->chgIData(oldp+97,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[21]),32);
            tracep->chgIData(oldp+98,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[22]),32);
            tracep->chgIData(oldp+99,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[23]),32);
            tracep->chgIData(oldp+100,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[24]),32);
            tracep->chgIData(oldp+101,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[25]),32);
            tracep->chgIData(oldp+102,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[26]),32);
            tracep->chgIData(oldp+103,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[27]),32);
            tracep->chgIData(oldp+104,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[28]),32);
            tracep->chgIData(oldp+105,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[29]),32);
            tracep->chgIData(oldp+106,(vlSelf->riscx__DOT__regfile_u__DOT__reg_data[30]),32);
            tracep->chgIData(oldp+107,(vlSelf->riscx__DOT__regfile_u__DOT__i),32);
            tracep->chgCData(oldp+108,((0x7fU & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)),7);
            tracep->chgCData(oldp+109,((7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+110,((vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                        >> 0x19U)),7);
            tracep->chgBit(oldp+111,((0x33U == (0x7fU 
                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))));
            tracep->chgBit(oldp+112,((0x13U == (0x7fU 
                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))));
            tracep->chgBit(oldp+113,(((3U == (0x7fU 
                                              & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)) 
                                      | (0x23U == (0x7fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+114,((0x63U == (0x7fU 
                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))));
            tracep->chgBit(oldp+115,((0x6fU == (0x7fU 
                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))));
            tracep->chgBit(oldp+116,((0x67U == (0x7fU 
                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))));
            tracep->chgBit(oldp+117,((0x37U == (0x7fU 
                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))));
            tracep->chgBit(oldp+118,((0x17U == (0x7fU 
                                                & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))));
            tracep->chgBit(oldp+119,(vlSelf->riscx__DOT__ex_u__DOT__al_ali));
            tracep->chgBit(oldp+120,((0U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+121,((1U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+122,((2U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+123,((3U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+124,((4U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+125,((IData)((0x5000U 
                                              == (0x40007000U 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+126,((IData)((0x40005000U 
                                              == (0x40007000U 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+127,((6U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+128,((7U == (7U & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU)))));
            tracep->chgBit(oldp+129,((((((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                         & (0U == (7U 
                                                   & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                      >> 0xcU)))) 
                                        | ((3U == (0x7fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)) 
                                           | (0x23U 
                                              == (0x7fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))) 
                                       | (0x37U == 
                                          (0x7fU & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                      | (0x17U == (0x7fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+130,((IData)((0x40000033U 
                                              == (0x4000707fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+131,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                      & (1U == (7U 
                                                & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+132,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                      & (IData)((0x5000U 
                                                 == 
                                                 (0x40007000U 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))))));
            tracep->chgBit(oldp+133,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                      & (IData)((0x40005000U 
                                                 == 
                                                 (0x40007000U 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))))));
            tracep->chgBit(oldp+134,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                      & (7U == (7U 
                                                & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+135,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                      & (6U == (7U 
                                                & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+136,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                      & (4U == (7U 
                                                & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+137,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                      & (2U == (7U 
                                                & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
            tracep->chgBit(oldp+138,(((IData)(vlSelf->riscx__DOT__ex_u__DOT__al_ali) 
                                      & (3U == (7U 
                                                & (vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r 
                                                   >> 0xcU))))));
            tracep->chgIData(oldp+139,(vlSelf->riscx__DOT__ex_u__DOT__alu_op1),32);
            tracep->chgIData(oldp+140,(vlSelf->riscx__DOT__ex_u__DOT__alu_op2),32);
            tracep->chgIData(oldp+141,((vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                        + vlSelf->riscx__DOT__ex_u__DOT__alu_op2)),32);
            tracep->chgIData(oldp+142,(vlSelf->riscx__DOT__ex_u__DOT__sub_res),32);
            tracep->chgIData(oldp+143,((vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                        & vlSelf->riscx__DOT__ex_u__DOT__alu_op2)),32);
            tracep->chgIData(oldp+144,((vlSelf->riscx__DOT__ex_u__DOT__alu_op1 
                                        | vlSelf->riscx__DOT__ex_u__DOT__alu_op2)),32);
            tracep->chgIData(oldp+145,(vlSelf->riscx__DOT__ex_u__DOT__xor_res),32);
            tracep->chgIData(oldp+146,((vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                        >> 0x1fU)),32);
            tracep->chgBit(oldp+147,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+148,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+149,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+150,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+151,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+152,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)))));
            tracep->chgBit(oldp+153,((0U != vlSelf->riscx__DOT__ex_u__DOT__xor_res)));
            tracep->chgBit(oldp+154,((vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+155,(((IData)((0x63U 
                                               == (0x707fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != vlSelf->riscx__DOT__ex_u__DOT__xor_res))))));
            tracep->chgBit(oldp+156,(((IData)((0x1063U 
                                               == (0x707fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                      & (0U != vlSelf->riscx__DOT__ex_u__DOT__xor_res))));
            tracep->chgBit(oldp+157,(((IData)((0x4063U 
                                               == (0x707fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                      & (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                         >> 0x1fU))));
            tracep->chgBit(oldp+158,(((IData)((0x5063U 
                                               == (0x707fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                      & (~ (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                            >> 0x1fU)))));
            tracep->chgBit(oldp+159,(((IData)((0x6063U 
                                               == (0x707fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                      & (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                         >> 0x1fU))));
            tracep->chgBit(oldp+160,(((IData)((0x7063U 
                                               == (0x707fU 
                                                   & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r))) 
                                      & (~ (vlSelf->riscx__DOT__ex_u__DOT__sub_res 
                                            >> 0x1fU)))));
            tracep->chgBit(oldp+161,(vlSelf->riscx__DOT__ex_u__DOT__branch_res));
            tracep->chgBit(oldp+162,(((0x63U == (0x7fU 
                                                 & vlSelf->riscx__DOT__id_ex_u__DOT__instr_dff__DOT__qout_r)) 
                                      & ((IData)(vlSelf->riscx__DOT__ex_u__DOT__branch_res) 
                                         ^ (IData)(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r)))));
            tracep->chgIData(oldp+163,(((IData)(vlSelf->riscx__DOT__id_ex_u__DOT__prdt_taken_dff__DOT__qout_r)
                                         ? 4U : vlSelf->riscx__DOT__id_ex_u__DOT__alu_fun_dff__DOT__qout_r)),32);
            tracep->chgCData(oldp+164,((0x7fU & vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r)),7);
            tracep->chgBit(oldp+165,((0x23U == (0x7fU 
                                                & vlSelf->riscx__DOT__ex_mem_u__DOT__instr_dff__DOT__qout_r))));
            tracep->chgIData(oldp+166,(vlSelf->riscx__DOT__mem_u__DOT__i),32);
        }
        tracep->chgBit(oldp+167,(vlSelf->clk));
        tracep->chgBit(oldp+168,(vlSelf->rst_n));
    }
}

void Vriscx___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vriscx___024root* const __restrict vlSelf = static_cast<Vriscx___024root*>(voidSelf);
    Vriscx__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
