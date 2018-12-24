
`timescale 1us/1ns
module carry101Counter(
    input sysClk,
    input sysRst,
    output [6:0]counter
);
    wire resetSignal;
    wire carry101Out;
    DCounter #(7) U1 (
        .sysClk(sysClk),
        .rst(resetSignal),
        .counter(counter));

    and#(0.1)(carry101Out,counter[6],counter[5],~counter[4],~counter[3],counter[2],~counter[1],counter[0]);
    or(resetSignal,carry101Out,sysRst);

endmodule
module testCarry101Counter();


    reg sysClk;
    reg sysRst;
    reg [5:0]  version;
    wire [6:0] counter;
    carry101Counter U1(sysClk,sysRst,counter); 
    initial begin
        version=4;
        sysClk=0;
        sysRst=1;
        #1
        sysRst=0;
        #30 sysRst=1;
        #15 sysRst=0;
        #3600 
        $stop;
    end
    always begin
        #5
        sysClk= ~sysClk;
    end
    always begin
        #1536
        sysRst<= ~sysRst;
        #1
        sysRst<= ~sysRst;
    end
endmodule


