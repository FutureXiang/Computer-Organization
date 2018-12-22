`timescale 1ns / 1ps

module Forward_Controller(
	input [31:0] IR_IDEX,
    input [31:0] IR_EXMEM,
    input [31:0] IR_MEMWB,
	input [4:0] A1_rRF,
    input [4:0] A2_rRF,
	input [4:0] A1_IDEX,
    input [4:0] A2_IDEX,
	input [4:0] A3_IDEX,
    input [4:0] A3_EXMEM,
    input [4:0] A3_MEMWB,
    output [2:0] x_MF_ALU_A,
    output [2:0] x_MF_ALU_B,
    output [2:0] x_MF_CMP_A,
    output [2:0] x_MF_CMP_B,
	output [2:0] __MF_PC_JRrs
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
	
	wire [2:0] __MF_PC_JRrs_noJAL = ((A1_rRF==A3_EXMEM & A3_EXMEM!=0) & Res_EXMEM==`ALU) ? 3 : 
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
	
	wire [2:0] __MF_PC_JRrs_JAL=((A1_rRF==A3_IDEX  & A3_IDEX!=0)  & Res_IDEX==`PC) ? 6 : 
							  ( ((A1_rRF==A3_EXMEM & A3_EXMEM!=0) & Res_EXMEM==`PC) ? 5 : 
							  ( ((A1_rRF==A3_MEMWB & A3_MEMWB!=0) & Res_MEMWB==`PC) ? 4 : 0) );
	
	
	assign x_MF_ALU_A = x_MF_ALU_A_noJAL + x_MF_ALU_A_JAL;
    assign x_MF_ALU_B = x_MF_ALU_B_noJAL + x_MF_ALU_B_JAL;
	assign x_MF_CMP_A = x_MF_CMP_A_noJAL + x_MF_CMP_A_JAL;
	assign x_MF_CMP_B = x_MF_CMP_B_noJAL + x_MF_CMP_B_JAL;
	assign __MF_PC_JRrs = __MF_PC_JRrs_noJAL + __MF_PC_JRrs_JAL;

endmodule
