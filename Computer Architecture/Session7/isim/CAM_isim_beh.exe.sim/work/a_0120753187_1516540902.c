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


static void work_a_0120753187_1516540902_p_0(char *t0)
{
    char t28[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    double t32;
    double t33;
    double t34;
    double t35;
    double t36;

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 4232);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1472U);
    t6 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t6 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB72;

LAB73:
LAB3:    t1 = (t0 + 4152);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t8 = *((unsigned char *)t3);
    t9 = (t8 == (unsigned char)3);
    if (t9 == 1)
        goto LAB8;

LAB9:    t7 = (unsigned char)0;

LAB10:    if (t7 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t8 = (t7 == (unsigned char)2);
    if (t8 == 1)
        goto LAB55;

LAB56:    t6 = (unsigned char)0;

LAB57:    if (t6 != 0)
        goto LAB53;

LAB54:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4296);
    t5 = (t2 + 56U);
    t12 = *((char **)t5);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 7585);
    *((int *)t1) = 0;
    t2 = (t0 + 7589);
    *((int *)t2) = 15;
    t15 = 0;
    t16 = 15;

LAB11:    if (t15 <= t16)
        goto LAB12;

LAB14:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB25;

LAB27:
LAB26:    goto LAB6;

LAB8:    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t10 = *((unsigned char *)t4);
    t11 = (t10 == (unsigned char)2);
    t7 = t11;
    goto LAB10;

LAB12:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t3 = (t0 + 7585);
    t17 = *((int *)t3);
    t18 = (t17 - 15);
    t19 = (t18 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t3));
    t20 = (8U * t19);
    t21 = (0 + t20);
    t5 = (t4 + t21);
    t12 = (t0 + 1032U);
    t13 = *((char **)t12);
    t6 = 1;
    if (8U == 8U)
        goto LAB18;

LAB19:    t6 = 0;

LAB20:    if (t6 != 0)
        goto LAB15;

LAB17:
LAB16:
LAB13:    t1 = (t0 + 7585);
    t15 = *((int *)t1);
    t2 = (t0 + 7589);
    t16 = *((int *)t2);
    if (t15 == t16)
        goto LAB14;

LAB24:    t17 = (t15 + 1);
    t15 = t17;
    t3 = (t0 + 7585);
    *((int *)t3) = t15;
    goto LAB11;

LAB15:    xsi_set_current_line(62, ng0);
    t23 = (t0 + 4296);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = (unsigned char)3;
    xsi_driver_first_trans_fast(t23);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 7585);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t28, *((int *)t1), 4);
    t3 = (t0 + 4360);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 4U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 4232);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB18:    t22 = 0;

LAB21:    if (t22 < 8U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t12 = (t5 + t22);
    t14 = (t13 + t22);
    if (*((unsigned char *)t12) != *((unsigned char *)t14))
        goto LAB19;

LAB23:    t22 = (t22 + 1);
    goto LAB21;

LAB25:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 7593);
    *((int *)t1) = 0;
    t3 = (t0 + 7597);
    *((int *)t3) = 15;
    t15 = 0;
    t16 = 15;

LAB28:    if (t15 <= t16)
        goto LAB29;

LAB31:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB45;

LAB47:
LAB46:    goto LAB26;

LAB29:    xsi_set_current_line(69, ng0);
    t4 = (t0 + 2152U);
    t5 = *((char **)t4);
    t4 = (t0 + 7593);
    t17 = *((int *)t4);
    t18 = (t17 - 15);
    t19 = (t18 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t4));
    t20 = (8U * t19);
    t21 = (0 + t20);
    t12 = (t5 + t21);
    t13 = (t0 + 7601);
    t9 = 1;
    if (8U == 8U)
        goto LAB38;

LAB39:    t9 = 0;

LAB40:    if (t9 == 1)
        goto LAB35;

LAB36:    t8 = (unsigned char)0;

LAB37:    if (t8 != 0)
        goto LAB32;

LAB34:
LAB33:
LAB30:    t1 = (t0 + 7593);
    t15 = *((int *)t1);
    t2 = (t0 + 7597);
    t16 = *((int *)t2);
    if (t15 == t16)
        goto LAB31;

LAB44:    t17 = (t15 + 1);
    t15 = t17;
    t3 = (t0 + 7593);
    *((int *)t3) = t15;
    goto LAB28;

LAB32:    xsi_set_current_line(70, ng0);
    t25 = (t0 + 4296);
    t27 = (t25 + 56U);
    t29 = *((char **)t27);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = (unsigned char)3;
    xsi_driver_first_trans_fast(t25);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7593);
    t17 = *((int *)t1);
    t18 = (t17 - 15);
    t19 = (t18 * -1);
    t20 = (8U * t19);
    t21 = (0U + t20);
    t3 = (t0 + 4424);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_delta(t3, t21, 8U, 0LL);
    goto LAB33;

LAB35:    t25 = (t0 + 2312U);
    t26 = *((char **)t25);
    t10 = *((unsigned char *)t26);
    t11 = (t10 == (unsigned char)2);
    t8 = t11;
    goto LAB37;

LAB38:    t22 = 0;

LAB41:    if (t22 < 8U)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t23 = (t12 + t22);
    t24 = (t13 + t22);
    if (*((unsigned char *)t23) != *((unsigned char *)t24))
        goto LAB39;

LAB43:    t22 = (t22 + 1);
    goto LAB41;

LAB45:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 3640);
    t3 = (t0 + 2728U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    t5 = (t0 + 2848U);
    t12 = *((char **)t5);
    t5 = (t12 + 0);
    t13 = (t0 + 2608U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    ieee_p_3972351953_sub_3007962107_2984157535(IEEE_P_3972351953, t1, t3, t5, t13);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 2608U);
    t3 = *((char **)t1);
    t32 = *((double *)t3);
    t33 = (t32 * 16.000000000000000);
    t34 = ieee_p_3972351953_sub_28498392_2984157535(IEEE_P_3972351953, t33);
    t6 = (t34 >= 0);
    if (t6 == 1)
        goto LAB48;

LAB49:    t36 = (t34 - 0.50000000000000000);
    t15 = ((int)(t36));

LAB50:    t16 = (t15 - 15);
    t19 = (t16 * -1);
    t20 = (8U * t19);
    t21 = (0U + t20);
    t1 = (t0 + 4424);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 8U);
    xsi_driver_first_trans_delta(t1, t21, 8U, 0LL);
    goto LAB46;

LAB48:    t7 = (t34 >= 2147483647);
    if (t7 == 1)
        goto LAB51;

LAB52:    t35 = (t34 + 0.50000000000000000);
    t15 = ((int)(t35));
    goto LAB50;

LAB51:    t15 = 2147483647;
    goto LAB50;

LAB53:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 4232);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 7609);
    *((int *)t1) = 0;
    t2 = (t0 + 7613);
    *((int *)t2) = 15;
    t15 = 0;
    t16 = 15;

LAB58:    if (t15 <= t16)
        goto LAB59;

LAB61:    goto LAB6;

LAB55:    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t9 = *((unsigned char *)t3);
    t10 = (t9 == (unsigned char)3);
    t6 = t10;
    goto LAB57;

LAB59:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t3 = (t0 + 7609);
    t17 = *((int *)t3);
    t18 = (t17 - 15);
    t19 = (t18 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t3));
    t20 = (8U * t19);
    t21 = (0 + t20);
    t5 = (t4 + t21);
    t12 = (t0 + 1032U);
    t13 = *((char **)t12);
    t6 = 1;
    if (8U == 8U)
        goto LAB65;

LAB66:    t6 = 0;

LAB67:    if (t6 != 0)
        goto LAB62;

LAB64:
LAB63:
LAB60:    t1 = (t0 + 7609);
    t15 = *((int *)t1);
    t2 = (t0 + 7613);
    t16 = *((int *)t2);
    if (t15 == t16)
        goto LAB61;

LAB71:    t17 = (t15 + 1);
    t15 = t17;
    t3 = (t0 + 7609);
    *((int *)t3) = t15;
    goto LAB58;

LAB62:    xsi_set_current_line(83, ng0);
    t23 = (t0 + 4232);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t23);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 7609);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t28, *((int *)t1), 4);
    t3 = (t0 + 4360);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t12 = (t5 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 4U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB63;

LAB65:    t22 = 0;

LAB68:    if (t22 < 8U)
        goto LAB69;
    else
        goto LAB67;

LAB69:    t12 = (t5 + t22);
    t14 = (t13 + t22);
    if (*((unsigned char *)t12) != *((unsigned char *)t14))
        goto LAB66;

LAB70:    t22 = (t22 + 1);
    goto LAB68;

LAB72:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 7617);
    *((int *)t1) = 0;
    t3 = (t0 + 7621);
    *((int *)t3) = 15;
    t15 = 0;
    t16 = 15;

LAB74:    if (t15 <= t16)
        goto LAB75;

LAB77:    goto LAB3;

LAB75:    xsi_set_current_line(90, ng0);
    t4 = (t0 + 7625);
    t8 = (8U != 8U);
    if (t8 == 1)
        goto LAB78;

LAB79:    t12 = (t0 + 7617);
    t17 = *((int *)t12);
    t18 = (t17 - 15);
    t19 = (t18 * -1);
    t20 = (8U * t19);
    t21 = (0U + t20);
    t13 = (t0 + 4424);
    t14 = (t13 + 56U);
    t23 = *((char **)t14);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t4, 8U);
    xsi_driver_first_trans_delta(t13, t21, 8U, 0LL);

LAB76:    t1 = (t0 + 7617);
    t15 = *((int *)t1);
    t2 = (t0 + 7621);
    t16 = *((int *)t2);
    if (t15 == t16)
        goto LAB77;

LAB80:    t17 = (t15 + 1);
    t15 = t17;
    t3 = (t0 + 7617);
    *((int *)t3) = t15;
    goto LAB74;

LAB78:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB79;

}


void ieee_p_2592010699_sub_3130575329_503743352();

extern void work_a_0120753187_1516540902_init()
{
	static char *pe[] = {(void *)work_a_0120753187_1516540902_p_0};
	xsi_register_didat("work_a_0120753187_1516540902", "isim/CAM_isim_beh.exe.sim/work/a_0120753187_1516540902.didat");
	xsi_register_executes(pe);
	xsi_register_resolution_function(1, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 6);
}
