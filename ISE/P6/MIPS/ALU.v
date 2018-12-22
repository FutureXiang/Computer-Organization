`timescale 1ns / 1ps

module ALU(
    input [31:0] A,
    input [31:0] B,
    input [2:0] ALUControl,
    output reg [31:0] Result,
	
	output OverflowException
    );
	
	wire [32:0] temp1 = ({A[31], A}) + ({B[31], B});
	wire [32:0] temp2 = ({A[31], A}) - ({B[31], B});
	assign OverflowException = ( (ALUControl==3'b010) & (temp1[32]!=temp1[31]) ) | ( (ALUControl==3'b110) & (temp2[32]!=temp2[31]) );
	
	always @(A, B, ALUControl, temp1, temp2) begin
        case (ALUControl)
        3'b000 : begin      // and = 0
                Result = A & B;
            end
        3'b001 : begin      // or = 1
                Result = A | B;
            end
        3'b010 : begin      // addu = 2
                Result = A + B;
            end
        3'b110 : begin      // subu = 6
                Result = A - B;
            end
        3'b111 : begin      // slt = 7
                Result = (A < B);
            end

        endcase
    end

endmodule
