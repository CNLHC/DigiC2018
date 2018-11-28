
module PureGateToFloat(
    input [3:0]  _D,
    output [3:0] F,
    output [1:0] P);
    wire high,low;
    wire tf30;
    and(tf30,_D[1], ~_D[2]);
    or(F[3],_D[0], _D[2], _D[3],tf30);

    wire tF20,tF21,tF22;
    and(tF20,_D[2], _D[3]);
    and(tF21,_D[0], _D[1], ~_D[3]);
    and(tF22,_D[1], _D[2]);
    or(F[2],tF20, tF21,tF22);
    
    wire  tF10,tF11;
    and(tF10,_D[1], _D[3]);
    and(tF11,_D[0], _D[2], ~_D[3]);
    or(F[1],tF10,tF11);

    and(F[0],_D[0], _D[3]);
    or(P[1],_D[2], _D[3]);
    wire tP00;
    and(tP00,_D[1], ~_D[2]);
    or(P[0],_D[3],tP00);
endmodule
    
    
module testPureGateToFloat();
    reg [3:0]  _D;
    wire [3:0] F;
    wire [1:0] P;
    PureGateToFloat U1(_D,F,P);
	 
    initial begin
        _D  = 4'b0101;
        #50 _D  = 4'b0111;
        #50 _D  = 4'b0011;
        #50 _D  = 4'b0001;
        #50 $stop;
    end
    


endmodule    
