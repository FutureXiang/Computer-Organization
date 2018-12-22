`timescale 1ns / 1ps

module ALU(
    input [31:0] A,
    input [31:0] B,
    input [2:0] ALUControl,
    output reg [31:0] Result
    );
	always @(A, B, ALUControl) begin
        case (ALUControl)
        3'b000 : begin      // and, andi
                Result = A & B;
            end
        3'b001 : begin      // or, ori
                Result = A | B;
            end
        3'b010 : begin      // addu
                Result = A + B;
            end
        3'b110 : begin      // subu
                Result = A - B;
            end
        3'b111 : begin      // slt
                Result = (A < B);
            end
        3'b110 : begin      // lui
                Result = B ;
            end

        endcase
    end

endmodule
