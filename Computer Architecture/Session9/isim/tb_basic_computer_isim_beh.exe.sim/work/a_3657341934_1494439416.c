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
static const char *ng0 = "D:/Courses/Computer  architecture/CA Lab/Codes/Session9 (2)/Session9/CPU8bits.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3657341934_1494439416_p_0(char *t0)
{
    char t11[16];
    char t14[16];
    char t42[16];
    char t43[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t12;
    unsigned int t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    char *t31;
    char *t32;
    int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned char t44;
    unsigned char t45;
    unsigned char t46;
    unsigned int t47;
    unsigned char t48;
    unsigned char t49;
    char *t50;
    char *t51;

LAB0:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5344);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(56, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t5 = t1;
    memset(t5, (unsigned char)2, 5U);
    t6 = (t0 + 5488);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(57, ng0);
    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t5 = (t0 + 5552);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(58, ng0);
    t1 = xsi_get_transient_memory(9U);
    memset(t1, 0, 9U);
    t2 = t1;
    memset(t2, (unsigned char)2, 9U);
    t5 = (t0 + 5616);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 9U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(59, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    memset(t2, (unsigned char)2, 5U);
    t5 = (t0 + 5680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2632U);
    t5 = *((char **)t2);
    t2 = (t0 + 9196U);
    t6 = (t0 + 9261);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (3 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t4 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t2, t6, t11);
    if (t4 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5488);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t1);

LAB8:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 9265);
    t12 = xsi_mem_cmp(t1, t2, 4U);
    if (t12 == 1)
        goto LAB13;

LAB22:    t6 = (t0 + 9269);
    t25 = xsi_mem_cmp(t6, t2, 4U);
    if (t25 == 1)
        goto LAB14;

LAB23:    t8 = (t0 + 9273);
    t26 = xsi_mem_cmp(t8, t2, 4U);
    if (t26 == 1)
        goto LAB15;

LAB24:    t10 = (t0 + 9277);
    t27 = xsi_mem_cmp(t10, t2, 4U);
    if (t27 == 1)
        goto LAB16;

LAB25:    t16 = (t0 + 9281);
    t28 = xsi_mem_cmp(t16, t2, 4U);
    if (t28 == 1)
        goto LAB17;

LAB26:    t20 = (t0 + 9285);
    t29 = xsi_mem_cmp(t20, t2, 4U);
    if (t29 == 1)
        goto LAB18;

LAB27:    t22 = (t0 + 9289);
    t30 = xsi_mem_cmp(t22, t2, 4U);
    if (t30 == 1)
        goto LAB19;

LAB28:    t31 = (t0 + 9293);
    t33 = xsi_mem_cmp(t31, t2, 4U);
    if (t33 == 1)
        goto LAB20;

LAB29:
LAB21:    xsi_set_current_line(88, ng0);

LAB12:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 9196U);
    t5 = (t0 + 9297);
    t7 = (t11 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t12 = (3 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t13;
    t4 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t2, t1, t5, t11);
    if (t4 == 1)
        goto LAB42;

LAB43:    t8 = (t0 + 2632U);
    t9 = *((char **)t8);
    t8 = (t0 + 9196U);
    t10 = (t0 + 9301);
    t16 = (t14 + 0U);
    t19 = (t16 + 0U);
    *((int *)t19) = 0;
    t19 = (t16 + 4U);
    *((int *)t19) = 3;
    t19 = (t16 + 8U);
    *((int *)t19) = 1;
    t25 = (3 - 0);
    t13 = (t25 * 1);
    t13 = (t13 + 1);
    t19 = (t16 + 12U);
    *((unsigned int *)t19) = t13;
    t45 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t9, t8, t10, t14);
    if (t45 == 1)
        goto LAB48;

LAB49:    t44 = (unsigned char)0;

LAB50:    if (t44 == 1)
        goto LAB45;

LAB46:    t18 = (unsigned char)0;

LAB47:    t3 = t18;

LAB44:    if (t3 != 0)
        goto LAB39;

LAB41:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t13 = (7 - 7);
    t17 = (t13 * 1U);
    t24 = (0 + t17);
    t1 = (t2 + t24);
    t5 = (t11 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 5;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t12 = (5 - 7);
    t40 = (t12 * -1);
    t40 = (t40 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t40;
    t6 = (t0 + 9312);
    t8 = (t14 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t25 = (2 - 0);
    t40 = (t25 * 1);
    t40 = (t40 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t40;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t11, t6, t14);
    if (t3 != 0)
        goto LAB51;

LAB52:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t13 = (7 - 7);
    t17 = (t13 * 1U);
    t24 = (0 + t17);
    t1 = (t2 + t24);
    t5 = (t11 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 5;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t12 = (5 - 7);
    t40 = (t12 * -1);
    t40 = (t40 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t40;
    t6 = (t0 + 9319);
    t8 = (t14 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t25 = (2 - 0);
    t40 = (t25 * 1);
    t40 = (t40 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t40;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t11, t6, t14);
    if (t3 != 0)
        goto LAB53;

LAB54:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t13 = (7 - 7);
    t17 = (t13 * 1U);
    t24 = (0 + t17);
    t1 = (t2 + t24);
    t5 = (t11 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 5;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t12 = (5 - 7);
    t40 = (t12 * -1);
    t40 = (t40 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t40;
    t6 = (t0 + 9326);
    t8 = (t14 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t25 = (2 - 0);
    t40 = (t25 * 1);
    t40 = (t40 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t40;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t11, t6, t14);
    if (t3 != 0)
        goto LAB55;

LAB56:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t13 = (7 - 7);
    t17 = (t13 * 1U);
    t24 = (0 + t17);
    t1 = (t2 + t24);
    t5 = (t11 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 5;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t12 = (5 - 7);
    t40 = (t12 * -1);
    t40 = (t40 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t40;
    t6 = (t0 + 9333);
    t8 = (t14 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t25 = (2 - 0);
    t40 = (t25 * 1);
    t40 = (t40 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t40;
    t4 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t11, t6, t14);
    if (t4 == 1)
        goto LAB59;

LAB60:    t3 = (unsigned char)0;

LAB61:    if (t3 != 0)
        goto LAB57;

LAB58:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t13 = (7 - 7);
    t17 = (t13 * 1U);
    t24 = (0 + t17);
    t1 = (t2 + t24);
    t5 = (t11 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 5;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t12 = (5 - 7);
    t40 = (t12 * -1);
    t40 = (t40 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t40;
    t6 = (t0 + 9340);
    t8 = (t14 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t25 = (2 - 0);
    t40 = (t25 * 1);
    t40 = (t40 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t40;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t11, t6, t14);
    if (t3 != 0)
        goto LAB62;

LAB63:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t13 = (7 - 7);
    t17 = (t13 * 1U);
    t24 = (0 + t17);
    t1 = (t2 + t24);
    t5 = (t11 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 5;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t12 = (5 - 7);
    t40 = (t12 * -1);
    t40 = (t40 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t40;
    t6 = (t0 + 9347);
    t8 = (t14 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t25 = (2 - 0);
    t40 = (t25 * 1);
    t40 = (t40 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t40;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t11, t6, t14);
    if (t3 != 0)
        goto LAB64;

LAB65:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t13 = (7 - 7);
    t17 = (t13 * 1U);
    t24 = (0 + t17);
    t1 = (t2 + t24);
    t5 = (t11 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 5;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t12 = (5 - 7);
    t40 = (t12 * -1);
    t40 = (t40 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t40;
    t6 = (t0 + 9354);
    t8 = (t14 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t25 = (2 - 0);
    t40 = (t25 * 1);
    t40 = (t40 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t40;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t11, t6, t14);
    if (t3 != 0)
        goto LAB66;

LAB67:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t13 = (7 - 7);
    t17 = (t13 * 1U);
    t24 = (0 + t17);
    t1 = (t2 + t24);
    t5 = (t11 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 5;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t12 = (5 - 7);
    t40 = (t12 * -1);
    t40 = (t40 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t40;
    t6 = (t0 + 9361);
    t8 = (t14 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 2;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t25 = (2 - 0);
    t40 = (t25 * 1);
    t40 = (t40 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t40;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t1, t11, t6, t14);
    if (t3 != 0)
        goto LAB68;

LAB69:
LAB40:    goto LAB3;

LAB7:    xsi_set_current_line(64, ng0);
    t9 = (t0 + 2312U);
    t10 = *((char **)t9);
    t9 = (t0 + 9164U);
    t15 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t14, t10, t9, 1);
    t16 = (t14 + 12U);
    t13 = *((unsigned int *)t16);
    t17 = (1U * t13);
    t18 = (5U != t17);
    if (t18 == 1)
        goto LAB10;

LAB11:    t19 = (t0 + 5680);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 5U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t13 = (7 - 4);
    t17 = (t13 * 1U);
    t24 = (0 + t17);
    t1 = (t2 + t24);
    t5 = (t0 + 5488);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    goto LAB8;

LAB10:    xsi_size_not_matching(5U, t17, 0);
    goto LAB11;

LAB13:    xsi_set_current_line(72, ng0);
    t34 = (t0 + 2472U);
    t35 = *((char **)t34);
    t34 = (t0 + 5488);
    t36 = (t34 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memcpy(t39, t35, 5U);
    xsi_driver_first_trans_fast(t34);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5616);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t1, 1U, 8U, 0LL);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 5616);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5488);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB15:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5488);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB16:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 5616);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5488);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB17:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5488);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t13 = (8 - 7);
    t17 = (t13 * 1U);
    t24 = (0 + t17);
    t1 = (t2 + t24);
    t5 = (t14 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t12 = (0 - 7);
    t40 = (t12 * -1);
    t40 = (t40 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t40;
    t6 = (t0 + 1032U);
    t7 = *((char **)t6);
    t6 = (t0 + 9100U);
    t8 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t11, t1, t14, t7, t6);
    t9 = (t11 + 12U);
    t40 = *((unsigned int *)t9);
    t41 = (1U * t40);
    t3 = (8U != t41);
    if (t3 == 1)
        goto LAB31;

LAB32:    t10 = (t0 + 5616);
    t15 = (t10 + 56U);
    t16 = *((char **)t15);
    t19 = (t16 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 8U);
    xsi_driver_first_trans_delta(t10, 1U, 8U, 0LL);
    goto LAB12;

LAB18:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5488);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t13 = (8 - 7);
    t17 = (t13 * 1U);
    t24 = (0 + t17);
    t1 = (t2 + t24);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t42 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 7;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t12 = (0 - 7);
    t40 = (t12 * -1);
    t40 = (t40 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t40;
    t5 = xsi_base_array_concat(t5, t14, t6, (char)99, (unsigned char)2, (char)97, t1, t42, (char)101);
    t8 = (t0 + 1032U);
    t9 = *((char **)t8);
    t10 = ((IEEE_P_2592010699) + 4024);
    t15 = (t0 + 9100U);
    t8 = xsi_base_array_concat(t8, t43, t10, (char)99, (unsigned char)2, (char)97, t9, t15, (char)101);
    t16 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t11, t5, t14, t8, t43);
    t19 = (t11 + 12U);
    t40 = *((unsigned int *)t19);
    t41 = (1U * t40);
    t3 = (9U != t41);
    if (t3 == 1)
        goto LAB33;

LAB34:    t20 = (t0 + 5616);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t31 = *((char **)t23);
    memcpy(t31, t16, 9U);
    xsi_driver_first_trans_fast(t20);
    goto LAB12;

LAB19:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t13 = (8 - 7);
    t17 = (t13 * 1U);
    t24 = (0 + t17);
    t1 = (t2 + t24);
    t5 = (t14 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t12 = (0 - 7);
    t40 = (t12 * -1);
    t40 = (t40 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t40;
    t6 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t11, t1, t14);
    t7 = (t11 + 12U);
    t40 = *((unsigned int *)t7);
    t41 = (1U * t40);
    t3 = (8U != t41);
    if (t3 == 1)
        goto LAB35;

LAB36:    t8 = (t0 + 5616);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t15 = (t10 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t6, 8U);
    xsi_driver_first_trans_delta(t8, 1U, 8U, 0LL);
    goto LAB12;

LAB20:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t13 = (8 - 7);
    t17 = (t13 * 1U);
    t24 = (0 + t17);
    t1 = (t2 + t24);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t14 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 7;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t12 = (0 - 7);
    t40 = (t12 * -1);
    t40 = (t40 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t40;
    t5 = xsi_base_array_concat(t5, t11, t6, (char)97, t1, t14, (char)99, (unsigned char)2, (char)101);
    t40 = (8U + 1U);
    t3 = (9U != t40);
    if (t3 == 1)
        goto LAB37;

LAB38:    t8 = (t0 + 5616);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t15 = (t10 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t5, 9U);
    xsi_driver_first_trans_fast(t8);
    goto LAB12;

LAB30:;
LAB31:    xsi_size_not_matching(8U, t41, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(9U, t41, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(8U, t41, 0);
    goto LAB36;

LAB37:    xsi_size_not_matching(9U, t40, 0);
    goto LAB38;

LAB39:    xsi_set_current_line(91, ng0);
    t35 = (t0 + 9308);
    t37 = (t0 + 5552);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t50 = (t39 + 56U);
    t51 = *((char **)t50);
    memcpy(t51, t35, 4U);
    xsi_driver_first_trans_fast(t37);
    goto LAB40;

LAB42:    t3 = (unsigned char)1;
    goto LAB44;

LAB45:    t32 = (t0 + 2152U);
    t34 = *((char **)t32);
    t28 = (8 - 8);
    t40 = (t28 * -1);
    t41 = (1U * t40);
    t47 = (0 + t41);
    t32 = (t34 + t47);
    t48 = *((unsigned char *)t32);
    t49 = (t48 == (unsigned char)2);
    t18 = t49;
    goto LAB47;

LAB48:    t19 = (t0 + 1032U);
    t20 = *((char **)t19);
    t13 = (7 - 7);
    t17 = (t13 * 1U);
    t24 = (0 + t17);
    t19 = (t20 + t24);
    t21 = (t42 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 7;
    t22 = (t21 + 4U);
    *((int *)t22) = 5;
    t22 = (t21 + 8U);
    *((int *)t22) = -1;
    t26 = (5 - 7);
    t40 = (t26 * -1);
    t40 = (t40 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t40;
    t22 = (t0 + 9305);
    t31 = (t43 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 0;
    t32 = (t31 + 4U);
    *((int *)t32) = 2;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t27 = (2 - 0);
    t40 = (t27 * 1);
    t40 = (t40 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t40;
    t46 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t19, t42, t22, t43);
    t44 = t46;
    goto LAB50;

LAB51:    xsi_set_current_line(92, ng0);
    t9 = (t0 + 9315);
    t15 = (t0 + 5552);
    t16 = (t15 + 56U);
    t19 = *((char **)t16);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t9, 4U);
    xsi_driver_first_trans_fast(t15);
    goto LAB40;

LAB53:    xsi_set_current_line(93, ng0);
    t9 = (t0 + 9322);
    t15 = (t0 + 5552);
    t16 = (t15 + 56U);
    t19 = *((char **)t16);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t9, 4U);
    xsi_driver_first_trans_fast(t15);
    goto LAB40;

LAB55:    xsi_set_current_line(94, ng0);
    t9 = (t0 + 9329);
    t15 = (t0 + 5552);
    t16 = (t15 + 56U);
    t19 = *((char **)t16);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t9, 4U);
    xsi_driver_first_trans_fast(t15);
    goto LAB40;

LAB57:    xsi_set_current_line(95, ng0);
    t15 = (t0 + 9336);
    t19 = (t0 + 5552);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 4U);
    xsi_driver_first_trans_fast(t19);
    goto LAB40;

LAB59:    t9 = (t0 + 2152U);
    t10 = *((char **)t9);
    t26 = (8 - 8);
    t40 = (t26 * -1);
    t41 = (1U * t40);
    t47 = (0 + t41);
    t9 = (t10 + t47);
    t18 = *((unsigned char *)t9);
    t44 = (t18 == (unsigned char)3);
    t3 = t44;
    goto LAB61;

LAB62:    xsi_set_current_line(96, ng0);
    t9 = (t0 + 9343);
    t15 = (t0 + 5552);
    t16 = (t15 + 56U);
    t19 = *((char **)t16);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t9, 4U);
    xsi_driver_first_trans_fast(t15);
    goto LAB40;

LAB64:    xsi_set_current_line(97, ng0);
    t9 = (t0 + 9350);
    t15 = (t0 + 5552);
    t16 = (t15 + 56U);
    t19 = *((char **)t16);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t9, 4U);
    xsi_driver_first_trans_fast(t15);
    goto LAB40;

LAB66:    xsi_set_current_line(98, ng0);
    t9 = (t0 + 9357);
    t15 = (t0 + 5552);
    t16 = (t15 + 56U);
    t19 = *((char **)t16);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t9, 4U);
    xsi_driver_first_trans_fast(t15);
    goto LAB40;

LAB68:    xsi_set_current_line(99, ng0);
    t9 = (t0 + 9364);
    t15 = (t0 + 5552);
    t16 = (t15 + 56U);
    t19 = *((char **)t16);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t9, 4U);
    xsi_driver_first_trans_fast(t15);
    goto LAB40;

}

static void work_a_3657341934_1494439416_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(106, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5744);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5360);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3657341934_1494439416_p_2(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 9196U);
    t3 = (t0 + 9368);
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
    t10 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t17 = (t0 + 2152U);
    t18 = *((char **)t17);
    t9 = (8 - 7);
    t19 = (t9 * 1U);
    t20 = (0 + t19);
    t17 = (t18 + t20);
    t21 = (t0 + 5808);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t17, 8U);
    xsi_driver_first_trans_fast_port(t21);

LAB2:    t26 = (t0 + 5376);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t7 = xsi_get_transient_memory(8U);
    memset(t7, 0, 8U);
    t11 = t7;
    memset(t11, (unsigned char)4, 8U);
    t12 = (t0 + 5808);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 8U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3657341934_1494439416_p_3(char *t0)
{
    char t16[16];
    char t25[16];
    char t33[16];
    char t41[16];
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t26;
    char *t27;
    int t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t34;
    char *t35;
    int t36;
    unsigned char t37;
    char *t38;
    char *t39;
    char *t42;
    char *t43;
    int t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;

LAB0:    xsi_set_current_line(108, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 1352U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    t2 = t9;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t3 = (t0 + 2632U);
    t13 = *((char **)t3);
    t3 = (t0 + 9196U);
    t14 = (t0 + 9372);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 0;
    t18 = (t17 + 4U);
    *((int *)t18) = 3;
    t18 = (t17 + 8U);
    *((int *)t18) = 1;
    t19 = (3 - 0);
    t20 = (t19 * 1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t21 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t13, t3, t14, t16);
    if (t21 == 1)
        goto LAB17;

LAB18:    t18 = (t0 + 2632U);
    t22 = *((char **)t18);
    t18 = (t0 + 9196U);
    t23 = (t0 + 9376);
    t26 = (t25 + 0U);
    t27 = (t26 + 0U);
    *((int *)t27) = 0;
    t27 = (t26 + 4U);
    *((int *)t27) = 3;
    t27 = (t26 + 8U);
    *((int *)t27) = 1;
    t28 = (3 - 0);
    t20 = (t28 * 1);
    t20 = (t20 + 1);
    t27 = (t26 + 12U);
    *((unsigned int *)t27) = t20;
    t29 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t22, t18, t23, t25);
    t12 = t29;

LAB19:    if (t12 == 1)
        goto LAB14;

LAB15:    t27 = (t0 + 2632U);
    t30 = *((char **)t27);
    t27 = (t0 + 9196U);
    t31 = (t0 + 9380);
    t34 = (t33 + 0U);
    t35 = (t34 + 0U);
    *((int *)t35) = 0;
    t35 = (t34 + 4U);
    *((int *)t35) = 3;
    t35 = (t34 + 8U);
    *((int *)t35) = 1;
    t36 = (3 - 0);
    t20 = (t36 * 1);
    t20 = (t20 + 1);
    t35 = (t34 + 12U);
    *((unsigned int *)t35) = t20;
    t37 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t30, t27, t31, t33);
    t11 = t37;

LAB16:    if (t11 == 1)
        goto LAB11;

LAB12:    t35 = (t0 + 2632U);
    t38 = *((char **)t35);
    t35 = (t0 + 9196U);
    t39 = (t0 + 9384);
    t42 = (t41 + 0U);
    t43 = (t42 + 0U);
    *((int *)t43) = 0;
    t43 = (t42 + 4U);
    *((int *)t43) = 3;
    t43 = (t42 + 8U);
    *((int *)t43) = 1;
    t44 = (3 - 0);
    t20 = (t44 * 1);
    t20 = (t20 + 1);
    t43 = (t42 + 12U);
    *((unsigned int *)t43) = t20;
    t45 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t38, t35, t39, t41);
    t10 = t45;

LAB13:    t1 = t10;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB20:    t50 = (t0 + 5872);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    *((unsigned char *)t54) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t50);

LAB2:    t55 = (t0 + 5392);
    *((int *)t55) = 1;

LAB1:    return;
LAB3:    t43 = (t0 + 5872);
    t46 = (t43 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    *((unsigned char *)t49) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t43);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t10 = (unsigned char)1;
    goto LAB13;

LAB14:    t11 = (unsigned char)1;
    goto LAB16;

LAB17:    t12 = (unsigned char)1;
    goto LAB19;

LAB21:    goto LAB2;

}

static void work_a_3657341934_1494439416_p_4(char *t0)
{
    char t13[16];
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t14;
    char *t15;
    int t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(110, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 1352U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    t2 = t9;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t3 = (t0 + 2632U);
    t10 = *((char **)t3);
    t3 = (t0 + 9196U);
    t11 = (t0 + 9388);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 3;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t16 = (3 - 0);
    t17 = (t16 * 1);
    t17 = (t17 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t17;
    t18 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t10, t3, t11, t13);
    t1 = t18;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t23 = (t0 + 5936);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t23);

LAB2:    t28 = (t0 + 5408);
    *((int *)t28) = 1;

LAB1:    return;
LAB3:    t15 = (t0 + 5936);
    t19 = (t15 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t15);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB12:    goto LAB2;

}


extern void work_a_3657341934_1494439416_init()
{
	static char *pe[] = {(void *)work_a_3657341934_1494439416_p_0,(void *)work_a_3657341934_1494439416_p_1,(void *)work_a_3657341934_1494439416_p_2,(void *)work_a_3657341934_1494439416_p_3,(void *)work_a_3657341934_1494439416_p_4};
	xsi_register_didat("work_a_3657341934_1494439416", "isim/tb_basic_computer_isim_beh.exe.sim/work/a_3657341934_1494439416.didat");
	xsi_register_executes(pe);
}
