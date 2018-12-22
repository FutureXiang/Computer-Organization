`timescale 1ns / 1ps

module Forward_Controller(
	input [31:0] IR_IFID,
	input [31:0] IR_IDEX,
    input [31:0] IR_EXMEM,
    input [31:0] IR_MEMWB,
	input [4:0] A1_rRF,
    input [4:0] A2_rRF,
	input [4:0] A1_IDEX,
    input [4:0] A2_IDEX,
	input [4:0] A2_EXMEM,
	input [4:0] A3_IDEX,
    input [4:0] A3_EXMEM,
    input [4:0] A3_MEMWB,
    output [2:0] x_MF_ALU_A,
    output [2:0] x_MF_ALU_B,
    output [2:0] x_MF_CMP_A,
    output [2:0] x_MF_CMP_B,
	output [2:0] x_MF_PC_JRrs,
	output 		 x_MF_DM_WD,
	output [1:0] x_MF_EPC
    );
	// 0(original), 1(DR@MEM/WB), 2(AO@MEM/WB), 3(AO@EX/MEM),   4(PCp4_MEMWB+4), 5(PCp4_EXMEM+4), 6(PCp4_IDEX+4)
	
	
	
	wire [1:0] Res_IDEX, Res_EXMEM, Res_MEMWB;
	// change this if adding instructions !!! (case of opcode)
	Res_Translator GetRes(IR_IDEX, IR_EXMEM, IR_MEMWB,     Res_IDEX, Res_EXMEM, Res_MEMWB);
	
	`define ALU 2'b01
	`define DM 2'b10
	`define PC 2'b11
	`define NW 2'b00
	
	
	wire [2:0] x_MF_ALU_A_noJAL = ((A1_IDEX==A3_EXMEM & A3_EXMEM!=0) & Res_EXMEM==`ALU) ? 3 : 
								( ((A1_IDEX==A3_MEMWB & A3_MEMWB!=0) & Res_MEMWB==`ALU) ? 2 :
								( ((A1_IDEX==A3_MEMWB & A3_MEMWB!=0) & Res_MEMWB==`DM) ? 1 : 0 ) );
					  
	wire [2:0] x_MF_ALU_B_noJAL = ((A2_IDEX==A3_EXMEM & A3_EXMEM!=0) & Res_EXMEM==`ALU) ? 3 : 
								( ((A2_IDEX==A3_MEMWB & A3_MEMWB!=0) & Res_MEMWB==`ALU) ? 2 :
								( ((A2_IDEX==A3_MEMWB & A3_MEMWB!=0) &  Res_MEMWB==`DM) ? 1 : 0 ) );
					  
	wire [2:0] x_MF_CMP_A_noJAL = ((A1_rRF==A3_EXMEM & A3_EXMEM!=0) & Res_EXMEM==`ALU) ? 3 : 
								( ((A1_rRF==A3_MEMWB & A3_MEMWB!=0) & Res_MEMWB==`ALU) ? 2 :
								( ((A1_rRF==A3_MEMWB & A3_MEMWB!=0) &  Res_MEMWB==`DM) ? 1 : 0 ) );
					  
	wire [2:0] x_MF_CMP_B_noJAL = ((A2_rRF==A3_EXMEM & A3_EXMEM!=0) & Res_EXMEM==`ALU) ? 3 : 
								( ((A2_rRF==A3_MEMWB & A3_MEMWB!=0) & Res_MEMWB==`ALU) ? 2 :
								( ((A2_rRF==A3_MEMWB & A3_MEMWB!=0) &  Res_MEMWB==`DM) ? 1 : 0 ) );
	
	wire [2:0] x_MF_PC_JRrs_noJAL = ((A1_rRF==A3_EXMEM & A3_EXMEM!=0) & Res_EXMEM==`ALU) ? 3 : 
								  ( ((A1_rRF==A3_MEMWB & A3_MEMWB!=0) & Res_MEMWB==`ALU) ? 2 :
								  ( ((A1_rRF==A3_MEMWB & A3_MEMWB!=0) &  Res_MEMWB==`DM) ? 1 : 0 ) );
					  
					  
	
	wire [2:0] x_MF_ALU_A_JAL = ((A1_IDEX==A3_EXMEM & A3_EXMEM!=0) & Res_EXMEM==`PC) ? 5 : 
							  ( ((A1_IDEX==A3_MEMWB & A3_MEMWB!=0) & Res_MEMWB==`PC) ? 4 : 0);
	
	wire [2:0] x_MF_ALU_B_JAL = ((A2_IDEX==A3_EXMEM & A3_EXMEM!=0) & Res_EXMEM==`PC) ? 5 : 
							  ( ((A2_IDEX==A3_MEMWB & A3_MEMWB!=0) & Res_MEMWB==`PC) ? 4 : 0);
	
	wire [2:0] x_MF_CMP_A_JAL = ((A1_rRF==A3_IDEX  & A3_IDEX!=0)  & Res_IDEX==`PC) ? 6 : 
							  ( ((A1_rRF==A3_EXMEM & A3_EXMEM!=0) & Res_EXMEM==`PC) ? 5 : 
							  ( ((A1_rRF==A3_MEMWB & A3_MEMWB!=0) & Res_MEMWB==`PC) ? 4 : 0) );
	
	wire [2:0] x_MF_CMP_B_JAL = ((A2_rRF==A3_IDEX  & A3_IDEX!=0)  & Res_IDEX==`PC) ? 6 : 
							  ( ((A2_rRF==A3_EXMEM & A3_EXMEM!=0) & Res_EXMEM==`PC) ? 5 : 
							  ( ((A2_rRF==A3_MEMWB & A3_MEMWB!=0) & Res_MEMWB==`PC) ? 4 : 0) );
	
	wire [2:0] x_MF_PC_JRrs_JAL=((A1_rRF==A3_IDEX  & A3_IDEX!=0)  & Res_IDEX==`PC) ? 6 : 
							  ( ((A1_rRF==A3_EXMEM & A3_EXMEM!=0) & Res_EXMEM==`PC) ? 5 : 
							  ( ((A1_rRF==A3_MEMWB & A3_MEMWB!=0) & Res_MEMWB==`PC) ? 4 : 0) );
	
	
	assign x_MF_ALU_A = x_MF_ALU_A_noJAL + x_MF_ALU_A_JAL;
    assign x_MF_ALU_B = x_MF_ALU_B_noJAL + x_MF_ALU_B_JAL;
	assign x_MF_CMP_A = x_MF_CMP_A_noJAL + x_MF_CMP_A_JAL;
	assign x_MF_CMP_B = x_MF_CMP_B_noJAL + x_MF_CMP_B_JAL;
	assign x_MF_PC_JRrs = x_MF_PC_JRrs_noJAL + x_MF_PC_JRrs_JAL;
	
	
	assign eret_IFID =    (IR_IFID[31:26]==6'b010000  & IR_IFID[5:0]==6'b011000);
	assign mtEPC_IDEX  = ((IR_IDEX[31:26]==6'b010000  & IR_IDEX[25:21]==5'b00100)  & IR_IDEX[15:11]==5'd14);
	assign mtEPC_EXMEM = ((IR_EXMEM[31:26]==6'b010000 & IR_EXMEM[25:21]==5'b00100) & IR_EXMEM[15:11]==5'd14);
	
	assign x_MF_EPC = (eret_IFID & mtEPC_IDEX) ? 2 : ( (eret_IFID & mtEPC_EXMEM) ? 1 : 0 );
	
	
	
	assign x_MF_DM_WD = ( (A2_EXMEM==A3_MEMWB & A3_MEMWB!=0) & Res_MEMWB==`DM) ? 1 : 0;

endmodule
