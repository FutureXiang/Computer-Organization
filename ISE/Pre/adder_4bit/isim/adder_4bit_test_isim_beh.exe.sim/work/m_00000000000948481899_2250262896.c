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
static const char *ng0 = "%04dns : A=%d, B=%d, Sum=%d, Overflow=%d";
static const char *ng1 = "D:/BUAA/CS/ComputerOrgan/ISE/adder_4bit/adder_4bit_test.v";
static unsigned int ng2[] = {5U, 0U};
static unsigned int ng3[] = {15U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {1, 0};

void Monitor_53_1(char *);
void Monitor_53_1(char *);


static void Monitor_53_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 920);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    t6 = (t0 + 1012);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 600U);
    t10 = *((char **)t9);
    t9 = (t0 + 692U);
    t11 = *((char **)t9);
    xsi_vlogfile_write(1, 0, 3, ng0, 6, t0, (char)118, t1, 64, (char)118, t5, 4, (char)118, t8, 4, (char)118, t10, 4, (char)118, t11, 1);

LAB1:    return;
}

static void Initial_47_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(47, ng1);

LAB2:    xsi_set_current_line(49, ng1);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 920);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(50, ng1);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1012);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);
    xsi_set_current_line(51, ng1);
    t1 = ((char*)((ng4)));
    t2 = (t0 + 1104);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(52, ng1);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1196);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(53, ng1);
    Monitor_53_1(t0);

LAB1:    return;
}

static void Always_55_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 1864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng1);
    t2 = (t0 + 1764);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng1);

LAB5:    xsi_set_current_line(57, ng1);
    t4 = (t0 + 1104);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t7) == 0)
        goto LAB6;

LAB8:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB9:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB11;

LAB10:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1104);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t3) = 1;
    goto LAB9;

LAB11:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB10;

}

void Monitor_53_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 1908);
    t2 = (t0 + 2204);
    xsi_vlogfile_monitor((void *)Monitor_53_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000000948481899_2250262896_init()
{
	static char *pe[] = {(void *)Initial_47_0,(void *)Always_55_2,(void *)Monitor_53_1};
	xsi_register_didat("work_m_00000000000948481899_2250262896", "isim/adder_4bit_test_isim_beh.exe.sim/work/m_00000000000948481899_2250262896.didat");
	xsi_register_executes(pe);
}
