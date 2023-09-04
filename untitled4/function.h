#ifndef FUNCTION_H
#define FUNCTION_H


typedef void (*Updata_function)(void);

typedef struct DC_Mode_Typedef
{
    char name[20] = "模式名称";         // 模式名称
    unsigned char define_send_data[66]; // 默认发送值
    unsigned char after_send_data[66];  // 最终发送值

    // Set_x,表示输出要发送的数据值
    int set_direct_mode_flag;   // 模式标记
    int set_voltage;            // 输出电压
    int set_offest_voltage;     // 输出电压偏移值
    int set_feeding_speed;      // 送丝速度
    int set_inductance;         // 电感偏移值
    int set_wire_diameter;      // 丝径 0.8 0.9 1.0
    int set_unknown_data;       // dc_mdoe->after_send_data[55]，dc_mdoe->after_send_data[56]
    int set_2T_4T;              // 2t，4t模式切换
    int set_after_action_time;  // 后吹时间
    int set_slow_feeding_speed; // 缓慢送丝速度
    int set_feeding_flag;       // 送丝标记

    // dis_x,表示面板显示的数据
    float dis_current;            // 显示电流
    float dis_voltage;            // 显示电压

    Updata_function fun; // 更新函数

} DC_Mode_Typedef;

extern DC_Mode_Typedef dc_mode[5];

void direct_set_send_data(DC_Mode_Typedef *dc_mdoe);


#endif // FUNCTION_H
