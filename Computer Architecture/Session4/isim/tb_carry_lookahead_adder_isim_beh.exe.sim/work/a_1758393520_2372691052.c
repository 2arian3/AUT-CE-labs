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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Aryan/Documents/University/Computer Architecture/Session4/tb_carry_lookahead_adder.vhd";



static void work_a_1758393520_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int64 t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int64 t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    int64 t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    int64 t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    int64 t49;
    char *t50;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    int64 t57;
    char *t58;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    int64 t65;
    char *t66;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    int64 t73;
    char *t74;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    int64 t81;
    char *t82;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    int64 t89;
    char *t90;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    int64 t97;
    char *t98;
    char *t100;
    char *t101;
    char *t102;
    char *t103;
    char *t104;
    int64 t105;
    char *t106;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t112;
    int64 t113;
    char *t114;
    char *t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;
    int64 t121;
    char *t122;
    char *t124;
    char *t125;
    char *t126;
    char *t127;
    char *t128;

LAB0:    t1 = (t0 + 2832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(78, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3216);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, t3);
    t8 = (200 * 1000LL);
    t9 = (t0 + 3216);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t9, 0U, 1, t8);
    t14 = (300 * 1000LL);
    t15 = (t0 + 3216);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t15, 0U, 1, t14);
    t20 = (t0 + 3216);
    xsi_driver_intertial_reject(t20, t3, t3);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 5646);
    t5 = (t0 + 3280);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_delta(t5, 0U, 4U, 0LL);
    t3 = (20 * 1000LL);
    t11 = (t0 + 5650);
    t13 = (t0 + 3280);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t11, 4U);
    xsi_driver_subsequent_trans_delta(t13, 0U, 4U, t3);
    t8 = (40 * 1000LL);
    t19 = (t0 + 5654);
    t21 = (t0 + 3280);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t19, 4U);
    xsi_driver_subsequent_trans_delta(t21, 0U, 4U, t8);
    t14 = (60 * 1000LL);
    t26 = (t0 + 5658);
    t28 = (t0 + 3280);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t26, 4U);
    xsi_driver_subsequent_trans_delta(t28, 0U, 4U, t14);
    t33 = (80 * 1000LL);
    t34 = (t0 + 5662);
    t36 = (t0 + 3280);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t34, 4U);
    xsi_driver_subsequent_trans_delta(t36, 0U, 4U, t33);
    t41 = (100 * 1000LL);
    t42 = (t0 + 5666);
    t44 = (t0 + 3280);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memcpy(t48, t42, 4U);
    xsi_driver_subsequent_trans_delta(t44, 0U, 4U, t41);
    t49 = (120 * 1000LL);
    t50 = (t0 + 5670);
    t52 = (t0 + 3280);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memcpy(t56, t50, 4U);
    xsi_driver_subsequent_trans_delta(t52, 0U, 4U, t49);
    t57 = (140 * 1000LL);
    t58 = (t0 + 5674);
    t60 = (t0 + 3280);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    memcpy(t64, t58, 4U);
    xsi_driver_subsequent_trans_delta(t60, 0U, 4U, t57);
    t65 = (160 * 1000LL);
    t66 = (t0 + 5678);
    t68 = (t0 + 3280);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memcpy(t72, t66, 4U);
    xsi_driver_subsequent_trans_delta(t68, 0U, 4U, t65);
    t73 = (180 * 1000LL);
    t74 = (t0 + 5682);
    t76 = (t0 + 3280);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memcpy(t80, t74, 4U);
    xsi_driver_subsequent_trans_delta(t76, 0U, 4U, t73);
    t81 = (200 * 1000LL);
    t82 = (t0 + 5686);
    t84 = (t0 + 3280);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    memcpy(t88, t82, 4U);
    xsi_driver_subsequent_trans_delta(t84, 0U, 4U, t81);
    t89 = (220 * 1000LL);
    t90 = (t0 + 5690);
    t92 = (t0 + 3280);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    memcpy(t96, t90, 4U);
    xsi_driver_subsequent_trans_delta(t92, 0U, 4U, t89);
    t97 = (240 * 1000LL);
    t98 = (t0 + 5694);
    t100 = (t0 + 3280);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    memcpy(t104, t98, 4U);
    xsi_driver_subsequent_trans_delta(t100, 0U, 4U, t97);
    t105 = (260 * 1000LL);
    t106 = (t0 + 5698);
    t108 = (t0 + 3280);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    t111 = (t110 + 56U);
    t112 = *((char **)t111);
    memcpy(t112, t106, 4U);
    xsi_driver_subsequent_trans_delta(t108, 0U, 4U, t105);
    t113 = (280 * 1000LL);
    t114 = (t0 + 5702);
    t116 = (t0 + 3280);
    t117 = (t116 + 56U);
    t118 = *((char **)t117);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    memcpy(t120, t114, 4U);
    xsi_driver_subsequent_trans_delta(t116, 0U, 4U, t113);
    t121 = (300 * 1000LL);
    t122 = (t0 + 5706);
    t124 = (t0 + 3280);
    t125 = (t124 + 56U);
    t126 = *((char **)t125);
    t127 = (t126 + 56U);
    t128 = *((char **)t127);
    memcpy(t128, t122, 4U);
    xsi_driver_subsequent_trans_delta(t124, 0U, 4U, t121);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5710);
    t5 = (t0 + 3344);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_delta(t5, 0U, 4U, 0LL);
    t3 = (20 * 1000LL);
    t11 = (t0 + 5714);
    t13 = (t0 + 3344);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t11, 4U);
    xsi_driver_subsequent_trans_delta(t13, 0U, 4U, t3);
    t8 = (40 * 1000LL);
    t19 = (t0 + 5718);
    t21 = (t0 + 3344);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t19, 4U);
    xsi_driver_subsequent_trans_delta(t21, 0U, 4U, t8);
    t14 = (60 * 1000LL);
    t26 = (t0 + 5722);
    t28 = (t0 + 3344);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t26, 4U);
    xsi_driver_subsequent_trans_delta(t28, 0U, 4U, t14);
    t33 = (80 * 1000LL);
    t34 = (t0 + 5726);
    t36 = (t0 + 3344);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memcpy(t40, t34, 4U);
    xsi_driver_subsequent_trans_delta(t36, 0U, 4U, t33);
    t41 = (100 * 1000LL);
    t42 = (t0 + 5730);
    t44 = (t0 + 3344);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    t47 = (t46 + 56U);
    t48 = *((char **)t47);
    memcpy(t48, t42, 4U);
    xsi_driver_subsequent_trans_delta(t44, 0U, 4U, t41);
    t49 = (120 * 1000LL);
    t50 = (t0 + 5734);
    t52 = (t0 + 3344);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memcpy(t56, t50, 4U);
    xsi_driver_subsequent_trans_delta(t52, 0U, 4U, t49);
    t57 = (140 * 1000LL);
    t58 = (t0 + 5738);
    t60 = (t0 + 3344);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    t63 = (t62 + 56U);
    t64 = *((char **)t63);
    memcpy(t64, t58, 4U);
    xsi_driver_subsequent_trans_delta(t60, 0U, 4U, t57);
    t65 = (160 * 1000LL);
    t66 = (t0 + 5742);
    t68 = (t0 + 3344);
    t69 = (t68 + 56U);
    t70 = *((char **)t69);
    t71 = (t70 + 56U);
    t72 = *((char **)t71);
    memcpy(t72, t66, 4U);
    xsi_driver_subsequent_trans_delta(t68, 0U, 4U, t65);
    t73 = (180 * 1000LL);
    t74 = (t0 + 5746);
    t76 = (t0 + 3344);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    memcpy(t80, t74, 4U);
    xsi_driver_subsequent_trans_delta(t76, 0U, 4U, t73);
    t81 = (200 * 1000LL);
    t82 = (t0 + 5750);
    t84 = (t0 + 3344);
    t85 = (t84 + 56U);
    t86 = *((char **)t85);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    memcpy(t88, t82, 4U);
    xsi_driver_subsequent_trans_delta(t84, 0U, 4U, t81);
    t89 = (240 * 1000LL);
    t90 = (t0 + 5754);
    t92 = (t0 + 3344);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    memcpy(t96, t90, 4U);
    xsi_driver_subsequent_trans_delta(t92, 0U, 4U, t89);
    t97 = (260 * 1000LL);
    t98 = (t0 + 5758);
    t100 = (t0 + 3344);
    t101 = (t100 + 56U);
    t102 = *((char **)t101);
    t103 = (t102 + 56U);
    t104 = *((char **)t103);
    memcpy(t104, t98, 4U);
    xsi_driver_subsequent_trans_delta(t100, 0U, 4U, t97);
    t105 = (280 * 1000LL);
    t106 = (t0 + 5762);
    t108 = (t0 + 3344);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    t111 = (t110 + 56U);
    t112 = *((char **)t111);
    memcpy(t112, t106, 4U);
    xsi_driver_subsequent_trans_delta(t108, 0U, 4U, t105);
    t113 = (300 * 1000LL);
    t114 = (t0 + 5766);
    t116 = (t0 + 3344);
    t117 = (t116 + 56U);
    t118 = *((char **)t117);
    t119 = (t118 + 56U);
    t120 = *((char **)t119);
    memcpy(t120, t114, 4U);
    xsi_driver_subsequent_trans_delta(t116, 0U, 4U, t113);
    xsi_set_current_line(87, ng0);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

}


extern void work_a_1758393520_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1758393520_2372691052_p_0};
	xsi_register_didat("work_a_1758393520_2372691052", "isim/tb_carry_lookahead_adder_isim_beh.exe.sim/work/a_1758393520_2372691052.didat");
	xsi_register_executes(pe);
}
