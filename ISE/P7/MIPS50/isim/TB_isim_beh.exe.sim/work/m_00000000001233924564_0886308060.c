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
static const char *ng0 = "D:/BUAA/CS/ComputerOrgan/ISE/P7/MIPS50/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {8U, 0U};
static unsigned int ng10[] = {9U, 0U};
static unsigned int ng11[] = {10U, 0U};
static unsigned int ng12[] = {11U, 0U};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {13U, 0U};



static void NetDecl_33_0(char *t0)
{
    char t3[16];
    char t6[8];
    char t14[16];
    char t18[8];
    char t26[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 1904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 600U);
    t4 = *((char **)t2);
    t2 = (t0 + 600U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    xsi_vlogtype_concat(t3, 33, 33, 2U, t6, 1, t4, 32);
    t15 = (t0 + 692U);
    t16 = *((char **)t15);
    t15 = (t0 + 692U);
    t17 = *((char **)t15);
    memset(t18, 0, 8);
    t15 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t15) = t25;
    xsi_vlogtype_concat(t14, 33, 33, 2U, t18, 1, t16, 32);
    xsi_vlog_unsigned_add(t26, 33, t3, 33, t14, 33);
    t27 = (t0 + 2600);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 40U);
    t31 = *((char **)t30);
    xsi_vlog_bit_copy(t31, 0, t26, 0, 33);
    xsi_driver_vfirst_trans(t27, 0, 32U);
    t32 = (t0 + 2532);
    *((int *)t32) = 1;

LAB1:    return;
}

static void NetDecl_34_1(char *t0)
{
    char t3[16];
    char t6[8];
    char t14[16];
    char t18[8];
    char t26[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 600U);
    t4 = *((char **)t2);
    t2 = (t0 + 600U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 31);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 31);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    xsi_vlogtype_concat(t3, 33, 33, 2U, t6, 1, t4, 32);
    t15 = (t0 + 692U);
    t16 = *((char **)t15);
    t15 = (t0 + 692U);
    t17 = *((char **)t15);
    memset(t18, 0, 8);
    t15 = (t18 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 31);
    t22 = (t21 & 1);
    *((unsigned int *)t18) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 31);
    t25 = (t24 & 1);
    *((unsigned int *)t15) = t25;
    xsi_vlogtype_concat(t14, 33, 33, 2U, t18, 1, t16, 32);
    xsi_vlog_unsigned_minus(t26, 33, t3, 33, t14, 33);
    t27 = (t0 + 2636);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    t30 = (t29 + 40U);
    t31 = *((char **)t30);
    xsi_vlog_bit_copy(t31, 0, t26, 0, 33);
    xsi_driver_vfirst_trans(t27, 0, 32U);
    t32 = (t0 + 2540);
    *((int *)t32) = 1;

LAB1:    return;
}

static void Cont_35_2(char *t0)
{
    char t4[8];
    char t22[8];
    char t33[8];
    char t41[8];
    char t57[8];
    char t91[8];
    char t109[8];
    char t120[8];
    char t128[8];
    char t144[8];
    char t176[8];
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
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    char *t43;
    unsigned int t44;
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
    char *t56;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    char *t61;
    char *t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    char *t90;
    char *t92;
    char *t93;
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
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    char *t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    char *t118;
    char *t119;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    char *t143;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    char *t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    int t168;
    int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t177;
    unsigned int t178;
    unsigned int t179;
    char *t180;
    char *t181;
    char *t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    char *t190;
    char *t191;
    unsigned int t192;
    unsigned int t193;
    unsigned int t194;
    int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    char *t204;
    char *t205;
    char *t206;
    char *t207;
    char *t208;
    unsigned int t209;
    unsigned int t210;
    char *t211;
    unsigned int t212;
    unsigned int t213;
    char *t214;
    unsigned int t215;
    unsigned int t216;
    char *t217;

LAB0:    t1 = (t0 + 2192U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
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

LAB7:    t20 = (t0 + 1060U);
    t21 = *((char **)t20);
    memset(t22, 0, 8);
    t20 = (t22 + 4);
    t23 = (t21 + 8);
    t24 = (t21 + 12);
    t25 = *((unsigned int *)t23);
    t26 = (t25 >> 0);
    t27 = (t26 & 1);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 0);
    t30 = (t29 & 1);
    *((unsigned int *)t20) = t30;
    t31 = (t0 + 1060U);
    t32 = *((char **)t31);
    memset(t33, 0, 8);
    t31 = (t33 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 31);
    t37 = (t36 & 1);
    *((unsigned int *)t33) = t37;
    t38 = *((unsigned int *)t34);
    t39 = (t38 >> 31);
    t40 = (t39 & 1);
    *((unsigned int *)t31) = t40;
    memset(t41, 0, 8);
    t42 = (t22 + 4);
    t43 = (t33 + 4);
    t44 = *((unsigned int *)t22);
    t45 = *((unsigned int *)t33);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB9;

LAB8:    if (t53 != 0)
        goto LAB10;

LAB11:    t58 = *((unsigned int *)t4);
    t59 = *((unsigned int *)t41);
    t60 = (t58 & t59);
    *((unsigned int *)t57) = t60;
    t61 = (t4 + 4);
    t62 = (t41 + 4);
    t63 = (t57 + 4);
    t64 = *((unsigned int *)t61);
    t65 = *((unsigned int *)t62);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = *((unsigned int *)t63);
    t68 = (t67 != 0);
    if (t68 == 1)
        goto LAB12;

LAB13:
LAB14:    t89 = (t0 + 876U);
    t90 = *((char **)t89);
    t89 = ((char*)((ng2)));
    memset(t91, 0, 8);
    t92 = (t90 + 4);
    t93 = (t89 + 4);
    t94 = *((unsigned int *)t90);
    t95 = *((unsigned int *)t89);
    t96 = (t94 ^ t95);
    t97 = *((unsigned int *)t92);
    t98 = *((unsigned int *)t93);
    t99 = (t97 ^ t98);
    t100 = (t96 | t99);
    t101 = *((unsigned int *)t92);
    t102 = *((unsigned int *)t93);
    t103 = (t101 | t102);
    t104 = (~(t103));
    t105 = (t100 & t104);
    if (t105 != 0)
        goto LAB18;

LAB15:    if (t103 != 0)
        goto LAB17;

LAB16:    *((unsigned int *)t91) = 1;

LAB18:    t107 = (t0 + 1152U);
    t108 = *((char **)t107);
    memset(t109, 0, 8);
    t107 = (t109 + 4);
    t110 = (t108 + 8);
    t111 = (t108 + 12);
    t112 = *((unsigned int *)t110);
    t113 = (t112 >> 0);
    t114 = (t113 & 1);
    *((unsigned int *)t109) = t114;
    t115 = *((unsigned int *)t111);
    t116 = (t115 >> 0);
    t117 = (t116 & 1);
    *((unsigned int *)t107) = t117;
    t118 = (t0 + 1152U);
    t119 = *((char **)t118);
    memset(t120, 0, 8);
    t118 = (t120 + 4);
    t121 = (t119 + 4);
    t122 = *((unsigned int *)t119);
    t123 = (t122 >> 31);
    t124 = (t123 & 1);
    *((unsigned int *)t120) = t124;
    t125 = *((unsigned int *)t121);
    t126 = (t125 >> 31);
    t127 = (t126 & 1);
    *((unsigned int *)t118) = t127;
    memset(t128, 0, 8);
    t129 = (t109 + 4);
    t130 = (t120 + 4);
    t131 = *((unsigned int *)t109);
    t132 = *((unsigned int *)t120);
    t133 = (t131 ^ t132);
    t134 = *((unsigned int *)t129);
    t135 = *((unsigned int *)t130);
    t136 = (t134 ^ t135);
    t137 = (t133 | t136);
    t138 = *((unsigned int *)t129);
    t139 = *((unsigned int *)t130);
    t140 = (t138 | t139);
    t141 = (~(t140));
    t142 = (t137 & t141);
    if (t142 != 0)
        goto LAB20;

LAB19:    if (t140 != 0)
        goto LAB21;

LAB22:    t145 = *((unsigned int *)t91);
    t146 = *((unsigned int *)t128);
    t147 = (t145 & t146);
    *((unsigned int *)t144) = t147;
    t148 = (t91 + 4);
    t149 = (t128 + 4);
    t150 = (t144 + 4);
    t151 = *((unsigned int *)t148);
    t152 = *((unsigned int *)t149);
    t153 = (t151 | t152);
    *((unsigned int *)t150) = t153;
    t154 = *((unsigned int *)t150);
    t155 = (t154 != 0);
    if (t155 == 1)
        goto LAB23;

LAB24:
LAB25:    t177 = *((unsigned int *)t57);
    t178 = *((unsigned int *)t144);
    t179 = (t177 | t178);
    *((unsigned int *)t176) = t179;
    t180 = (t57 + 4);
    t181 = (t144 + 4);
    t182 = (t176 + 4);
    t183 = *((unsigned int *)t180);
    t184 = *((unsigned int *)t181);
    t185 = (t183 | t184);
    *((unsigned int *)t182) = t185;
    t186 = *((unsigned int *)t182);
    t187 = (t186 != 0);
    if (t187 == 1)
        goto LAB26;

LAB27:
LAB28:    t204 = (t0 + 2672);
    t205 = (t204 + 32U);
    t206 = *((char **)t205);
    t207 = (t206 + 40U);
    t208 = *((char **)t207);
    memset(t208, 0, 8);
    t209 = 1U;
    t210 = t209;
    t211 = (t176 + 4);
    t212 = *((unsigned int *)t176);
    t209 = (t209 & t212);
    t213 = *((unsigned int *)t211);
    t210 = (t210 & t213);
    t214 = (t208 + 4);
    t215 = *((unsigned int *)t208);
    *((unsigned int *)t208) = (t215 | t209);
    t216 = *((unsigned int *)t214);
    *((unsigned int *)t214) = (t216 | t210);
    xsi_driver_vfirst_trans(t204, 0, 0);
    t217 = (t0 + 2548);
    *((int *)t217) = 1;

LAB1:    return;
LAB6:    t19 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

LAB9:    *((unsigned int *)t41) = 1;
    goto LAB11;

LAB10:    t56 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB11;

LAB12:    t69 = *((unsigned int *)t57);
    t70 = *((unsigned int *)t63);
    *((unsigned int *)t57) = (t69 | t70);
    t71 = (t4 + 4);
    t72 = (t41 + 4);
    t73 = *((unsigned int *)t4);
    t74 = (~(t73));
    t75 = *((unsigned int *)t71);
    t76 = (~(t75));
    t77 = *((unsigned int *)t41);
    t78 = (~(t77));
    t79 = *((unsigned int *)t72);
    t80 = (~(t79));
    t81 = (t74 & t76);
    t82 = (t78 & t80);
    t83 = (~(t81));
    t84 = (~(t82));
    t85 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t85 & t83);
    t86 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t86 & t84);
    t87 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t87 & t83);
    t88 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t88 & t84);
    goto LAB14;

LAB17:    t106 = (t91 + 4);
    *((unsigned int *)t91) = 1;
    *((unsigned int *)t106) = 1;
    goto LAB18;

LAB20:    *((unsigned int *)t128) = 1;
    goto LAB22;

LAB21:    t143 = (t128 + 4);
    *((unsigned int *)t128) = 1;
    *((unsigned int *)t143) = 1;
    goto LAB22;

LAB23:    t156 = *((unsigned int *)t144);
    t157 = *((unsigned int *)t150);
    *((unsigned int *)t144) = (t156 | t157);
    t158 = (t91 + 4);
    t159 = (t128 + 4);
    t160 = *((unsigned int *)t91);
    t161 = (~(t160));
    t162 = *((unsigned int *)t158);
    t163 = (~(t162));
    t164 = *((unsigned int *)t128);
    t165 = (~(t164));
    t166 = *((unsigned int *)t159);
    t167 = (~(t166));
    t168 = (t161 & t163);
    t169 = (t165 & t167);
    t170 = (~(t168));
    t171 = (~(t169));
    t172 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t172 & t170);
    t173 = *((unsigned int *)t150);
    *((unsigned int *)t150) = (t173 & t171);
    t174 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t174 & t170);
    t175 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t175 & t171);
    goto LAB25;

LAB26:    t188 = *((unsigned int *)t176);
    t189 = *((unsigned int *)t182);
    *((unsigned int *)t176) = (t188 | t189);
    t190 = (t57 + 4);
    t191 = (t144 + 4);
    t192 = *((unsigned int *)t190);
    t193 = (~(t192));
    t194 = *((unsigned int *)t57);
    t195 = (t194 & t193);
    t196 = *((unsigned int *)t191);
    t197 = (~(t196));
    t198 = *((unsigned int *)t144);
    t199 = (t198 & t197);
    t200 = (~(t195));
    t201 = (~(t199));
    t202 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t202 & t200);
    t203 = *((unsigned int *)t182);
    *((unsigned int *)t182) = (t203 & t201);
    goto LAB28;

}

static void Always_38_3(char *t0)
{
    char t10[8];
    char t40[8];
    char t47[8];
    char t48[16];
    char t49[16];
    char t50[16];
    char t51[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
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
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;

LAB0:    t1 = (t0 + 2336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2556);
    *((int *)t2) = 1;
    t3 = (t0 + 2364);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 876U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB2;

LAB7:    xsi_set_current_line(41, ng0);

LAB36:    xsi_set_current_line(42, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = (t0 + 692U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t8, 32, t9, 32);
    t7 = (t0 + 1380);
    xsi_vlogvar_assign_value(t7, t10, 0, 0, 32);
    goto LAB35;

LAB9:    xsi_set_current_line(44, ng0);

LAB37:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_minus(t10, 32, t4, 32, t7, 32);
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB35;

LAB11:    xsi_set_current_line(48, ng0);

LAB38:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 & t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB39;

LAB40:
LAB41:    t39 = (t0 + 1380);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 32);
    goto LAB35;

LAB13:    xsi_set_current_line(51, ng0);

LAB42:    xsi_set_current_line(52, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB43;

LAB44:
LAB45:    t39 = (t0 + 1380);
    xsi_vlogvar_assign_value(t39, t10, 0, 0, 32);
    goto LAB35;

LAB15:    xsi_set_current_line(54, ng0);

LAB46:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    *((unsigned int *)t10) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t10 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB47;

LAB48:
LAB49:    t21 = (t0 + 1380);
    xsi_vlogvar_assign_value(t21, t10, 0, 0, 32);
    goto LAB35;

LAB17:    xsi_set_current_line(57, ng0);

LAB50:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t40) = t13;
    t3 = (t4 + 4);
    t8 = (t7 + 4);
    t9 = (t40 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t8);
    t16 = (t14 | t15);
    *((unsigned int *)t9) = t16;
    t17 = *((unsigned int *)t9);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB51;

LAB52:
LAB53:    memset(t10, 0, 8);
    t39 = (t10 + 4);
    t41 = (t40 + 4);
    t35 = *((unsigned int *)t40);
    t36 = (~(t35));
    *((unsigned int *)t10) = t36;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t41) != 0)
        goto LAB55;

LAB54:    t44 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t44 & 4294967295U);
    t45 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t45 & 4294967295U);
    t46 = (t0 + 1380);
    xsi_vlogvar_assign_value(t46, t10, 0, 0, 32);
    goto LAB35;

LAB19:    xsi_set_current_line(61, ng0);

LAB56:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = (t0 + 692U);
    t7 = *((char **)t3);
    memset(t47, 0, 8);
    xsi_vlog_signed_less(t47, 32, t4, 32, t7, 32);
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t47, 0, 0, 32);
    goto LAB35;

LAB21:    xsi_set_current_line(64, ng0);

LAB57:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 600U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    xsi_vlogtype_concat(t48, 33, 33, 2U, t3, 1, t4, 32);
    t7 = (t0 + 692U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng1)));
    xsi_vlogtype_concat(t49, 33, 33, 2U, t7, 1, t8, 32);
    xsi_vlog_unsigned_less(t50, 33, t48, 33, t49, 33);
    t9 = (t0 + 1380);
    xsi_vlogvar_assign_value(t9, t50, 0, 0, 32);
    goto LAB35;

LAB23:    xsi_set_current_line(68, ng0);

LAB58:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 784U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_lshift(t10, 32, t4, 32, t7, 5);
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB35;

LAB25:    xsi_set_current_line(71, ng0);

LAB59:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 784U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_rshift(t10, 32, t4, 32, t7, 5);
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t10, 0, 0, 32);
    goto LAB35;

LAB27:    xsi_set_current_line(74, ng0);

LAB60:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 784U);
    t7 = *((char **)t3);
    memset(t47, 0, 8);
    xsi_vlog_signed_arith_rshift(t47, 32, t4, 32, t7, 32);
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t47, 0, 0, 32);
    goto LAB35;

LAB29:    xsi_set_current_line(77, ng0);

LAB61:    xsi_set_current_line(78, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 600U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_lshift(t40, 32, t4, 32, t10, 5);
    t9 = (t0 + 1380);
    xsi_vlogvar_assign_value(t9, t40, 0, 0, 32);
    goto LAB35;

LAB31:    xsi_set_current_line(80, ng0);

LAB62:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 600U);
    t7 = *((char **)t3);
    memset(t10, 0, 8);
    t3 = (t10 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t10) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t40, 0, 8);
    xsi_vlog_unsigned_rshift(t40, 32, t4, 32, t10, 5);
    t9 = (t0 + 1380);
    xsi_vlogvar_assign_value(t9, t40, 0, 0, 32);
    goto LAB35;

LAB33:    xsi_set_current_line(83, ng0);

LAB63:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 692U);
    t4 = *((char **)t3);
    t3 = (t0 + 600U);
    t7 = *((char **)t3);
    memset(t47, 0, 8);
    t3 = (t47 + 4);
    t8 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t47) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t3) = t14;
    t15 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t15 & 31U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 31U);
    memset(t51, 0, 8);
    xsi_vlog_signed_arith_rshift(t51, 32, t4, 32, t47, 32);
    t9 = (t0 + 1380);
    xsi_vlogvar_assign_value(t9, t51, 0, 0, 32);
    goto LAB35;

LAB39:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t4);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t7);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t35 & t33);
    t36 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t36 & t34);
    t37 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t37 & t33);
    t38 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t38 & t34);
    goto LAB41;

LAB43:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t29);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t30);
    goto LAB45;

LAB47:    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t10) = (t19 | t20);
    goto LAB49;

LAB51:    t19 = *((unsigned int *)t40);
    t20 = *((unsigned int *)t9);
    *((unsigned int *)t40) = (t19 | t20);
    t21 = (t4 + 4);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t4);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t7);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t33 & t29);
    t34 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t34 & t30);
    goto LAB53;

LAB55:    t37 = *((unsigned int *)t10);
    t38 = *((unsigned int *)t41);
    *((unsigned int *)t10) = (t37 | t38);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t41);
    *((unsigned int *)t39) = (t42 | t43);
    goto LAB54;

}


extern void work_m_00000000001233924564_0886308060_init()
{
	static char *pe[] = {(void *)NetDecl_33_0,(void *)NetDecl_34_1,(void *)Cont_35_2,(void *)Always_38_3};
	xsi_register_didat("work_m_00000000001233924564_0886308060", "isim/TB_isim_beh.exe.sim/work/m_00000000001233924564_0886308060.didat");
	xsi_register_executes(pe);
}
