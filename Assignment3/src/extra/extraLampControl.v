module extraLampControl(
    input trigger,
    input sysRst,
    output [9:0]counter,
    output reg [25:0]lamb);

//wire clockMod;
//CPartClockGenerator U1(
//    .sysClk(trigger),
//    .sysRst(sysRst),
//    .clkMod(clockMod)
//);
wire [9:0]PROMAddr;

BPartCounter U2(
    .trigger(trigger),
    .SysRst(sysRst),
    .address(PROMAddr)
);
wire [15:0]SEGdata;


lamp100Prom U3(
    .address(PROMAddr),
    .data(SEGdata)
);
reg isReset;
always @(posedge trigger or posedge sysRst)begin
    if(sysRst)begin
        isReset=1;
    end
    else begin
        if (isReset) begin
            lamb={PROMAddr,16'b0};
            isReset = 0;
        end
        else
            lamb={PROMAddr,SEGdata};
    end
end



endmodule



