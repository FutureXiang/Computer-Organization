`timescale 1ns / 1ps

module CPU(
	output [31:0] CPU_Addr,
    output [31:0] CPU_WD,
	input [31:0] CPU_RD,
    output DEV_WE,
	input [5:0] HWInt,
	input clk,
	input clk2,
    input reset
    );
	
	// ******************** VARS DECLARATION ********************

	wire [31:0] IR_IFU,	PCp4_IFU;
	// ------------------------------ Instrs, PCs and Imms
	wire [15:0] imm16;				  // IMMs
	wire [25:0] addr26;
	wire [1:0] PC_choice;
	wire [4:0] rs, rt, rd;
	// ------------------------------ Extenders
	wire [31:0] sign_imm32, zero_imm32, lui_imm32;
	// ------------------------------ Control Signals
	wire MemtoReg, MemWrite, RegDst, RegWrite, Jump, JR, ALUOverflowDect, CP0Write, ERET;
	wire [2:0] Branch;
	wire [3:0] ALUControl;
	wire [1:0] ALUSrc, Link;
	// ------------------------------ Registers
	wire [4:0]  A1, A2, A3;
    wire [31:0] RD1, RD2, rWD;
	// ------------------------------ Comparator
	wire CMP;
	// ------------------------------ ALU
	wire [31:0] A, B, ALUResult;
	wire Zero;
	// ------------------------------ Data Memory
	wire [31:0] Addr;
    wire [31:0] DMread;
	wire [31:0] mWD;
	wire [3:0] memCode;
	// ------------------------------ MUX_FORWARD (6+1)
	wire [31:0] __MF_ALU_A, __MF_ALU_B, __MF_CMP_A, __MF_CMP_B, __MF_PC_JRrs, __MF_EPC, __MF_DM_WD;
	// ------------------------------ MUX_FORWARD SIGNAL (6+1)
	wire [2:0] x_MF_ALU_A, x_MF_ALU_B, x_MF_CMP_A, x_MF_CMP_B, x_MF_PC_JRrs;
	wire [1:0] x_MF_EPC;
	wire x_MF_DM_WD;
	// ------------------------------ MUX_NORMAL (3)
	wire [4:0]  M_IDEX_A3;
	wire [31:0] M_wRF_WD, M_ALU_B;

	// ============================== PPPPPPPPPPPPPIPELINE REGISTERS  **OUTPUT** (23)
	wire [31:0] IR_IFID, IR_IDEX, IR_EXMEM, IR_MEMWB, PCp4_IFID, PCp4_IDEX, PCp4_EXMEM, PCp4_MEMWB;
	wire [4:0]  A3_IDEX, A3_EXMEM, A3_MEMWB, A2_IDEX, A2_EXMEM, A1_IDEX;
	wire [31:0] V2_IDEX, V2_EXMEM, V1_IDEX;
	wire [31:0] E32_IDEX_signed, E32_IDEX_zero, E32_IDEX_lui;
	wire [31:0] AO_EXMEM, AO_MEMWB, DR_MEMWB;
	// ============================== PPPPPPPPPPPPPIPELINE SIGNAL REGISTERS  **OUTPUT** (10)
	wire RegWrite_IDEX, MemtoReg_IDEX, MemWrite_IDEX, ALUOverflowDect_IDEX;
	wire [1:0] ALUSrc_IDEX;
	wire [3:0] ALUControl_IDEX;
	wire RegWrite_EXMEM, MemtoReg_EXMEM, MemWrite_EXMEM;
	wire RegWrite_MEMWB, MemtoReg_MEMWB;
	wire [1:0] Link_IDEX, Link_EXMEM, Link_MEMWB;
	wire AWAY_IDEX, AWAY_EXMEM, AWAY_MEMWB;
	wire CP0Write_IDEX, CP0Write_EXMEM; // same as MemWrite
	
	// ============================== STALLING CONTROL SIGNAL
	wire STALL_TRUE;		// !!!!! When STALL_TRUE = 1, FREEZE PC, FREEZE IF/ID, CLEAR ID/EX
	
	
	// ============================== Exception Code
	wire [4:0] Exc_IFID, Exc_IDEX, Exc_EXMEM, ExcCode;
	wire PCException, OpcodeException, Overflow, OverflowException;
	wire [1:0] AddrException;
	wire [31:0] CP0_RD;
	wire [31:0] EPC;
	wire GOTO_HANDLER;
	
	// *********************** EXCEPTION HANDLING ***********************
	`define NOEXC 5'd0
	`define AdEL 5'd4
	`define AdES 5'd5
	`define RI 5'd10
	`define Ov 5'd12
	assign OverflowException = Overflow & ALUOverflowDect_IDEX;
	assign ExcCode = ((~AddrException[1]) ? Exc_EXMEM : ((~AddrException[0]) ? `AdEL : `AdES )); // Representing the ExcCode NOW IN IF_MEMWB !!!!



	// *********************** DATAPATH CONNECTION ***********************

	// ------------------------------ IF::	Instruction Fetch Unit: IR & PCp4
	
	Instruction_Fetcher IFU (GOTO_HANDLER, (ERET&(~STALL_TRUE)), __MF_EPC,  sign_imm32 - 1, addr26, __MF_PC_JRrs, PC_choice,     reset, clk, clk2, (STALL_TRUE),    IR_IFU, PCp4_IFU,     PCException);
			// !!!!! SignExt(offset-1): because this time using PC(after beq) + 4 + SignOffset == PC(beq) + 4 + 4 + SignOffset is wrong !!!!!
	
	// ============================== IF/ID
	
	IFID PPPPPPPPPP_ifid (IR_IFU, PCp4_IFU,
							(STALL_TRUE), clk, (reset | GOTO_HANDLER | (ERET&(~STALL_TRUE)) ) ,
							IR_IFID, PCp4_IFID,
							((~PCException) ? `NOEXC : `AdEL), Exc_IFID);
    
	// ------------------------------ ID::	Instruction Decoders
	assign imm16  = IR_IFID[15:0];
	assign addr26 = IR_IFID[25:0];
	assign rs = IR_IFID[25:21];
	assign rt = IR_IFID[20:16];
	assign rd = IR_IFID[15:11];
	// ------------------------------ ID::	Generate Control Signals
	Controller Ctrl (IR_IFID,
			MemtoReg, MemWrite, Branch, ALUControl, ALUSrc,  RegDst, RegWrite, Jump, Link, JR,
			ALUOverflowDect, CP0Write, ERET,
			OpcodeException);
	
	assign PC_choice = Jump ? 2'd2 : (JR ? (2'd3) : ((Branch!=3'b0) ? ( CMP ) : (2'd0) ) );
	// ------------------------------ ID::	16-to-32 Imm Extenders
	ImmCalc Imms (imm16,     sign_imm32, zero_imm32, lui_imm32);
	// ------------------------------ ID::	read Registers
	assign A1 = rs;
	assign A2 = rt;
	GRF Regs (A1, A2, A3, rWD,     clk, reset, RegWrite_MEMWB,     RD1, RD2, PCp4_MEMWB - 4);
	// ------------------------------ ID::	Comparator
	CMP comparator (__MF_CMP_A, __MF_CMP_B, Branch, CMP);

	
	// ============================== ID/EX
	IDEX PPPPPPPPPP_idex (((OpcodeException) ? 32'd0 : IR_IFID), M_IDEX_A3, A2, A1, RD2, RD1, sign_imm32, zero_imm32, lui_imm32, PCp4_IFID,   
							RegWrite, MemtoReg, MemWrite, ALUControl, ALUSrc,  Link, ALUOverflowDect, CP0Write,
							(STALL_TRUE), clk, (reset | GOTO_HANDLER),
							IR_IDEX, A3_IDEX, A2_IDEX, A1_IDEX, V2_IDEX, V1_IDEX, E32_IDEX_signed, E32_IDEX_zero, E32_IDEX_lui, PCp4_IDEX,
							RegWrite_IDEX, MemtoReg_IDEX, MemWrite_IDEX, ALUControl_IDEX, ALUSrc_IDEX,  Link_IDEX, ALUOverflowDect_IDEX, CP0Write_IDEX,
							((~OpcodeException) ? Exc_IFID : `RI), Exc_IDEX,
							(Jump | JR | ((Branch!=3'b0))), AWAY_IDEX );
							// Canceled "(Branch!=3'b0) & CMP", 'cause the update in Discussion !!!
	
	// specially for mtC0: don't need to pass ALU to get the newest V2.
	
	
	// ------------------------------ EX::	ALU
	assign A = __MF_ALU_A;
	assign B = M_ALU_B;
    ALU Alu (A, B, IR_IDEX[10:6],    ALUControl_IDEX,     ALUResult,     Overflow);



	// ============================== EX/MEM
	EXMEM PPPPPPPPPP_exmem (IR_IDEX, A3_IDEX, A2_IDEX, __MF_ALU_B, ALUResult, PCp4_IDEX,
							RegWrite_IDEX, MemtoReg_IDEX, MemWrite_IDEX, Link_IDEX, CP0Write_IDEX,
						    clk, (reset | GOTO_HANDLER),
							IR_EXMEM, A3_EXMEM, A2_EXMEM, V2_EXMEM, AO_EXMEM, PCp4_EXMEM,	// V2_EXMEM: newest rt.
							RegWrite_EXMEM, MemtoReg_EXMEM, MemWrite_EXMEM, Link_EXMEM, CP0Write_EXMEM,
							((~OverflowException) ? Exc_IDEX : `Ov), Exc_EXMEM,
							AWAY_IDEX, AWAY_EXMEM);

	// ------------------------------ MEM::	DataMemory
	assign Addr = AO_EXMEM;
	assign mWD = __MF_DM_WD;
	assign hitDM =    (Addr>=32'h00000000 & Addr<=32'h00002fff);
	wire [3:0] BitEnable_DM;
	wire [31:0] WORD_DMread, Adapted_mWD;
	
	MemCoder get_code (IR_EXMEM[31:26], memCode);
	BitEnable BEgen ((MemWrite_EXMEM & (~GOTO_HANDLER)), memCode, Addr[1:0],     BitEnable_DM);
	MemExceptionDetect DMXcp (Addr, memCode, AddrException);

	SaveMem StoringDataMem (mWD,         Addr[1:0], memCode,   Adapted_mWD);
	DM_BlockRAM Mems_IPcore (.clka(clk2), .wea(BitEnable_DM),   .addra(Addr[14:2]), .dina(Adapted_mWD),   .douta(WORD_DMread));
	LoadMem LoadingDataMem (WORD_DMread, Addr[1:0], memCode,   DMread);


	// ------------------------------ MEM::	DEVICES Virtual Memory
    assign CPU_Addr = Addr;
    assign CPU_WD = mWD;
    assign DEV_WE = (MemWrite_EXMEM & (~GOTO_HANDLER));

	
	// ------------------------------ MEM:: CP0 REGS
	assign nop_EXMEM = (PCp4_EXMEM == 0);
	assign nop_IDEX = (PCp4_IDEX == 0);
	wire [31:0] PCNowForCP0_int = (~nop_EXMEM) ? (PCp4_EXMEM-4) : ( (~nop_IDEX) ? (PCp4_IDEX-4) : (PCp4_IFID-4) );
	// HardWare STALL -> PCp4 == 0
	// Exception Don't Execute: NOP but PcP4!=0
	CP0 CP0 (IR_EXMEM[15:11], CP0_RD, IR_EXMEM[15:11], mWD,
			CP0Write_EXMEM, clk, reset, (IR_EXMEM==32'h42000018),
			AWAY_MEMWB,
			HWInt, ExcCode,
			( (ExcCode!=5'b00000) ? (PCp4_EXMEM-4) : (PCNowForCP0_int) ), EPC,
			GOTO_HANDLER);
			
			
	// =============================== MEM/WB
	MEMWB PPPPPPPPPP_memwb (IR_EXMEM, A3_EXMEM, AO_EXMEM, ( (IR_EXMEM[31:26]!=6'b010000) ? (hitDM ? DMread : CPU_RD) : (CP0_RD) ), PCp4_EXMEM,
							RegWrite_EXMEM, MemtoReg_EXMEM, Link_EXMEM,
	    					clk, (reset | GOTO_HANDLER),
							IR_MEMWB, A3_MEMWB, AO_MEMWB, DR_MEMWB, PCp4_MEMWB,
							RegWrite_MEMWB, MemtoReg_MEMWB, Link_MEMWB, 
							AWAY_EXMEM, AWAY_MEMWB);
							

	// ------------------------------ WB::	write Registers
	assign A3 = A3_MEMWB;
	assign rWD = M_wRF_WD;






	// *********************** MULTIPLEXER CONNECTION ***********************

	// ------------------------------ MUX_FORWARD: 0(original), 1(DR@MEM/WB), 2(AO@MEM/WB), 3(AO@EX/MEM),   4(PCp4_MEMWB+4), 5(PCp4_EXMEM+4), 6(PCp4_IDEX+4)
	assign __MF_ALU_A   = x_MF_ALU_A[2] ? (x_MF_ALU_A[1]   ? (PCp4_IDEX+4) : (x_MF_ALU_A[0]   ? PCp4_EXMEM+4 : PCp4_MEMWB+4))   :   (x_MF_ALU_A[1]   ? (x_MF_ALU_A[0]   ? AO_EXMEM : AO_MEMWB) : (x_MF_ALU_A[0]   ? DR_MEMWB : V1_IDEX));
	assign __MF_ALU_B   = x_MF_ALU_B[2] ? (x_MF_ALU_B[1]   ? (PCp4_IDEX+4) : (x_MF_ALU_B[0]   ? PCp4_EXMEM+4 : PCp4_MEMWB+4))   :   (x_MF_ALU_B[1]   ? (x_MF_ALU_B[0]   ? AO_EXMEM : AO_MEMWB) : (x_MF_ALU_B[0]   ? DR_MEMWB : V2_IDEX));
	assign __MF_CMP_A   = x_MF_CMP_A[2] ? (x_MF_CMP_A[1]   ? (PCp4_IDEX+4) : (x_MF_CMP_A[0]   ? PCp4_EXMEM+4 : PCp4_MEMWB+4))   :   (x_MF_CMP_A[1]   ? (x_MF_CMP_A[0]   ? AO_EXMEM : AO_MEMWB) : (x_MF_CMP_A[0]   ? DR_MEMWB : RD1));
	assign __MF_CMP_B   = x_MF_CMP_B[2] ? (x_MF_CMP_B[1]   ? (PCp4_IDEX+4) : (x_MF_CMP_B[0]   ? PCp4_EXMEM+4 : PCp4_MEMWB+4))   :   (x_MF_CMP_B[1]   ? (x_MF_CMP_B[0]   ? AO_EXMEM : AO_MEMWB) : (x_MF_CMP_B[0]   ? DR_MEMWB : RD2));
	assign __MF_PC_JRrs = x_MF_PC_JRrs[2] ? (x_MF_PC_JRrs[1]   ? (PCp4_IDEX+4) : (x_MF_PC_JRrs[0]   ? PCp4_EXMEM+4 : PCp4_MEMWB+4))   :   (x_MF_PC_JRrs[1]   ? (x_MF_PC_JRrs[0]   ? AO_EXMEM : AO_MEMWB) : (x_MF_PC_JRrs[0]   ? DR_MEMWB : RD1));
	assign __MF_DM_WD   = x_MF_DM_WD ? DR_MEMWB : V2_EXMEM;
	
	// ------------------------------ MUX_FORWARD FOR ERET: 0(EPC), 1(V2@EX/MEM), 2(__MF_ALU_B)
	assign __MF_EPC = x_MF_EPC[1] ? (__MF_ALU_B) : ( (x_MF_EPC[0]) ? (__MF_DM_WD) : EPC );




	// ------------------------------ MUX_NORMAL
	assign M_IDEX_A3 = {5{RegWrite}} & ((Link!=2'b01) ? (~RegDst ? rt : rd )             : 5'd31);		// 2'b00: no Link; 2'b01: Link to $31; 2'b10: Link to $rd !
	assign M_wRF_WD  = (Link_MEMWB==2'b00) ? (~MemtoReg_MEMWB ? AO_MEMWB : DR_MEMWB) : (PCp4_MEMWB+4);	// delay slot -> PC+8
	assign M_ALU_B   = ALUSrc_IDEX[1] ? (ALUSrc_IDEX[0] ? E32_IDEX_lui : E32_IDEX_zero) : (ALUSrc_IDEX[0] ? E32_IDEX_signed : __MF_ALU_B);
    
	
	// ******************** HAZARD CONTROLLER CONNECTION ********************

	Forward_Controller MF_mux_sig (IR_IFID, IR_IDEX, IR_EXMEM, IR_MEMWB,
									A1, A2, A1_IDEX, A2_IDEX, A2_EXMEM, 
									A3_IDEX, A3_EXMEM, A3_MEMWB,
									x_MF_ALU_A, x_MF_ALU_B, x_MF_CMP_A, x_MF_CMP_B, x_MF_PC_JRrs, x_MF_DM_WD, 
									x_MF_EPC);
	
	Stall_Detector StallOrNotNow (IR_IFID, IR_IDEX, IR_EXMEM, IR_MEMWB, A3_IDEX, A3_EXMEM, A3_MEMWB,    STALL_TRUE);

endmodule
