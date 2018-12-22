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
	
	
	`define LW 35
	`define SW 43
	`define R 0
	`define JR_funct 8
	`define ORI 13
	`define LUI 15
	`define ANDI 12
	
	`define JAL 3
	`define BEQ 4
	
	`define CP0 16
	`define MF 0
	`define MT 4
	
	`define OP 31:26
	`define FUNCT 5:0
	
	`define MC0 25:21
	

	always@(*) begin
		case(IDEX[`OP])
			`R:   if(IDEX[`FUNCT]!=`JR_funct) Res_IDEX<= `ALU;
			`ANDI: Res_IDEX<= `ALU;
			`ORI: Res_IDEX<= `ALU;
			`LUI: Res_IDEX<= `ALU;
			`LW:  Res_IDEX<= `DM;
			`CP0: if(IDEX[`MC0] == `MF) Res_IDEX<= `DM;
			`JAL: Res_IDEX<= `PC;
			default: Res_IDEX<= `NW;
		endcase
	end
	
	always@(*) begin
		case(EXMEM[`OP])
			`R:   if(EXMEM[`FUNCT]!=`JR_funct) Res_EXMEM<= `ALU;
			`ANDI: Res_EXMEM<= `ALU;
			`ORI: Res_EXMEM<= `ALU;
			`LUI: Res_EXMEM<= `ALU;
			`LW:  Res_EXMEM<= `DM;
			`CP0: if(EXMEM[`MC0] == `MF) Res_EXMEM<= `DM;
			`JAL: Res_EXMEM<= `PC;
			default: Res_EXMEM<= `NW;
		endcase
	end
	
	always@(*) begin
		case(MEMWB[`OP])
			`R:   if(MEMWB[`FUNCT]!=`JR_funct) Res_MEMWB<= `ALU;
			`ANDI: Res_MEMWB<= `ALU;
			`ORI: Res_MEMWB<= `ALU;
			`LUI: Res_MEMWB<= `ALU;
			`LW:  Res_MEMWB<= `DM;
			`CP0: if(MEMWB[`MC0] == `MF) Res_MEMWB<= `DM;
			`JAL: Res_MEMWB<= `PC;
			default: Res_MEMWB<= `NW;
		endcase
	end


endmodule
