
`timescale 1us/1us
module DCounter#(
    parameter COUNTER_BIT=4
)(
	input sysClk,
	input rst,
    output [COUNTER_BIT-1:0]counter
);
    DFF D1(
        .C(sysClk), 
        ._CLR(~rst),
        .D(~counter[0]),
        .Q(counter[0])
    );
    generate 
        genvar i;
        for (i=1;i<COUNTER_BIT;i=i+1)begin : DFlipArray
            DFF U1(
                .C(~counter[i-1]), 
                ._CLR(~rst),
                .Q(counter[i]), 
                .D(~counter[i])
            );
        end
    endgenerate
endmodule


module testDCounter();
    reg sysClk;
    reg sysRst;
    reg [5:0]  version;
    wire [7:0] counter;
    DCounter#(8)U1(sysClk,sysRst,counter); 
    initial begin
        version=3;
        sysClk=0;
        sysRst=1;
        #1
        sysRst=0;
        #30 sysRst=1;
        #15 sysRst=0;
    end
    always begin
        #5
        sysClk= ~sysClk;
    end
endmodule

