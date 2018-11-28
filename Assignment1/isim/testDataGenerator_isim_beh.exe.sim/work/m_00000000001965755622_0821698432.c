/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/Users/Desktop/Project/DigitalCircuit/Assignment1/dataGenerator.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};



static void Initial_26_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    int t12;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);

LAB4:    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB8:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB9;

LAB10:    xsi_set_current_line(32, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB11;

LAB12:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB11:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB12;

LAB13:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB14:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB15;

LAB16:    xsi_set_current_line(34, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB17;

LAB18:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB17:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB18;

LAB19:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB20;

LAB21:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB20:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB21;

LAB22:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB23:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB24;

LAB25:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1608);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB26:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB27;

LAB28:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    t6 = (t0 + 1608);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t5, t8, 2, t9, 32, 1);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (!(t11));
    if (t12 == 1)
        goto LAB29;

LAB30:    goto LAB1;

LAB29:    xsi_vlogvar_assign_value(t4, t3, 0, *((unsigned int *)t5), 1);
    goto LAB30;

}


extern void work_m_00000000001965755622_0821698432_init()
{
	static char *pe[] = {(void *)Initial_26_0};
	xsi_register_didat("work_m_00000000001965755622_0821698432", "isim/testDataGenerator_isim_beh.exe.sim/work/m_00000000001965755622_0821698432.didat");
	xsi_register_executes(pe);
}
