`timescale 1ns / 1ps
module condMux(
    input [3:0]data,
    output reg [1:0]selOut);
always @(data) begin
    if(data[0]) begin 
        selOut<=2'b10;
    end
    else begin 
        selOut<=2'b01;
    end
end

endmodule

module testCondMux();
    reg [3:0]data;
    wire [0:1]selOut;
    condMux U2(.data(data),
        .selOut(selOut));
    initial begin
        data=0;
        #5 data=data+1;
        #5 data=data+1;
        #5 data=data+1;
        #5 data=data+1;
        #5 data=data+1;
        #5 data=data+1;
        #5 data=data+1;
        #5 data=data+1;
        #5 data=data+1;
    end
endmodule





