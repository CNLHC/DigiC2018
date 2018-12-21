module carry6Counter(
    input sysClk,
    input sysRst,
    output [2:0]counter
);
    wire resetSignal;
    wire carry6Out;
    DCounter #(3) U1 (
        .sysClk(sysClk),
        .rst(resetSignal),
        .counter(counter));

    and(carry6Out,counter[2],counter[1],~counter[0]);
    or(resetSignal,carry6Out,sysRst);

endmodule

module testCarry6Counter();
    reg sysClk;
    reg sysRst;
    reg [5:0]  version;
    wire [2:0] counter;
    carry6Counter#(8)U1(sysClk,sysRst,counter); 
    initial begin
        version=4;
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


