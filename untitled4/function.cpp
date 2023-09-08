#include "widget.h"
#include <QApplication>
#include "function.h"

extern unsigned char global_send_buf[66];



DC_Mode_Typedef dc_mode[5];

unsigned char define_cede_1[]={
    0xFF,0x0 , 0x0,0x0 ,0x0,0x0,0x0,0x61,0x61,0x66,
    0x68,0x66,0x69,0x64,0x64,0x61,0x0,0x0,0x0,0x61,
    0x0 ,0x61,0x64,0x61,0x0,0x61,0x62,0x0,0x0,0x61,
    0x0 ,0x61,0x61,0x61,0x62,0x92,0x64,0x68,0x68,0x61,
    0x61,0x73,0x6D,0x61,0x70,0x63,0x69,0x62,0x6F,0x62,
    0x65,0x62,0x6A,0x0 ,0x0,0x0,0x0,0x63,0x70,0x63,
    0x70,0x63,0x70,0x0 ,0x0,0xFE
};


void __attribute__((constructor)) init_direct_display()
{
    memcpy(dc_mode[0].name, "100%碳钢", sizeof "100%碳钢");
    //dc_mode[0].set_direct_mode_flag = 0x61;
    memcpy(dc_mode[1].name, "25%碳钢", sizeof "25%碳钢");
    //dc_mode[1].set_direct_mode_flag = 0x62;
    memcpy(dc_mode[2].name, "恒压", sizeof "恒压");
    //dc_mode[2].set_direct_mode_flag = 0x63;
    memcpy(dc_mode[3].name, "无气药芯", sizeof "无气药芯");
    //dc_mode[3].set_direct_mode_flag = 0x64;
    memcpy(dc_mode[4].name, "拉丝枪", sizeof "拉丝枪");
    //dc_mode[4].set_direct_mode_flag = 0x65;

    memcpy(dc_mode[0].define_send_data, define_cede_1, sizeof(define_cede_1));
    memcpy(dc_mode[1].define_send_data, define_cede_1, sizeof(define_cede_1));
    memcpy(dc_mode[2].define_send_data, define_cede_1, sizeof(define_cede_1));   //手动恒压
    memcpy(dc_mode[3].define_send_data, define_cede_1, sizeof(define_cede_1));
    memcpy(dc_mode[4].define_send_data, define_cede_1, sizeof(define_cede_1));

}

void dc_mode_0_function()
{
}

void dc_mode_1_function()
{
}

void dc_mode_2_function()
{
}

void direct_set_send_data(DC_Mode_Typedef *mode)
{
    int b = sizeof(mode->define_send_data);
       for (int i = 0; i < b; i++)
       {
           mode->after_send_data[i] = mode->define_send_data[i];
       }
       mode->after_send_data[0] = 0xFF;
       mode->after_send_data[1] = (unsigned char)(mode->set_feeding_speed) / 16 + 97; // 高位0x61，0x61为0
       mode->after_send_data[2] = (unsigned char)(mode->set_feeding_speed) % 16 + 97; //

       //    final_set_v=set_v+offest_v;
       //    if (final_set_v>27) final_set_v=27;
       mode->after_send_data[3] = (unsigned int)(mode->set_voltage) / 16 + 97; // 10.0->100,10.1->101
       mode->after_send_data[4] = (unsigned int)(mode->set_voltage) % 16 + 97;

       mode->after_send_data[5] = (unsigned int)(mode->set_inductance) / 16 + 97;
       mode->after_send_data[6] = (unsigned int)(mode->set_inductance) % 16 + 97;
       //    mode->after_send_data[7]=0xFF;
       //    mode->after_send_data[8]=0xFF;
       //    mode->after_send_data[9]=0xFF;
       //    mode->after_send_data[10]=0xFF;
       //    mode->after_send_data[11]=0xFF;
       //    mode->after_send_data[12]=0xFF;
       //    mode->after_send_data[13]=0xFF;
       //    mode->after_send_data[14]=0xFF;
       //    mode->after_send_data[15]=0xFF;
       mode->after_send_data[16] = mode->set_feeding_flag + 97;
       mode->after_send_data[17] = int(mode->set_slow_feeding_speed) / 16 + 97; // 慢送丝
       mode->after_send_data[18] = int(mode->set_slow_feeding_speed) % 16 + 97; // 慢送丝
       //    mode->after_send_data[19]=0xFF;
       mode->after_send_data[20] = mode->set_2T_4T+ 97;
       //    mode->after_send_data[21]=0xFF;
       //    mode->after_send_data[22]=0xFF;
       //    mode->after_send_data[23]=0xFF;
       mode->after_send_data[24] = mode->set_wire_diameter+ 97;
       //    mode->after_send_data[25]=0xFF;
       //    mode->after_send_data[26]=0xFF;
       mode->after_send_data[27] = int(mode->set_after_action_time) / 16 + 97; // 后吹时间
       mode->after_send_data[28] = int(mode->set_after_action_time) % 16 + 97; // 后吹时间
       //    mode->after_send_data[29]=0xFF;
       mode->after_send_data[30] = mode->set_direct_mode_flag+ 97; // 模式切换
       //    mode->after_send_data[31]=0xFF;
       //    mode->after_send_data[32]=0xFF;
       //    mode->after_send_data[33]=0xFF;
       //    mode->after_send_data[34]=0x62;                                 //直流参数0x62
       //    mode->after_send_data[35]=0X92;                                 //固定格式
       //    mode->after_send_data[36]=0xFF;
       //    mode->after_send_data[37]=0xFF;
       //    mode->after_send_data[38]=0xFF;
       //    mode->after_send_data[39]=0xFF;
       //    mode->after_send_data[40]=0xFF;
       //    mode->after_send_data[41]=0xFF;
       //    mode->after_send_data[42]=0xFF;
       //    mode->after_send_data[43]=0xFF;
       //    mode->after_send_data[44]=0xFF;
       //    mode->after_send_data[45]=0xFF;
       //    mode->after_send_data[46]=0xFF;
       //    mode->after_send_data[47]=0xFF;
       //    mode->after_send_data[48]=0xFF;
       //    mode->after_send_data[49]=0xFF;
       //    mode->after_send_data[50]=0xFF;
       //    mode->after_send_data[51]=0xFF;
       //    mode->after_send_data[52]=0xFF;
       mode->after_send_data[53] = char(mode->set_offest_voltage) / 16 + 97; // final_speed_v
       mode->after_send_data[54] = char(mode->set_offest_voltage) % 16 + 97;
       mode->after_send_data[55] = (mode->set_unknown_data) / 16 + 97;
       mode->after_send_data[56] = (mode->set_unknown_data) % 16 + 97;
       //    mode->after_send_data[57]=0xFF;
       //    mode->after_send_data[58]=0xFF;
       //    mode->after_send_data[59]=0xFF;
       //    mode->after_send_data[60]=0xFF;
       //    mode->after_send_data[61]=0xFF;
       //    mode->after_send_data[62]=0xFF;
       int check_data;
       check_data = (mode->after_send_data[1] - 97) * 16 + mode->after_send_data[2] - 97;
       check_data += (mode->after_send_data[3] - 97) * 16 + mode->after_send_data[4] - 97;
       check_data += (mode->after_send_data[5] - 97) * 16 + mode->after_send_data[6] - 97;
       check_data += (mode->after_send_data[16] - 97);
       check_data += (mode->after_send_data[17] - 97) * 16 + mode->after_send_data[18] - 97;
       check_data += (mode->after_send_data[20] - 97);
       check_data += (mode->after_send_data[24] - 97);
       check_data += (mode->after_send_data[27] - 97) * 16 + mode->after_send_data[28] - 97;
       check_data += (mode->after_send_data[30] - 97);
       check_data += (mode->after_send_data[53] - 97) * 16 + mode->after_send_data[54] - 97;
       check_data += (mode->after_send_data[55] - 97) * 16 + mode->after_send_data[56] - 97;



       mode->after_send_data[63] = ((unsigned char)(check_data + 125  )) / 16 + 97;
       mode->after_send_data[64] = ((unsigned char)(check_data + 125  )) % 16 + 97;

       mode->after_send_data[65] = 0xFE;
}
