`define REAL_TOGGLE_DIVIDER_COEF (Period*100000/2)


module RealClockGenerator #(
    parameter Period=1000,
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
        if(dividerCounter<`REAL_TOGGLE_DIVIDER_COEF)begin
            dividerCounter<=dividerCounter+1;
        end
        else begin
            dividerCounter<=0;
            dividedClock<=~dividedClock;
        end
    end
end

endmodule

