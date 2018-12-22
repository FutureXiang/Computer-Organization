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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/BUAA/CS/ComputerOrgan/ISE/P6/MIPS/Res_Translator.v";
static int ng1[] = {0, 0};
static int ng2[] = {8, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {12, 0};
static int ng5[] = {13, 0};
static int ng6[] = {15, 0};
static int ng7[] = {35, 0};
static unsigned int ng8[] = {2U, 0U};
static int ng9[] = {16, 0};
static int ng10[] = {3, 0};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {0U, 0U};



static void Always_39_0(char *t0)
{
    char t4[8];
    char t16[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;

LAB0:    t1 = (t0 + 1720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2204);
    *((int *)t2) = 1;
    t3 = (t0 + 1748);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t5 = (t0 + 600U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 26);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 63U);

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t14, 32);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(41, ng0);
    t17 = (t0 + 600U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 0);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t17) = t23;
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 63U);
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 63U);
    t26 = ((char*)((ng2)));
    memset(t27, 0, 8);
    t28 = (t16 + 4);
    t29 = (t26 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB25;

LAB24:    if (t39 != 0)
        goto LAB26;

LAB27:    t43 = (t27 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t27);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB23;

LAB9:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB13:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 21);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 21);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 31U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 31U);
    t7 = ((char*)((ng1)));
    memset(t27, 0, 8);
    t14 = (t16 + 4);
    t17 = (t7 + 4);
    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t7);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t17);
    t25 = (t23 ^ t24);
    t30 = (t22 | t25);
    t31 = *((unsigned int *)t14);
    t32 = *((unsigned int *)t17);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB34;

LAB31:    if (t33 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t27) = 1;

LAB34:    t19 = (t27 + 4);
    t36 = *((unsigned int *)t19);
    t37 = (~(t36));
    t38 = *((unsigned int *)t27);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB23;

LAB19:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB25:    *((unsigned int *)t27) = 1;
    goto LAB27;

LAB26:    t42 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(41, ng0);
    t49 = ((char*)((ng3)));
    t50 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t50, t49, 0, 0, 2, 0LL);
    goto LAB30;

LAB33:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(46, ng0);
    t26 = ((char*)((ng8)));
    t28 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t28, t26, 0, 0, 2, 0LL);
    goto LAB37;

}

static void Always_52_1(char *t0)
{
    char t4[8];
    char t16[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;

LAB0:    t1 = (t0 + 1864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2212);
    *((int *)t2) = 1;
    t3 = (t0 + 1892);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);
    t5 = (t0 + 692U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 26);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 63U);

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t14, 32);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(54, ng0);
    t17 = (t0 + 692U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 0);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t17) = t23;
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 63U);
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 63U);
    t26 = ((char*)((ng2)));
    memset(t27, 0, 8);
    t28 = (t16 + 4);
    t29 = (t26 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB25;

LAB24:    if (t39 != 0)
        goto LAB26;

LAB27:    t43 = (t27 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t27);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB23;

LAB9:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB13:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(58, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 692U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 21);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 21);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 31U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 31U);
    t7 = ((char*)((ng1)));
    memset(t27, 0, 8);
    t14 = (t16 + 4);
    t17 = (t7 + 4);
    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t7);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t17);
    t25 = (t23 ^ t24);
    t30 = (t22 | t25);
    t31 = *((unsigned int *)t14);
    t32 = *((unsigned int *)t17);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB34;

LAB31:    if (t33 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t27) = 1;

LAB34:    t19 = (t27 + 4);
    t36 = *((unsigned int *)t19);
    t37 = (~(t36));
    t38 = *((unsigned int *)t27);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB23;

LAB19:    xsi_set_current_line(60, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB25:    *((unsigned int *)t27) = 1;
    goto LAB27;

LAB26:    t42 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(54, ng0);
    t49 = ((char*)((ng3)));
    t50 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t50, t49, 0, 0, 2, 0LL);
    goto LAB30;

LAB33:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(59, ng0);
    t26 = ((char*)((ng8)));
    t28 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t28, t26, 0, 0, 2, 0LL);
    goto LAB37;

}

static void Always_65_2(char *t0)
{
    char t4[8];
    char t16[8];
    char t27[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;

LAB0:    t1 = (t0 + 2008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2220);
    *((int *)t2) = 1;
    t3 = (t0 + 2036);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(66, ng0);
    t5 = (t0 + 784U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 26);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 26);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 63U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 63U);

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t14, 32);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB19;

LAB20:
LAB22:
LAB21:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB23:    goto LAB2;

LAB7:    xsi_set_current_line(67, ng0);
    t17 = (t0 + 784U);
    t18 = *((char **)t17);
    memset(t16, 0, 8);
    t17 = (t16 + 4);
    t19 = (t18 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (t20 >> 0);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t19);
    t23 = (t22 >> 0);
    *((unsigned int *)t17) = t23;
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 63U);
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 63U);
    t26 = ((char*)((ng2)));
    memset(t27, 0, 8);
    t28 = (t16 + 4);
    t29 = (t26 + 4);
    t30 = *((unsigned int *)t16);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t28);
    t34 = *((unsigned int *)t29);
    t35 = (t33 ^ t34);
    t36 = (t32 | t35);
    t37 = *((unsigned int *)t28);
    t38 = *((unsigned int *)t29);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t41 = (t36 & t40);
    if (t41 != 0)
        goto LAB25;

LAB24:    if (t39 != 0)
        goto LAB26;

LAB27:    t43 = (t27 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t27);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB28;

LAB29:
LAB30:    goto LAB23;

LAB9:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB11:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB13:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng3)));
    t5 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB15:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB17:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 784U);
    t5 = *((char **)t3);
    memset(t16, 0, 8);
    t3 = (t16 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 21);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 21);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t12 & 31U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 31U);
    t7 = ((char*)((ng1)));
    memset(t27, 0, 8);
    t14 = (t16 + 4);
    t17 = (t7 + 4);
    t20 = *((unsigned int *)t16);
    t21 = *((unsigned int *)t7);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t17);
    t25 = (t23 ^ t24);
    t30 = (t22 | t25);
    t31 = *((unsigned int *)t14);
    t32 = *((unsigned int *)t17);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB34;

LAB31:    if (t33 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t27) = 1;

LAB34:    t19 = (t27 + 4);
    t36 = *((unsigned int *)t19);
    t37 = (~(t36));
    t38 = *((unsigned int *)t27);
    t39 = (t38 & t37);
    t40 = (t39 != 0);
    if (t40 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB23;

LAB19:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB23;

LAB25:    *((unsigned int *)t27) = 1;
    goto LAB27;

LAB26:    t42 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB27;

LAB28:    xsi_set_current_line(67, ng0);
    t49 = ((char*)((ng3)));
    t50 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t50, t49, 0, 0, 2, 0LL);
    goto LAB30;

LAB33:    t18 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t18) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(72, ng0);
    t26 = ((char*)((ng8)));
    t28 = (t0 + 1196);
    xsi_vlogvar_wait_assign_value(t28, t26, 0, 0, 2, 0LL);
    goto LAB37;

}


extern void work_m_00000000003497011561_1386922326_init()
{
	static char *pe[] = {(void *)Always_39_0,(void *)Always_52_1,(void *)Always_65_2};
	xsi_register_didat("work_m_00000000003497011561_1386922326", "isim/TB_isim_beh.exe.sim/work/m_00000000003497011561_1386922326.didat");
	xsi_register_executes(pe);
}
