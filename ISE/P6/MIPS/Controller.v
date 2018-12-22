`timescale 1ns / 1ps
`include "Instructions.v"

module Controller(
    input   [31:0] instr,
    output  MemtoReg,
    output  MemWrite,
    output  Branch,
    output  [2:0] ALUControl,
    output  [1:0] ALUSrc,
    output  RegDst,
    output  RegWrite,
    output  Jump,
    output  Link,
	output  JR,
	
	output  OverflowDect,
	output  CP0Write,
	output  ERET,
	
	output OpcodeException
    );
	
	
	wire [5:0] opcode = instr[31:26];
	wire [5:0] funct = instr[5:0];
	
	assign OpcodeException =  ~(`addu | `subu | `add | `sub | `ori | `lui |
                                `lw   | `sw   | `beq |  `j  | `jal | `jr  |
                                `eret | `mfc0 | `mtc0| `nop | `and | `andi);
	
	reg [15:0] Signal;
    initial begin
        Signal <= 0;
    end
    assign {MemtoReg, MemWrite, Branch, ALUControl, ALUSrc, RegDst, RegWrite, Jump, Link, JR,   OverflowDect, CP0Write, ERET} = Signal;
	
    always@(*) begin
        case (opcode)
        6'b100011: begin // lw
            Signal <= {1'b1, 1'b0, 1'b0, 3'b010, 2'b01, 1'b0, 1'b1, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0};
        end
        6'b101011: begin // sw
            Signal <= {1'b0, 1'b1, 1'b0, 3'b010, 2'b01, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0};
        end
        6'b000000: begin // R & jr
            if(funct==6'b001000) begin // special : jr
                Signal <= {1'b0, 1'b0, 1'b0, 3'b010, 2'b00, 1'b0, 1'b0, 1'b0, 1'b0, 1'b1, 1'b0, 1'b0, 1'b0};
            end
            else begin
                case (funct)
                6'b100001: begin // addu
                    Signal <= {1'b0, 1'b0, 1'b0, 3'b010, 2'b00, 1'b1, 1'b1, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0};
                end
                6'b100011: begin // subu
                    Signal <= {1'b0, 1'b0, 1'b0, 3'b110, 2'b00, 1'b1, 1'b1, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0};
                end
				6'b100000: begin // ADD
                    Signal <= {1'b0, 1'b0, 1'b0, 3'b010, 2'b00, 1'b1, 1'b1, 1'b0, 1'b0, 1'b0, 1'b1, 1'b0, 1'b0};
                end
                6'b100010: begin // SUB
                    Signal <= {1'b0, 1'b0, 1'b0, 3'b110, 2'b00, 1'b1, 1'b1, 1'b0, 1'b0, 1'b0, 1'b1, 1'b0, 1'b0};
                end
				6'b100100: begin // AND
                    Signal <= {1'b0, 1'b0, 1'b0, 3'b000, 2'b00, 1'b1, 1'b1, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0};
                end

				default: begin // nop
                    Signal <= {1'b0, 1'b0, 1'b0, 3'b000, 2'b00, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0};
                end
                endcase
            end
        end
        6'b000100: begin // beq
            Signal <= {1'b0, 1'b0, 1'b1, 3'b110, 2'b00, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0};
        end
        6'b001101: begin // ori
            Signal <= {1'b0, 1'b0, 1'b0, 3'b001, 2'b10, 1'b0, 1'b1, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0};
        end
		6'b001100: begin // andi
            Signal <= {1'b0, 1'b0, 1'b0, 3'b000, 2'b10, 1'b0, 1'b1, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0};
        end
        6'b001111: begin // lui
            Signal <= {1'b0, 1'b0, 1'b0, 3'b001, 2'b11, 1'b0, 1'b1, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0};
        end
        6'b000010: begin // j
            Signal <= {1'b0, 1'b0, 1'b0, 3'b000, 2'b00, 1'b0, 1'b0, 1'b1, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0};
        end
        6'b000011: begin // jal
            Signal <= {1'b0, 1'b0, 1'b0, 3'b000, 2'b00, 1'b0, 1'b1, 1'b1, 1'b1, 1'b0, 1'b0, 1'b0, 1'b0};
        end
		
		6'b010000: begin // CoProcessor 0
            if(funct==6'b011000)				// ERET: PC <= EPC, ERET
				Signal <= {1'b0, 1'b0, 1'b0, 3'b000, 2'b00, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b1};
			else begin
				if(instr[25:21]==5'b00000)		// MFC0: GRF[rt] <= CP0[rd], RegWrite, MemtoReg !
					Signal <= {1'b1, 1'b0, 1'b0, 3'b000, 2'b00, 1'b0, 1'b1, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0};
				else if(instr[25:21]==5'b00100)	// MTC0: CP0[rd] <= GRF[rt], CP0Write
					Signal <= {1'b0, 1'b0, 1'b0, 3'b000, 2'b00, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b1, 1'b0};
			end
        end
        
		default: 
			Signal <= {1'b0, 1'b0, 1'b0, 3'b000, 2'b00, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0};
			
		endcase
    end

endmodule
