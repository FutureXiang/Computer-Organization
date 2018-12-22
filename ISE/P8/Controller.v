`timescale 1ns / 1ps
`include "Instructions.v"

module Controller(
    input   [31:0] instr,
    output  MemtoReg,
    output  MemWrite,
    output  [2:0] Branch,
    output  [3:0] ALUControl,
    output  [1:0] ALUSrc,
    output  RegDst,
    output  RegWrite,
    output  Jump,
    output  [1:0] Link,
	output  JR,
	
	output  OverflowDect,
	output  CP0Write,
	output  ERET,
	
	output OpcodeException
    );
	

    // ALUControl
    `define ADD 4'd0
    `define SUB 4'd1

    `define AND 4'd2
    `define OR  4'd3
    `define XOR 4'd4
    `define NOR 4'd5

    `define SLT 4'd6
    `define SLTU 4'd7

    `define SLL 4'd8
    `define SRL 4'd9
    `define SRA 4'd10
    `define SLLV 4'd11
    `define SRLV 4'd12
    `define SRAV 4'd13
	
	wire [5:0] opcode = instr[31:26];
	wire [5:0] funct = instr[5:0];
	
	assign OpcodeException =  ~(`lb | `lbu | `lh | `lhu | `lw | `sb | `sh | `sw
                              | `add | `addu | `sub | `subu | `mult | `multu | `div | `divu | `sll | `srl | `sra | `sllv | `srlv | `srav | `and | `or | `xor | `nor | `slt | `sltu
                              | `addi | `addiu | `andi | `ori | `xori | `lui | `slti | `sltiu
                              | `beq | `bne | `blez | `bgtz | `bltz | `bgez
                              | `j | `jal | `jalr | `jr
                              | `mfhi | `mflo | `mthi | `mtlo 
                              | `mfc0 | `mtc0 | `eret);
	
    
    assign MemtoReg = (`lw | `lb | `lbu | `lh | `lhu | `mfc0);
    assign MemWrite = (`sw | `sb | `sh);
    assign Branch = (`beq) ? 3'd1 : ( (`bne) ? 3'd2 : ( (`blez) ? 3'd3 : ( (`bgtz) ? 3'd4 : ( (`bltz) ? 3'd5 : ( (`bgez) ? 3'd6 : 3'd0) ) ) ) );
    assign ALUControl = ( (`lw | `lb | `lbu | `lh | `lhu | `sw | `sb | `sh | `add | `addu | `addi | `addiu) ? `ADD :
                        ( (`sub | `subu) ? `SUB :
                        ( (`and | `andi) ? `AND :
                        ( (`or | `ori | `lui) ? `OR  :    // lui !
                        ( (`xor | `xori) ? `XOR  :
                        ( (`nor) ? `NOR  :
                        ( (`slt | `slti) ? `SLT  :
                        ( (`sltu | `sltiu) ? `SLTU  :
                        ( (`sll) ? `SLL  :
                        ( (`srl) ? `SRL  :
                        ( (`sra) ? `SRA  :
                        ( (`sllv) ? `SLLV  :
                        ( (`srlv) ? `SRLV  :
                        ( (`srav) ? `SRAV  : `AND) ) ) ) ) ) ) ) ) ) ) ) ) );
    assign ALUSrc =( (`lw | `lb | `lbu | `lh | `lhu | `sw | `sb | `sh | `addi | `addiu | `slti | `sltiu) ? 2'b01 :
                   ( (`andi | `ori | `xori) ? 2'b10 : 
                   ( (`lui) ? 2'b11 : 2'b00 ) ) );
    assign RegDst = ( (`lw | `lb | `lbu | `lh | `lhu | `addi | `addiu | `andi | `ori | `xori | `lui | `slti | `sltiu | `mfc0 ) ? 1'b0 : 1'b1 );
    assign RegWrite = ~ (`sb | `sh | `sw | `mult | `multu | `div | `divu | `beq | `bne | `blez | `bgtz | `bltz | `bgez | `j | `jr | `mthi | `mtlo | `mtc0 | `eret | `nop);
    assign Jump = (`j | `jal);  // Jump means Jumping by Addr26 Immediate !
    assign Link = (`jal) ? 2'b01 : ( (`jalr) ? 2'b10 : 2'b00 );       // 00: no Link; 01: Link to $31; 10: Link to $rd !
    assign JR = (`jr | `jalr);  // JR   means Jumping by Register Value (GRF[rs]) !
    assign OverflowDect = (`add | `sub | `addi);
    assign CP0Write = (`mtc0);
    assign ERET = (`eret);
    
endmodule
