module GateToFloat(
    input [3:0]  _D,
    output [3:0] F,
    output [1:0] P);
    wire high,low;
    power U0(high,low);
    wire [2:0]_P;
    wire [3:0]D;
    not(D[0],_D[0]);
    not(D[1],_D[1]);
    not(D[2],_D[2]);
    not(D[3],_D[3]);
    not(P[0],_P[0]);
    not(P[1],_P[1]);

    Gate148 U1(
        ._S(low),
        ._I({high,high,high,high,D[3],D[2],D[1],low}),
        .Y(_P));

    Gate153 U2(
        ._S1(low),
        ._S2(low),
        .D1(_D),
        .D2({_D[2],_D[1],_D[0],low}),
        .Y1(F[3]),
        .Y2(F[2]),
        .A(P)
    );
    Gate153 U3(
        ._S1(low),
        ._S2(low),
        .D1({_D[1],_D[0],low,low}),
        .D2({_D[0],low,low,low}),
        .Y1(F[1]),
        .Y2(F[0]),
        .A(P)
    );
endmodule
    
    
module testToFloat();
    reg [3:0]  _D;
    wire [3:0] F;
    wire [1:0] P;
    GateToFloat U1(_D,F,P);
	 
    initial begin
        _D  = 4'b0101;
        #50 _D  = 4'b0111;
        #50 _D  = 4'b0011;
        #50 _D  = 4'b0001;
        #50 $stop;
    end
    


endmodule    
