module clockGenerator(
    input sysClk,
    input sysRst,
    input togglePause,
    input manualClk,
    input [1:0] dividerCoeff,
    output reg tiktok
);
    reg paused;
    reg [63:0]dividerCounter;
    reg [63:0]dividerSup;
    
    always @(posedge sysClk or posedge sysRst) begin
        if(sysRst)begin
            dividerCounter<=0;
        end
        else begin
            if(!paused)begin
                case(dividerCoeff)
                    2'b00:dividerSup<=10000000;
                    2'b01:dividerSup<=5000000;
                    2'b10:dividerSup<=2500000;
                    2'b11:tiktok<=manualClk;
                endcase
                dividerCounter<=dividerCounter+1;
                
                if(dividerCounter>dividerSup)begin
                    dividerCounter<=0;
                    if(dividerCoeff!=2'b11)
                        tiktok<=~tiktok;
                end
            end
        end
    end
    always @ (posedge togglePause) begin
        paused<=~paused;
    end
endmodule

