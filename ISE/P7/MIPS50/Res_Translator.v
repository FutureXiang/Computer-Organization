`timescale 1ns / 1ps

module Res_Translator(
    input [31:0] IDEX,
    input [31:0] EXMEM,
    input [31:0] MEMWB,
    output reg [1:0] Res_IDEX,
    output reg [1:0] Res_EXMEM,
    output reg [1:0] Res_MEMWB
    );

	`define ALU 2'b01
	`define DM 2'b10
	`define PC 2'b11
	`define NW 2'b00
	

	// Load	Memory
	`define LB 32
	`define LBU 36
	`define LH 33
	`define LHU 37	
	`define LW 35

	// R : Calc R  +  NoCalc
	`define R 0
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
	
	// CP0
	`define CP0 16
	`define MF 0
	

	// Fields
	`define OP 31:26
	`define FUNCT 5:0
	`define MC0 25:21
	
	

	always@(*) begin
		case(IDEX[`OP])

			// Calc R + Move From HI/LO
			`R:   begin
				if(IDEX[`FUNCT]!=`JR_funct   && IDEX[`FUNCT]!=`JALR_funct 
				  && IDEX[`FUNCT]!=`MTHI_funct && IDEX[`FUNCT]!=`MTLO_funct
				  && IDEX[`FUNCT]!=`MULT_funct && IDEX[`FUNCT]!=`MULTU_funct && IDEX[`FUNCT]!=`DIV_funct  && IDEX[`FUNCT]!=`DIVU_funct) Res_IDEX<= `ALU;
				// jalr: link
				if(IDEX[`FUNCT]==`JALR_funct) Res_IDEX<= `PC;
			end

			// Calc I
			`ADDI:  Res_IDEX<= `ALU;
			`ADDIU: Res_IDEX<= `ALU;
			`ANDI:  Res_IDEX<= `ALU;
			`ORI:   Res_IDEX<= `ALU;
			`XORI:  Res_IDEX<= `ALU;
			`LUI:   Res_IDEX<= `ALU;
			`SLTI:  Res_IDEX<= `ALU;
			`SLTIU: Res_IDEX<= `ALU;

			// Load From DM / DEV / CP0
			`LB:   Res_IDEX<= `DM;
			`LBU:  Res_IDEX<= `DM;
			`LH:   Res_IDEX<= `DM;
			`LHU:  Res_IDEX<= `DM;
			`LW:   Res_IDEX<= `DM;
			`CP0: if(IDEX[`MC0] == `MF) Res_IDEX<= `DM;

			// Link
			`JAL:  Res_IDEX<= `PC;

			default: Res_IDEX<= `NW;
		endcase
	end
	
	always@(*) begin
		case(EXMEM[`OP])

			// Calc R
			`R: begin
			  	if(EXMEM[`FUNCT]!=`JR_funct   && EXMEM[`FUNCT]!=`JALR_funct 
				  && EXMEM[`FUNCT]!=`MTHI_funct && EXMEM[`FUNCT]!=`MTLO_funct
				  && EXMEM[`FUNCT]!=`MULT_funct && EXMEM[`FUNCT]!=`MULTU_funct && EXMEM[`FUNCT]!=`DIV_funct  && EXMEM[`FUNCT]!=`DIVU_funct) Res_EXMEM<= `ALU;
				// jalr: link
				if(EXMEM[`FUNCT]==`JALR_funct) Res_EXMEM<= `PC;
			end

			// Calc I
			`ADDI:  Res_EXMEM<= `ALU;
			`ADDIU: Res_EXMEM<= `ALU;
			`ANDI:  Res_EXMEM<= `ALU;
			`ORI:   Res_EXMEM<= `ALU;
			`XORI:  Res_EXMEM<= `ALU;
			`LUI:   Res_EXMEM<= `ALU;
			`SLTI:  Res_EXMEM<= `ALU;
			`SLTIU: Res_EXMEM<= `ALU;

			// Load From DM / DEV / CP0
			`LB:   Res_EXMEM<= `DM;
			`LBU:  Res_EXMEM<= `DM;
			`LH:   Res_EXMEM<= `DM;
			`LHU:  Res_EXMEM<= `DM;
			`LW:   Res_EXMEM<= `DM;
			`CP0: if(EXMEM[`MC0] == `MF) Res_EXMEM<= `DM;

			// Link
			`JAL:  Res_EXMEM<= `PC;

			default: Res_EXMEM<= `NW;
		endcase
	end

	always@(*) begin
		case(MEMWB[`OP])

			// Calc R
			`R: begin
				if(MEMWB[`FUNCT]!=`JR_funct   && MEMWB[`FUNCT]!=`JALR_funct 
				  && MEMWB[`FUNCT]!=`MTHI_funct && MEMWB[`FUNCT]!=`MTLO_funct
				  && MEMWB[`FUNCT]!=`MULT_funct && MEMWB[`FUNCT]!=`MULTU_funct && MEMWB[`FUNCT]!=`DIV_funct  && MEMWB[`FUNCT]!=`DIVU_funct) Res_MEMWB<= `ALU;
				  // jalr: link
				if(MEMWB[`FUNCT]==`JALR_funct) Res_MEMWB<= `PC;
			end

			// Calc I
			`ADDI:  Res_MEMWB<= `ALU;
			`ADDIU: Res_MEMWB<= `ALU;
			`ANDI:  Res_MEMWB<= `ALU;
			`ORI:   Res_MEMWB<= `ALU;
			`XORI:  Res_MEMWB<= `ALU;
			`LUI:   Res_MEMWB<= `ALU;
			`SLTI:  Res_MEMWB<= `ALU;
			`SLTIU: Res_MEMWB<= `ALU;

			// Load From DM / DEV / CP0
			`LB:   Res_MEMWB<= `DM;
			`LBU:  Res_MEMWB<= `DM;
			`LH:   Res_MEMWB<= `DM;
			`LHU:  Res_MEMWB<= `DM;
			`LW:   Res_MEMWB<= `DM;
			`CP0: if(MEMWB[`MC0] == `MF) Res_MEMWB<= `DM;

			// Link
			`JAL:  Res_MEMWB<= `PC;

			default: Res_MEMWB<= `NW;
		endcase
	end

endmodule
