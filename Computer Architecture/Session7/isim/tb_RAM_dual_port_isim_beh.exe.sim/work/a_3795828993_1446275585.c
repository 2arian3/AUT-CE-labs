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
static const char *ng0 = "C:/Users/Aryan/Documents/University/Computer Architecture/Session7/RAM_dual_port.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_3795828993_1446275585_p_0(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    int t7;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;

LAB0:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 2272U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB10;

LAB11:
LAB3:    t1 = (t0 + 4432);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 8094);
    *((int *)t1) = 0;
    t5 = (t0 + 8098);
    *((int *)t5) = 15;
    t6 = 0;
    t7 = 15;

LAB5:    if (t6 <= t7)
        goto LAB6;

LAB8:    goto LAB3;

LAB6:    xsi_set_current_line(60, ng0);
    t9 = (t0 + 8094);
    t10 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t8, *((int *)t9), 8);
    t11 = (t0 + 8094);
    t12 = *((int *)t11);
    t13 = (t12 - 15);
    t14 = (t13 * -1);
    t15 = (8U * t14);
    t16 = (0U + t15);
    t17 = (t0 + 4512);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t10, 8U);
    xsi_driver_first_trans_delta(t17, t16, 8U, 0LL);

LAB7:    t1 = (t0 + 8094);
    t6 = *((int *)t1);
    t2 = (t0 + 8098);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB8;

LAB9:    t12 = (t6 + 1);
    t6 = t12;
    t5 = (t0 + 8094);
    *((int *)t5) = t6;
    goto LAB5;

LAB10:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t22 = *((unsigned char *)t5);
    t23 = (t22 == (unsigned char)2);
    if (t23 == 1)
        goto LAB15;

LAB16:    t4 = (unsigned char)0;

LAB17:    if (t4 != 0)
        goto LAB12;

LAB14:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t22 = (t4 == (unsigned char)3);
    if (t22 == 1)
        goto LAB31;

LAB32:    t3 = (unsigned char)0;

LAB33:    if (t3 != 0)
        goto LAB29;

LAB30:
LAB13:    goto LAB3;

LAB12:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2952U);
    t10 = *((char **)t2);
    t2 = (t0 + 1192U);
    t11 = *((char **)t2);
    t2 = (t0 + 7816U);
    t6 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t11, t2);
    t7 = (t6 - 15);
    t14 = (t7 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t6);
    t15 = (8U * t14);
    t16 = (0 + t15);
    t17 = (t10 + t16);
    t18 = (t0 + 4576);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t26 = *((char **)t21);
    memcpy(t26, t17, 8U);
    xsi_driver_first_trans_fast_port(t18);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t22 = (t4 == (unsigned char)3);
    if (t22 == 1)
        goto LAB21;

LAB22:    t3 = (unsigned char)0;

LAB23:    if (t3 != 0)
        goto LAB18;

LAB20:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t22 = (t4 == (unsigned char)2);
    if (t22 == 1)
        goto LAB26;

LAB27:    t3 = (unsigned char)0;

LAB28:    if (t3 != 0)
        goto LAB24;

LAB25:
LAB19:    goto LAB13;

LAB15:    t2 = (t0 + 1512U);
    t9 = *((char **)t2);
    t24 = *((unsigned char *)t9);
    t25 = (t24 == (unsigned char)3);
    t4 = t25;
    goto LAB17;

LAB18:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1672U);
    t9 = *((char **)t1);
    t1 = (t0 + 1832U);
    t10 = *((char **)t1);
    t1 = (t0 + 7848U);
    t6 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t10, t1);
    t7 = (t6 - 15);
    t14 = (t7 * -1);
    t15 = (8U * t14);
    t16 = (0U + t15);
    t11 = (t0 + 4512);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 8U);
    xsi_driver_first_trans_delta(t11, t16, 8U, 0LL);
    goto LAB19;

LAB21:    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t23 = *((unsigned char *)t5);
    t24 = (t23 == (unsigned char)2);
    t3 = t24;
    goto LAB23;

LAB24:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 2952U);
    t9 = *((char **)t1);
    t1 = (t0 + 1832U);
    t10 = *((char **)t1);
    t1 = (t0 + 7848U);
    t6 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t10, t1);
    t7 = (t6 - 15);
    t14 = (t7 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t6);
    t15 = (8U * t14);
    t16 = (0 + t15);
    t11 = (t9 + t16);
    t17 = (t0 + 4640);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 8U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB19;

LAB26:    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t23 = *((unsigned char *)t5);
    t24 = (t23 == (unsigned char)3);
    t3 = t24;
    goto LAB28;

LAB29:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1032U);
    t9 = *((char **)t1);
    t1 = (t0 + 1192U);
    t10 = *((char **)t1);
    t1 = (t0 + 7816U);
    t6 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t10, t1);
    t7 = (t6 - 15);
    t14 = (t7 * -1);
    t15 = (8U * t14);
    t16 = (0U + t15);
    t11 = (t0 + 4512);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 8U);
    xsi_driver_first_trans_delta(t11, t16, 8U, 0LL);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t22 = (t4 == (unsigned char)3);
    if (t22 == 1)
        goto LAB37;

LAB38:    t3 = (unsigned char)0;

LAB39:    if (t3 != 0)
        goto LAB34;

LAB36:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t22 = (t4 == (unsigned char)2);
    if (t22 == 1)
        goto LAB42;

LAB43:    t3 = (unsigned char)0;

LAB44:    if (t3 != 0)
        goto LAB40;

LAB41:
LAB35:    goto LAB13;

LAB31:    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t23 = *((unsigned char *)t5);
    t24 = (t23 == (unsigned char)2);
    t3 = t24;
    goto LAB33;

LAB34:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1672U);
    t9 = *((char **)t1);
    t1 = (t0 + 1832U);
    t10 = *((char **)t1);
    t1 = (t0 + 7848U);
    t6 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t10, t1);
    t7 = (t6 - 15);
    t14 = (t7 * -1);
    t15 = (8U * t14);
    t16 = (0U + t15);
    t11 = (t0 + 4512);
    t17 = (t11 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 8U);
    xsi_driver_first_trans_delta(t11, t16, 8U, 0LL);
    goto LAB35;

LAB37:    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t23 = *((unsigned char *)t5);
    t24 = (t23 == (unsigned char)2);
    t3 = t24;
    goto LAB39;

LAB40:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2952U);
    t9 = *((char **)t1);
    t1 = (t0 + 1832U);
    t10 = *((char **)t1);
    t1 = (t0 + 7848U);
    t6 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t10, t1);
    t7 = (t6 - 15);
    t14 = (t7 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t6);
    t15 = (8U * t14);
    t16 = (0 + t15);
    t11 = (t9 + t16);
    t17 = (t0 + 4640);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 8U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB35;

LAB42:    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t23 = *((unsigned char *)t5);
    t24 = (t23 == (unsigned char)3);
    t3 = t24;
    goto LAB44;

}


void ieee_p_2592010699_sub_3130575329_503743352();

extern void work_a_3795828993_1446275585_init()
{
	static char *pe[] = {(void *)work_a_3795828993_1446275585_p_0};
	xsi_register_didat("work_a_3795828993_1446275585", "isim/tb_RAM_dual_port_isim_beh.exe.sim/work/a_3795828993_1446275585.didat");
	xsi_register_executes(pe);
	xsi_register_resolution_function(1, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 4);
}
