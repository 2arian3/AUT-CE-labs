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
static const char *ng0 = "C:/Users/Aryan/Documents/University/Computer Architecture/Session8/divider.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3926497698_3212880686_p_0(char *t0)
{
    char t5[16];
    char t21[16];
    char t22[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    int t20;
    char *t23;
    char *t24;
    int t25;
    int t26;

LAB0:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 6812U);
    t3 = (t0 + 6943);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 3;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (3 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 3992);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t9 = (7 - 7);
    t15 = (t9 * 1U);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = (t0 + 2128U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 4U);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t9 = (7 - 3);
    t15 = (t9 * 1U);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = (t0 + 2248U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 4U);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t1 = (t0 + 6860U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 6812U);
    t10 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t10 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2488U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t9 = (3 - 2);
    t15 = (t9 * 1U);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = xsi_get_transient_memory(3U);
    memcpy(t3, t1, 3U);
    t4 = (t0 + 2128U);
    t6 = *((char **)t4);
    t17 = (3 - 3);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t4 = (t6 + t19);
    memcpy(t4, t3, 3U);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t8 = (3 - 3);
    t9 = (t8 * -1);
    t15 = (1U * t9);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t10 = *((unsigned char *)t1);
    t3 = (t0 + 2128U);
    t4 = *((char **)t3);
    t20 = (0 - 3);
    t17 = (t20 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t3 = (t4 + t19);
    *((unsigned char *)t3) = t10;
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t9 = (3 - 2);
    t15 = (t9 * 1U);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = xsi_get_transient_memory(3U);
    memcpy(t3, t1, 3U);
    t4 = (t0 + 2248U);
    t6 = *((char **)t4);
    t17 = (3 - 3);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t4 = (t6 + t19);
    memcpy(t4, t3, 3U);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t8 = (0 - 3);
    t9 = (t8 * -1);
    t15 = (1U * t9);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    *((unsigned char *)t1) = (unsigned char)2;
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 6947);
    *((int *)t1) = 3;
    t2 = (t0 + 6951);
    *((int *)t2) = 0;
    t8 = 3;
    t20 = 0;

LAB8:    if (t8 >= t20)
        goto LAB9;

LAB11:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t9 = (3 - 3);
    t15 = (t9 * 1U);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = xsi_get_transient_memory(3U);
    memcpy(t3, t1, 3U);
    t4 = (t0 + 2128U);
    t6 = *((char **)t4);
    t17 = (3 - 2);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t4 = (t6 + t19);
    memcpy(t4, t3, 3U);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t8 = (3 - 3);
    t9 = (t8 * -1);
    t15 = (1U * t9);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    *((unsigned char *)t1) = (unsigned char)2;

LAB6:
LAB3:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2488U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t1 = (t0 + 4056);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t10;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t1 = (t0 + 4120);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t1 = (t0 + 4184);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3912);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(32, ng0);
    t7 = (t0 + 3992);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB3;

LAB5:    xsi_set_current_line(38, ng0);
    t6 = (t0 + 2488U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_set_current_line(39, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)1, 4U);
    t3 = (t0 + 2128U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 4U);
    xsi_set_current_line(40, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)1, 4U);
    t3 = (t0 + 2248U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 4U);
    goto LAB6;

LAB9:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 2128U);
    t4 = *((char **)t3);
    t3 = (t0 + 6860U);
    t6 = (t0 + 1192U);
    t7 = *((char **)t6);
    t6 = (t0 + 6812U);
    t11 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t22, t7, t6);
    t12 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t21, t4, t3, t11, t22);
    t13 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t5, t12, t21, 1);
    t14 = (t0 + 2368U);
    t23 = *((char **)t14);
    t14 = (t23 + 0);
    t24 = (t5 + 12U);
    t9 = *((unsigned int *)t24);
    t15 = (1U * t9);
    memcpy(t14, t13, t15);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t1 = (t0 + 6860U);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 6812U);
    t10 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t10 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t9 = (3 - 2);
    t15 = (t9 * 1U);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = xsi_get_transient_memory(3U);
    memcpy(t3, t1, 3U);
    t4 = (t0 + 2128U);
    t6 = *((char **)t4);
    t17 = (3 - 3);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t4 = (t6 + t19);
    memcpy(t4, t3, 3U);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t25 = (3 - 3);
    t9 = (t25 * -1);
    t15 = (1U * t9);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t10 = *((unsigned char *)t1);
    t3 = (t0 + 2128U);
    t4 = *((char **)t3);
    t26 = (0 - 3);
    t17 = (t26 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t3 = (t4 + t19);
    *((unsigned char *)t3) = t10;
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t9 = (3 - 2);
    t15 = (t9 * 1U);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = xsi_get_transient_memory(3U);
    memcpy(t3, t1, 3U);
    t4 = (t0 + 2248U);
    t6 = *((char **)t4);
    t17 = (3 - 3);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t4 = (t6 + t19);
    memcpy(t4, t3, 3U);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t25 = (0 - 3);
    t9 = (t25 * -1);
    t15 = (1U * t9);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    *((unsigned char *)t1) = (unsigned char)2;

LAB13:
LAB10:    t1 = (t0 + 6947);
    t8 = *((int *)t1);
    t2 = (t0 + 6951);
    t20 = *((int *)t2);
    if (t8 == t20)
        goto LAB11;

LAB15:    t25 = (t8 + -1);
    t8 = t25;
    t3 = (t0 + 6947);
    *((int *)t3) = t8;
    goto LAB8;

LAB12:    xsi_set_current_line(50, ng0);
    t6 = (t0 + 2368U);
    t7 = *((char **)t6);
    t9 = (4 - 3);
    t15 = (t9 * 1U);
    t16 = (0 + t15);
    t6 = (t7 + t16);
    t11 = (t0 + 2128U);
    t12 = *((char **)t11);
    t11 = (t12 + 0);
    memcpy(t11, t6, 4U);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    t9 = (3 - 2);
    t15 = (t9 * 1U);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = xsi_get_transient_memory(3U);
    memcpy(t3, t1, 3U);
    t4 = (t0 + 2128U);
    t6 = *((char **)t4);
    t17 = (3 - 3);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t4 = (t6 + t19);
    memcpy(t4, t3, 3U);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t25 = (3 - 3);
    t9 = (t25 * -1);
    t15 = (1U * t9);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t10 = *((unsigned char *)t1);
    t3 = (t0 + 2128U);
    t4 = *((char **)t3);
    t26 = (0 - 3);
    t17 = (t26 * -1);
    t18 = (1U * t17);
    t19 = (0 + t18);
    t3 = (t4 + t19);
    *((unsigned char *)t3) = t10;
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t9 = (3 - 2);
    t15 = (t9 * 1U);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    t3 = xsi_get_transient_memory(3U);
    memcpy(t3, t1, 3U);
    t4 = (t0 + 2248U);
    t6 = *((char **)t4);
    t17 = (3 - 3);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t4 = (t6 + t19);
    memcpy(t4, t3, 3U);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2248U);
    t2 = *((char **)t1);
    t25 = (0 - 3);
    t9 = (t25 * -1);
    t15 = (1U * t9);
    t16 = (0 + t15);
    t1 = (t2 + t16);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB13;

}


extern void work_a_3926497698_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3926497698_3212880686_p_0};
	xsi_register_didat("work_a_3926497698_3212880686", "isim/divider_testbench_isim_beh.exe.sim/work/a_3926497698_3212880686.didat");
	xsi_register_executes(pe);
}
