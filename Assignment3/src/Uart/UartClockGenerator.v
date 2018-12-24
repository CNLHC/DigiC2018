`define TOGGLE_DIVIDER_COEF ((((SYS_CLK_SPEED/BAUD_RATE)-2)/2))


module UartClockGenerator #(
    parameter BAUD_RATE=9600,
    parameter SYS_CLK_SPEED=50000000
)(
    input sysClk,
    input sysRst,
    output reg dividedClock
);
reg [63:0]dividerCounter;
always @(posedge sysClk or posedge sysRst) begin
    if(sysRst) begin
        dividerCounter<=0;
        dividedClock<=0;
    end
    else begin
        if(dividerCounter<`TOGGLE_DIVIDER_COEF)begin
            dividerCounter<=dividerCounter+1;
        end
        else begin
            dividerCounter<=0;
            dividedClock<=~dividedClock;
        end
    end
end



endmodule

