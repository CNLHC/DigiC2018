
`define SYSTEM_CLOCK_SPEED 50000000
module tubeControl(
input Sys_CLK,
input Sys_RST,
input [1:0]Key,
output  [7:0]SEG,
output  [1:0]COM,
output [3:0]LED
);
/* keep_syn=1 */
wire [1:0]stableKey;
wire [3:0]tDisplayData;

//keyStabilizer#(.relaxTimeInMs(50))U1(
//    .sysClk(Sys_CLK),
//    .sysRst(Sys_RST),
//    .rawKey(Key),
//    .stableKey(stableKey));
//
//dataGenerator dG2(
//    .sysRst(Sys_RST),
//    .key(stableKey),
//    .data(tDisplayData));
//
//condMux cM0(
//    .data(tDisplayData),
//    .selOut(COM)
//);
//
//digitDecoder dD0(
//    .data(tDisplayData),
//    .HEX(SEG));

assign LED = tDisplayData;

endmodule

