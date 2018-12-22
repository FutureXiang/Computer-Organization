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
static const char *ng0 = "D:/BUAA/CS/ComputerOrgan/ISE/P1/SingleDigitExpression/string.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {48, 0};
static int ng4[] = {57, 0};
static int ng5[] = {3, 0};
static int ng6[] = {43, 0};
static int ng7[] = {42, 0};
static int ng8[] = {2, 0};



static void Cont_30_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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

LAB7:    t22 = (t0 + 2164);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    t25 = (t24 + 40U);
    t26 = *((char **)t25);
    memset(t26, 0, 8);
    t27 = 1U;
    t28 = t27;
    t29 = (t6 + 4);
    t30 = *((unsigned int *)t6);
    t27 = (t27 & t30);
    t31 = *((unsigned int *)t29);
    t28 = (t28 & t31);
    t32 = (t26 + 4);
    t33 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t33 | t27);
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 | t28);
    xsi_driver_vfirst_trans(t22, 0, 0);
    t35 = (t0 + 2112);
    *((int *)t35) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

}

static void Initial_31_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(31, ng0);

LAB2:    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 2, 0LL);

LAB1:    return;
}

static void Always_35_2(char *t0)
{
    char t13[8];
    char t37[8];
    char t41[8];
    char t55[8];
    char t59[8];
    char t67[8];
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
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t53;
    char *t54;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
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
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    int t91;
    int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    char *t106;

LAB0:    t1 = (t0 + 1916U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2120);
    *((int *)t2) = 1;
    t3 = (t0 + 1944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
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

LAB7:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);

LAB9:    xsi_set_current_line(37, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(39, ng0);

LAB13:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1104);
    t5 = (t4 + 36U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t14 = (t11 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
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
        goto LAB17;

LAB14:    if (t25 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t13) = 1;

LAB17:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
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
        goto LAB52;

LAB49:    if (t20 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t13) = 1;

LAB52:    t15 = (t13 + 4);
    t23 = *((unsigned int *)t15);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
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
        goto LAB112;

LAB109:    if (t20 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t13) = 1;

LAB112:    t15 = (t13 + 4);
    t23 = *((unsigned int *)t15);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB113;

LAB114:
LAB115:
LAB55:
LAB20:    goto LAB12;

LAB16:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(40, ng0);

LAB21:    xsi_set_current_line(41, ng0);
    t35 = (t0 + 784U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng3)));
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    if (*((unsigned int *)t38) != 0)
        goto LAB23;

LAB22:    t39 = (t35 + 4);
    if (*((unsigned int *)t39) != 0)
        goto LAB23;

LAB26:    if (*((unsigned int *)t36) < *((unsigned int *)t35))
        goto LAB25;

LAB24:    *((unsigned int *)t37) = 1;

LAB25:    memset(t41, 0, 8);
    t42 = (t37 + 4);
    t43 = *((unsigned int *)t42);
    t44 = (~(t43));
    t45 = *((unsigned int *)t37);
    t46 = (t45 & t44);
    t47 = (t46 & 1U);
    if (t47 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t42) != 0)
        goto LAB29;

LAB30:    t49 = (t41 + 4);
    t50 = *((unsigned int *)t41);
    t51 = *((unsigned int *)t49);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB31;

LAB32:    memcpy(t67, t41, 8);

LAB33:    t99 = (t67 + 4);
    t100 = *((unsigned int *)t99);
    t101 = (~(t100));
    t102 = *((unsigned int *)t67);
    t103 = (t102 & t101);
    t104 = (t103 != 0);
    if (t104 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB48:    goto LAB20;

LAB23:    t40 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB25;

LAB27:    *((unsigned int *)t41) = 1;
    goto LAB30;

LAB29:    t48 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t48) = 1;
    goto LAB30;

LAB31:    t53 = (t0 + 784U);
    t54 = *((char **)t53);
    t53 = ((char*)((ng4)));
    memset(t55, 0, 8);
    t56 = (t54 + 4);
    if (*((unsigned int *)t56) != 0)
        goto LAB35;

LAB34:    t57 = (t53 + 4);
    if (*((unsigned int *)t57) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t54) > *((unsigned int *)t53))
        goto LAB37;

LAB36:    *((unsigned int *)t55) = 1;

LAB37:    memset(t59, 0, 8);
    t60 = (t55 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (~(t61));
    t63 = *((unsigned int *)t55);
    t64 = (t63 & t62);
    t65 = (t64 & 1U);
    if (t65 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t60) != 0)
        goto LAB41;

LAB42:    t68 = *((unsigned int *)t41);
    t69 = *((unsigned int *)t59);
    t70 = (t68 & t69);
    *((unsigned int *)t67) = t70;
    t71 = (t41 + 4);
    t72 = (t59 + 4);
    t73 = (t67 + 4);
    t74 = *((unsigned int *)t71);
    t75 = *((unsigned int *)t72);
    t76 = (t74 | t75);
    *((unsigned int *)t73) = t76;
    t77 = *((unsigned int *)t73);
    t78 = (t77 != 0);
    if (t78 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB33;

LAB35:    t58 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t59) = 1;
    goto LAB42;

LAB41:    t66 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t66) = 1;
    goto LAB42;

LAB43:    t79 = *((unsigned int *)t67);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t67) = (t79 | t80);
    t81 = (t41 + 4);
    t82 = (t59 + 4);
    t83 = *((unsigned int *)t41);
    t84 = (~(t83));
    t85 = *((unsigned int *)t81);
    t86 = (~(t85));
    t87 = *((unsigned int *)t59);
    t88 = (~(t87));
    t89 = *((unsigned int *)t82);
    t90 = (~(t89));
    t91 = (t84 & t86);
    t92 = (t88 & t90);
    t93 = (~(t91));
    t94 = (~(t92));
    t95 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t95 & t93);
    t96 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t96 & t94);
    t97 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t97 & t93);
    t98 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t98 & t94);
    goto LAB45;

LAB46:    xsi_set_current_line(42, ng0);
    t105 = ((char*)((ng1)));
    t106 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t106, t105, 0, 0, 2, 0LL);
    goto LAB48;

LAB51:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(46, ng0);

LAB56:    xsi_set_current_line(47, ng0);
    t28 = (t0 + 784U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng3)));
    memset(t37, 0, 8);
    t35 = (t29 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB58;

LAB57:    t36 = (t28 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB58;

LAB61:    if (*((unsigned int *)t29) < *((unsigned int *)t28))
        goto LAB60;

LAB59:    *((unsigned int *)t37) = 1;

LAB60:    memset(t41, 0, 8);
    t39 = (t37 + 4);
    t30 = *((unsigned int *)t39);
    t31 = (~(t30));
    t32 = *((unsigned int *)t37);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t39) != 0)
        goto LAB64;

LAB65:    t42 = (t41 + 4);
    t43 = *((unsigned int *)t41);
    t44 = *((unsigned int *)t42);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB66;

LAB67:    memcpy(t67, t41, 8);

LAB68:    t81 = (t67 + 4);
    t94 = *((unsigned int *)t81);
    t95 = (~(t94));
    t96 = *((unsigned int *)t67);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB81;

LAB82:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
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
        goto LAB87;

LAB84:    if (t20 != 0)
        goto LAB86;

LAB85:    *((unsigned int *)t13) = 1;

LAB87:    memset(t37, 0, 8);
    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB88;

LAB89:    if (*((unsigned int *)t12) != 0)
        goto LAB90;

LAB91:    t15 = (t37 + 4);
    t30 = *((unsigned int *)t37);
    t31 = (!(t30));
    t32 = *((unsigned int *)t15);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB92;

LAB93:    memcpy(t59, t37, 8);

LAB94:    t56 = (t59 + 4);
    t98 = *((unsigned int *)t56);
    t100 = (~(t98));
    t101 = *((unsigned int *)t59);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB106;

LAB107:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB108:
LAB83:    goto LAB55;

LAB58:    t38 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB60;

LAB62:    *((unsigned int *)t41) = 1;
    goto LAB65;

LAB64:    t40 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB65;

LAB66:    t48 = (t0 + 784U);
    t49 = *((char **)t48);
    t48 = ((char*)((ng4)));
    memset(t55, 0, 8);
    t53 = (t49 + 4);
    if (*((unsigned int *)t53) != 0)
        goto LAB70;

LAB69:    t54 = (t48 + 4);
    if (*((unsigned int *)t54) != 0)
        goto LAB70;

LAB73:    if (*((unsigned int *)t49) > *((unsigned int *)t48))
        goto LAB72;

LAB71:    *((unsigned int *)t55) = 1;

LAB72:    memset(t59, 0, 8);
    t57 = (t55 + 4);
    t46 = *((unsigned int *)t57);
    t47 = (~(t46));
    t50 = *((unsigned int *)t55);
    t51 = (t50 & t47);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t57) != 0)
        goto LAB76;

LAB77:    t61 = *((unsigned int *)t41);
    t62 = *((unsigned int *)t59);
    t63 = (t61 & t62);
    *((unsigned int *)t67) = t63;
    t60 = (t41 + 4);
    t66 = (t59 + 4);
    t71 = (t67 + 4);
    t64 = *((unsigned int *)t60);
    t65 = *((unsigned int *)t66);
    t68 = (t64 | t65);
    *((unsigned int *)t71) = t68;
    t69 = *((unsigned int *)t71);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB78;

LAB79:
LAB80:    goto LAB68;

LAB70:    t56 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB72;

LAB74:    *((unsigned int *)t59) = 1;
    goto LAB77;

LAB76:    t58 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB77;

LAB78:    t74 = *((unsigned int *)t67);
    t75 = *((unsigned int *)t71);
    *((unsigned int *)t67) = (t74 | t75);
    t72 = (t41 + 4);
    t73 = (t59 + 4);
    t76 = *((unsigned int *)t41);
    t77 = (~(t76));
    t78 = *((unsigned int *)t72);
    t79 = (~(t78));
    t80 = *((unsigned int *)t59);
    t83 = (~(t80));
    t84 = *((unsigned int *)t73);
    t85 = (~(t84));
    t91 = (t77 & t79);
    t92 = (t83 & t85);
    t86 = (~(t91));
    t87 = (~(t92));
    t88 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t88 & t86);
    t89 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t89 & t87);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t86);
    t93 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t93 & t87);
    goto LAB80;

LAB81:    xsi_set_current_line(48, ng0);
    t82 = ((char*)((ng5)));
    t99 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t99, t82, 0, 0, 2, 0LL);
    goto LAB83;

LAB86:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB87;

LAB88:    *((unsigned int *)t37) = 1;
    goto LAB91;

LAB90:    t14 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB91;

LAB92:    t28 = (t0 + 784U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng7)));
    memset(t41, 0, 8);
    t35 = (t29 + 4);
    t36 = (t28 + 4);
    t34 = *((unsigned int *)t29);
    t43 = *((unsigned int *)t28);
    t44 = (t34 ^ t43);
    t45 = *((unsigned int *)t35);
    t46 = *((unsigned int *)t36);
    t47 = (t45 ^ t46);
    t50 = (t44 | t47);
    t51 = *((unsigned int *)t35);
    t52 = *((unsigned int *)t36);
    t61 = (t51 | t52);
    t62 = (~(t61));
    t63 = (t50 & t62);
    if (t63 != 0)
        goto LAB98;

LAB95:    if (t61 != 0)
        goto LAB97;

LAB96:    *((unsigned int *)t41) = 1;

LAB98:    memset(t55, 0, 8);
    t39 = (t41 + 4);
    t64 = *((unsigned int *)t39);
    t65 = (~(t64));
    t68 = *((unsigned int *)t41);
    t69 = (t68 & t65);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB99;

LAB100:    if (*((unsigned int *)t39) != 0)
        goto LAB101;

LAB102:    t74 = *((unsigned int *)t37);
    t75 = *((unsigned int *)t55);
    t76 = (t74 | t75);
    *((unsigned int *)t59) = t76;
    t42 = (t37 + 4);
    t48 = (t55 + 4);
    t49 = (t59 + 4);
    t77 = *((unsigned int *)t42);
    t78 = *((unsigned int *)t48);
    t79 = (t77 | t78);
    *((unsigned int *)t49) = t79;
    t80 = *((unsigned int *)t49);
    t83 = (t80 != 0);
    if (t83 == 1)
        goto LAB103;

LAB104:
LAB105:    goto LAB94;

LAB97:    t38 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB98;

LAB99:    *((unsigned int *)t55) = 1;
    goto LAB102;

LAB101:    t40 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB102;

LAB103:    t84 = *((unsigned int *)t59);
    t85 = *((unsigned int *)t49);
    *((unsigned int *)t59) = (t84 | t85);
    t53 = (t37 + 4);
    t54 = (t55 + 4);
    t86 = *((unsigned int *)t53);
    t87 = (~(t86));
    t88 = *((unsigned int *)t37);
    t91 = (t88 & t87);
    t89 = *((unsigned int *)t54);
    t90 = (~(t89));
    t93 = *((unsigned int *)t55);
    t92 = (t93 & t90);
    t94 = (~(t91));
    t95 = (~(t92));
    t96 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t96 & t94);
    t97 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t97 & t95);
    goto LAB105;

LAB106:    xsi_set_current_line(50, ng0);
    t57 = ((char*)((ng8)));
    t58 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t58, t57, 0, 0, 2, 0LL);
    goto LAB108;

LAB111:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB112;

LAB113:    xsi_set_current_line(54, ng0);

LAB116:    xsi_set_current_line(55, ng0);
    t28 = (t0 + 784U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng3)));
    memset(t37, 0, 8);
    t35 = (t29 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB118;

LAB117:    t36 = (t28 + 4);
    if (*((unsigned int *)t36) != 0)
        goto LAB118;

LAB121:    if (*((unsigned int *)t29) < *((unsigned int *)t28))
        goto LAB120;

LAB119:    *((unsigned int *)t37) = 1;

LAB120:    memset(t41, 0, 8);
    t39 = (t37 + 4);
    t30 = *((unsigned int *)t39);
    t31 = (~(t30));
    t32 = *((unsigned int *)t37);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t39) != 0)
        goto LAB124;

LAB125:    t42 = (t41 + 4);
    t43 = *((unsigned int *)t41);
    t44 = *((unsigned int *)t42);
    t45 = (t43 || t44);
    if (t45 > 0)
        goto LAB126;

LAB127:    memcpy(t67, t41, 8);

LAB128:    t81 = (t67 + 4);
    t94 = *((unsigned int *)t81);
    t95 = (~(t94));
    t96 = *((unsigned int *)t67);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB141;

LAB142:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t13, 0, 8);
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
        goto LAB147;

LAB144:    if (t20 != 0)
        goto LAB146;

LAB145:    *((unsigned int *)t13) = 1;

LAB147:    memset(t37, 0, 8);
    t12 = (t13 + 4);
    t23 = *((unsigned int *)t12);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB148;

LAB149:    if (*((unsigned int *)t12) != 0)
        goto LAB150;

LAB151:    t15 = (t37 + 4);
    t30 = *((unsigned int *)t37);
    t31 = (!(t30));
    t32 = *((unsigned int *)t15);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB152;

LAB153:    memcpy(t59, t37, 8);

LAB154:    t56 = (t59 + 4);
    t98 = *((unsigned int *)t56);
    t100 = (~(t98));
    t101 = *((unsigned int *)t59);
    t102 = (t101 & t100);
    t103 = (t102 != 0);
    if (t103 > 0)
        goto LAB166;

LAB167:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB168:
LAB143:    goto LAB115;

LAB118:    t38 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB120;

LAB122:    *((unsigned int *)t41) = 1;
    goto LAB125;

LAB124:    t40 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB125;

LAB126:    t48 = (t0 + 784U);
    t49 = *((char **)t48);
    t48 = ((char*)((ng4)));
    memset(t55, 0, 8);
    t53 = (t49 + 4);
    if (*((unsigned int *)t53) != 0)
        goto LAB130;

LAB129:    t54 = (t48 + 4);
    if (*((unsigned int *)t54) != 0)
        goto LAB130;

LAB133:    if (*((unsigned int *)t49) > *((unsigned int *)t48))
        goto LAB132;

LAB131:    *((unsigned int *)t55) = 1;

LAB132:    memset(t59, 0, 8);
    t57 = (t55 + 4);
    t46 = *((unsigned int *)t57);
    t47 = (~(t46));
    t50 = *((unsigned int *)t55);
    t51 = (t50 & t47);
    t52 = (t51 & 1U);
    if (t52 != 0)
        goto LAB134;

LAB135:    if (*((unsigned int *)t57) != 0)
        goto LAB136;

LAB137:    t61 = *((unsigned int *)t41);
    t62 = *((unsigned int *)t59);
    t63 = (t61 & t62);
    *((unsigned int *)t67) = t63;
    t60 = (t41 + 4);
    t66 = (t59 + 4);
    t71 = (t67 + 4);
    t64 = *((unsigned int *)t60);
    t65 = *((unsigned int *)t66);
    t68 = (t64 | t65);
    *((unsigned int *)t71) = t68;
    t69 = *((unsigned int *)t71);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB138;

LAB139:
LAB140:    goto LAB128;

LAB130:    t56 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB132;

LAB134:    *((unsigned int *)t59) = 1;
    goto LAB137;

LAB136:    t58 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t58) = 1;
    goto LAB137;

LAB138:    t74 = *((unsigned int *)t67);
    t75 = *((unsigned int *)t71);
    *((unsigned int *)t67) = (t74 | t75);
    t72 = (t41 + 4);
    t73 = (t59 + 4);
    t76 = *((unsigned int *)t41);
    t77 = (~(t76));
    t78 = *((unsigned int *)t72);
    t79 = (~(t78));
    t80 = *((unsigned int *)t59);
    t83 = (~(t80));
    t84 = *((unsigned int *)t73);
    t85 = (~(t84));
    t91 = (t77 & t79);
    t92 = (t83 & t85);
    t86 = (~(t91));
    t87 = (~(t92));
    t88 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t88 & t86);
    t89 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t89 & t87);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t86);
    t93 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t93 & t87);
    goto LAB140;

LAB141:    xsi_set_current_line(56, ng0);
    t82 = ((char*)((ng1)));
    t99 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t99, t82, 0, 0, 2, 0LL);
    goto LAB143;

LAB146:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB147;

LAB148:    *((unsigned int *)t37) = 1;
    goto LAB151;

LAB150:    t14 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB151;

LAB152:    t28 = (t0 + 784U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng7)));
    memset(t41, 0, 8);
    t35 = (t29 + 4);
    t36 = (t28 + 4);
    t34 = *((unsigned int *)t29);
    t43 = *((unsigned int *)t28);
    t44 = (t34 ^ t43);
    t45 = *((unsigned int *)t35);
    t46 = *((unsigned int *)t36);
    t47 = (t45 ^ t46);
    t50 = (t44 | t47);
    t51 = *((unsigned int *)t35);
    t52 = *((unsigned int *)t36);
    t61 = (t51 | t52);
    t62 = (~(t61));
    t63 = (t50 & t62);
    if (t63 != 0)
        goto LAB158;

LAB155:    if (t61 != 0)
        goto LAB157;

LAB156:    *((unsigned int *)t41) = 1;

LAB158:    memset(t55, 0, 8);
    t39 = (t41 + 4);
    t64 = *((unsigned int *)t39);
    t65 = (~(t64));
    t68 = *((unsigned int *)t41);
    t69 = (t68 & t65);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB159;

LAB160:    if (*((unsigned int *)t39) != 0)
        goto LAB161;

LAB162:    t74 = *((unsigned int *)t37);
    t75 = *((unsigned int *)t55);
    t76 = (t74 | t75);
    *((unsigned int *)t59) = t76;
    t42 = (t37 + 4);
    t48 = (t55 + 4);
    t49 = (t59 + 4);
    t77 = *((unsigned int *)t42);
    t78 = *((unsigned int *)t48);
    t79 = (t77 | t78);
    *((unsigned int *)t49) = t79;
    t80 = *((unsigned int *)t49);
    t83 = (t80 != 0);
    if (t83 == 1)
        goto LAB163;

LAB164:
LAB165:    goto LAB154;

LAB157:    t38 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB158;

LAB159:    *((unsigned int *)t55) = 1;
    goto LAB162;

LAB161:    t40 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t40) = 1;
    goto LAB162;

LAB163:    t84 = *((unsigned int *)t59);
    t85 = *((unsigned int *)t49);
    *((unsigned int *)t59) = (t84 | t85);
    t53 = (t37 + 4);
    t54 = (t55 + 4);
    t86 = *((unsigned int *)t53);
    t87 = (~(t86));
    t88 = *((unsigned int *)t37);
    t91 = (t88 & t87);
    t89 = *((unsigned int *)t54);
    t90 = (~(t89));
    t93 = *((unsigned int *)t55);
    t92 = (t93 & t90);
    t94 = (~(t91));
    t95 = (~(t92));
    t96 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t96 & t94);
    t97 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t97 & t95);
    goto LAB165;

LAB166:    xsi_set_current_line(58, ng0);
    t57 = ((char*)((ng5)));
    t58 = (t0 + 1104);
    xsi_vlogvar_wait_assign_value(t58, t57, 0, 0, 2, 0LL);
    goto LAB168;

}


extern void work_m_00000000001923289913_4180013079_init()
{
	static char *pe[] = {(void *)Cont_30_0,(void *)Initial_31_1,(void *)Always_35_2};
	xsi_register_didat("work_m_00000000001923289913_4180013079", "isim/test_isim_beh.exe.sim/work/m_00000000001923289913_4180013079.didat");
	xsi_register_executes(pe);
}
