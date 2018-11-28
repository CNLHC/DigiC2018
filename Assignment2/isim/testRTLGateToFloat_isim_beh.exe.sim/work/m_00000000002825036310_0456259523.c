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
static int ng3[] = {3, 0};
static int ng4[] = {2, 0};
static int ng5[] = {1, 0};



static void Always_14_0(char *t0)
{
    char t4[8];
    char t21[8];
    char t40[8];
    char t50[8];
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
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    unsigned int t56;
    int t57;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 3808);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(14, ng0);

LAB5:    xsi_set_current_line(15, ng0);
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

LAB11:    xsi_set_current_line(20, ng0);

LAB14:    xsi_set_current_line(21, ng0);
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

LAB16:    xsi_set_current_line(38, ng0);

LAB39:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB17:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(15, ng0);

LAB13:    xsi_set_current_line(16, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(17, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(21, ng0);

LAB18:    xsi_set_current_line(22, ng0);
    t12 = (t0 + 2408);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    memset(t21, 0, 8);
    t20 = (t21 + 4);
    t22 = (t19 + 4);
    t14 = *((unsigned int *)t19);
    t15 = (t14 >> 3);
    t16 = (t15 & 1);
    *((unsigned int *)t21) = t16;
    t17 = *((unsigned int *)t22);
    t18 = (t17 >> 3);
    t23 = (t18 & 1);
    *((unsigned int *)t20) = t23;
    memset(t4, 0, 8);
    t24 = (t21 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t21);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB22;

LAB20:    if (*((unsigned int *)t24) == 0)
        goto LAB19;

LAB21:    t30 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t30) = 1;

LAB22:    t31 = (t4 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t4);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB25:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB17;

LAB19:    *((unsigned int *)t4) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(22, ng0);

LAB26:    xsi_set_current_line(23, ng0);
    t37 = (t0 + 2408);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memset(t40, 0, 8);
    t41 = (t40 + 4);
    t42 = (t39 + 4);
    t43 = *((unsigned int *)t39);
    t44 = (t43 >> 2);
    t45 = (t44 & 1);
    *((unsigned int *)t40) = t45;
    t46 = *((unsigned int *)t42);
    t47 = (t46 >> 2);
    t48 = (t47 & 1);
    *((unsigned int *)t41) = t48;
    t49 = (t0 + 2408);
    t51 = (t0 + 2408);
    t52 = (t51 + 72U);
    t53 = *((char **)t52);
    t54 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t50, t53, 2, t54, 32, 1);
    t55 = (t50 + 4);
    t56 = *((unsigned int *)t55);
    t57 = (!(t56));
    if (t57 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(24, ng0);
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
    t24 = ((char*)((ng4)));
    xsi_vlog_generic_convert_bit_index(t21, t22, 2, t24, 32, 1);
    t30 = (t21 + 4);
    t15 = *((unsigned int *)t30);
    t57 = (!(t15));
    if (t57 == 1)
        goto LAB29;

LAB30:    xsi_set_current_line(25, ng0);
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
    t24 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t21, t22, 2, t24, 32, 1);
    t30 = (t21 + 4);
    t15 = *((unsigned int *)t30);
    t57 = (!(t15));
    if (t57 == 1)
        goto LAB31;

LAB32:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    t5 = (t0 + 2408);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t57 = (!(t7));
    if (t57 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 4, t6, 32);
    t12 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t12, t4, 0, 0, 4, 0LL);
    goto LAB25;

LAB27:    xsi_vlogvar_wait_assign_value(t49, t40, 0, *((unsigned int *)t50), 1, 0LL);
    goto LAB28;

LAB29:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t21), 1, 0LL);
    goto LAB30;

LAB31:    xsi_vlogvar_wait_assign_value(t13, t4, 0, *((unsigned int *)t21), 1, 0LL);
    goto LAB32;

LAB33:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB34;

LAB35:    xsi_set_current_line(31, ng0);

LAB38:    xsi_set_current_line(32, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2088);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 2, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 4, 0LL);
    goto LAB37;

}


extern void work_m_00000000002825036310_0456259523_init()
{
	static char *pe[] = {(void *)Always_14_0};
	xsi_register_didat("work_m_00000000002825036310_0456259523", "isim/testRTLGateToFloat_isim_beh.exe.sim/work/m_00000000002825036310_0456259523.didat");
	xsi_register_executes(pe);
}
