`timescale 1ns / 1ps

module BitEnable(
    input GlobalEn,
    input [3:0] Memcode,
    input [1:0] Alower,
    output [3:0] BE_final
    );

	`define sw_  4'b0001
	`define sh_  4'b0110
	`define sb_  4'b0111

    reg [3:0] BE;
    assign BE_final = ( BE & ({4{GlobalEn}}) ) ;

    always@(*) begin
        case (Memcode)
            `sw_: BE = 4'b1111;          // 0~3
            `sh_: begin
                if(Alower==2'b00)       // 0~1
                    BE = 4'b0011;
                else                    // 2~3
                    BE = 4'b1100;
            end
            `sb_: begin
                if(Alower==2'b00)       // 0
                    BE = 4'b0001;
                else if(Alower==2'b01)  // 1
                    BE = 4'b0010;
                else if(Alower==2'b10)  // 2
                    BE = 4'b0100;
                else                    // 3
                    BE = 4'b1000;
            end
            default:
                BE = 4'b0000;
        endcase
    end


endmodule
