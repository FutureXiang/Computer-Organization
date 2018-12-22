`timescale 1ns / 1ps

module Stall_Detector(
    input [31:0] IFID,
    input [31:0] IDEX,
    input [31:0] EXMEM,
	input [31:0] MEMWB,
	input [4:0] A3_IDEX,
    input [4:0] A3_EXMEM,
    input [4:0] A3_MEMWB,
    output STALL
    );

	// beq_rsrt@IF/ID stall:    calR@ID/EX    calI@ID/EX    lw@ID/EX    lw@EX/MEM
	// jr_rs   @IF/ID stall:    calR@ID/EX    calI@ID/EX    lw@ID/EX    lw@EX/MEM
	// C_R_rsrt@IF/ID stall:    lw@ID/EX
	// C_I_rs  @IF/ID stall:    lw@ID/EX
	// lw_rs   @IF/ID stall:    lw@ID/EX
	// sw_rs   @IF/ID stall:    lw@ID/EX
	
	// Branch
	`define BEQ 4
	`define BNE 5
	`define BLEZ 6
	`define BGTZ 7
	`define BLTZ_2016 0
	`define BGEZ_2016 1
	
	
	// Load	Memory
	`define LB 32
	`define LBU 36
	`define LH 33
	`define LHU 37	
	`define LW 35
	// Save Memory
	`define SB 40
	`define SH 41
	`define SW 43
	
	
	// Calc I
	`define ADDI 8
	`define ADDIU 9
	`define ANDI 12
	`define ORI 13
	`define XORI 14
	`define LUI 15
	`define SLTI 10
	`define SLTIU 11
	
	// Link	(JALR defined in R)
	`define JAL 3
	
	// NoCalc R
	`define RR 0
	`define JR_funct 8
	`define JALR_funct 9
	`define MFHI_funct 16
	`define MFLO_funct 18
	`define MTHI_funct 17
	`define MTLO_funct 19
	`define MULT_funct 24
	`define MULTU_funct 25
	`define DIV_funct 26
	`define DIVU_funct 27
	
	
	`define CP0 16
	`define ERET 24
	
	
	`define OP 31:26
	`define FUNCT 5:0
	`define rs 25:21
	`define rt 20:16
	`define rd 15:11
	

	// add to here if adding instructions !!!
	assign beq =( IFID[`OP]==`BEQ | IFID[`OP]==`BNE
				| IFID[`OP]==`BLEZ | IFID[`OP]==`BGTZ 
				| (IFID[`OP]==6'b000001 & IFID[20:16]==`BLTZ_2016)
				| (IFID[`OP]==6'b000001 & IFID[20:16]==`BGEZ_2016) );

	assign jr  =  ( IFID[`OP]==`RR & (IFID[`FUNCT]==`JR_funct | IFID[`FUNCT]==`JALR_funct) );
	assign eret = (IFID[`OP]==`CP0 & IFID[`FUNCT]==`ERET);
	
	assign calR = (IFID[`OP]==`RR
					& IFID[`FUNCT]!=`JR_funct   & IFID[`FUNCT]!=`JALR_funct 
					& IFID[`FUNCT]!=`MFHI_funct & IFID[`FUNCT]!=`MFLO_funct  & IFID[`FUNCT]!=`MTHI_funct & IFID[`FUNCT]!=`MTLO_funct
					& IFID[`FUNCT]!=`MULT_funct & IFID[`FUNCT]!=`MULTU_funct & IFID[`FUNCT]!=`DIV_funct  & IFID[`FUNCT]!=`DIVU_funct);

	assign calI = (IFID[`OP]==`ADDI | IFID[`OP]==`ADDIU 
					 | IFID[`OP]==`ANDI | IFID[`OP]==`ORI | IFID[`OP]==`XORI | IFID[`OP]==`LUI
					 | IFID[`OP]==`SLTI | IFID[`OP]==`SLTIU );

	assign lw = (IFID[`OP]==`LW | IFID[`OP]==`LB | IFID[`OP]==`LBU | IFID[`OP]==`LH | IFID[`OP]==`LHU);
	assign sw = (IFID[`OP]==`SW | IFID[`OP]==`SB | IFID[`OP]==`SH);

	assign mfc0 = ((IFID[`OP] == `CP0) & (IFID[25:21] == 5'b00000));
	assign mtc0 = ((IFID[`OP] == `CP0) & (IFID[25:21] == 5'b00100));

	assign MultDiv = (IFID[`OP]==`RR & (IFID[`FUNCT] == `MULT_funct | IFID[`FUNCT] == `MULTU_funct | IFID[`FUNCT] == `DIV_funct | IFID[`FUNCT] == `DIVU_funct));
	assign MThilo  = (IFID[`OP]==`RR & (IFID[`FUNCT] == `MTHI_funct | IFID[`FUNCT] == `MTLO_funct));

	
	// add to here if adding instructions !!! (Tuse expressions)
		// eret: behavior like "jr"
	assign Tuse_rs0 = beq + jr;
	assign Tuse_rs1 = calR + calI + lw + sw + mfc0 + mtc0 + MultDiv + MThilo;
	assign Tuse_rt0 = (IFID[`OP]==`BEQ | IFID[`OP]==`BNE);
	assign Tuse_rt1 = calR + MultDiv;
	
	
	wire [1:0] Res_IDEX, Res_EXMEM, Res_MEMWB;
	// change this if adding instructions !!! (case of opcode)
	Res_Translator GetRes(IDEX, EXMEM, MEMWB,     Res_IDEX, Res_EXMEM, Res_MEMWB);
	
	`define ALUsd 2'b01	// cal_R, cal_I
	`define DMsd 2'b10	// load
	`define PCsd 2'b11	// jal
	`define NWsd 2'b00	// others: beq, store, jr
	
	wire Stall_rs0_IDEX1 = Tuse_rs0 & (Res_IDEX==`ALUsd) & (IFID[`rs]==A3_IDEX & IFID[`rs]!=0 );
	wire Stall_rs0_IDEX2 = Tuse_rs0 & (Res_IDEX==`DMsd)  & (IFID[`rs]==A3_IDEX & IFID[`rs]!=0 );
	wire Stall_rs0_EXMEM1= Tuse_rs0 & (Res_EXMEM==`DMsd) & (IFID[`rs]==A3_EXMEM& IFID[`rs]!=0 );
	wire Stall_rs1_IDEX2 = Tuse_rs1 & (Res_IDEX==`DMsd)  & (IFID[`rs]==A3_IDEX & IFID[`rs]!=0 );
	wire Stall_rs = Stall_rs0_IDEX1 | Stall_rs0_IDEX2 | Stall_rs0_EXMEM1 | Stall_rs1_IDEX2;
	
	wire Stall_rt0_IDEX1 = Tuse_rt0 & (Res_IDEX==`ALUsd) & (IFID[`rt]==A3_IDEX & IFID[`rt]!=0 );
	wire Stall_rt0_IDEX2 = Tuse_rt0 & (Res_IDEX==`DMsd)  & (IFID[`rt]==A3_IDEX & IFID[`rt]!=0 );
	wire Stall_rt0_EXMEM1= Tuse_rt0 & (Res_EXMEM==`DMsd) & (IFID[`rt]==A3_EXMEM& IFID[`rt]!=0 );
	wire Stall_rt1_IDEX2 = Tuse_rt1 & (Res_IDEX==`DMsd)  & (IFID[`rt]==A3_IDEX & IFID[`rt]!=0 );
	wire Stall_rt = Stall_rt0_IDEX1 | Stall_rt0_IDEX2 | Stall_rt0_EXMEM1 | Stall_rt1_IDEX2;
	
    
	wire Stall_LwMtc0Eret = (eret & ((IDEX[`OP] == `CP0) & (IDEX[25:21] == 5'b00100)) & Res_EXMEM==`DMsd & (IDEX[`rt]==A3_EXMEM & IDEX[`rt]!=0 ) );
	

	assign STALL = Stall_rs | Stall_rt | Stall_LwMtc0Eret;

endmodule
