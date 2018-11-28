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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003702623488_2772990413_init();
    work_m_00000000002747007831_0831007862_init();
    work_m_00000000003320579282_3208758463_init();
    work_m_00000000001046958649_0927805127_init();
    work_m_00000000002378033223_1532952540_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002378033223_1532952540");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
