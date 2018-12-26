
//====================Truthtable Variable:0====================
wire tU0U10Out;
wire tU0U00Out;
wire tU0U11Out;
wire tU0U12Out;
or U0U00(tU0U00Out,tU0U10Out,tU0U11Out,tU0U12Out);
and U0U10(tU0U10Out,~counter[0],~counter[3]);
and U0U11(tU0U11Out,~counter[0],~counter[1]);
and U0U12(tU0U12Out,~counter[0],~counter[2]);
