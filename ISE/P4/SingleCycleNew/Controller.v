`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: BUAA
// Engineer: Weilai Xiang
// 
// Create Date:    19:39:36 11/15/2018 
// Design Name:    Control Signal Generator
// Module Name:    Controller 
// Project Name:   Single Cycle MIPS
// Target Devices: 
// Tool versions: 
// Description:    Operation -> Signals
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Controller(
    input [5:0] opcode,
    input [5:0] funct,
    output  MemtoReg,
    output  MemWrite,
    output  Branch,
    output  [2:0] ALUControl,
    output  [1:0] ALUSrc,
    output  RegDst,
    output  RegWrite,
    output  Jump,
    output  Link,
	output  JR
    );
	reg [12:0] Signal;
    initial begin
        Signal <= 0;
    end
    assign {MemtoReg, MemWrite, Branch, ALUControl, ALUSrc, RegDst, RegWrite, Jump, Link, JR} = Signal;
    always@(*) begin
        case (opcode)
        6'b100011: begin // lw
            Signal <= {1'b1, 1'b0, 1'b0, 3'b010, 2'b01, 1'b0, 1'b1, 1'b0, 1'b0, 1'b0};
        end
        6'b101011: begin // sw
            Signal <= {1'b0, 1'b1, 1'b0, 3'b010, 2'b01, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0};
        end
        6'b000000: begin // R & jr
            if(funct==6'b001000) begin // special : jr
                Signal <= {1'b0, 1'b0, 1'b0, 3'b010, 2'b00, 1'b0, 1'b0, 1'b0, 1'b0, 1'b1};
            end
            else begin
                case (funct)
                6'b100001: begin // addu
                    Signal <= {1'b0, 1'b0, 1'b0, 3'b010, 2'b00, 1'b1, 1'b1, 1'b0, 1'b0, 1'b0};
                end
                6'b100011: begin // subu
                    Signal <= {1'b0, 1'b0, 1'b0, 3'b110, 2'b00, 1'b1, 1'b1, 1'b0, 1'b0, 1'b0};
                end
                6'b100100: begin // and
                    Signal <= {1'b0, 1'b0, 1'b0, 3'b000, 2'b00, 1'b1, 1'b1, 1'b0, 1'b0, 1'b0};
                end
                6'b100101: begin // or
                    Signal <= {1'b0, 1'b0, 1'b0, 3'b001, 2'b00, 1'b1, 1'b1, 1'b0, 1'b0, 1'b0};
                end
                6'b101010: begin // slt
                    Signal <= {1'b0, 1'b0, 1'b0, 3'b111, 2'b00, 1'b1, 1'b1, 1'b0, 1'b0, 1'b0};
                end
				6'b000000: begin // nop
                    Signal <= {1'b0, 1'b0, 1'b0, 3'b000, 2'b00, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0};
                end
                endcase
            end
        end
        6'b000100: begin // beq
            Signal <= {1'b0, 1'b0, 1'b1, 3'b110, 2'b00, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0};
        end
        6'b001101: begin // ori
            Signal <= {1'b0, 1'b0, 1'b0, 3'b001, 2'b10, 1'b0, 1'b1, 1'b0, 1'b0, 1'b0};
        end
        6'b001111: begin // lui
            Signal <= {1'b0, 1'b0, 1'b0, 3'b010, 2'b11, 1'b0, 1'b1, 1'b0, 1'b0, 1'b0};
        end
        6'b000010: begin // j
            Signal <= {1'b0, 1'b0, 1'b0, 3'b000, 2'b00, 1'b0, 1'b0, 1'b1, 1'b0, 1'b0};
        end
        6'b000011: begin // jal
            Signal <= {1'b0, 1'b0, 1'b0, 3'b000, 2'b00, 1'b0, 1'b1, 1'b1, 1'b1, 1'b0};
        end
        endcase
    end

endmodule
