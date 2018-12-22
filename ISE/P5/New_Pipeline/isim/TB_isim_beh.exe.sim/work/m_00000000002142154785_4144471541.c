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
static const char *ng0 = "D:/BUAA/CS/ComputerOrgan/ISE/P5/New_Pipeline/Controller.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {35U, 0U};
static unsigned int ng3[] = {35136U, 0U};
static unsigned int ng4[] = {43U, 0U};
static unsigned int ng5[] = {18688U, 0U};
static unsigned int ng6[] = {0U, 0U};
static unsigned int ng7[] = {8U, 0U};
static unsigned int ng8[] = {2056U, 0U};
static unsigned int ng9[] = {33U, 0U};
static unsigned int ng10[] = {2240U, 0U};
static unsigned int ng11[] = {6336U, 0U};
static unsigned int ng12[] = {36U, 0U};
static unsigned int ng13[] = {192U, 0U};
static unsigned int ng14[] = {37U, 0U};
static unsigned int ng15[] = {1216U, 0U};
static unsigned int ng16[] = {42U, 0U};
static unsigned int ng17[] = {7360U, 0U};
static unsigned int ng18[] = {4U, 0U};
static unsigned int ng19[] = {14336U, 0U};
static unsigned int ng20[] = {7U, 0U};
static unsigned int ng21[] = {14338U, 0U};
static unsigned int ng22[] = {6U, 0U};
static unsigned int ng23[] = {14339U, 0U};
static unsigned int ng24[] = {5U, 0U};
static unsigned int ng25[] = {14341U, 0U};
static unsigned int ng26[] = {1U, 0U};
static unsigned int ng27[] = {14337U, 0U};
static unsigned int ng28[] = {14340U, 0U};
static unsigned int ng29[] = {13U, 0U};
static unsigned int ng30[] = {1600U, 0U};
static unsigned int ng31[] = {15U, 0U};
static unsigned int ng32[] = {1856U, 0U};
static unsigned int ng33[] = {2U, 0U};
static unsigned int ng34[] = {32U, 0U};
static unsigned int ng35[] = {3U, 0U};
static unsigned int ng36[] = {112U, 0U};



static void NetDecl_18_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 2548U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 600U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 26);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 26);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 63U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 63U);
    t12 = (t0 + 3388);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 63U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 5U);
    t25 = (t0 + 3320);
    *((int *)t25) = 1;

LAB1:    return;
}

static void NetDecl_19_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
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
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 2692U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 600U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 63U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 63U);
    t12 = (t0 + 3424);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 40U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 63U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 5U);
    t25 = (t0 + 3328);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Initial_23_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(23, ng0);

LAB2:    xsi_set_current_line(24, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 16, 0LL);

LAB1:    return;
}

static void Cont_27_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    char *t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
    char *t123;
    char *t124;
    char *t125;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;

LAB0:    t1 = (t0 + 2980U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 3820);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 3784);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 40U);
    t22 = *((char **)t21);
    memset(t22, 0, 8);
    t23 = 8U;
    t24 = t23;
    t25 = (t4 + 4);
    t26 = *((unsigned int *)t4);
    t23 = (t23 & t26);
    t27 = *((unsigned int *)t25);
    t24 = (t24 & t27);
    t23 = (t23 >> 3);
    t24 = (t24 >> 3);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 | t23);
    t30 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t30 | t24);
    xsi_driver_vfirst_trans(t18, 0, 0);
    t31 = (t0 + 3748);
    t32 = (t31 + 32U);
    t33 = *((char **)t32);
    t34 = (t33 + 40U);
    t35 = *((char **)t34);
    memset(t35, 0, 8);
    t36 = 16U;
    t37 = t36;
    t38 = (t4 + 4);
    t39 = *((unsigned int *)t4);
    t36 = (t36 & t39);
    t40 = *((unsigned int *)t38);
    t37 = (t37 & t40);
    t36 = (t36 >> 4);
    t37 = (t37 >> 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t42 | t36);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t43 | t37);
    xsi_driver_vfirst_trans(t31, 0, 0);
    t44 = (t0 + 3712);
    t45 = (t44 + 32U);
    t46 = *((char **)t45);
    t47 = (t46 + 40U);
    t48 = *((char **)t47);
    memset(t48, 0, 8);
    t49 = 32U;
    t50 = t49;
    t51 = (t4 + 4);
    t52 = *((unsigned int *)t4);
    t49 = (t49 & t52);
    t53 = *((unsigned int *)t51);
    t50 = (t50 & t53);
    t49 = (t49 >> 5);
    t50 = (t50 >> 5);
    t54 = (t48 + 4);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 | t49);
    t56 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t56 | t50);
    xsi_driver_vfirst_trans(t44, 0, 0);
    t57 = (t0 + 3676);
    t58 = (t57 + 32U);
    t59 = *((char **)t58);
    t60 = (t59 + 40U);
    t61 = *((char **)t60);
    memset(t61, 0, 8);
    t62 = 64U;
    t63 = t62;
    t64 = (t4 + 4);
    t65 = *((unsigned int *)t4);
    t62 = (t62 & t65);
    t66 = *((unsigned int *)t64);
    t63 = (t63 & t66);
    t62 = (t62 >> 6);
    t63 = (t63 >> 6);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t68 | t62);
    t69 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t69 | t63);
    xsi_driver_vfirst_trans(t57, 0, 0);
    t70 = (t0 + 3640);
    t71 = (t70 + 32U);
    t72 = *((char **)t71);
    t73 = (t72 + 40U);
    t74 = *((char **)t73);
    memset(t74, 0, 8);
    t75 = 128U;
    t76 = t75;
    t77 = (t4 + 4);
    t78 = *((unsigned int *)t4);
    t75 = (t75 & t78);
    t79 = *((unsigned int *)t77);
    t76 = (t76 & t79);
    t75 = (t75 >> 7);
    t76 = (t76 >> 7);
    t80 = (t74 + 4);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t81 | t75);
    t82 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t82 | t76);
    xsi_driver_vfirst_trans(t70, 0, 0);
    t83 = (t0 + 3604);
    t84 = (t83 + 32U);
    t85 = *((char **)t84);
    t86 = (t85 + 40U);
    t87 = *((char **)t86);
    memset(t87, 0, 8);
    t88 = 768U;
    t89 = t88;
    t90 = (t4 + 4);
    t91 = *((unsigned int *)t4);
    t88 = (t88 & t91);
    t92 = *((unsigned int *)t90);
    t89 = (t89 & t92);
    t88 = (t88 >> 8);
    t89 = (t89 >> 8);
    t93 = (t87 + 4);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t94 | t88);
    t95 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t95 | t89);
    xsi_driver_vfirst_trans(t83, 0, 1);
    t96 = (t0 + 3568);
    t97 = (t96 + 32U);
    t98 = *((char **)t97);
    t99 = (t98 + 40U);
    t100 = *((char **)t99);
    memset(t100, 0, 8);
    t101 = 7168U;
    t102 = t101;
    t103 = (t4 + 4);
    t104 = *((unsigned int *)t4);
    t101 = (t101 & t104);
    t105 = *((unsigned int *)t103);
    t102 = (t102 & t105);
    t101 = (t101 >> 10);
    t102 = (t102 >> 10);
    t106 = (t100 + 4);
    t107 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t107 | t101);
    t108 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t108 | t102);
    xsi_driver_vfirst_trans(t96, 0, 2);
    t109 = (t0 + 3532);
    t110 = (t109 + 32U);
    t111 = *((char **)t110);
    t112 = (t111 + 40U);
    t113 = *((char **)t112);
    memset(t113, 0, 8);
    t114 = 8192U;
    t115 = t114;
    t116 = (t4 + 4);
    t117 = *((unsigned int *)t4);
    t114 = (t114 & t117);
    t118 = *((unsigned int *)t116);
    t115 = (t115 & t118);
    t114 = (t114 >> 13);
    t115 = (t115 >> 13);
    t119 = (t113 + 4);
    t120 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t120 | t114);
    t121 = *((unsigned int *)t119);
    *((unsigned int *)t119) = (t121 | t115);
    xsi_driver_vfirst_trans(t109, 0, 0);
    t122 = (t0 + 3496);
    t123 = (t122 + 32U);
    t124 = *((char **)t123);
    t125 = (t124 + 40U);
    t126 = *((char **)t125);
    memset(t126, 0, 8);
    t127 = 16384U;
    t128 = t127;
    t129 = (t4 + 4);
    t130 = *((unsigned int *)t4);
    t127 = (t127 & t130);
    t131 = *((unsigned int *)t129);
    t128 = (t128 & t131);
    t127 = (t127 >> 14);
    t128 = (t128 >> 14);
    t132 = (t126 + 4);
    t133 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t133 | t127);
    t134 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t134 | t128);
    xsi_driver_vfirst_trans(t122, 0, 0);
    t135 = (t0 + 3460);
    t136 = (t135 + 32U);
    t137 = *((char **)t136);
    t138 = (t137 + 40U);
    t139 = *((char **)t138);
    memset(t139, 0, 8);
    t140 = 32768U;
    t141 = t140;
    t142 = (t4 + 4);
    t143 = *((unsigned int *)t4);
    t140 = (t140 & t143);
    t144 = *((unsigned int *)t142);
    t141 = (t141 & t144);
    t140 = (t140 >> 15);
    t141 = (t141 >> 15);
    t145 = (t139 + 4);
    t146 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t146 | t140);
    t147 = *((unsigned int *)t145);
    *((unsigned int *)t145) = (t147 | t141);
    xsi_driver_vfirst_trans(t135, 0, 0);
    t148 = (t0 + 3336);
    *((int *)t148) = 1;

LAB1:    return;
}

static void Always_29_4(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
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
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;

LAB0:    t1 = (t0 + 3124U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3344);
    *((int *)t2) = 1;
    t3 = (t0 + 3152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 1704U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t4, 6);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng26)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng29)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng31)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng35)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 6, t2, 6);
    if (t6 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(31, ng0);

LAB32:    xsi_set_current_line(32, ng0);
    t7 = ((char*)((ng3)));
    t8 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 16, 0LL);
    goto LAB31;

LAB9:    xsi_set_current_line(34, ng0);

LAB33:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 16, 0LL);
    goto LAB31;

LAB11:    xsi_set_current_line(37, ng0);

LAB34:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1796U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng7)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB38;

LAB35:    if (t19 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t9) = 1;

LAB38:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(41, ng0);

LAB43:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1796U);
    t3 = *((char **)t2);

LAB44:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 6, t2, 6);
    if (t6 == 1)
        goto LAB55;

LAB56:
LAB57:
LAB41:    goto LAB31;

LAB13:    xsi_set_current_line(64, ng0);

LAB64:    xsi_set_current_line(65, ng0);
    t4 = ((char*)((ng19)));
    t7 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);
    goto LAB31;

LAB15:    xsi_set_current_line(67, ng0);

LAB65:    xsi_set_current_line(68, ng0);
    t4 = ((char*)((ng21)));
    t7 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);
    goto LAB31;

LAB17:    xsi_set_current_line(70, ng0);

LAB66:    xsi_set_current_line(71, ng0);
    t4 = ((char*)((ng23)));
    t7 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);
    goto LAB31;

LAB19:    xsi_set_current_line(73, ng0);

LAB67:    xsi_set_current_line(74, ng0);
    t4 = ((char*)((ng25)));
    t7 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);
    goto LAB31;

LAB21:    xsi_set_current_line(76, ng0);

LAB68:    xsi_set_current_line(77, ng0);
    t4 = (t0 + 600U);
    t7 = *((char **)t4);
    memset(t9, 0, 8);
    t4 = (t9 + 4);
    t8 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 16);
    *((unsigned int *)t9) = t11;
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 16);
    *((unsigned int *)t4) = t13;
    t14 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t14 & 31U);
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 31U);

LAB69:    t22 = ((char*)((ng26)));
    t31 = xsi_vlog_unsigned_case_compare(t9, 5, t22, 5);
    if (t31 == 1)
        goto LAB70;

LAB71:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t9, 5, t2, 5);
    if (t6 == 1)
        goto LAB72;

LAB73:
LAB74:    goto LAB31;

LAB23:    xsi_set_current_line(84, ng0);

LAB75:    xsi_set_current_line(85, ng0);
    t4 = ((char*)((ng30)));
    t7 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);
    goto LAB31;

LAB25:    xsi_set_current_line(87, ng0);

LAB76:    xsi_set_current_line(88, ng0);
    t4 = ((char*)((ng32)));
    t7 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);
    goto LAB31;

LAB27:    xsi_set_current_line(90, ng0);

LAB77:    xsi_set_current_line(91, ng0);
    t4 = ((char*)((ng34)));
    t7 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);
    goto LAB31;

LAB29:    xsi_set_current_line(93, ng0);

LAB78:    xsi_set_current_line(94, ng0);
    t4 = ((char*)((ng36)));
    t7 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);
    goto LAB31;

LAB37:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(38, ng0);

LAB42:    xsi_set_current_line(39, ng0);
    t29 = ((char*)((ng8)));
    t30 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 16, 0LL);
    goto LAB41;

LAB45:    xsi_set_current_line(43, ng0);

LAB58:    xsi_set_current_line(44, ng0);
    t4 = ((char*)((ng10)));
    t7 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);
    goto LAB57;

LAB47:    xsi_set_current_line(46, ng0);

LAB59:    xsi_set_current_line(47, ng0);
    t4 = ((char*)((ng11)));
    t7 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);
    goto LAB57;

LAB49:    xsi_set_current_line(49, ng0);

LAB60:    xsi_set_current_line(50, ng0);
    t4 = ((char*)((ng13)));
    t7 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);
    goto LAB57;

LAB51:    xsi_set_current_line(52, ng0);

LAB61:    xsi_set_current_line(53, ng0);
    t4 = ((char*)((ng15)));
    t7 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);
    goto LAB57;

LAB53:    xsi_set_current_line(55, ng0);

LAB62:    xsi_set_current_line(56, ng0);
    t4 = ((char*)((ng17)));
    t7 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);
    goto LAB57;

LAB55:    xsi_set_current_line(58, ng0);

LAB63:    xsi_set_current_line(59, ng0);
    t4 = ((char*)((ng6)));
    t7 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);
    goto LAB57;

LAB70:    xsi_set_current_line(79, ng0);
    t23 = ((char*)((ng27)));
    t29 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t29, t23, 0, 0, 16, 0LL);
    goto LAB74;

LAB72:    xsi_set_current_line(81, ng0);
    t4 = ((char*)((ng28)));
    t7 = (t0 + 2024);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);
    goto LAB74;

}


extern void work_m_00000000002142154785_4144471541_init()
{
	static char *pe[] = {(void *)NetDecl_18_0,(void *)NetDecl_19_1,(void *)Initial_23_2,(void *)Cont_27_3,(void *)Always_29_4};
	xsi_register_didat("work_m_00000000002142154785_4144471541", "isim/TB_isim_beh.exe.sim/work/m_00000000002142154785_4144471541.didat");
	xsi_register_executes(pe);
}
