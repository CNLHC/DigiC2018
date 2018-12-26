module JK(
    input J,
    input K,
    input C, 
    input R,
    output reg Q);
always @(posedge C or posedge R)begin
    if(R)
        Q<=0;
    else
        case({J,K})
            2'b00:Q<=Q;
            2'b01:Q<=1'b0;
            2'b10:Q<=1'b1;
            2'b11:Q<=~Q;
        endcase
end


endmodule
