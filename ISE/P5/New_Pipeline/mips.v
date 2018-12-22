`timescale 1ns / 1ps

module mips(
	input clk,
    input reset
    );
	
	// ******************** VARS DECLARATION ********************

	// ------------------------------ Instrs, PCs and Imms
	wire [15:0] imm16;				  // IMMs
	wire [25:0] addr26;
	wire [1:0] PC_choice;
	wire [5:0] opcode, funct;
	wire [4:0] rs, rt, rd;
	// ------------------------------ Extenders
	wire [31:0] sign_imm32, zero_imm32, lui_imm32;
	// ------------------------------ Control Signals
	wire MemtoReg, MemWrite, Branch, RegDst, RegWrite, Jump, Link, JR;
	wire [2:0] ALUControl;
	wire [1:0] ALUSrc;
	// ------------------------------ Registers
	wire [4:0]  A1, A2, A3;
    wire [31:0] RD1, RD2, rWD;
	// ------------------------------ Comparator
	wire [31:0] D1, D2;
	wire CMP;
	// ------------------------------ ALU
	wire [31:0] A, B, ALUResult;
	wire Zero;
	// ------------------------------ Data Memory
	wire [31:0] Addr;
    wire [31:0] DMread;
	wire [31:0] mWD;
	// ------------------------------ MUX_FORWARD (5)
	wire [31:0] __MF_ALU_A, __MF_ALU_B;
	wire [31:0] __MF_CMP_A, __MF_CMP_B;
	wire [31:0] __MF_PC_JRrs;
	// ------------------------------ MUX_FORWARD SIGNAL (5)
	wire [2:0] x_MF_ALU_A, x_MF_ALU_B, x_MF_CMP_A, x_MF_CMP_B, x_MF_PC_JRrs;
	// ------------------------------ MUX_NORMAL (3)
	wire [4:0]  M_IDEX_A3;
	wire [31:0] M_wRF_WD;
	wire [31:0] M_ALU_B;

	// ============================== PPPPPPPPPPPPPIPELINE REGISTERS  **OUTPUT** (20)
	wire [31:0] IR_IFID, IR_IDEX, IR_EXMEM, IR_MEMWB;
	wire [31:0] PCp4_IFID, PCp4_IDEX, PCp4_EXMEM, PCp4_MEMWB;
	wire [4:0]  A3_IDEX, A3_EXMEM, A3_MEMWB;
	wire [4:0]  A2_IDEX, A2_EXMEM;
	wire [31:0] V2_IDEX, V2_EXMEM;
	wire [4:0]  A1_IDEX;
	wire [31:0] V1_IDEX;
	wire [31:0] E32_IDEX_signed, E32_IDEX_zero, E32_IDEX_lui;
	wire [31:0] AO_EXMEM, AO_MEMWB;
	wire [31:0] DR_MEMWB;
	// ============================== PPPPPPPPPPPPPIPELINE SIGNAL REGISTERS  **OUTPUT** (10)
	wire RegWrite_IDEX, MemtoReg_IDEX, MemWrite_IDEX;
	wire [1:0] ALUSrc_IDEX;
	wire [2:0] ALUControl_IDEX;
	wire RegWrite_EXMEM, MemtoReg_EXMEM, MemWrite_EXMEM;
	wire RegWrite_MEMWB, MemtoReg_MEMWB;
	wire Link_IDEX, Link_EXMEM, Link_MEMWB;
	
	// ============================== STALLING CONTROL SIGNAL
	wire STALL_TRUE;
			// !!!!! When STALL_TRUE = 1, FREEZE PC, FREEZE IF/ID, CLEAR ID/EX

	// ******************** DATAPATH CONNECTION ********************

	// ------------------------------ IF::	Instruction Fetch Unit: IR & PCp4
	wire [31:0] IR_IFU,	PCp4_IFU;
	
	Instruction_Fetcher IFU (sign_imm32 - 1, addr26, __MF_PC_JRrs, PC_choice,     reset, clk, STALL_TRUE,    IR_IFU, PCp4_IFU);
			// !!!!! SignExt(offset-1): because this time using PC(after beq) + 4 + SignOffset == PC(beq) + 4 + 4 + SignOffset is wrong !!!!!
	
	// ============================== IF/ID
	
	IFID PPPPPPPPPP_ifid (IR_IFU, PCp4_IFU,
							STALL_TRUE, clk, reset,
							IR_IFID, PCp4_IFID);
    
	// ------------------------------ ID::	Instruction Decoders
	assign imm16  = IR_IFID[15:0];
	assign addr26 = IR_IFID[25:0];
	assign opcode = IR_IFID[31:26];
	assign funct  = IR_IFID[5:0];
	assign rs = IR_IFID[25:21];
	assign rt = IR_IFID[20:16];
	assign rd = IR_IFID[15:11];
	// ------------------------------ ID::	Generate Control Signals
	Controller Ctrl (opcode, funct,     MemtoReg, MemWrite, Branch, ALUControl, ALUSrc, RegDst, RegWrite, Jump, Link, JR);
	assign PC_choice = Jump ? 2'd2 : (JR ? (2'd3) : (Branch ? ( CMP_eq ) : (2'd0) ) );
	// ------------------------------ ID::	16-to-32 Imm Extenders
	ImmCalc Imms (imm16,     sign_imm32, zero_imm32, lui_imm32);
	// ------------------------------ ID::	read Registers
	assign A1 = rs;
	assign A2 = rt;
	GRF Regs (A1, A2, A3, rWD,     clk, reset, RegWrite_MEMWB,     RD1, RD2, PCp4_MEMWB - 4);
	// ------------------------------ ID::	Comparator
	assign D1 = __MF_CMP_A;
	assign D2 = __MF_CMP_B;
	assign CMP_eq = (D1==D2);

	
	// ============================== ID/EX
	IDEX PPPPPPPPPP_idex (IR_IFID, M_IDEX_A3, A2, A1, RD2, RD1, sign_imm32, zero_imm32, lui_imm32, PCp4_IFID,   
							RegWrite, MemtoReg, MemWrite, ALUControl, ALUSrc, Link,
							STALL_TRUE, clk, reset,
							IR_IDEX, A3_IDEX, A2_IDEX, A1_IDEX, V2_IDEX, V1_IDEX, E32_IDEX_signed, E32_IDEX_zero, E32_IDEX_lui, PCp4_IDEX,
							RegWrite_IDEX, MemtoReg_IDEX, MemWrite_IDEX, ALUControl_IDEX, ALUSrc_IDEX, Link_IDEX);
	
	// ------------------------------ EX::	ALU
	assign A = __MF_ALU_A;
	assign B = M_ALU_B;
    ALU Alu (A, B,     ALUControl_IDEX,     ALUResult);

	// ============================== EX/MEM
	EXMEM PPPPPPPPPP_exmem (IR_IDEX, A3_IDEX, A2_IDEX, __MF_ALU_B, ALUResult, PCp4_IDEX,
							RegWrite_IDEX, MemtoReg_IDEX, MemWrite_IDEX, Link_IDEX,
						    clk, reset,
							IR_EXMEM, A3_EXMEM, A2_EXMEM, V2_EXMEM, AO_EXMEM, PCp4_EXMEM,
							RegWrite_EXMEM, MemtoReg_EXMEM, MemWrite_EXMEM, Link_EXMEM);

	// ------------------------------ MEM::	DataMemory
	assign Addr = AO_EXMEM;
	assign mWD = V2_EXMEM;
    DataMemory Mems (Addr, mWD,     clk, reset, MemWrite_EXMEM,     DMread, PCp4_EXMEM - 4);

	// =============================== MEM/WB
	MEMWB PPPPPPPPPP_memwb (IR_EXMEM, A3_EXMEM, AO_EXMEM, DMread, PCp4_EXMEM,
							RegWrite_EXMEM, MemtoReg_EXMEM, Link_EXMEM,
	    					clk, reset,
							IR_MEMWB, A3_MEMWB, AO_MEMWB, DR_MEMWB, PCp4_MEMWB,
							RegWrite_MEMWB, MemtoReg_MEMWB, Link_MEMWB);

	// ------------------------------ WB::	write Registers
	assign A3 = A3_MEMWB;
	assign rWD = M_wRF_WD;



	// ******************** MULTIPLEXER CONNECTION ********************

	// ------------------------------ MUX_FORWARD: 0(original), 1(DR@MEM/WB), 2(AO@MEM/WB), 3(AO@EX/MEM),   4(PCp4_MEMWB+4), 5(PCp4_EXMEM+4), 6(PCp4_IDEX+4)

	assign __MF_ALU_A   = x_MF_ALU_A[2] ? (x_MF_ALU_A[1]   ? (PCp4_IDEX+4) : (x_MF_ALU_A[0]   ? PCp4_EXMEM+4 : PCp4_MEMWB+4))   :   (x_MF_ALU_A[1]   ? (x_MF_ALU_A[0]   ? AO_EXMEM : AO_MEMWB) : (x_MF_ALU_A[0]   ? DR_MEMWB : V1_IDEX));
	assign __MF_ALU_B   = x_MF_ALU_B[2] ? (x_MF_ALU_B[1]   ? (PCp4_IDEX+4) : (x_MF_ALU_B[0]   ? PCp4_EXMEM+4 : PCp4_MEMWB+4))   :   (x_MF_ALU_B[1]   ? (x_MF_ALU_B[0]   ? AO_EXMEM : AO_MEMWB) : (x_MF_ALU_B[0]   ? DR_MEMWB : V2_IDEX));
	assign __MF_CMP_A   = x_MF_CMP_A[2] ? (x_MF_CMP_A[1]   ? (PCp4_IDEX+4) : (x_MF_CMP_A[0]   ? PCp4_EXMEM+4 : PCp4_MEMWB+4))   :   (x_MF_CMP_A[1]   ? (x_MF_CMP_A[0]   ? AO_EXMEM : AO_MEMWB) : (x_MF_CMP_A[0]   ? DR_MEMWB : RD1));
	assign __MF_CMP_B   = x_MF_CMP_B[2] ? (x_MF_CMP_B[1]   ? (PCp4_IDEX+4) : (x_MF_CMP_B[0]   ? PCp4_EXMEM+4 : PCp4_MEMWB+4))   :   (x_MF_CMP_B[1]   ? (x_MF_CMP_B[0]   ? AO_EXMEM : AO_MEMWB) : (x_MF_CMP_B[0]   ? DR_MEMWB : RD2));
	assign __MF_PC_JRrs = x_MF_PC_JRrs[2] ? (x_MF_PC_JRrs[1]   ? (PCp4_IDEX+4) : (x_MF_PC_JRrs[0]   ? PCp4_EXMEM+4 : PCp4_MEMWB+4))   :   (x_MF_PC_JRrs[1]   ? (x_MF_PC_JRrs[0]   ? AO_EXMEM : AO_MEMWB) : (x_MF_PC_JRrs[0]   ? DR_MEMWB : RD1));

	// ------------------------------ MUX_NORMAL
	assign M_IDEX_A3 = ~Link ? (~RegDst ? rt : rd )             : 5'd31;
	assign M_wRF_WD  = ~Link_MEMWB ? (~MemtoReg_MEMWB ? AO_MEMWB : DR_MEMWB) : (PCp4_MEMWB+4); // delay slot -> PC+8
	assign M_ALU_B   = ALUSrc_IDEX[1] ? (ALUSrc_IDEX[0] ? E32_IDEX_lui : E32_IDEX_zero) : (ALUSrc_IDEX[0] ? E32_IDEX_signed : __MF_ALU_B);
    
	
	// ******************** HAZARD CONTROLLER CONNECTION ********************

	Forward_Controller MF_mux_sig (IR_IDEX, IR_EXMEM, IR_MEMWB,
									A1, A2, A1_IDEX, A2_IDEX,
									A3_IDEX, A3_EXMEM, A3_MEMWB,
									x_MF_ALU_A, x_MF_ALU_B, x_MF_CMP_A, x_MF_CMP_B, x_MF_PC_JRrs);
	
	Stall_Detector StallOrNotNow (IR_IFID, IR_IDEX, IR_EXMEM, IR_MEMWB, A3_IDEX, A3_EXMEM, A3_MEMWB,    STALL_TRUE);

endmodule
