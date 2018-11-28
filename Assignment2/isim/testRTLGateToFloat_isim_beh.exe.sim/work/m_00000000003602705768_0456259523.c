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
static const char *ng0 = "C:/Users/cn/Desktop/Project/DigitalCircuit/Assignment2/RTLToFloat.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {4, 0};
static int ng4[] = {3, 0};
static int ng5[] = {2, 0};
static int ng6[] = {1, 0};



static void Always_13_0(char *t0)
{
    char t4[8];
    char t21[8];
    char t25[8];
    char t45[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    int t62;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 3648);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);

LAB5:    xsi_set_current_line(14, ng0);
    t5 = (t0 + 1208U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(19, ng0);

LAB14:    xsi_set_current_line(20, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(34, ng0);

LAB44:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB17:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(14, ng0);

LAB13:    xsi_set_current_line(15, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2088);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 1);
    xsi_set_current_line(16, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB12;

LAB15:    xsi_set_current_line(20, ng0);

LAB18:    xsi_set_current_line(21, ng0);
    xsi_set_current_line(21, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2248);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 4);

LAB19:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng3)));
    memset(t4, 0, 8);
    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB21;

LAB20:    t13 = (t6 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB22;

LAB23:    t20 = (t4 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB17;

LAB21:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB23;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB23;

LAB25:    xsi_set_current_line(21, ng0);

LAB27:    xsi_set_current_line(22, ng0);
    t22 = (t0 + 2408);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    t26 = (t25 + 4);
    t27 = (t24 + 4);
    t14 = *((unsigned int *)t24);
    t15 = (t14 >> 3);
    t16 = (t15 & 1);
    *((unsigned int *)t25) = t16;
    t17 = *((unsigned int *)t27);
    t18 = (t17 >> 3);
    t28 = (t18 & 1);
    *((unsigned int *)t26) = t28;
    memset(t21, 0, 8);
    t29 = (t25 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t25);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t29) == 0)
        goto LAB28;

LAB30:    t35 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t35) = 1;

LAB31:    t36 = (t21 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t21);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 4, t6, 32);
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 4);
    goto LAB19;

LAB28:    *((unsigned int *)t21) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(22, ng0);

LAB35:    xsi_set_current_line(23, ng0);
    t42 = (t0 + 2408);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memset(t45, 0, 8);
    t46 = (t45 + 4);
    t47 = (t44 + 4);
    t48 = *((unsigned int *)t44);
    t49 = (t48 >> 2);
    t50 = (t49 & 1);
    *((unsigned int *)t45) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 >> 2);
    t53 = (t52 & 1);
    *((unsigned int *)t46) = t53;
    t54 = (t0 + 2408);
    t56 = (t0 + 2408);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t59 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t55, t58, 2, t59, 32, 1);
    t60 = (t55 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (!(t61));
    if (t62 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 1);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 2408);
    t19 = (t0 + 2408);
    t20 = (t19 + 72U);
    t22 = *((char **)t20);
    t23 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t21, t22, 2, t23, 32, 1);
    t24 = (t21 + 4);
    t15 = *((unsigned int *)t24);
    t62 = (!(t15));
    if (t62 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t12);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t6) = t14;
    t13 = (t0 + 2408);
    t19 = (t0 + 2408);
    t20 = (t19 + 72U);
    t22 = *((char **)t20);
    t23 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t21, t22, 2, t23, 32, 1);
    t24 = (t21 + 4);
    t15 = *((unsigned int *)t24);
    t62 = (!(t15));
    if (t62 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    t5 = (t0 + 2408);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t62 = (!(t7));
    if (t62 == 1)
        goto LAB42;

LAB43:    goto LAB34;

LAB36:    xsi_vlogvar_wait_assign_value(t54, t45, 0, *((unsigned int *)t55), 1, 0LL);
    goto LAB37;

LAB38:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t21), 1, 0LL);
    goto LAB39;

LAB40:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t21), 1, 0LL);
    goto LAB41;

LAB42:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB43;

}


extern void work_m_00000000003602705768_0456259523_init()
{
	static char *pe[] = {(void *)Always_13_0};
	xsi_register_didat("work_m_00000000003602705768_0456259523", "isim/testRTLGateToFloat_isim_beh.exe.sim/work/m_00000000003602705768_0456259523.didat");
	xsi_register_executes(pe);
}
