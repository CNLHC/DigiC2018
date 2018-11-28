////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: tubeControl_translate.v
// /___/   /\     Timestamp: Sun Nov 11 17:57:04 2018
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/translate -ofmt verilog -sim tubeControl.ngd tubeControl_translate.v 
// Device	: 3s500evq100-4
// Input file	: tubeControl.ngd
// Output file	: F:\Users\Desktop\Project\DigitalCircuit\Assignment1\netgen\translate\tubeControl_translate.v
// # of Modules	: 1
// Design Name	: tubeControl
// Xilinx        : C:\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module tubeControl (
  Sys_RST, Sys_CLK, COM, SEG, LED, Key
);
  input Sys_RST;
  input Sys_CLK;
  output [1 : 0] COM;
  output [7 : 0] SEG;
  output [3 : 0] LED;
  input [1 : 0] Key;
  wire LED_0_OBUF_4;
  wire SEG_0_OBUF_13;
  X_ZERO   XST_GND (
    .O(SEG_0_OBUF_13)
  );
  X_ONE   XST_VCC (
    .O(LED_0_OBUF_4)
  );
  X_OPAD   \LED<0>  (
    .PAD(LED[0])
  );
  X_OPAD   \LED<1>  (
    .PAD(LED[1])
  );
  X_OPAD   \LED<2>  (
    .PAD(LED[2])
  );
  X_OPAD   \LED<3>  (
    .PAD(LED[3])
  );
  X_OPAD   \SEG<0>  (
    .PAD(SEG[0])
  );
  X_OPAD   \SEG<1>  (
    .PAD(SEG[1])
  );
  X_OPAD   \SEG<2>  (
    .PAD(SEG[2])
  );
  X_OPAD   \SEG<3>  (
    .PAD(SEG[3])
  );
  X_OPAD   \SEG<4>  (
    .PAD(SEG[4])
  );
  X_OPAD   \SEG<5>  (
    .PAD(SEG[5])
  );
  X_OPAD   \SEG<6>  (
    .PAD(SEG[6])
  );
  X_OPAD   \SEG<7>  (
    .PAD(SEG[7])
  );
  X_OBUF   LED_0_OBUF (
    .I(LED_0_OBUF_4),
    .O(LED[0])
  );
  X_OBUF   LED_1_OBUF (
    .I(LED_0_OBUF_4),
    .O(LED[1])
  );
  X_OBUF   LED_2_OBUF (
    .I(LED_0_OBUF_4),
    .O(LED[2])
  );
  X_OBUF   LED_3_OBUF (
    .I(LED_0_OBUF_4),
    .O(LED[3])
  );
  X_OBUF   SEG_0_OBUF (
    .I(SEG_0_OBUF_13),
    .O(SEG[0])
  );
  X_OBUF   SEG_1_OBUF (
    .I(LED_0_OBUF_4),
    .O(SEG[1])
  );
  X_OBUF   SEG_2_OBUF (
    .I(LED_0_OBUF_4),
    .O(SEG[2])
  );
  X_OBUF   SEG_3_OBUF (
    .I(SEG_0_OBUF_13),
    .O(SEG[3])
  );
  X_OBUF   SEG_4_OBUF (
    .I(LED_0_OBUF_4),
    .O(SEG[4])
  );
  X_OBUF   SEG_5_OBUF (
    .I(LED_0_OBUF_4),
    .O(SEG[5])
  );
  X_OBUF   SEG_6_OBUF (
    .I(SEG_0_OBUF_13),
    .O(SEG[6])
  );
  X_OBUF   SEG_7_OBUF (
    .I(LED_0_OBUF_4),
    .O(SEG[7])
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

