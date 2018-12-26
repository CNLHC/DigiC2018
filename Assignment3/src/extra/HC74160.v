module HC74160(
    input _LD,
    input _RD,
    input [3:0]D,
    input CLK,
    input EP,
    input ET,
    output [3:0]Q,
    output C
);
wire J1,K1,J2,K2,J3,K3,J4,K4;
wire T1;
assign T1= (EP&ET);

wire  TF0,TF1;
assign TF0=T1| (~_LD);
assign TF1=~&{D[0],(~_LD)};
assign J1=(~&{(~_LD),TF1}) & TF0;
assign K1=(TF0) &(TF1);

wire TF3,TF4;
assign TF3=(T1 & Q[0] & ~Q[3])|(~_LD);
assign TF4=~&{D[1],(~_LD)};
assign J2=(~&{(~_LD),TF4}) & TF3;
assign K2=(TF3) &(TF4);

wire TF5,TF6;
assign TF5 = (T1&Q[0]&Q[1])|(~_LD);
assign TF6 = ~&{D[2],(~_LD)};
assign J3=(~&{~_LD,(TF6)}) & TF5;
assign K3=TF5&TF6;

wire  TF7,TF8;
assign  TF7=((Q[2]&Q[1]&Q[0]&T1)|(Q[0]&T1&Q[3]))|(~_LD);
assign  TF8 = ~&{D[3],(~_LD)};
assign  J4 = (~&{(~_LD),TF8})&TF7;
assign  K4 = (TF8&TF7);

assign C=Q[3]&Q[0]&ET;
JK jk1(
    .J(J1),
    .K(K1),
    .C(~CLK),
    .R(~_RD),
    .Q(Q[0])
);

JK jk2(
    .J(J2),
    .K(K2),
    .C(~CLK),
    .R(~_RD),
    .Q(Q[1])
);


JK jk3(
    .J(J3),
    .K(K3),
    .C(~CLK),
    .R(~_RD),
    .Q(Q[2])
);

JK jk4(
    .J(J4),
    .K(K4),
    .C(~CLK),
    .R(~_RD),
    .Q(Q[3])
);

endmodule 

`timescale 1us/10ns
module testHC74160();
    reg _LD;
    reg _RD;
    reg [3:0]D;
    reg CLK;
    reg EP;
    reg ET;
    wire [3:0]Q;
    wire C;
HC74160 U1(
    _LD,
    _RD,
    D,
    CLK,
    EP,
    ET,
    Q,
    C
);
initial begin
    _LD=1;
    _RD=0;
    EP=1;
    ET=1;
    CLK=1;
    D=0;
    #0.5 
    _RD=1;
    #133;
    _RD=0;
    #1;
    _RD=1;
    _LD=0;
    D=7;
    #5
    _LD=1;






end
always begin
    #5 CLK=~CLK;
end

endmodule
