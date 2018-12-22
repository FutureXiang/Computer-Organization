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
static const char *ng0 = "D:/BUAA/CS/ComputerOrgan/ISE/Pipeline_VectorDot/VectorDot.v";
static int ng1[] = {0, 0};



static void Initial_15_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(15, ng0);

LAB2:    xsi_set_current_line(16, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(17, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1380);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_19_1(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;

LAB0:    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2244);
    *((int *)t2) = 1;
    t3 = (t0 + 2076);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(19, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = (t0 + 784U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t5, 32, t6, 32);
    t4 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t4, t7, 0, 0, 32, 0LL);
    xsi_set_current_line(21, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 876U);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_multiply(t7, 32, t3, 32, t4, 32);
    t2 = (t0 + 1380);
    xsi_vlogvar_wait_assign_value(t2, t7, 0, 0, 32, 0LL);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1380);
    t6 = (t5 + 36U);
    t8 = *((char **)t6);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t4, 32, t8, 32);
    t9 = (t0 + 1196);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 32);
    goto LAB2;

}


extern void work_m_00000000002042021215_3409648901_init()
{
	static char *pe[] = {(void *)Initial_15_0,(void *)Always_19_1};
	xsi_register_didat("work_m_00000000002042021215_3409648901", "isim/Pipeline_test_isim_beh.exe.sim/work/m_00000000002042021215_3409648901.didat");
	xsi_register_executes(pe);
}
