`timescale 1us/10ns
module CPartClockGenerator( 
    input sysClk,
    input sysRst,
    output wire clkMod
);
    wire [3:0]innerCounter;
    DCounter C1(
        sysClk,
        sysRst,
        innerCounter
    );
   
    

    //====================Truthtable Variable:0====================
    wire tU0U10Out;
    wire tU0U00Out;
    wire tU0U11Out;
    wire tU0U12Out;
    or#(1) U0U00(tU0U00Out,tU0U10Out,tU0U11Out,tU0U12Out);
    and U0U10(tU0U10Out,~innerCounter[0],~innerCounter[3]);
    and U0U11(tU0U11Out,~innerCounter[0],~innerCounter[1]);
    and U0U12(tU0U12Out,~innerCounter[0],~innerCounter[2]);

    assign clkMod=tU0U00Out;

    

   // always @(*) begin
   //     case(innerCounter)
   //         0: clkMod=1;
   //         1: clkMod=0;
   //         2: clkMod=1;
   //         3: clkMod=0;
   //         4: clkMod=1;
   //         5: clkMod=0;
   //         6: clkMod=1;
   //         7: clkMod=0;
   //         8: clkMod=1;
   //         9: clkMod=0;
   //         10: clkMod=1;
   //         11: clkMod=0;
   //         12: clkMod=1;
   //         13: clkMod=0;
   //         14: clkMod=0;
   //         15: clkMod=0;
   //         default: clkMod =0;

   //     endcase
   // end
endmodule

module testCPart();
    reg sysClk;
    reg sysRst;
    wire clkMod;
    CPartClockGenerator U1(sysClk,sysRst,clkMod);
    initial begin
        sysClk=1;
        sysRst=1;
        #4
        sysRst = 0;
    end 
    always begin
        #5 sysClk = ~sysClk;
    end 
endmodule


