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
static const char *ng0 = "F:/Users/Desktop/Project/DigitalCircuit/Assignment1/keyStabilizer.v";
static int ng1[] = {0, 0, 0, 0};
static int ng2[] = {0, 0};
static int ng3[] = {50, 0, 0, 0};
static int ng4[] = {1000, 0, 0, 0};
static int ng5[] = {1, 0, 0, 0};
static int ng6[] = {1, 0};



static void Always_14_0(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char t41[16];
    char t42[16];
    char t43[16];
    char t44[16];
    char t45[16];
    char t54[16];
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    int t32;
    char *t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;

LAB0:    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 4208);
    *((int *)t2) = 1;
    t3 = (t0 + 3176);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(15, ng0);

LAB5:    xsi_set_current_line(16, ng0);
    t5 = (t0 + 1344U);
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

LAB18:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2224);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t19 = (t0 + 2224);
    t20 = (t19 + 64U);
    t23 = *((char **)t20);
    t24 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t41, 33, t5, t13, t23, 2, 1, t24, 32, 1);
    t25 = (t0 + 472);
    t26 = *((char **)t25);
    t25 = ((char*)((ng3)));
    xsi_vlog_unsigned_multiply(t42, 33, t26, 32, t25, 32);
    t27 = ((char*)((ng4)));
    xsi_vlog_unsigned_multiply(t43, 33, t42, 33, t27, 32);
    xsi_vlog_unsigned_less(t44, 33, t41, 33, t43, 33);
    t28 = (t44 + 4);
    t7 = *((unsigned int *)t28);
    t8 = (~(t7));
    t9 = *((unsigned int *)t44);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(23, ng0);

LAB24:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 0);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 0);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 2064);
    t12 = (t0 + 2064);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t21, t19, 2, t20, 32, 1);
    t23 = (t21 + 4);
    t15 = *((unsigned int *)t23);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2224);
    t5 = (t0 + 2224);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = (t0 + 2224);
    t19 = (t13 + 64U);
    t20 = *((char **)t19);
    t23 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t4, t21, t12, t20, 2, 1, t23, 32, 1);
    t24 = (t4 + 4);
    t7 = *((unsigned int *)t24);
    t32 = (!(t7));
    t25 = (t21 + 4);
    t8 = *((unsigned int *)t25);
    t35 = (!(t8));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB27;

LAB28:
LAB21:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(16, ng0);

LAB13:    xsi_set_current_line(17, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2224);
    t23 = (t0 + 2224);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 2224);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t21, t22, t25, t28, 2, 1, t29, 32, 1);
    t30 = (t21 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t22 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(18, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2064);
    t5 = (t0 + 2064);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB16;

LAB17:    goto LAB12;

LAB14:    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t22);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, *((unsigned int *)t22), t40, 0LL);
    goto LAB15;

LAB16:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB17;

LAB19:    xsi_set_current_line(22, ng0);
    t29 = (t0 + 2224);
    t30 = (t29 + 56U);
    t33 = *((char **)t30);
    t46 = (t0 + 2224);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = (t0 + 2224);
    t50 = (t49 + 64U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng2)));
    xsi_vlog_generic_get_array_select_value(t45, 33, t33, t48, t51, 2, 1, t52, 32, 1);
    t53 = ((char*)((ng5)));
    xsi_vlog_unsigned_add(t54, 33, t45, 33, t53, 32);
    t55 = (t0 + 2224);
    t56 = (t0 + 2224);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t59 = (t0 + 2224);
    t60 = (t59 + 64U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng2)));
    xsi_vlog_generic_convert_array_indices(t4, t21, t58, t61, 2, 1, t62, 32, 1);
    t63 = (t4 + 4);
    t14 = *((unsigned int *)t63);
    t32 = (!(t14));
    t64 = (t21 + 4);
    t15 = *((unsigned int *)t64);
    t35 = (!(t15));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB22;

LAB23:    goto LAB21;

LAB22:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t21);
    t39 = (t16 - t17);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t55, t54, 0, *((unsigned int *)t21), t40, 0LL);
    goto LAB23;

LAB25:    xsi_vlogvar_wait_assign_value(t6, t4, 0, *((unsigned int *)t21), 1, 0LL);
    goto LAB26;

LAB27:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t21);
    t39 = (t9 - t10);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t21), t40, 0LL);
    goto LAB28;

}

static void Always_29_1(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char t41[16];
    char t42[16];
    char t43[16];
    char t44[16];
    char t45[16];
    char t54[16];
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    int t32;
    char *t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;

LAB0:    t1 = (t0 + 3392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 4224);
    *((int *)t2) = 1;
    t3 = (t0 + 3424);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t5 = (t0 + 1344U);
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

LAB11:    xsi_set_current_line(35, ng0);

LAB18:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2224);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2224);
    t12 = (t6 + 72U);
    t13 = *((char **)t12);
    t19 = (t0 + 2224);
    t20 = (t19 + 64U);
    t23 = *((char **)t20);
    t24 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t41, 33, t5, t13, t23, 2, 1, t24, 32, 1);
    t25 = (t0 + 472);
    t26 = *((char **)t25);
    t25 = ((char*)((ng3)));
    xsi_vlog_unsigned_multiply(t42, 33, t26, 32, t25, 32);
    t27 = ((char*)((ng4)));
    xsi_vlog_unsigned_multiply(t43, 33, t42, 33, t27, 32);
    xsi_vlog_unsigned_less(t44, 33, t41, 33, t43, 33);
    t28 = (t44 + 4);
    t7 = *((unsigned int *)t28);
    t8 = (~(t7));
    t9 = *((unsigned int *)t44);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(38, ng0);

LAB24:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 1);
    t9 = (t8 & 1);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t5);
    t11 = (t10 >> 1);
    t14 = (t11 & 1);
    *((unsigned int *)t2) = t14;
    t6 = (t0 + 2064);
    t12 = (t0 + 2064);
    t13 = (t12 + 72U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t21, t19, 2, t20, 32, 1);
    t23 = (t21 + 4);
    t15 = *((unsigned int *)t23);
    t32 = (!(t15));
    if (t32 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2224);
    t5 = (t0 + 2224);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = (t0 + 2224);
    t19 = (t13 + 64U);
    t20 = *((char **)t19);
    t23 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t4, t21, t12, t20, 2, 1, t23, 32, 1);
    t24 = (t4 + 4);
    t7 = *((unsigned int *)t24);
    t32 = (!(t7));
    t25 = (t21 + 4);
    t8 = *((unsigned int *)t25);
    t35 = (!(t8));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB27;

LAB28:
LAB21:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(31, ng0);

LAB13:    xsi_set_current_line(32, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2224);
    t23 = (t0 + 2224);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 2224);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t21, t22, t25, t28, 2, 1, t29, 32, 1);
    t30 = (t21 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t22 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2064);
    t5 = (t0 + 2064);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t13, 32, 1);
    t19 = (t4 + 4);
    t7 = *((unsigned int *)t19);
    t32 = (!(t7));
    if (t32 == 1)
        goto LAB16;

LAB17:    goto LAB12;

LAB14:    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t22);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, *((unsigned int *)t22), t40, 0LL);
    goto LAB15;

LAB16:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB17;

LAB19:    xsi_set_current_line(37, ng0);
    t29 = (t0 + 2224);
    t30 = (t29 + 56U);
    t33 = *((char **)t30);
    t46 = (t0 + 2224);
    t47 = (t46 + 72U);
    t48 = *((char **)t47);
    t49 = (t0 + 2224);
    t50 = (t49 + 64U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng6)));
    xsi_vlog_generic_get_array_select_value(t45, 33, t33, t48, t51, 2, 1, t52, 32, 1);
    t53 = ((char*)((ng5)));
    xsi_vlog_unsigned_add(t54, 33, t45, 33, t53, 32);
    t55 = (t0 + 2224);
    t56 = (t0 + 2224);
    t57 = (t56 + 72U);
    t58 = *((char **)t57);
    t59 = (t0 + 2224);
    t60 = (t59 + 64U);
    t61 = *((char **)t60);
    t62 = ((char*)((ng6)));
    xsi_vlog_generic_convert_array_indices(t4, t21, t58, t61, 2, 1, t62, 32, 1);
    t63 = (t4 + 4);
    t14 = *((unsigned int *)t63);
    t32 = (!(t14));
    t64 = (t21 + 4);
    t15 = *((unsigned int *)t64);
    t35 = (!(t15));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB22;

LAB23:    goto LAB21;

LAB22:    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t21);
    t39 = (t16 - t17);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t55, t54, 0, *((unsigned int *)t21), t40, 0LL);
    goto LAB23;

LAB25:    xsi_vlogvar_wait_assign_value(t6, t4, 0, *((unsigned int *)t21), 1, 0LL);
    goto LAB26;

LAB27:    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t21);
    t39 = (t9 - t10);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t21), t40, 0LL);
    goto LAB28;

}

static void Cont_44_2(char *t0)
{
    char t4[8];
    char t15[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 0);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 0);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 2064);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 0);
    t20 = (t19 & 1);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 0);
    t23 = (t22 & 1);
    *((unsigned int *)t16) = t23;
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t15);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t4 + 4);
    t29 = (t15 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB4;

LAB5:
LAB6:    t56 = (t0 + 4336);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t60, 0, 8);
    t61 = 1U;
    t62 = t61;
    t63 = (t24 + 4);
    t64 = *((unsigned int *)t24);
    t61 = (t61 & t64);
    t65 = *((unsigned int *)t63);
    t62 = (t62 & t65);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t67 | t61);
    t68 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t68 | t62);
    xsi_driver_vfirst_trans(t56, 0, 0);
    t69 = (t0 + 4240);
    *((int *)t69) = 1;

LAB1:    return;
LAB4:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t15 + 4);
    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t15);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB6;

}

static void Cont_45_3(char *t0)
{
    char t4[8];
    char t15[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;

LAB0:    t1 = (t0 + 3888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1504U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t4 + 4);
    t5 = (t3 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (t6 >> 1);
    t8 = (t7 & 1);
    *((unsigned int *)t4) = t8;
    t9 = *((unsigned int *)t5);
    t10 = (t9 >> 1);
    t11 = (t10 & 1);
    *((unsigned int *)t2) = t11;
    t12 = (t0 + 2064);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t17 = (t14 + 4);
    t18 = *((unsigned int *)t14);
    t19 = (t18 >> 1);
    t20 = (t19 & 1);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 1);
    t23 = (t22 & 1);
    *((unsigned int *)t16) = t23;
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t15);
    t27 = (t25 & t26);
    *((unsigned int *)t24) = t27;
    t28 = (t4 + 4);
    t29 = (t15 + 4);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t28);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB4;

LAB5:
LAB6:    t56 = (t0 + 4400);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    memset(t60, 0, 8);
    t61 = 1U;
    t62 = t61;
    t63 = (t24 + 4);
    t64 = *((unsigned int *)t24);
    t61 = (t61 & t64);
    t65 = *((unsigned int *)t63);
    t62 = (t62 & t65);
    t66 = (t60 + 4);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t67 | t61);
    t68 = *((unsigned int *)t66);
    *((unsigned int *)t66) = (t68 | t62);
    xsi_driver_vfirst_trans(t56, 1, 1);
    t69 = (t0 + 4256);
    *((int *)t69) = 1;

LAB1:    return;
LAB4:    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t24) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t15 + 4);
    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t15);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t54 & t50);
    t55 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t55 & t51);
    goto LAB6;

}


extern void work_m_00000000001930576352_2927378101_init()
{
	static char *pe[] = {(void *)Always_14_0,(void *)Always_29_1,(void *)Cont_44_2,(void *)Cont_45_3};
	xsi_register_didat("work_m_00000000001930576352_2927378101", "isim/testKeyStabilizer_isim_beh.exe.sim/work/m_00000000001930576352_2927378101.didat");
	xsi_register_executes(pe);
}
