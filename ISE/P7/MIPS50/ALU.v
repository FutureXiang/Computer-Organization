`timescale 1ns / 1ps

module ALU(
    input [31:0] A,
    input [31:0] B,
	input [4:0] shamt,
    input [3:0] ALUControl,
    output reg [31:0] Result,
	
	output OverflowException
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
	
    
    wire [32:0] temp1 = ({A[31], A}) + ({B[31], B});
	wire [32:0] temp2 = ({A[31], A}) - ({B[31], B});
	assign OverflowException = ( (ALUControl==`ADD) & (temp1[32]!=temp1[31]) ) | ( (ALUControl==`SUB) & (temp2[32]!=temp2[31]) );
	

	always @(A, B, shamt, ALUControl, temp1, temp2) begin
        case (ALUControl)

        `ADD : begin
                Result = A + B;
            end
        `SUB : begin
                Result = A - B;
            end

        `AND : begin
                Result = A & B;
            end
        `OR  : begin
                Result = A | B;
            end
        `XOR  : begin
                Result = A ^ B;
            end
        `NOR  : begin
                Result = ~(A | B);
            end

        `SLT : begin
                Result = ($signed(A) < $signed(B));
            end
        `SLTU : begin
                Result = ({1'b0, A} < {1'b0, B});
            end
        
        `SLL : begin
                Result = (B << shamt);
            end
        `SRL : begin
                Result = (B >> shamt);
            end
        `SRA : begin
                Result = ($signed(B) >>> $signed(shamt));
            end
        `SLLV : begin
                Result = (B << A[4:0]);
            end
        `SRLV : begin
                Result = (B >> A[4:0]);
            end
        `SRAV : begin
                Result = ($signed(B) >>> $signed(A[4:0]));
            end
        endcase
    end

endmodule
