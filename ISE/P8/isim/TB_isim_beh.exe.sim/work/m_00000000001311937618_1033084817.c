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
static const char *ng0 = "D:/BUAA/CS/ComputerOrgan/ISE/P8/SaveMem.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {6U, 0U};



static void Cont_14_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t39[8];
    char t40[8];
    char t42[8];
    char t69[8];
    char t70[8];
    char t80[8];
    char t94[8];
    char t95[8];
    char t105[8];
    char t115[8];
    char t125[8];
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
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t41;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
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
    char *t57;
    char *t58;
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
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t126;
    char *t127;
    char *t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    char *t137;
    char *t138;
    char *t139;
    char *t140;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
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

LAB13:    t35 = *((unsigned int *)t4);
    t36 = (~(t35));
    t37 = *((unsigned int *)t29);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t39, 8);

LAB20:    t135 = (t0 + 1776);
    t136 = (t135 + 32U);
    t137 = *((char **)t136);
    t138 = (t137 + 40U);
    t139 = *((char **)t138);
    memcpy(t139, t3, 8);
    xsi_driver_vfirst_trans(t135, 0, 31);
    t140 = (t0 + 1732);
    *((int *)t140) = 1;

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

LAB12:    t33 = (t0 + 600U);
    t34 = *((char **)t33);
    goto LAB13;

LAB14:    t33 = (t0 + 784U);
    t41 = *((char **)t33);
    t33 = ((char*)((ng2)));
    memset(t42, 0, 8);
    t43 = (t41 + 4);
    t44 = (t33 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t33);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t43);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t43);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB24;

LAB21:    if (t54 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t42) = 1;

LAB24:    memset(t40, 0, 8);
    t58 = (t42 + 4);
    t59 = *((unsigned int *)t58);
    t60 = (~(t59));
    t61 = *((unsigned int *)t42);
    t62 = (t61 & t60);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t58) != 0)
        goto LAB27;

LAB28:    t65 = (t40 + 4);
    t66 = *((unsigned int *)t40);
    t67 = *((unsigned int *)t65);
    t68 = (t66 || t67);
    if (t68 > 0)
        goto LAB29;

LAB30:    t90 = *((unsigned int *)t40);
    t91 = (~(t90));
    t92 = *((unsigned int *)t65);
    t93 = (t91 || t92);
    if (t93 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t65) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t40) > 0)
        goto LAB35;

LAB36:    memcpy(t39, t94, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t34, 32, t39, 32);
    goto LAB20;

LAB18:    memcpy(t3, t34, 8);
    goto LAB20;

LAB23:    t57 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t40) = 1;
    goto LAB28;

LAB27:    t64 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t64) = 1;
    goto LAB28;

LAB29:    t71 = (t0 + 600U);
    t72 = *((char **)t71);
    memset(t70, 0, 8);
    t71 = (t70 + 4);
    t73 = (t72 + 4);
    t74 = *((unsigned int *)t72);
    t75 = (t74 >> 0);
    *((unsigned int *)t70) = t75;
    t76 = *((unsigned int *)t73);
    t77 = (t76 >> 0);
    *((unsigned int *)t71) = t77;
    t78 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t78 & 65535U);
    t79 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t79 & 65535U);
    t81 = (t0 + 600U);
    t82 = *((char **)t81);
    memset(t80, 0, 8);
    t81 = (t80 + 4);
    t83 = (t82 + 4);
    t84 = *((unsigned int *)t82);
    t85 = (t84 >> 0);
    *((unsigned int *)t80) = t85;
    t86 = *((unsigned int *)t83);
    t87 = (t86 >> 0);
    *((unsigned int *)t81) = t87;
    t88 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t88 & 65535U);
    t89 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t89 & 65535U);
    xsi_vlogtype_concat(t69, 32, 32, 2U, t80, 16, t70, 16);
    goto LAB30;

LAB31:    t96 = (t0 + 600U);
    t97 = *((char **)t96);
    memset(t95, 0, 8);
    t96 = (t95 + 4);
    t98 = (t97 + 4);
    t99 = *((unsigned int *)t97);
    t100 = (t99 >> 0);
    *((unsigned int *)t95) = t100;
    t101 = *((unsigned int *)t98);
    t102 = (t101 >> 0);
    *((unsigned int *)t96) = t102;
    t103 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t103 & 255U);
    t104 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t104 & 255U);
    t106 = (t0 + 600U);
    t107 = *((char **)t106);
    memset(t105, 0, 8);
    t106 = (t105 + 4);
    t108 = (t107 + 4);
    t109 = *((unsigned int *)t107);
    t110 = (t109 >> 0);
    *((unsigned int *)t105) = t110;
    t111 = *((unsigned int *)t108);
    t112 = (t111 >> 0);
    *((unsigned int *)t106) = t112;
    t113 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t113 & 255U);
    t114 = *((unsigned int *)t106);
    *((unsigned int *)t106) = (t114 & 255U);
    t116 = (t0 + 600U);
    t117 = *((char **)t116);
    memset(t115, 0, 8);
    t116 = (t115 + 4);
    t118 = (t117 + 4);
    t119 = *((unsigned int *)t117);
    t120 = (t119 >> 0);
    *((unsigned int *)t115) = t120;
    t121 = *((unsigned int *)t118);
    t122 = (t121 >> 0);
    *((unsigned int *)t116) = t122;
    t123 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t123 & 255U);
    t124 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t124 & 255U);
    t126 = (t0 + 600U);
    t127 = *((char **)t126);
    memset(t125, 0, 8);
    t126 = (t125 + 4);
    t128 = (t127 + 4);
    t129 = *((unsigned int *)t127);
    t130 = (t129 >> 0);
    *((unsigned int *)t125) = t130;
    t131 = *((unsigned int *)t128);
    t132 = (t131 >> 0);
    *((unsigned int *)t126) = t132;
    t133 = *((unsigned int *)t125);
    *((unsigned int *)t125) = (t133 & 255U);
    t134 = *((unsigned int *)t126);
    *((unsigned int *)t126) = (t134 & 255U);
    xsi_vlogtype_concat(t94, 32, 32, 4U, t125, 8, t115, 8, t105, 8, t95, 8);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t39, 32, t69, 32, t94, 32);
    goto LAB37;

LAB35:    memcpy(t39, t69, 8);
    goto LAB37;

}


extern void work_m_00000000001311937618_1033084817_init()
{
	static char *pe[] = {(void *)Cont_14_0};
	xsi_register_didat("work_m_00000000001311937618_1033084817", "isim/TB_isim_beh.exe.sim/work/m_00000000001311937618_1033084817.didat");
	xsi_register_executes(pe);
}
