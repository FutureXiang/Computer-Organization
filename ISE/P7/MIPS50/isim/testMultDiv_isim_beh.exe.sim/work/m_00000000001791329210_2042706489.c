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
static int ng2[] = {0, 0, 0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {5, 0};
static int ng5[] = {10, 0};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {0U, 0U};
static int ng8[] = {32, 0};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {2U, 0U};



static void NetDecl_18_0(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t1 = (t0 + 2456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1840);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    xsi_vlog_unsigned_multiply(t8, 64, t4, 64, t7, 64);
    t9 = (t0 + 2992);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    xsi_vlog_bit_copy(t13, 0, t8, 0, 64);
    xsi_driver_vfirst_trans(t9, 0, 63U);
    t14 = (t0 + 2940);
    *((int *)t14) = 1;

LAB1:    return;
}

static void Initial_21_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(21, ng0);

LAB2:    xsi_set_current_line(22, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);
    xsi_set_current_line(23, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 4, 0LL);
    xsi_set_current_line(24, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 64, 0LL);
    xsi_set_current_line(25, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 64, 0LL);
    xsi_set_current_line(26, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 2, 0LL);
    xsi_set_current_line(27, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_33_2(char *t0)
{
    char t13[8];
    char t18[8];
    char t43[16];
    char t44[8];
    char t49[16];
    char t52[16];
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    int t42;
    char *t45;
    unsigned int t46;
    char *t47;
    char *t50;
    char *t51;
    char *t53;

LAB0:    t1 = (t0 + 2744U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2948);
    *((int *)t2) = 1;
    t3 = (t0 + 2772);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(61, ng0);

LAB31:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1564);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t5, 4, t11, 32);
    t12 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 4, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1564);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = (t0 + 1656);
    t12 = (t11 + 36U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t14, 4, t15, 32);
    memset(t18, 0, 8);
    t16 = (t5 + 4);
    t17 = (t13 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t13);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t16);
    t10 = *((unsigned int *)t17);
    t21 = (t9 ^ t10);
    t22 = (t8 | t21);
    t23 = *((unsigned int *)t16);
    t24 = *((unsigned int *)t17);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB35;

LAB32:    if (t25 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t18) = 1;

LAB35:    t20 = (t18 + 4);
    t28 = *((unsigned int *)t20);
    t29 = (~(t28));
    t30 = *((unsigned int *)t18);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB36;

LAB37:
LAB38:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(34, ng0);

LAB9:    xsi_set_current_line(35, ng0);
    t11 = (t0 + 968U);
    t12 = *((char **)t11);
    t11 = (t0 + 944U);
    t14 = (t11 + 44U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t13, 32, t12, t15, 2, t16, 32, 1);
    t17 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t19 = (t13 + 4);
    t20 = (t17 + 4);
    t21 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t20);
    t26 = (t24 ^ t25);
    t27 = (t23 | t26);
    t28 = *((unsigned int *)t19);
    t29 = *((unsigned int *)t20);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t32 = (t27 & t31);
    if (t32 != 0)
        goto LAB13;

LAB10:    if (t30 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t18) = 1;

LAB13:    t34 = (t18 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t18);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB16:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);

LAB17:    t2 = ((char*)((ng6)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t42 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t42 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng9)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t42 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng10)));
    t42 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t42 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB8;

LAB12:    t33 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(36, ng0);
    t40 = ((char*)((ng4)));
    t41 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t41, t40, 0, 0, 4, 0LL);
    goto LAB16;

LAB18:    xsi_set_current_line(43, ng0);

LAB27:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    xsi_vlogtype_concat(t43, 64, 64, 2U, t4, 32, t5, 32);
    t11 = (t0 + 1748);
    xsi_vlogvar_assign_value(t11, t43, 0, 0, 64);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 784U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng7)));
    xsi_vlogtype_concat(t43, 64, 64, 2U, t2, 32, t4, 32);
    t5 = (t0 + 1840);
    xsi_vlogvar_assign_value(t5, t43, 0, 0, 64);
    goto LAB26;

LAB20:    xsi_set_current_line(47, ng0);

LAB28:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng8)));
    t11 = (t0 + 692U);
    t12 = *((char **)t11);
    memset(t18, 0, 8);
    t11 = (t18 + 4);
    t14 = (t12 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 31);
    t8 = (t7 & 1);
    *((unsigned int *)t18) = t8;
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 31);
    t21 = (t10 & 1);
    *((unsigned int *)t11) = t21;
    xsi_vlog_mul_concat(t13, 32, 1, t4, 1U, t18, 1);
    xsi_vlogtype_concat(t43, 64, 64, 2U, t13, 32, t5, 32);
    t15 = (t0 + 1748);
    xsi_vlogvar_assign_value(t15, t43, 0, 0, 64);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 784U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng8)));
    t5 = (t0 + 784U);
    t11 = *((char **)t5);
    memset(t18, 0, 8);
    t5 = (t18 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 31);
    t8 = (t7 & 1);
    *((unsigned int *)t18) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 31);
    t21 = (t10 & 1);
    *((unsigned int *)t5) = t21;
    xsi_vlog_mul_concat(t13, 32, 1, t2, 1U, t18, 1);
    xsi_vlogtype_concat(t43, 64, 64, 2U, t13, 32, t4, 32);
    t14 = (t0 + 1840);
    xsi_vlogvar_assign_value(t14, t43, 0, 0, 64);
    goto LAB26;

LAB22:    xsi_set_current_line(51, ng0);

LAB29:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng7)));
    xsi_vlogtype_concat(t43, 64, 64, 2U, t4, 32, t5, 32);
    t11 = (t0 + 1748);
    xsi_vlogvar_assign_value(t11, t43, 0, 0, 64);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 784U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng7)));
    xsi_vlogtype_concat(t43, 64, 64, 2U, t2, 32, t4, 32);
    t5 = (t0 + 1840);
    xsi_vlogvar_assign_value(t5, t43, 0, 0, 64);
    goto LAB26;

LAB24:    xsi_set_current_line(55, ng0);

LAB30:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng8)));
    t11 = (t0 + 692U);
    t12 = *((char **)t11);
    memset(t18, 0, 8);
    t11 = (t18 + 4);
    t14 = (t12 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 31);
    t8 = (t7 & 1);
    *((unsigned int *)t18) = t8;
    t9 = *((unsigned int *)t14);
    t10 = (t9 >> 31);
    t21 = (t10 & 1);
    *((unsigned int *)t11) = t21;
    xsi_vlog_mul_concat(t13, 32, 1, t4, 1U, t18, 1);
    xsi_vlogtype_concat(t43, 64, 64, 2U, t13, 32, t5, 32);
    t15 = (t0 + 1748);
    xsi_vlogvar_assign_value(t15, t43, 0, 0, 64);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 784U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng8)));
    t5 = (t0 + 784U);
    t11 = *((char **)t5);
    memset(t18, 0, 8);
    t5 = (t18 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (t6 >> 31);
    t8 = (t7 & 1);
    *((unsigned int *)t18) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 31);
    t21 = (t10 & 1);
    *((unsigned int *)t5) = t21;
    xsi_vlog_mul_concat(t13, 32, 1, t2, 1U, t18, 1);
    xsi_vlogtype_concat(t43, 64, 64, 2U, t13, 32, t4, 32);
    t14 = (t0 + 1840);
    xsi_vlogvar_assign_value(t14, t43, 0, 0, 64);
    goto LAB26;

LAB34:    t19 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(63, ng0);

LAB39:    xsi_set_current_line(64, ng0);
    t33 = ((char*)((ng1)));
    t34 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 1, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1932);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = (t0 + 1932);
    t12 = (t11 + 44U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t13, 32, t5, t14, 2, t15, 32, 1);
    t16 = ((char*)((ng1)));
    memset(t18, 0, 8);
    t17 = (t13 + 4);
    t19 = (t16 + 4);
    t6 = *((unsigned int *)t13);
    t7 = *((unsigned int *)t16);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t17);
    t10 = *((unsigned int *)t19);
    t21 = (t9 ^ t10);
    t22 = (t8 | t21);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t19);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB43;

LAB40:    if (t25 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t18) = 1;

LAB43:    t33 = (t18 + 4);
    t28 = *((unsigned int *)t33);
    t29 = (~(t28));
    t30 = *((unsigned int *)t18);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB44;

LAB45:    xsi_set_current_line(69, ng0);

LAB48:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1932);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng10)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t21 = (t9 ^ t10);
    t22 = (t8 | t21);
    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t14);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB52;

LAB49:    if (t25 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t13) = 1;

LAB52:    t16 = (t13 + 4);
    t28 = *((unsigned int *)t16);
    t29 = (~(t28));
    t30 = *((unsigned int *)t13);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB53;

LAB54:
LAB55:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1932);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng9)));
    memset(t13, 0, 8);
    t12 = (t5 + 4);
    t14 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t14);
    t21 = (t9 ^ t10);
    t22 = (t8 | t21);
    t23 = *((unsigned int *)t12);
    t24 = *((unsigned int *)t14);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB65;

LAB62:    if (t25 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t13) = 1;

LAB65:    t16 = (t13 + 4);
    t28 = *((unsigned int *)t16);
    t29 = (~(t28));
    t30 = *((unsigned int *)t13);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB66;

LAB67:
LAB68:
LAB46:    goto LAB38;

LAB42:    t20 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(65, ng0);

LAB47:    xsi_set_current_line(66, ng0);
    t34 = (t0 + 1060U);
    t40 = *((char **)t34);
    memset(t44, 0, 8);
    t34 = (t44 + 4);
    t41 = (t40 + 8);
    t45 = (t40 + 12);
    t35 = *((unsigned int *)t41);
    t36 = (t35 >> 0);
    *((unsigned int *)t44) = t36;
    t37 = *((unsigned int *)t45);
    t38 = (t37 >> 0);
    *((unsigned int *)t34) = t38;
    t39 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t39 & 4294967295U);
    t46 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t46 & 4294967295U);
    t47 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t47, t44, 0, 0, 32, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1060U);
    t4 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t13 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 4294967295U);
    t21 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t21 & 4294967295U);
    t11 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);
    goto LAB46;

LAB51:    t15 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(70, ng0);

LAB56:    xsi_set_current_line(71, ng0);
    t17 = (t0 + 1840);
    t19 = (t17 + 36U);
    t20 = *((char **)t19);
    t33 = ((char*)((ng2)));
    xsi_vlog_unsigned_not_equal(t43, 64, t20, 64, t33, 32);
    t34 = (t43 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t43);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(75, ng0);

LAB61:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB59:    goto LAB55;

LAB57:    xsi_set_current_line(71, ng0);

LAB60:    xsi_set_current_line(72, ng0);
    t40 = (t0 + 1748);
    t41 = (t40 + 36U);
    t45 = *((char **)t41);
    t47 = (t0 + 1840);
    t50 = (t47 + 36U);
    t51 = *((char **)t50);
    xsi_vlog_signed_mod(t52, 64, t45, 64, t51, 64);
    t53 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 32, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1748);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = (t0 + 1840);
    t12 = (t11 + 36U);
    t14 = *((char **)t12);
    xsi_vlog_signed_divide(t49, 64, t5, 64, t14, 64);
    t15 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t15, t49, 0, 0, 32, 0LL);
    goto LAB59;

LAB64:    t15 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(80, ng0);

LAB69:    xsi_set_current_line(81, ng0);
    t17 = (t0 + 1840);
    t19 = (t17 + 36U);
    t20 = *((char **)t19);
    t33 = ((char*)((ng2)));
    xsi_vlog_unsigned_not_equal(t43, 64, t20, 64, t33, 32);
    t34 = (t43 + 4);
    t35 = *((unsigned int *)t34);
    t36 = (~(t35));
    t37 = *((unsigned int *)t43);
    t38 = (t37 & t36);
    t39 = (t38 != 0);
    if (t39 > 0)
        goto LAB70;

LAB71:    xsi_set_current_line(85, ng0);

LAB74:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 32, 0LL);

LAB72:    goto LAB68;

LAB70:    xsi_set_current_line(81, ng0);

LAB73:    xsi_set_current_line(82, ng0);
    t40 = (t0 + 1748);
    t41 = (t40 + 36U);
    t45 = *((char **)t41);
    t47 = (t0 + 1840);
    t50 = (t47 + 36U);
    t51 = *((char **)t50);
    xsi_vlog_unsigned_mod(t52, 64, t45, 64, t51, 64);
    t53 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t53, t52, 0, 0, 32, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1748);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    t11 = (t0 + 1840);
    t12 = (t11 + 36U);
    t14 = *((char **)t12);
    xsi_vlog_unsigned_divide(t49, 64, t5, 64, t14, 64);
    t15 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t15, t49, 0, 0, 32, 0LL);
    goto LAB72;

}


extern void work_m_00000000001791329210_2042706489_init()
{
	static char *pe[] = {(void *)NetDecl_18_0,(void *)Initial_21_1,(void *)Always_33_2};
	xsi_register_didat("work_m_00000000001791329210_2042706489", "isim/testMultDiv_isim_beh.exe.sim/work/m_00000000001791329210_2042706489.didat");
	xsi_register_executes(pe);
}
