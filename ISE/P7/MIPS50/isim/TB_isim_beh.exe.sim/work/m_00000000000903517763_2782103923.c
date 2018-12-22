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
static const char *ng0 = "D:/BUAA/CS/ComputerOrgan/ISE/P7/MIPS50/Timer.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {2, 0};
static int ng5[] = {3, 0};



static void Initial_20_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(20, ng0);

LAB2:    xsi_set_current_line(21, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(22, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(23, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(24, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(25, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}

static void Cont_28_1(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 2784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 3936);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 3844);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_29_2(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 2928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 1);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 1);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 3972);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 3852);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_30_3(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 3072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t5 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 3);
    t10 = (t9 & 1);
    *((unsigned int *)t5) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 3);
    t13 = (t12 & 1);
    *((unsigned int *)t6) = t13;
    t14 = (t0 + 4008);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    t17 = (t16 + 40U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 1U;
    t20 = t19;
    t21 = (t5 + 4);
    t22 = *((unsigned int *)t5);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t27 = (t0 + 3860);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_32_4(char *t0)
{
    char t4[8];
    char t20[8];
    char t34[8];
    char t50[8];
    char t58[8];
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;

LAB0:    t1 = (t0 + 3216U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t21) != 0)
        goto LAB10;

LAB11:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB12;

LAB13:    memcpy(t58, t20, 8);

LAB14:    t90 = (t0 + 4044);
    t91 = (t90 + 32U);
    t92 = *((char **)t91);
    t93 = (t92 + 40U);
    t94 = *((char **)t93);
    memset(t94, 0, 8);
    t95 = 1U;
    t96 = t95;
    t97 = (t58 + 4);
    t98 = *((unsigned int *)t58);
    t95 = (t95 & t98);
    t99 = *((unsigned int *)t97);
    t96 = (t96 & t99);
    t100 = (t94 + 4);
    t101 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t101 | t95);
    t102 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t102 | t96);
    xsi_driver_vfirst_trans(t90, 0, 0);
    t103 = (t0 + 3868);
    *((int *)t103) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t20) = 1;
    goto LAB11;

LAB10:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB11;

LAB12:    t32 = (t0 + 784U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng1)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB18;

LAB15:    if (t46 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t34) = 1;

LAB18:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t51) != 0)
        goto LAB21;

LAB22:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t20 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t50) = 1;
    goto LAB22;

LAB21:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB22;

LAB23:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t20 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB25;

}

static void Cont_33_5(char *t0)
{
    char t4[8];
    char t20[8];
    char t34[8];
    char t50[8];
    char t58[8];
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
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;

LAB0:    t1 = (t0 + 3360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t4) = 1;

LAB7:    memset(t20, 0, 8);
    t21 = (t4 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t21) != 0)
        goto LAB10;

LAB11:    t28 = (t20 + 4);
    t29 = *((unsigned int *)t20);
    t30 = *((unsigned int *)t28);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB12;

LAB13:    memcpy(t58, t20, 8);

LAB14:    t90 = (t0 + 4080);
    t91 = (t90 + 32U);
    t92 = *((char **)t91);
    t93 = (t92 + 40U);
    t94 = *((char **)t93);
    memset(t94, 0, 8);
    t95 = 1U;
    t96 = t95;
    t97 = (t58 + 4);
    t98 = *((unsigned int *)t58);
    t95 = (t95 & t98);
    t99 = *((unsigned int *)t97);
    t96 = (t96 & t99);
    t100 = (t94 + 4);
    t101 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t101 | t95);
    t102 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t102 | t96);
    xsi_driver_vfirst_trans(t90, 0, 0);
    t103 = (t0 + 3876);
    *((int *)t103) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t20) = 1;
    goto LAB11;

LAB10:    t27 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t27) = 1;
    goto LAB11;

LAB12:    t32 = (t0 + 784U);
    t33 = *((char **)t32);
    t32 = ((char*)((ng2)));
    memset(t34, 0, 8);
    t35 = (t33 + 4);
    t36 = (t32 + 4);
    t37 = *((unsigned int *)t33);
    t38 = *((unsigned int *)t32);
    t39 = (t37 ^ t38);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = (t39 | t42);
    t44 = *((unsigned int *)t35);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    t47 = (~(t46));
    t48 = (t43 & t47);
    if (t48 != 0)
        goto LAB18;

LAB15:    if (t46 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t34) = 1;

LAB18:    memset(t50, 0, 8);
    t51 = (t34 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t34);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB19;

LAB20:    if (*((unsigned int *)t51) != 0)
        goto LAB21;

LAB22:    t59 = *((unsigned int *)t20);
    t60 = *((unsigned int *)t50);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t20 + 4);
    t63 = (t50 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB14;

LAB17:    t49 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB18;

LAB19:    *((unsigned int *)t50) = 1;
    goto LAB22;

LAB21:    t57 = (t50 + 4);
    *((unsigned int *)t50) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB22;

LAB23:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t20 + 4);
    t73 = (t50 + 4);
    t74 = *((unsigned int *)t20);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t50);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB25;

}

static void Cont_35_6(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t40[8];
    char t41[8];
    char t44[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
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
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t42;
    char *t43;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;

LAB0:    t1 = (t0 + 3504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 784U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t40, 8);

LAB20:    t81 = (t0 + 4116);
    t82 = (t81 + 32U);
    t83 = *((char **)t82);
    t84 = (t83 + 40U);
    t85 = *((char **)t84);
    memcpy(t85, t3, 8);
    xsi_driver_vfirst_trans(t81, 0, 31);
    t86 = (t0 + 3884);
    *((int *)t86) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 1840);
    t34 = (t33 + 36U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t42 = (t0 + 784U);
    t43 = *((char **)t42);
    t42 = ((char*)((ng2)));
    memset(t44, 0, 8);
    t45 = (t43 + 4);
    t46 = (t42 + 4);
    t47 = *((unsigned int *)t43);
    t48 = *((unsigned int *)t42);
    t49 = (t47 ^ t48);
    t50 = *((unsigned int *)t45);
    t51 = *((unsigned int *)t46);
    t52 = (t50 ^ t51);
    t53 = (t49 | t52);
    t54 = *((unsigned int *)t45);
    t55 = *((unsigned int *)t46);
    t56 = (t54 | t55);
    t57 = (~(t56));
    t58 = (t53 & t57);
    if (t58 != 0)
        goto LAB24;

LAB21:    if (t56 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t44) = 1;

LAB24:    memset(t41, 0, 8);
    t60 = (t44 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t44);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t60) != 0)
        goto LAB27;

LAB28:    t67 = (t41 + 4);
    t68 = *((unsigned int *)t41);
    t69 = *((unsigned int *)t67);
    t70 = (t68 || t69);
    if (t70 > 0)
        goto LAB29;

LAB30:    t74 = *((unsigned int *)t41);
    t75 = (~(t74));
    t76 = *((unsigned int *)t67);
    t77 = (t75 || t76);
    if (t77 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t67) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t41) > 0)
        goto LAB35;

LAB36:    memcpy(t40, t80, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t40, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

LAB23:    t59 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t59) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t41) = 1;
    goto LAB28;

LAB27:    t66 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB28;

LAB29:    t71 = (t0 + 1932);
    t72 = (t71 + 36U);
    t73 = *((char **)t72);
    goto LAB30;

LAB31:    t78 = (t0 + 2024);
    t79 = (t78 + 36U);
    t80 = *((char **)t79);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t40, 32, t73, 32, t80, 32);
    goto LAB37;

LAB35:    memcpy(t40, t73, 8);
    goto LAB37;

}

static void Always_40_7(char *t0)
{
    char t13[8];
    char t14[8];
    char t23[8];
    char t42[8];
    char t50[8];
    char t89[8];
    char t111[8];
    char t113[8];
    char t137[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    char *t88;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    char *t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t112;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 3892);
    *((int *)t2) = 1;
    t3 = (t0 + 3676);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 692U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1428U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1520U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(54, ng0);

LAB18:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB19:    t5 = ((char*)((ng1)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t33 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng2)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t33 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t33 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng5)));
    t33 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t33 == 1)
        goto LAB26;

LAB27:
LAB28:
LAB16:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(41, ng0);

LAB9:    xsi_set_current_line(42, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(48, ng0);

LAB13:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    memset(t14, 0, 8);
    t4 = (t14 + 4);
    t11 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 0);
    *((unsigned int *)t14) = t16;
    t17 = *((unsigned int *)t11);
    t18 = (t17 >> 0);
    *((unsigned int *)t4) = t18;
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t19 & 3U);
    t20 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t20 & 3U);
    t12 = ((char*)((ng3)));
    t21 = (t0 + 968U);
    t22 = *((char **)t21);
    memset(t23, 0, 8);
    t21 = (t23 + 4);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 3);
    t27 = (t26 & 1);
    *((unsigned int *)t23) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 3);
    t30 = (t29 & 1);
    *((unsigned int *)t21) = t30;
    t31 = ((char*)((ng3)));
    xsi_vlogtype_concat(t13, 32, 32, 4U, t31, 28, t23, 1, t12, 1, t14, 2);
    t32 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t32, t13, 0, 0, 32, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(51, ng0);

LAB17:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB16;

LAB20:    xsi_set_current_line(56, ng0);

LAB29:    xsi_set_current_line(57, ng0);
    t11 = (t0 + 1336U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t11 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB33;

LAB31:    if (*((unsigned int *)t11) == 0)
        goto LAB30;

LAB32:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;

LAB33:    t22 = (t13 + 4);
    t24 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (~(t15));
    *((unsigned int *)t13) = t16;
    *((unsigned int *)t22) = 0;
    if (*((unsigned int *)t24) != 0)
        goto LAB35;

LAB34:    t25 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t25 & 1U);
    t26 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t26 & 1U);
    t31 = (t13 + 4);
    t27 = *((unsigned int *)t31);
    t28 = (~(t27));
    t29 = *((unsigned int *)t13);
    t30 = (t29 & t28);
    t34 = (t30 != 0);
    if (t34 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB39;

LAB40:
LAB41:    goto LAB28;

LAB22:    xsi_set_current_line(64, ng0);

LAB43:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 32, 0LL);
    goto LAB28;

LAB24:    xsi_set_current_line(68, ng0);

LAB44:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 1152U);
    t5 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t5 + 4);
    t6 = *((unsigned int *)t3);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB48;

LAB46:    if (*((unsigned int *)t3) == 0)
        goto LAB45;

LAB47:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB48:    t12 = (t13 + 4);
    t21 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t13) = t16;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t21) != 0)
        goto LAB50;

LAB49:    t25 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t25 & 1U);
    t26 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t26 & 1U);
    t22 = (t13 + 4);
    t27 = *((unsigned int *)t22);
    t28 = (~(t27));
    t29 = *((unsigned int *)t13);
    t30 = (t29 & t28);
    t34 = (t30 != 0);
    if (t34 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t25 = (t16 & t20);
    if (t25 != 0)
        goto LAB58;

LAB55:    if (t19 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t13) = 1;

LAB58:    memset(t14, 0, 8);
    t21 = (t13 + 4);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t21) != 0)
        goto LAB61;

LAB62:    t24 = (t14 + 4);
    t34 = *((unsigned int *)t14);
    t36 = *((unsigned int *)t24);
    t37 = (t34 || t36);
    if (t37 > 0)
        goto LAB63;

LAB64:    memcpy(t50, t14, 8);

LAB65:    t81 = (t50 + 4);
    t82 = *((unsigned int *)t81);
    t83 = (~(t82));
    t84 = *((unsigned int *)t50);
    t85 = (t84 & t83);
    t86 = (t85 != 0);
    if (t86 > 0)
        goto LAB78;

LAB79:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 32, t5, 32, t11, 32);
    t12 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 32, 0LL);

LAB80:
LAB53:    goto LAB28;

LAB26:    xsi_set_current_line(82, ng0);

LAB92:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t5 = (t3 + 4);
    t11 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t11);
    t15 = (t9 ^ t10);
    t16 = (t8 | t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t11);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t25 = (t16 & t20);
    if (t25 != 0)
        goto LAB96;

LAB93:    if (t19 != 0)
        goto LAB95;

LAB94:    *((unsigned int *)t13) = 1;

LAB96:    memset(t14, 0, 8);
    t21 = (t13 + 4);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t13);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t21) != 0)
        goto LAB99;

LAB100:    t24 = (t14 + 4);
    t34 = *((unsigned int *)t14);
    t36 = *((unsigned int *)t24);
    t37 = (t34 || t36);
    if (t37 > 0)
        goto LAB101;

LAB102:    memcpy(t50, t14, 8);

LAB103:    memset(t89, 0, 8);
    t64 = (t50 + 4);
    t100 = *((unsigned int *)t64);
    t101 = (~(t100));
    t102 = *((unsigned int *)t50);
    t103 = (t102 & t101);
    t106 = (t103 & 1U);
    if (t106 != 0)
        goto LAB117;

LAB118:    if (*((unsigned int *)t64) != 0)
        goto LAB119;

LAB120:    t81 = (t89 + 4);
    t107 = *((unsigned int *)t89);
    t108 = (!(t107));
    t109 = *((unsigned int *)t81);
    t110 = (t108 || t109);
    if (t110 > 0)
        goto LAB121;

LAB122:    memcpy(t137, t89, 8);

LAB123:    t125 = (t137 + 4);
    t160 = *((unsigned int *)t125);
    t161 = (~(t160));
    t162 = *((unsigned int *)t137);
    t163 = (t162 & t161);
    t164 = (t163 != 0);
    if (t164 > 0)
        goto LAB135;

LAB136:
LAB137:    goto LAB28;

LAB30:    *((unsigned int *)t13) = 1;
    goto LAB33;

LAB35:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t24);
    *((unsigned int *)t13) = (t17 | t18);
    t19 = *((unsigned int *)t22);
    t20 = *((unsigned int *)t24);
    *((unsigned int *)t22) = (t19 | t20);
    goto LAB34;

LAB36:    xsi_set_current_line(58, ng0);
    t32 = ((char*)((ng1)));
    t35 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t35, t32, 0, 0, 1, 0LL);
    goto LAB38;

LAB39:    xsi_set_current_line(59, ng0);

LAB42:    xsi_set_current_line(60, ng0);
    t5 = ((char*)((ng2)));
    t11 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 32, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB41;

LAB45:    *((unsigned int *)t13) = 1;
    goto LAB48;

LAB50:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t21);
    *((unsigned int *)t13) = (t17 | t18);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t21);
    *((unsigned int *)t12) = (t19 | t20);
    goto LAB49;

LAB51:    xsi_set_current_line(69, ng0);

LAB54:    xsi_set_current_line(70, ng0);
    t24 = ((char*)((ng1)));
    t31 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t31, t24, 0, 0, 32, 0LL);
    goto LAB53;

LAB57:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t14) = 1;
    goto LAB62;

LAB61:    t22 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB62;

LAB63:    t31 = (t0 + 2024);
    t32 = (t31 + 36U);
    t35 = *((char **)t32);
    t38 = ((char*)((ng2)));
    memset(t23, 0, 8);
    t39 = (t35 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB67;

LAB66:    t40 = (t38 + 4);
    if (*((unsigned int *)t40) != 0)
        goto LAB67;

LAB70:    if (*((unsigned int *)t35) > *((unsigned int *)t38))
        goto LAB69;

LAB68:    *((unsigned int *)t23) = 1;

LAB69:    memset(t42, 0, 8);
    t43 = (t23 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t23);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t43) != 0)
        goto LAB73;

LAB74:    t51 = *((unsigned int *)t14);
    t52 = *((unsigned int *)t42);
    t53 = (t51 & t52);
    *((unsigned int *)t50) = t53;
    t54 = (t14 + 4);
    t55 = (t42 + 4);
    t56 = (t50 + 4);
    t57 = *((unsigned int *)t54);
    t58 = *((unsigned int *)t55);
    t59 = (t57 | t58);
    *((unsigned int *)t56) = t59;
    t60 = *((unsigned int *)t56);
    t61 = (t60 != 0);
    if (t61 == 1)
        goto LAB75;

LAB76:
LAB77:    goto LAB65;

LAB67:    t41 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB69;

LAB71:    *((unsigned int *)t42) = 1;
    goto LAB74;

LAB73:    t49 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB74;

LAB75:    t62 = *((unsigned int *)t50);
    t63 = *((unsigned int *)t56);
    *((unsigned int *)t50) = (t62 | t63);
    t64 = (t14 + 4);
    t65 = (t42 + 4);
    t66 = *((unsigned int *)t14);
    t67 = (~(t66));
    t68 = *((unsigned int *)t64);
    t69 = (~(t68));
    t70 = *((unsigned int *)t42);
    t71 = (~(t70));
    t72 = *((unsigned int *)t65);
    t73 = (~(t72));
    t33 = (t67 & t69);
    t74 = (t71 & t73);
    t75 = (~(t33));
    t76 = (~(t74));
    t77 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t77 & t75);
    t78 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t78 & t76);
    t79 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t79 & t75);
    t80 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t80 & t76);
    goto LAB77;

LAB78:    xsi_set_current_line(72, ng0);

LAB81:    xsi_set_current_line(73, ng0);
    t87 = (t0 + 1244U);
    t88 = *((char **)t87);
    t87 = ((char*)((ng1)));
    memset(t89, 0, 8);
    t90 = (t88 + 4);
    t91 = (t87 + 4);
    t92 = *((unsigned int *)t88);
    t93 = *((unsigned int *)t87);
    t94 = (t92 ^ t93);
    t95 = *((unsigned int *)t90);
    t96 = *((unsigned int *)t91);
    t97 = (t95 ^ t96);
    t98 = (t94 | t97);
    t99 = *((unsigned int *)t90);
    t100 = *((unsigned int *)t91);
    t101 = (t99 | t100);
    t102 = (~(t101));
    t103 = (t98 & t102);
    if (t103 != 0)
        goto LAB85;

LAB82:    if (t101 != 0)
        goto LAB84;

LAB83:    *((unsigned int *)t89) = 1;

LAB85:    t105 = (t89 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (~(t106));
    t108 = *((unsigned int *)t89);
    t109 = (t108 & t107);
    t110 = (t109 != 0);
    if (t110 > 0)
        goto LAB86;

LAB87:
LAB88:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1336U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB89;

LAB90:
LAB91:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB80;

LAB84:    t104 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB85;

LAB86:    xsi_set_current_line(74, ng0);
    t112 = ((char*)((ng3)));
    t114 = (t0 + 1840);
    t115 = (t114 + 36U);
    t116 = *((char **)t115);
    memset(t113, 0, 8);
    t117 = (t113 + 4);
    t118 = (t116 + 4);
    t119 = *((unsigned int *)t116);
    t120 = (t119 >> 1);
    *((unsigned int *)t113) = t120;
    t121 = *((unsigned int *)t118);
    t122 = (t121 >> 1);
    *((unsigned int *)t117) = t122;
    t123 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t123 & 2147483647U);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t124 & 2147483647U);
    xsi_vlogtype_concat(t111, 32, 32, 2U, t113, 31, t112, 1);
    t125 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t125, t111, 0, 0, 32, 0LL);
    goto LAB88;

LAB89:    xsi_set_current_line(76, ng0);
    t5 = ((char*)((ng2)));
    t11 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t11, t5, 0, 0, 1, 0LL);
    goto LAB91;

LAB95:    t12 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB96;

LAB97:    *((unsigned int *)t14) = 1;
    goto LAB100;

LAB99:    t22 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB100;

LAB101:    t31 = (t0 + 1336U);
    t32 = *((char **)t31);
    memset(t23, 0, 8);
    t31 = (t32 + 4);
    t44 = *((unsigned int *)t31);
    t45 = (~(t44));
    t46 = *((unsigned int *)t32);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB107;

LAB105:    if (*((unsigned int *)t31) == 0)
        goto LAB104;

LAB106:    t35 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t35) = 1;

LAB107:    t38 = (t23 + 4);
    t39 = (t32 + 4);
    t51 = *((unsigned int *)t32);
    t52 = (~(t51));
    *((unsigned int *)t23) = t52;
    *((unsigned int *)t38) = 0;
    if (*((unsigned int *)t39) != 0)
        goto LAB109;

LAB108:    t60 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t60 & 1U);
    t61 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t61 & 1U);
    memset(t42, 0, 8);
    t40 = (t23 + 4);
    t62 = *((unsigned int *)t40);
    t63 = (~(t62));
    t66 = *((unsigned int *)t23);
    t67 = (t66 & t63);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB110;

LAB111:    if (*((unsigned int *)t40) != 0)
        goto LAB112;

LAB113:    t69 = *((unsigned int *)t14);
    t70 = *((unsigned int *)t42);
    t71 = (t69 & t70);
    *((unsigned int *)t50) = t71;
    t43 = (t14 + 4);
    t49 = (t42 + 4);
    t54 = (t50 + 4);
    t72 = *((unsigned int *)t43);
    t73 = *((unsigned int *)t49);
    t75 = (t72 | t73);
    *((unsigned int *)t54) = t75;
    t76 = *((unsigned int *)t54);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB114;

LAB115:
LAB116:    goto LAB103;

LAB104:    *((unsigned int *)t23) = 1;
    goto LAB107;

LAB109:    t53 = *((unsigned int *)t23);
    t57 = *((unsigned int *)t39);
    *((unsigned int *)t23) = (t53 | t57);
    t58 = *((unsigned int *)t38);
    t59 = *((unsigned int *)t39);
    *((unsigned int *)t38) = (t58 | t59);
    goto LAB108;

LAB110:    *((unsigned int *)t42) = 1;
    goto LAB113;

LAB112:    t41 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB113;

LAB114:    t78 = *((unsigned int *)t50);
    t79 = *((unsigned int *)t54);
    *((unsigned int *)t50) = (t78 | t79);
    t55 = (t14 + 4);
    t56 = (t42 + 4);
    t80 = *((unsigned int *)t14);
    t82 = (~(t80));
    t83 = *((unsigned int *)t55);
    t84 = (~(t83));
    t85 = *((unsigned int *)t42);
    t86 = (~(t85));
    t92 = *((unsigned int *)t56);
    t93 = (~(t92));
    t33 = (t82 & t84);
    t74 = (t86 & t93);
    t94 = (~(t33));
    t95 = (~(t74));
    t96 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t96 & t94);
    t97 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t97 & t95);
    t98 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t98 & t94);
    t99 = *((unsigned int *)t50);
    *((unsigned int *)t50) = (t99 & t95);
    goto LAB116;

LAB117:    *((unsigned int *)t89) = 1;
    goto LAB120;

LAB119:    t65 = (t89 + 4);
    *((unsigned int *)t89) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB120;

LAB121:    t87 = (t0 + 1244U);
    t88 = *((char **)t87);
    t87 = ((char*)((ng2)));
    memset(t111, 0, 8);
    t90 = (t88 + 4);
    t91 = (t87 + 4);
    t119 = *((unsigned int *)t88);
    t120 = *((unsigned int *)t87);
    t121 = (t119 ^ t120);
    t122 = *((unsigned int *)t90);
    t123 = *((unsigned int *)t91);
    t124 = (t122 ^ t123);
    t126 = (t121 | t124);
    t127 = *((unsigned int *)t90);
    t128 = *((unsigned int *)t91);
    t129 = (t127 | t128);
    t130 = (~(t129));
    t131 = (t126 & t130);
    if (t131 != 0)
        goto LAB127;

LAB124:    if (t129 != 0)
        goto LAB126;

LAB125:    *((unsigned int *)t111) = 1;

LAB127:    memset(t113, 0, 8);
    t105 = (t111 + 4);
    t132 = *((unsigned int *)t105);
    t133 = (~(t132));
    t134 = *((unsigned int *)t111);
    t135 = (t134 & t133);
    t136 = (t135 & 1U);
    if (t136 != 0)
        goto LAB128;

LAB129:    if (*((unsigned int *)t105) != 0)
        goto LAB130;

LAB131:    t138 = *((unsigned int *)t89);
    t139 = *((unsigned int *)t113);
    t140 = (t138 | t139);
    *((unsigned int *)t137) = t140;
    t114 = (t89 + 4);
    t115 = (t113 + 4);
    t116 = (t137 + 4);
    t141 = *((unsigned int *)t114);
    t142 = *((unsigned int *)t115);
    t143 = (t141 | t142);
    *((unsigned int *)t116) = t143;
    t144 = *((unsigned int *)t116);
    t145 = (t144 != 0);
    if (t145 == 1)
        goto LAB132;

LAB133:
LAB134:    goto LAB123;

LAB126:    t104 = (t111 + 4);
    *((unsigned int *)t111) = 1;
    *((unsigned int *)t104) = 1;
    goto LAB127;

LAB128:    *((unsigned int *)t113) = 1;
    goto LAB131;

LAB130:    t112 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t112) = 1;
    goto LAB131;

LAB132:    t146 = *((unsigned int *)t137);
    t147 = *((unsigned int *)t116);
    *((unsigned int *)t137) = (t146 | t147);
    t117 = (t89 + 4);
    t118 = (t113 + 4);
    t148 = *((unsigned int *)t117);
    t149 = (~(t148));
    t150 = *((unsigned int *)t89);
    t151 = (t150 & t149);
    t152 = *((unsigned int *)t118);
    t153 = (~(t152));
    t154 = *((unsigned int *)t113);
    t155 = (t154 & t153);
    t156 = (~(t151));
    t157 = (~(t155));
    t158 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t158 & t156);
    t159 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t159 & t157);
    goto LAB134;

LAB135:    xsi_set_current_line(85, ng0);
    t165 = ((char*)((ng1)));
    t166 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t166, t165, 0, 0, 1, 0LL);
    goto LAB137;

}


extern void work_m_00000000000903517763_2782103923_init()
{
	static char *pe[] = {(void *)Initial_20_0,(void *)Cont_28_1,(void *)Cont_29_2,(void *)Cont_30_3,(void *)Cont_32_4,(void *)Cont_33_5,(void *)Cont_35_6,(void *)Always_40_7};
	xsi_register_didat("work_m_00000000000903517763_2782103923", "isim/TB_isim_beh.exe.sim/work/m_00000000000903517763_2782103923.didat");
	xsi_register_executes(pe);
}
