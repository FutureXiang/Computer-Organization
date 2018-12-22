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
static const char *ng0 = "D:/BUAA/CS/ComputerOrgan/ISE/P5/New_Pipeline/CMP.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};



static void Initial_28_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(28, ng0);

LAB2:    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_32_1(char *t0)
{
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t11;

LAB0:    t1 = (t0 + 1680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1876);
    *((int *)t2) = 1;
    t3 = (t0 + 1708);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 784U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 3);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 3);
    if (t6 == 1)
        goto LAB17;

LAB18:
LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(34, ng0);
    t8 = (t0 + 600U);
    t9 = *((char **)t8);
    t8 = (t0 + 692U);
    t11 = *((char **)t8);
    memset(t12, 0, 8);
    xsi_vlog_signed_equal(t12, 32, t9, 32, t11, 32);
    t8 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t8, t12, 0, 0, 1, 0LL);
    goto LAB19;

LAB9:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_greatereq(t12, 32, t4, 32, t3, 32);
    t8 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t8, t12, 0, 0, 1, 0LL);
    goto LAB19;

LAB11:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_greater(t12, 32, t4, 32, t3, 32);
    t8 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t8, t12, 0, 0, 1, 0LL);
    goto LAB19;

LAB13:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_leq(t12, 32, t4, 32, t3, 32);
    t8 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t8, t12, 0, 0, 1, 0LL);
    goto LAB19;

LAB15:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t12, 0, 8);
    xsi_vlog_signed_less(t12, 32, t4, 32, t3, 32);
    t8 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t8, t12, 0, 0, 1, 0LL);
    goto LAB19;

LAB17:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t8 = *((char **)t3);
    memset(t12, 0, 8);
    xsi_vlog_signed_not_equal(t12, 32, t4, 32, t8, 32);
    t3 = (t0 + 1012);
    xsi_vlogvar_wait_assign_value(t3, t12, 0, 0, 1, 0LL);
    goto LAB19;

}


extern void work_m_00000000001531548902_1579609468_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Always_32_1};
	xsi_register_didat("work_m_00000000001531548902_1579609468", "isim/TB_isim_beh.exe.sim/work/m_00000000001531548902_1579609468.didat");
	xsi_register_executes(pe);
}
