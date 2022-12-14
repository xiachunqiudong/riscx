`include "defines.v"

// 异常/中断处理模块

// 保存异常编号到mcause
// 保存发生异常的指令的PC到mepc
// 保存发生异常访存地址到mtval

// 跳转到mtvec

module excp(
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  from csr_reg
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    input u_mode_i,
    input s_mode_i,
    input h_mode_i,
    input m_mode_i,

    input                  csr_mstatus_mie_i, //全局中断使能
    input                  csr_msie_i,        // 软件中断使能
    input                  csr_mtie_i,        // 时钟中断使能
    input                  csr_meie_i,        // 外部中断使能
    input [`XLEN-1:0]      csr_mtvec_i,       // 异常处理程序入口

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  from wb
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    // 发生中断异常的PC以及INSTR
    input [`PC_WIDTH-1:0]  excp_pc_i,
    input [`XLEN-1:0]      excp_instr_i,

    // 1.中断
    input                  int_soft_i,
    input                  int_timer_i,
    input                  int_exter_i,

    // 2.异常
    // 2.1取指阶段异常
    input                  if_excp_misalign_i, // 指令地址不对齐
    input                  if_excp_bus_err_i,  // 取指访存错误
    // 2.2译码阶段异常
    input                  id_excp_ilegl_instr_i, // 非法指令
    input                  id_excp_ecall_i, // ecall
    input                  id_excp_ebreak_i, // ebreak
    // 2.3执行阶段异常
    // 2.4访存阶段异常
    input                  mem_excp_ld_misalign_i,
    input                  mem_excp_ld_bus_err_i,
    input                  mem_excp_st_amo_misalign_i,
    input                  mem_excp_st_amo_bus_err_i,
    input [`XLEN-1:0]      mem_excp_bad_addr_i,

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  to csr_reg
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    output                 csr_mcause_wen_o, // 异常编号
    output [`XLEN-1:0]     csr_mcause_o, 
    output                 csr_mepc_wen_o,   // 异常处理返回地址
    output [`XLEN-1:0]     csr_mepc_o, 
    output                 csr_mtval_wen_o,  // 异常值
    output [`XLEN-1:0]     csr_mtval_o, 
    output                 csr_mstatus_wen_o,

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
// to if
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    output                 excp_flush_o,
    output [`PC_WIDTH-1:0] excp_flush_pc_o,
);

    // 中断请求处理
    // int_mask 
    // 当全局中断使能关闭的时候屏蔽中断
    wire int_mask = ~csr_mstatus_mie_i;
    wire int_req_raw = (int_soft_i  & csr_msie_i) 
                     | (int_timer_i & csr_mtie_i)
                     | (int_exter_i & csr_meie_i);

    wire int_req = int_req_raw & ~int_mask;

    // 异常请求处理
    wire if_excp  = (if_excp_misalign_i     | if_excp_bus_err_i);
    wire id_excp  = (id_excp_ilegl_instr_i  | id_excp_ecall_i | id_excp_ebreak_i);
    wire mem_excp = (mem_excp_ld_misalign_i | mem_excp_ld_bus_err_i | mem_excp_st_amo_misalign_i | mem_excp_st_amo_bus_err_i);
    
    wire excp_req = if_excp | id_excp | mem_excp;
    

//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  冲刷流水线
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    assign excp_flush_o    = int_req | excp_req;
    assign excp_flush_pc_o = csr_mtvec_i;
    
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
//  UPDATE CSR
//xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx//
    
    // mcause: 发生异常的原因
    // 1.中断
    wire [`XLEN-1:0] int_mcause;
    
    assign int_mcause[31]   = 1'b1;
    assign int_mcause[30:4] = 27'b0;
    assign int_mcause[3:0]  = int_soft_i  ? 4'd3  // 机器模式软件中断
                            : int_timer_i ? 4'd7  // 机器模式定时器中断
                            : int_exter_i ? 4'd11 // 机器模式外部中断
                            : 4'b0;
    // 2.异常
    wire [`XLEN-1:0] excp_mcause;
    
    assign excp_mcause[31:5] = 27'b0;
    assign excp_mcause[4 :0] = if_excp_misalign_i           ? 5'd0
                             : if_excp_bus_err_i            ? 5'd1
                             : id_excp_ilegl_instr_i        ? 5'd2
                             : id_excp_ebreak_i             ? 5'd3
                             : mem_excp_ld_misalign_i       ? 5'd4
                             : mem_excp_ld_bus_err_i        ? 5'd5
                             : mem_excp_st_amo_misalign_i   ? 5'd6
                             : mem_excp_st_amo_bus_err_i    ? 5'd7
                             : (id_excp_ecall_i & u_mode_i) ? 5'd8
                             : (id_excp_ecall_i & s_mode_i) ? 5'd9
                             : (id_excp_ecall_i & h_mode_i) ? 5'd10
                             : (id_excp_ecall_i & m_mode_i) ? 5'd11
                             : 5'b0;

    csr_mcause_o = int_req ? int_mcause : excp_mcause;
    
    // mepc: 异常处理程序返回地址
    // 中断: 指向下一条指令
    // 异常: 指向当前指令 ecall/ebreak 需要软件修改 mepc = mepc + 4
    assign csr_mepc_o = int_req ? excp_pc_i + 4 : excp_pc_i;

    // mtval: 异常值
    assign csr_mtval_o = if_excp ?               excp_pc_i 
                       : id_excp_ilegl_instr_i ? excp_instr_i 
                       : id_excp_ecall_i       ? excp_pc_i
                       : id_excp_ebreak_i      ? excp_pc_i
                       : mem_excp ?              mem_excp_bad_addr_i
                       : `XLEN'b0;

    // CSR
    wire   update_csr = (int_req | excp_req);
    assign csr_mcause_wen_o  = update_csr;
    assign csr_mepc_wen_o    = update_csr;
    assign csr_mtval_wen_o   = update_csr;
    assign csr_mstatus_wen_o = update_csr;

endmodule


