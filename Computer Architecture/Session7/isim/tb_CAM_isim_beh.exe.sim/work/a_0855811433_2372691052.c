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
static const char *ng0 = "C:/Users/Aryan/Documents/University/Computer Architecture/Session7/tb_CAM.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


static void work_a_0855811433_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0855811433_2372691052_p_1(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int t8;
    int t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;

LAB0:    t1 = (t0 + 3520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(97, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4032);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 6760);
    *((int *)t2) = 0;
    t3 = (t0 + 6764);
    *((int *)t3) = 100;
    t8 = 0;
    t9 = 100;

LAB8:    if (t8 <= t9)
        goto LAB9;

LAB11:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 6768);
    *((int *)t2) = 50;
    t3 = (t0 + 6772);
    *((int *)t3) = 100;
    t8 = 50;
    t9 = 100;

LAB17:    if (t8 <= t9)
        goto LAB18;

LAB20:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 4032);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 6776);
    *((int *)t2) = 50;
    t3 = (t0 + 6780);
    *((int *)t3) = 100;
    t8 = 50;
    t9 = 100;

LAB26:    if (t8 <= t9)
        goto LAB27;

LAB29:    xsi_set_current_line(114, ng0);

LAB37:    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(101, ng0);
    t4 = (t0 + 6760);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t10, *((int *)t4), 8);
    t6 = (t0 + 4096);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(102, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t7);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 6760);
    t8 = *((int *)t2);
    t3 = (t0 + 6764);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB11;

LAB16:    t15 = (t8 + 1);
    t8 = t15;
    t4 = (t0 + 6760);
    *((int *)t4) = t8;
    goto LAB8;

LAB12:    goto LAB10;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB18:    xsi_set_current_line(105, ng0);
    t4 = (t0 + 6768);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t10, *((int *)t4), 8);
    t6 = (t0 + 4096);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(106, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t7);

LAB23:    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB19:    t2 = (t0 + 6768);
    t8 = *((int *)t2);
    t3 = (t0 + 6772);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB20;

LAB25:    t15 = (t8 + 1);
    t8 = t15;
    t4 = (t0 + 6768);
    *((int *)t4) = t8;
    goto LAB17;

LAB21:    goto LAB19;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

LAB27:    xsi_set_current_line(111, ng0);
    t4 = (t0 + 6776);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t10, *((int *)t4), 8);
    t6 = (t0 + 4096);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 8U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(112, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t7);

LAB32:    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB28:    t2 = (t0 + 6776);
    t8 = *((int *)t2);
    t3 = (t0 + 6780);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB29;

LAB34:    t15 = (t8 + 1);
    t8 = t15;
    t4 = (t0 + 6776);
    *((int *)t4) = t8;
    goto LAB26;

LAB30:    goto LAB28;

LAB31:    goto LAB30;

LAB33:    goto LAB31;

LAB35:    goto LAB2;

LAB36:    goto LAB35;

LAB38:    goto LAB36;

}


extern void work_a_0855811433_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0855811433_2372691052_p_0,(void *)work_a_0855811433_2372691052_p_1};
	xsi_register_didat("work_a_0855811433_2372691052", "isim/tb_CAM_isim_beh.exe.sim/work/a_0855811433_2372691052.didat");
	xsi_register_executes(pe);
}
