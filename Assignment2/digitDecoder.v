`timescale 1ns / 1ps
`define tubeDigit0 8'b11111100
`define tubeDigit1 8'b00001100
`define tubeDigit2 8'b11011010
`define tubeDigit3 8'b11110010
`define tubeDigit4 8'b01100110
`define tubeDigit5 8'b10110110
`define tubeDigit6 8'b10111110
`define tubeDigit7 8'b11100000
`define tubeDigit8 8'b11111110
`define tubeDigit9 8'b11110110
`define tubeDigitA 8'b11101110
`define tubeDigitB 8'b00111110
`define tubeDigitC 8'b10011100
`define tubeDigitD 8'b01111010
`define tubeDigitE 8'b10011110
`define tubeDigitF 8'b10001110

module digitDecoder(
	input [3:0]data,
	output reg [7:0]HEX);
    always @(*) begin
        case(data)
            4'h0:HEX<=`tubeDigit0;
            4'h1:HEX<=`tubeDigit1;
            4'h2:HEX<=`tubeDigit2;
            4'h3:HEX<=`tubeDigit3;
            4'h4:HEX<=`tubeDigit4;
            4'h5:HEX<=`tubeDigit5;
            4'h6:HEX<=`tubeDigit6;
            4'h7:HEX<=`tubeDigit7;
            4'h8:HEX<=`tubeDigit8;
            4'h9:HEX<=`tubeDigit9;
            4'hA:HEX<=`tubeDigitA;
            4'hB:HEX<=`tubeDigitB;
            4'hC:HEX<=`tubeDigitC;
            4'hD:HEX<=`tubeDigitD;
            4'hE:HEX<=`tubeDigitE;
            4'hF:HEX<=`tubeDigitF;
        endcase
    end
endmodule
