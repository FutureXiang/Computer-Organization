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
static const char *ng0 = "time:%d, in:%d, state:%d";
static const char *ng1 = "D:/BUAA/CS/ComputerOrgan/ISE/FSM_1010/FSM_1010.v";
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};
static int ng6[] = {4, 0};

void Monitor_11_1(char *);
void Monitor_11_1(char *);


static void Monitor_11_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 1012);
    t5 = (t3 + 36U);
    t6 = *((char **)t5);
    xsi_vlogfile_write(1, 0, 3, ng0, 4, t0, (char)118, t1, 64, (char)118, t4, 1, (char)119, t6, 32);

LAB1:    return;
}

static void Initial_10_0(char *t0)
{

LAB0:    xsi_set_current_line(10, ng1);

LAB2:    xsi_set_current_line(11, ng1);
    Monitor_11_1(t0);

LAB1:    return;
}

static void Always_13_2(char *t0)
{
    char t9[8];
    char t10[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t11;
    char *t12;
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
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
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
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;

LAB0:    t1 = (t0 + 1680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng1);
    t2 = (t0 + 2020);
    *((int *)t2) = 1;
    t3 = (t0 + 1708);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng1);

LAB5:    xsi_set_current_line(14, ng1);
    t4 = (t0 + 1012);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_signed_case_compare(t6, 32, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_signed_case_compare(t6, 32, t2, 32);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(16, ng1);

LAB18:    xsi_set_current_line(17, ng1);
    t11 = (t0 + 692U);
    t12 = *((char **)t11);
    t11 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t14 = (t12 + 4);
    t15 = (t11 + 4);
    t16 = *((unsigned int *)t12);
    t17 = *((unsigned int *)t11);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB22;

LAB19:    if (t25 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    memset(t10, 0, 8);
    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t29) != 0)
        goto LAB25;

LAB26:    t36 = (t10 + 4);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t36);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB27;

LAB28:    t41 = *((unsigned int *)t10);
    t42 = (~(t41));
    t43 = *((unsigned int *)t36);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t36) > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t10) > 0)
        goto LAB33;

LAB34:    memcpy(t9, t45, 8);

LAB35:    t46 = (t0 + 1012);
    xsi_vlogvar_assign_value(t46, t9, 0, 0, 32);
    xsi_set_current_line(18, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB17;

LAB9:    xsi_set_current_line(21, ng1);

LAB36:    xsi_set_current_line(22, ng1);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t3);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t7);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB40;

LAB37:    if (t25 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t13) = 1;

LAB40:    memset(t10, 0, 8);
    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t12) != 0)
        goto LAB43;

LAB44:    t15 = (t10 + 4);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t15);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB45;

LAB46:    t41 = *((unsigned int *)t10);
    t42 = (~(t41));
    t43 = *((unsigned int *)t15);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t15) > 0)
        goto LAB49;

LAB50:    if (*((unsigned int *)t10) > 0)
        goto LAB51;

LAB52:    memcpy(t9, t29, 8);

LAB53:    t35 = (t0 + 1012);
    xsi_vlogvar_assign_value(t35, t9, 0, 0, 32);
    xsi_set_current_line(23, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB17;

LAB11:    xsi_set_current_line(26, ng1);

LAB54:    xsi_set_current_line(27, ng1);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t3);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t7);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB58;

LAB55:    if (t25 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t13) = 1;

LAB58:    memset(t10, 0, 8);
    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t12) != 0)
        goto LAB61;

LAB62:    t15 = (t10 + 4);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t15);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB63;

LAB64:    t41 = *((unsigned int *)t10);
    t42 = (~(t41));
    t43 = *((unsigned int *)t15);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t15) > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t10) > 0)
        goto LAB69;

LAB70:    memcpy(t9, t29, 8);

LAB71:    t35 = (t0 + 1012);
    xsi_vlogvar_assign_value(t35, t9, 0, 0, 32);
    xsi_set_current_line(28, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB17;

LAB13:    xsi_set_current_line(31, ng1);

LAB72:    xsi_set_current_line(32, ng1);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t3);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t7);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB76;

LAB73:    if (t25 != 0)
        goto LAB75;

LAB74:    *((unsigned int *)t13) = 1;

LAB76:    memset(t10, 0, 8);
    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t12) != 0)
        goto LAB79;

LAB80:    t15 = (t10 + 4);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t15);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB81;

LAB82:    t41 = *((unsigned int *)t10);
    t42 = (~(t41));
    t43 = *((unsigned int *)t15);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB83;

LAB84:    if (*((unsigned int *)t15) > 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t10) > 0)
        goto LAB87;

LAB88:    memcpy(t9, t29, 8);

LAB89:    t35 = (t0 + 1012);
    xsi_vlogvar_assign_value(t35, t9, 0, 0, 32);
    xsi_set_current_line(33, ng1);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t16 = *((unsigned int *)t3);
    t17 = *((unsigned int *)t2);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t4);
    t20 = *((unsigned int *)t5);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t5);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB93;

LAB90:    if (t25 != 0)
        goto LAB92;

LAB91:    *((unsigned int *)t9) = 1;

LAB93:    t11 = (t0 + 920);
    xsi_vlogvar_wait_assign_value(t11, t9, 0, 0, 1, 0LL);
    goto LAB17;

LAB15:    xsi_set_current_line(36, ng1);

LAB94:    xsi_set_current_line(37, ng1);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t3);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t7);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB98;

LAB95:    if (t25 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t13) = 1;

LAB98:    memset(t10, 0, 8);
    t12 = (t13 + 4);
    t30 = *((unsigned int *)t12);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t12) != 0)
        goto LAB101;

LAB102:    t15 = (t10 + 4);
    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t15);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB103;

LAB104:    t41 = *((unsigned int *)t10);
    t42 = (~(t41));
    t43 = *((unsigned int *)t15);
    t44 = (t42 || t43);
    if (t44 > 0)
        goto LAB105;

LAB106:    if (*((unsigned int *)t15) > 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t10) > 0)
        goto LAB109;

LAB110:    memcpy(t9, t29, 8);

LAB111:    t35 = (t0 + 1012);
    xsi_vlogvar_assign_value(t35, t9, 0, 0, 32);
    xsi_set_current_line(38, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB17;

LAB21:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB22;

LAB23:    *((unsigned int *)t10) = 1;
    goto LAB26;

LAB25:    t35 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB26;

LAB27:    t40 = ((char*)((ng3)));
    goto LAB28;

LAB29:    t45 = ((char*)((ng2)));
    goto LAB30;

LAB31:    xsi_vlog_unsigned_bit_combine(t9, 32, t40, 32, t45, 32);
    goto LAB35;

LAB33:    memcpy(t9, t40, 8);
    goto LAB35;

LAB39:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB40;

LAB41:    *((unsigned int *)t10) = 1;
    goto LAB44;

LAB43:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB44;

LAB45:    t28 = ((char*)((ng3)));
    goto LAB46;

LAB47:    t29 = ((char*)((ng4)));
    goto LAB48;

LAB49:    xsi_vlog_unsigned_bit_combine(t9, 32, t28, 32, t29, 32);
    goto LAB53;

LAB51:    memcpy(t9, t28, 8);
    goto LAB53;

LAB57:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t10) = 1;
    goto LAB62;

LAB61:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB62;

LAB63:    t28 = ((char*)((ng5)));
    goto LAB64;

LAB65:    t29 = ((char*)((ng2)));
    goto LAB66;

LAB67:    xsi_vlog_unsigned_bit_combine(t9, 32, t28, 32, t29, 32);
    goto LAB71;

LAB69:    memcpy(t9, t28, 8);
    goto LAB71;

LAB75:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB76;

LAB77:    *((unsigned int *)t10) = 1;
    goto LAB80;

LAB79:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB80;

LAB81:    t28 = ((char*)((ng2)));
    goto LAB82;

LAB83:    t29 = ((char*)((ng6)));
    goto LAB84;

LAB85:    xsi_vlog_unsigned_bit_combine(t9, 32, t28, 32, t29, 32);
    goto LAB89;

LAB87:    memcpy(t9, t28, 8);
    goto LAB89;

LAB92:    t7 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB93;

LAB97:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB98;

LAB99:    *((unsigned int *)t10) = 1;
    goto LAB102;

LAB101:    t14 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB102;

LAB103:    t28 = ((char*)((ng5)));
    goto LAB104;

LAB105:    t29 = ((char*)((ng2)));
    goto LAB106;

LAB107:    xsi_vlog_unsigned_bit_combine(t9, 32, t28, 32, t29, 32);
    goto LAB111;

LAB109:    memcpy(t9, t28, 8);
    goto LAB111;

}

void Monitor_11_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 1724);
    t2 = (t0 + 2028);
    xsi_vlogfile_monitor((void *)Monitor_11_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000003133045531_2883006231_init()
{
	static char *pe[] = {(void *)Initial_10_0,(void *)Always_13_2,(void *)Monitor_11_1};
	xsi_register_didat("work_m_00000000003133045531_2883006231", "isim/test_isim_beh.exe.sim/work/m_00000000003133045531_2883006231.didat");
	xsi_register_executes(pe);
}
