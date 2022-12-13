`include "defines.v"

// control and state register
module csr_reg(
    input clk,
    input rst_n,
    
    input csr_rd_en,
    input csr_wb_en,
    input [11:0] csr_idx,
    input [`XLEN-1:0] csr_wdata,
    output [`XLEN-1:0] csr_rdata
);


// misa 指示当前处理器架构支持的架构特性
    
// mstatus
// 1. MIE  全局中断使能
// 2. MPIE 进入异常之前mie的值
// 3. MPP  进入异常之前特权模式的值
//     处理器进入异常的时候:
//         # MPIE <= MIE，MIE <= 0(进入异常服务程序之后屏蔽异常)
//         # MPP更新为异常之前的模式
// 4. FS 浮点单元的状态
// 5. XS 用户自定义单元的状态
// 6. SD

wire sel_mstatus = (csr_idx == 12'h300);

wire rd_mstatus = sel_mstatus & csr_rd_en;
wire wb_mstatus = sel_mstatus & csr_wb_en;

// MPIE FIELD
wire status_mpie_r;

wire status_mpie_ena;

// MIE FIELD

// SD FIELD

// mie
// MACHINE Interupt Enable
// 不同中断类型的屏蔽
// MEIE MTIE MSIE 外部中断 时钟中断 软件中断

wire sel_mie = (csr_idx == 12'h304);
wire mie_ena;
wire [`XLEN-1:0] mie_r;
wire [`XLEN-1:0] mie_next;

assign mie_next[31:12] = 20'b0;
assign mie_next[11]; // MEIE 外部中断
assign mie_next[10:8] = 3'b0;
assign mie_next[7];  // MTIE 时钟中断
assign mie_next[6:4] = 3'b0;
assign mie_next[3];  // MSIE 软件中断
assign mie_next[2:0] = 3'b0;

dff #(.DW(`XLEN), .RESET_VAL(0)) mie_dff(clk, rst_n, mie_ena, mie_next, mie_r);

wire [`XLEN-1:0] csr_mie = mie_r;

// mtvec 
// Machine Trap Vector Based Address
// 异常处理程序的入口地址 
// 一旦发生了异常终止当前的指令并且跳转到mtvec中的地址开始执行


// mepc 
// Machine Exception Programer Counter
// 进入异常之前的PC，作为异常的返回地址
// 可以被软件修改
// 1. 中断 mepc 指向下一条未被执行的指令，因为当前指令已经执行完成 例如时钟中断
// 2. 异常 mepc 指向发生异常的指令，因为当前指令出现了异常 例如缺页异常
//     ecall/ebreak 软件需要修改 mepc = mepc + 4

// mcause
// 导致异常的原因
// 最高位为中断域 低31位为异常编号 

// mtval
// 保存导致异常的编码或者存储器访问地址
// 1. 存储器访问异常: 记录存储器访问地址
// 2. 非法指令:      记录错误的指令编码





// mip
// MACHINE Interupt Pending
// 中断的等待状态


// mscratch

// mcycle
// 64位时钟周期计数器 处理器执行了多少个时钟周期

// mcycleh

// minstret

// minstreth

// mtime

// mtimecmp

// msip



endmodule