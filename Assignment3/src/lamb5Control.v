module lamb5Control(
    input trigger,
    input sysRst,
    output wire [4:0]lamb,
    output wire [2:0]counter
);
carry6Counter c6cU1( 
    .sysClk(trigger),
    .sysRst(sysRst),
    .counter(counter)
);
//====================Truthtable Inst:0====================
wire tU0U00Out;
wire tU0U10Out;
or U0U00(tU0U00Out,counter[1],counter[2],tU0U10Out);
and U0U10(tU0U10Out,counter[0],~counter[1],~counter[2]);

//====================Truthtable Inst:1====================
wire tU1U00Out;
and U1U00(tU1U00Out,counter[0],~counter[1],~counter[2]);

//====================Truthtable Inst:2====================
wire tU2U00Out;
wire tU2U11Out;
wire tU2U10Out;
or U2U00(tU2U00Out,tU2U10Out,tU2U11Out);
and U2U10(tU2U10Out,~counter[0],counter[1]);
and U2U11(tU2U11Out,counter[0],~counter[1],~counter[2]);

//====================Truthtable Inst:3====================
wire tU3U00Out;
wire tU3U10Out;
or U3U00(tU3U00Out,counter[2],tU3U10Out);
and U3U10(tU3U10Out,counter[0],~counter[1],~counter[2]);

//====================Truthtable Inst:4====================
wire tU4U00Out;
wire tU4U10Out;
wire tU4U11Out;
or U4U00(tU4U00Out,counter[1],tU4U10Out,tU4U11Out);
and U4U10(tU4U10Out,~counter[0],counter[2]);
and U4U11(tU4U11Out,counter[0],~counter[1],~counter[2]);
assign lamb = {tU0U00Out,tU1U00Out,tU2U00Out,tU3U00Out,tU4U00Out};

endmodule

module testlamb5Control();
    reg trigger;
    reg sysRst;
    wire [4:0] lamb;
    wire [2:0] counter;
    
    lamb5Control U1(
        trigger,
        sysRst,
        lamb,
        counter
    );
    initial begin
        sysRst<=1;
        trigger<=0;
        #5 sysRst<=0;
    end
    always begin
        #5
        trigger<=~trigger;
    end


endmodule

