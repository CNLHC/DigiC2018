module DFF(
    input C,
    input _CLR,
    input D,
    output reg Q
);

always @ (posedge C or negedge _CLR)begin
    if(!_CLR)
        Q<=0;
    else begin
        Q<=D;
    end
end

//wire OG1,OG2,OG4,OG6,OG3,OG5;
//
//nand G1 (OG1,OG3,OG2,_PRE);
//nand G2 (OG2,OG1,OG4,_CLR);
//nand G3 (OG3,C,OG5,_CLR);
//nand G4 (OG4,OG6,C,OG3);
//nand G5 (OG5,OG6,OG3,_PRE); 
//nand G6 (OG6,D,OG4,_CLR);
//
//assign Q = OG1;
//assign _Q = ~Q;



endmodule


