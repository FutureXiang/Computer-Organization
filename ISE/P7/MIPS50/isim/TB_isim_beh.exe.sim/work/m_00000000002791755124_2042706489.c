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
static const char *ng0 = "D:/BUAA/CS/ComputerOrgan/ISE/P7/MIPS50/MultDiv.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {12288U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {5, 0};
static int ng8[] = {10, 0};
static unsigned int ng9[] = {3U, 0U};



static void NetDecl_26_0(char *t0)
{
    char t3[16];
    char t5[16];
    char t7[16];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 3192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 784U);
    t4 = *((char **)t2);
    xsi_vlogtype_zero_extend(t3, 64, t4, 32);
    t2 = (t0 + 876U);
    t6 = *((char **)t2);
    xsi_vlogtype_zero_extend(t5, 64, t6, 32);
    xsi_vlog_unsigned_multiply(t7, 64, t3, 64, t5, 64);
    t2 = (t0 + 3880);
    t8 = (t2 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    xsi_vlog_bit_copy(t11, 0, t7, 0, 64);
    xsi_driver_vfirst_trans(t2, 0, 63U);
    t12 = (t0 + 3820);
    *((int *)t12) = 1;

LAB1:    return;
}

static void NetDecl_26_1(char *t0)
{
    char t3[16];
    char t5[16];
    char t7[16];
    char *t1;
    char *t2;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 3336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 784U);
    t4 = *((char **)t2);
    xsi_vlogtype_sign_extend(t3, 64, t4, 32);
    t2 = (t0 + 876U);
    t6 = *((char **)t2);
    xsi_vlogtype_sign_extend(t5, 64, t6, 32);
    xsi_vlog_signed_multiply(t7, 64, t3, 64, t5, 64);
    t2 = (t0 + 3916);
    t8 = (t2 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    xsi_vlog_bit_copy(t11, 0, t7, 0, 64);
    xsi_driver_vfirst_trans(t2, 0, 63U);
    t12 = (t0 + 3828);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Initial_28_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(28, ng0);

LAB2:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);
    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);
    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2392);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2484);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Always_42_3(char *t0)
{
    char t15[8];
    char t28[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
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
    unsigned int t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    int t54;

LAB0:    t1 = (t0 + 3624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3836);
    *((int *)t2) = 1;
    t3 = (t0 + 3652);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1336U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB11;

LAB10:    if (t20 != 0)
        goto LAB12;

LAB13:    t12 = (t15 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1840);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = (t5 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB77;

LAB78:
LAB79:
LAB36:
LAB16:    goto LAB2;

LAB6:    xsi_set_current_line(43, ng0);

LAB9:    xsi_set_current_line(44, ng0);
    t11 = (t0 + 2576);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    t14 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t14, t13, 0, 0, 32, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2668);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t15) = 1;
    goto LAB13;

LAB12:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(51, ng0);

LAB17:    xsi_set_current_line(52, ng0);
    t13 = (t0 + 1244U);
    t14 = *((char **)t13);
    t13 = ((char*)((ng4)));
    memset(t28, 0, 8);
    t29 = (t14 + 4);
    t30 = (t13 + 4);
    t31 = *((unsigned int *)t14);
    t32 = *((unsigned int *)t13);
    t33 = (t31 ^ t32);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = (t33 | t36);
    t38 = *((unsigned int *)t29);
    t39 = *((unsigned int *)t30);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB21;

LAB18:    if (t40 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t28) = 1;

LAB21:    t44 = (t28 + 4);
    t45 = *((unsigned int *)t44);
    t46 = (~(t45));
    t47 = *((unsigned int *)t28);
    t48 = (t47 & t46);
    t49 = (t48 != 0);
    if (t49 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t15, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB29;

LAB26:    if (t20 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t15) = 1;

LAB29:    t12 = (t15 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB30;

LAB31:
LAB32:
LAB24:    goto LAB16;

LAB20:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(52, ng0);

LAB25:    xsi_set_current_line(53, ng0);
    t50 = (t0 + 1932);
    t51 = (t50 + 36U);
    t52 = *((char **)t51);
    t53 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 32, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    goto LAB24;

LAB28:    t11 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(58, ng0);

LAB33:    xsi_set_current_line(59, ng0);
    t13 = (t0 + 1932);
    t14 = (t13 + 36U);
    t29 = *((char **)t14);
    t30 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 32, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB32;

LAB34:    xsi_set_current_line(65, ng0);

LAB37:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    t4 = (t0 + 1036U);
    t11 = (t4 + 44U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng6)));
    xsi_vlog_generic_get_index_select_value(t15, 32, t5, t12, 2, t13, 32, 1);
    t14 = ((char*)((ng1)));
    memset(t28, 0, 8);
    t29 = (t15 + 4);
    t30 = (t14 + 4);
    t16 = *((unsigned int *)t15);
    t17 = *((unsigned int *)t14);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t29);
    t20 = *((unsigned int *)t30);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t29);
    t24 = *((unsigned int *)t30);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB41;

LAB38:    if (t25 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t28) = 1;

LAB41:    t44 = (t28 + 4);
    t31 = *((unsigned int *)t44);
    t32 = (~(t31));
    t33 = *((unsigned int *)t28);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB44:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);

LAB45:    t2 = ((char*)((ng3)));
    t54 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t54 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng4)));
    t54 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t54 == 1)
        goto LAB48;

LAB49:    t2 = ((char*)((ng5)));
    t54 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t54 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng9)));
    t54 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t54 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB36;

LAB40:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(67, ng0);
    t50 = ((char*)((ng7)));
    t51 = (t0 + 2300);
    xsi_vlogvar_wait_assign_value(t51, t50, 0, 0, 4, 0LL);
    goto LAB44;

LAB46:    xsi_set_current_line(74, ng0);

LAB55:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 1612U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t4 = (t15 + 4);
    t11 = (t5 + 8);
    t12 = (t5 + 12);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 4294967295U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 4294967295U);
    t13 = (t0 + 2392);
    xsi_vlogvar_assign_value(t13, t15, 0, 0, 32);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1612U);
    t4 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 4294967295U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 4294967295U);
    t11 = (t0 + 2484);
    xsi_vlogvar_assign_value(t11, t15, 0, 0, 32);
    goto LAB54;

LAB48:    xsi_set_current_line(78, ng0);

LAB56:    xsi_set_current_line(79, ng0);
    t4 = (t0 + 1520U);
    t5 = *((char **)t4);
    memset(t15, 0, 8);
    t4 = (t15 + 4);
    t11 = (t5 + 8);
    t12 = (t5 + 12);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 4294967295U);
    t16 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t16 & 4294967295U);
    t13 = (t0 + 2392);
    xsi_vlogvar_assign_value(t13, t15, 0, 0, 32);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1520U);
    t4 = *((char **)t2);
    memset(t15, 0, 8);
    t2 = (t15 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 4294967295U);
    t16 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t16 & 4294967295U);
    t11 = (t0 + 2484);
    xsi_vlogvar_assign_value(t11, t15, 0, 0, 32);
    goto LAB54;

LAB50:    xsi_set_current_line(82, ng0);

LAB57:    xsi_set_current_line(83, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB61;

LAB58:    if (t20 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t15) = 1;

LAB61:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(87, ng0);

LAB66:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 784U);
    t4 = *((char **)t2);
    t2 = (t0 + 876U);
    t5 = *((char **)t2);
    memset(t55, 0, 8);
    xsi_vlog_signed_mod(t55, 32, t4, 32, t5, 32);
    t2 = (t0 + 2392);
    xsi_vlogvar_assign_value(t2, t55, 0, 0, 32);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 784U);
    t4 = *((char **)t2);
    t2 = (t0 + 876U);
    t5 = *((char **)t2);
    memset(t55, 0, 8);
    xsi_vlog_signed_divide(t55, 32, t4, 32, t5, 32);
    t2 = (t0 + 2484);
    xsi_vlogvar_assign_value(t2, t55, 0, 0, 32);

LAB64:    goto LAB54;

LAB52:    xsi_set_current_line(92, ng0);

LAB67:    xsi_set_current_line(93, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t15, 0, 8);
    t11 = (t5 + 4);
    t12 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t4);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB71;

LAB68:    if (t20 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t15) = 1;

LAB71:    t14 = (t15 + 4);
    t23 = *((unsigned int *)t14);
    t24 = (~(t23));
    t25 = *((unsigned int *)t15);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(97, ng0);

LAB76:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 784U);
    t4 = *((char **)t2);
    t2 = (t0 + 876U);
    t5 = *((char **)t2);
    memset(t55, 0, 8);
    xsi_vlog_unsigned_mod(t55, 32, t4, 32, t5, 32);
    t2 = (t0 + 2392);
    xsi_vlogvar_assign_value(t2, t55, 0, 0, 32);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 784U);
    t4 = *((char **)t2);
    t2 = (t0 + 876U);
    t5 = *((char **)t2);
    memset(t55, 0, 8);
    xsi_vlog_unsigned_divide(t55, 32, t4, 32, t5, 32);
    t2 = (t0 + 2484);
    xsi_vlogvar_assign_value(t2, t55, 0, 0, 32);

LAB74:    goto LAB54;

LAB60:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB61;

LAB62:    xsi_set_current_line(83, ng0);

LAB65:    xsi_set_current_line(84, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2392);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 32);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2484);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB64;

LAB70:    t13 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(93, ng0);

LAB75:    xsi_set_current_line(94, ng0);
    t29 = ((char*)((ng1)));
    t30 = (t0 + 2392);
    xsi_vlogvar_assign_value(t30, t29, 0, 0, 32);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2484);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);
    goto LAB74;

LAB77:    xsi_set_current_line(104, ng0);

LAB80:    xsi_set_current_line(105, ng0);
    t12 = (t0 + 1428U);
    t13 = *((char **)t12);
    t12 = (t13 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (~(t16));
    t18 = *((unsigned int *)t13);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(108, ng0);

LAB85:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2208);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng6)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t5, 4, t11, 32);
    t12 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t12, t15, 0, 0, 4, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2208);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = (t0 + 2300);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng6)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t13, 4, t14, 32);
    memset(t28, 0, 8);
    t29 = (t5 + 4);
    t30 = (t15 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t15);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t29);
    t10 = *((unsigned int *)t30);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t29);
    t19 = *((unsigned int *)t30);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB89;

LAB86:    if (t20 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t28) = 1;

LAB89:    t44 = (t28 + 4);
    t23 = *((unsigned int *)t44);
    t24 = (~(t23));
    t25 = *((unsigned int *)t28);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB90;

LAB91:
LAB92:
LAB83:    goto LAB79;

LAB81:    xsi_set_current_line(105, ng0);

LAB84:    xsi_set_current_line(106, ng0);
    t14 = ((char*)((ng1)));
    t29 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t29, t14, 0, 0, 1, 0LL);
    goto LAB83;

LAB88:    t43 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t43) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(110, ng0);

LAB93:    xsi_set_current_line(111, ng0);
    t50 = ((char*)((ng1)));
    t51 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t51, t50, 0, 0, 1, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2392);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2484);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1932);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = (t0 + 2576);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2024);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = (t0 + 2668);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 32, 0LL);
    goto LAB92;

}


extern void work_m_00000000002791755124_2042706489_init()
{
	static char *pe[] = {(void *)NetDecl_26_0,(void *)NetDecl_26_1,(void *)Initial_28_2,(void *)Always_42_3};
	xsi_register_didat("work_m_00000000002791755124_2042706489", "isim/TB_isim_beh.exe.sim/work/m_00000000002791755124_2042706489.didat");
	xsi_register_executes(pe);
}
