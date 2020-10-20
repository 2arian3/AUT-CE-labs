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
static const char *ng0 = "C:/Users/Aryan/Documents/University/Computer Architecture/Session7/CAM.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
extern char *IEEE_P_3972351953;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
double ieee_p_3972351953_sub_28498392_2984157535(char *, double );
void ieee_p_3972351953_sub_3007962107_2984157535(char *, char *, char *, char *, char *);


static void work_a_2334801931_1516540902_p_0(char *t0)
{
    char t27[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    int t13;
    int t14;
    int t15;
    int t16;
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
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    double t32;
    double t33;
    double t34;
    double t35;
    double t36;

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1472U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = (t2 == (unsigned char)2);
    if (t8 != 0)
        goto LAB72;

LAB73:
LAB3:    t1 = (t0 + 4152);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 4232);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)2);
    if (t9 == 1)
        goto LAB55;

LAB56:    t2 = (unsigned char)0;

LAB57:    if (t2 != 0)
        goto LAB53;

LAB54:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 4296);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 7585);
    *((int *)t1) = 0;
    t3 = (t0 + 7589);
    *((int *)t3) = 15;
    t13 = 0;
    t14 = 15;

LAB11:    if (t13 <= t14)
        goto LAB12;

LAB14:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = (t2 == (unsigned char)2);
    if (t8 != 0)
        goto LAB25;

LAB27:
LAB26:    goto LAB6;

LAB8:    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    t2 = t11;
    goto LAB10;

LAB12:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 2152U);
    t5 = *((char **)t4);
    t4 = (t0 + 7585);
    t15 = *((int *)t4);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t4));
    t18 = (8U * t17);
    t19 = (0 + t18);
    t6 = (t5 + t19);
    t7 = (t0 + 1032U);
    t12 = *((char **)t7);
    t2 = 1;
    if (8U == 8U)
        goto LAB18;

LAB19:    t2 = 0;

LAB20:    if (t2 != 0)
        goto LAB15;

LAB17:
LAB16:
LAB13:    t1 = (t0 + 7585);
    t13 = *((int *)t1);
    t3 = (t0 + 7589);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB14;

LAB24:    t15 = (t13 + 1);
    t13 = t15;
    t4 = (t0 + 7585);
    *((int *)t4) = t13;
    goto LAB11;

LAB15:    xsi_set_current_line(62, ng0);
    t22 = (t0 + 4296);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = (unsigned char)3;
    xsi_driver_first_trans_fast(t22);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 7585);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t27, *((int *)t1), 4);
    t4 = (t0 + 4360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 4232);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB18:    t20 = 0;

LAB21:    if (t20 < 8U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t7 = (t6 + t20);
    t21 = (t12 + t20);
    if (*((unsigned char *)t7) != *((unsigned char *)t21))
        goto LAB19;

LAB23:    t20 = (t20 + 1);
    goto LAB21;

LAB25:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 7593);
    *((int *)t1) = 0;
    t4 = (t0 + 7597);
    *((int *)t4) = 15;
    t13 = 0;
    t14 = 15;

LAB28:    if (t13 <= t14)
        goto LAB29;

LAB31:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t8 = (t2 == (unsigned char)2);
    if (t8 != 0)
        goto LAB45;

LAB47:
LAB46:    goto LAB26;

LAB29:    xsi_set_current_line(69, ng0);
    t5 = (t0 + 2152U);
    t6 = *((char **)t5);
    t5 = (t0 + 7593);
    t15 = *((int *)t5);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t5));
    t18 = (8U * t17);
    t19 = (0 + t18);
    t7 = (t6 + t19);
    t12 = (t0 + 7601);
    t10 = 1;
    if (8U == 8U)
        goto LAB38;

LAB39:    t10 = 0;

LAB40:    if (t10 == 1)
        goto LAB35;

LAB36:    t9 = (unsigned char)0;

LAB37:    if (t9 != 0)
        goto LAB32;

LAB34:
LAB33:
LAB30:    t1 = (t0 + 7593);
    t13 = *((int *)t1);
    t3 = (t0 + 7597);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB31;

LAB44:    t15 = (t13 + 1);
    t13 = t15;
    t4 = (t0 + 7593);
    *((int *)t4) = t13;
    goto LAB28;

LAB32:    xsi_set_current_line(70, ng0);
    t24 = (t0 + 4296);
    t26 = (t24 + 56U);
    t29 = *((char **)t26);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = (unsigned char)3;
    xsi_driver_first_trans_fast(t24);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 7593);
    t15 = *((int *)t1);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (8U * t17);
    t19 = (0U + t18);
    t4 = (t0 + 4424);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t3, 8U);
    xsi_driver_first_trans_delta(t4, t19, 8U, 0LL);
    goto LAB33;

LAB35:    t24 = (t0 + 2312U);
    t25 = *((char **)t24);
    t11 = *((unsigned char *)t25);
    t28 = (t11 == (unsigned char)2);
    t9 = t28;
    goto LAB37;

LAB38:    t20 = 0;

LAB41:    if (t20 < 8U)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t22 = (t7 + t20);
    t23 = (t12 + t20);
    if (*((unsigned char *)t22) != *((unsigned char *)t23))
        goto LAB39;

LAB43:    t20 = (t20 + 1);
    goto LAB41;

LAB45:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 3640);
    t4 = (t0 + 2728U);
    t5 = *((char **)t4);
    t4 = (t5 + 0);
    t6 = (t0 + 2848U);
    t7 = *((char **)t6);
    t6 = (t7 + 0);
    t12 = (t0 + 2608U);
    t21 = *((char **)t12);
    t12 = (t21 + 0);
    ieee_p_3972351953_sub_3007962107_2984157535(IEEE_P_3972351953, t1, t4, t6, t12);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 2608U);
    t4 = *((char **)t1);
    t32 = *((double *)t4);
    t33 = (t32 * 16.000000000000000);
    t34 = ieee_p_3972351953_sub_28498392_2984157535(IEEE_P_3972351953, t33);
    t2 = (t34 >= 0);
    if (t2 == 1)
        goto LAB48;

LAB49:    t36 = (t34 - 0.50000000000000000);
    t13 = ((int)(t36));

LAB50:    t14 = (t13 - 15);
    t17 = (t14 * -1);
    t18 = (8U * t17);
    t19 = (0U + t18);
    t1 = (t0 + 4424);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t3, 8U);
    xsi_driver_first_trans_delta(t1, t19, 8U, 0LL);
    goto LAB46;

LAB48:    t8 = (t34 >= 2147483647);
    if (t8 == 1)
        goto LAB51;

LAB52:    t35 = (t34 + 0.50000000000000000);
    t13 = ((int)(t35));
    goto LAB50;

LAB51:    t13 = 2147483647;
    goto LAB50;

LAB53:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 4232);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 7609);
    *((int *)t1) = 0;
    t3 = (t0 + 7613);
    *((int *)t3) = 15;
    t13 = 0;
    t14 = 15;

LAB58:    if (t13 <= t14)
        goto LAB59;

LAB61:    goto LAB6;

LAB55:    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)3);
    t2 = t11;
    goto LAB57;

LAB59:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 2152U);
    t5 = *((char **)t4);
    t4 = (t0 + 7609);
    t15 = *((int *)t4);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t4));
    t18 = (8U * t17);
    t19 = (0 + t18);
    t6 = (t5 + t19);
    t7 = (t0 + 1032U);
    t12 = *((char **)t7);
    t2 = 1;
    if (8U == 8U)
        goto LAB65;

LAB66:    t2 = 0;

LAB67:    if (t2 != 0)
        goto LAB62;

LAB64:
LAB63:
LAB60:    t1 = (t0 + 7609);
    t13 = *((int *)t1);
    t3 = (t0 + 7613);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB61;

LAB71:    t15 = (t13 + 1);
    t13 = t15;
    t4 = (t0 + 7609);
    *((int *)t4) = t13;
    goto LAB58;

LAB62:    xsi_set_current_line(83, ng0);
    t22 = (t0 + 4232);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t22);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 7609);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t27, *((int *)t1), 4);
    t4 = (t0 + 4360);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t12 = *((char **)t7);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB63;

LAB65:    t20 = 0;

LAB68:    if (t20 < 8U)
        goto LAB69;
    else
        goto LAB67;

LAB69:    t7 = (t6 + t20);
    t21 = (t12 + t20);
    if (*((unsigned char *)t7) != *((unsigned char *)t21))
        goto LAB66;

LAB70:    t20 = (t20 + 1);
    goto LAB68;

LAB72:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 7617);
    *((int *)t1) = 0;
    t4 = (t0 + 7621);
    *((int *)t4) = 15;
    t13 = 0;
    t14 = 15;

LAB74:    if (t13 <= t14)
        goto LAB75;

LAB77:    goto LAB3;

LAB75:    xsi_set_current_line(90, ng0);
    t5 = (t0 + 7625);
    t9 = (8U != 8U);
    if (t9 == 1)
        goto LAB78;

LAB79:    t7 = (t0 + 7617);
    t15 = *((int *)t7);
    t16 = (t15 - 15);
    t17 = (t16 * -1);
    t18 = (8U * t17);
    t19 = (0U + t18);
    t12 = (t0 + 4424);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t5, 8U);
    xsi_driver_first_trans_delta(t12, t19, 8U, 0LL);

LAB76:    t1 = (t0 + 7617);
    t13 = *((int *)t1);
    t3 = (t0 + 7621);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB77;

LAB80:    t15 = (t13 + 1);
    t13 = t15;
    t4 = (t0 + 7617);
    *((int *)t4) = t13;
    goto LAB74;

LAB78:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB79;

}


void ieee_p_2592010699_sub_3130575329_503743352();

extern void work_a_2334801931_1516540902_init()
{
	static char *pe[] = {(void *)work_a_2334801931_1516540902_p_0};
	xsi_register_didat("work_a_2334801931_1516540902", "isim/tb_CAM_isim_beh.exe.sim/work/a_2334801931_1516540902.didat");
	xsi_register_executes(pe);
	xsi_register_resolution_function(1, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 6);
}
