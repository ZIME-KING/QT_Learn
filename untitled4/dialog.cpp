#include "dialog.h"
#include "ui_dialog.h"

#include "function.h"
#include "set_code.h"


#define max_speed_08     125          //10~175
#define max_speed_09     100          //10~145
#define max_speed_10     70           //10~128

#include "set_code.h"


int input_direct_mode_flag; // 模式标记
float input_voltage;        // 电压
float input_offest_voltage; // 电压偏移值
float input_feeding_speed;  // 送丝速度
int input_inductance;       // 电感偏移值
int input_wire_diameter;    // 丝径 0.8 0.9 1.0
// int input_unknown_data;       // dc_mdoe->after_send_data[55]，dc_mdoe->after_send_data[56]
int input_2T_4T;                // 2t，4t模式切换
float input_after_action_time;  // 后吹时间
float input_slow_feeding_speed; // 缓慢送丝速度
int input_feeding_flag;         // 送丝标记

extern unsigned char global_send_buf[66];


Dialog::Dialog(QWidget *parent) : QDialog(parent),
                                  ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->comboBox, &QComboBox::textActivated, this, &Dialog::on_comboBox_textActivated);
    connect(ui->comboBox_2, &QComboBox::textActivated, this, &Dialog::on_comboBox_2_textActivated);
    connect(ui->comboBox_3, &QComboBox::textActivated, this, &Dialog::on_comboBox_3_textActivated);

    connect(ui->doubleSpinBox, &QDoubleSpinBox::valueChanged, this, &Dialog::on_doubleSpinBox_valueChanged);
    connect(ui->doubleSpinBox_2, &QDoubleSpinBox::valueChanged, this, &Dialog::on_doubleSpinBox_2_valueChanged);
    connect(ui->doubleSpinBox_3, &QDoubleSpinBox::valueChanged, this, &Dialog::on_doubleSpinBox_3_valueChanged);

    connect(ui->doubleSpinBox_3, &QDoubleSpinBox::valueChanged, this, &Dialog::on_doubleSpinBox_3_valueChanged);
    connect(ui->doubleSpinBox_4, &QDoubleSpinBox::valueChanged, this, &Dialog::on_doubleSpinBox_4_valueChanged);
    connect(ui->spinBox, &QSpinBox::valueChanged, this, &Dialog::on_spinBox_valueChanged);


    set_data_init();

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::set_data_init(){

on_doubleSpinBox_valueChanged(ui->doubleSpinBox->value());
on_doubleSpinBox_2_valueChanged(ui->doubleSpinBox_2->value());
on_doubleSpinBox_3_valueChanged(ui->doubleSpinBox_3->value());
on_doubleSpinBox_4_valueChanged(ui->doubleSpinBox_4->value());

on_spinBox_valueChanged(ui->spinBox->value());
on_comboBox_textActivated(ui->comboBox->currentText());
on_comboBox_2_textActivated(ui->comboBox_2->currentText());
on_comboBox_3_textActivated(ui->comboBox_3->currentText());


}

void Dialog::updata_display()
{

    QString dis_tmp;
    QString Dis_data;
    QString temp;

    int a;
    int check_count = 0;
    // 0.8
    if (input_wire_diameter == 0x00)
    {
        ui->doubleSpinBox_3->setMaximum(17.5);
    }
    // 0.9
    else if (input_wire_diameter == 0x01)
    {
        ui->doubleSpinBox_3->setMaximum(14.5);
    }
    // 1.0
    else if (input_wire_diameter == 0x02)
    {
        ui->doubleSpinBox_3->setMaximum(12.8);
    }
    // 手动模式
    if (input_direct_mode_flag == 0x02 || input_direct_mode_flag == 0x04)
    {
        ui->doubleSpinBox->setMaximum(27.0);
        ui->doubleSpinBox->setMinimum(10.0);
    }
    // 一元化  0x00 0x01 0x03
    else
    {
        ui->doubleSpinBox->setMaximum(5.0);
        ui->doubleSpinBox->setMinimum(-5.0);
    }
    // 碳钢 100%二氧化碳
    if (input_direct_mode_flag == 0x00)
    {
        dc_mode[0].set_direct_mode_flag = input_direct_mode_flag; // 模式标记
        // dc_mode[0].set_voltage=input_voltage;                       // 输出电压
        dc_mode[0].set_offest_voltage = input_offest_voltage * 10 + 50; // 输出电压偏移值
        // dc_mode[0].set_feeding_speed = input_feeding_speed * 10;   // 送丝速度
        dc_mode[0].set_inductance = input_inductance + 10;
        ;                                                   // 电感偏移值
        dc_mode[0].set_wire_diameter = input_wire_diameter; // 丝径 0.8 0.9 1.0
        // dc_mode[0].set_unknown_data=input_unknown_data;       // dc_mdoe->after_send_data[55]，dc_mdoe->after_send_data[56]
        dc_mode[0].set_2T_4T = input_2T_4T;                                    // 2t，4t模式切换
        dc_mode[0].set_after_action_time = input_after_action_time * 10 - 1;   // 后吹时间
        dc_mode[0].set_slow_feeding_speed = input_slow_feeding_speed * 10; // 缓慢送丝速度
        dc_mode[0].set_feeding_flag = input_feeding_flag;                      // 送丝标记

        check_count = (int)(input_feeding_speed * 10);
        dc_mode[0].set_feeding_speed=check_count;
        //设置电压电流参数
        switch (dc_mode[0].set_wire_diameter)
        {
        case 0x00:  //0.8丝径
            if(check_count>max_speed_08){
                dc_mode[0].set_feeding_speed = max_speed_08;                            // 送丝速度
            }
            dc_mode[0].set_voltage = 0.9*check_count+89.33 + input_offest_voltage * 10 + 50; // 数据采集回来是微调-5模式下采集，这里加5恢复
            if(dc_mode[0].set_voltage>270)  dc_mode[0].set_voltage=270;

            dc_mode[0].set_unknown_data = 0.55*check_count-1.17;
            if(dc_mode[0].set_unknown_data >70) dc_mode[0].set_unknown_data=70;

            dc_mode[0].dis_current = int(1.38*check_count +28.07);     // 显示电流
            //if(dc_mode[0].dis_current>270)
            dc_mode[0].dis_voltage = dc_mode[0].set_voltage * 0.1; // 显示电压
            break;

        case 0x01:
            if(check_count>max_speed_09){
                dc_mode[0].set_feeding_speed = max_speed_09;                            // 送丝速度
            }
            dc_mode[0].set_voltage = 1.13*check_count+89.28 + input_offest_voltage * 10 + 50; // 数据采集回来是微调-5模式下采集，这里加5恢复
            if(dc_mode[0].set_voltage>270)  dc_mode[0].set_voltage=270;

            dc_mode[0].set_unknown_data = 0.57*check_count-3.78;
            if(dc_mode[0].set_unknown_data >70) dc_mode[0].set_unknown_data=70;

            dc_mode[0].dis_current = int(1.64*check_count +32.98);     // 显示电流
            //if(dc_mode[0].dis_current)
            dc_mode[0].dis_voltage = dc_mode[0].set_voltage * 0.1; // 显示电压
            break;

        case 0x02:
            if(check_count>max_speed_10){
                dc_mode[0].set_feeding_speed = max_speed_10;                            // 送丝速度
            }
            dc_mode[0].set_voltage = 1.14*check_count+119.63 + input_offest_voltage * 10 + 50; // 数据采集回来是微调-5模式下采集，这里加5恢复
            if(dc_mode[0].set_voltage>270)  dc_mode[0].set_voltage=270;

            dc_mode[0].set_unknown_data = 0.58*check_count-3.55;
            if(dc_mode[0].set_unknown_data >70) dc_mode[0].set_unknown_data=70;

            dc_mode[0].dis_current = int(1.86*check_count +33.37);     // 显示电流
            //if(dc_mode[0].dis_current)
            dc_mode[0].dis_voltage = dc_mode[0].set_voltage * 0.1; // 显示电压
            break;
        }

        // 电流显示
        dis_tmp = QString("%1 ").arg(dc_mode[0].dis_current);
        ui->label->setText(dis_tmp);
        // 电压显示
        dis_tmp = QString("%1 ").arg(dc_mode[0].dis_voltage);
        ui->label_10->setText(dis_tmp);

        direct_set_send_data(&dc_mode[0]);

        for (int i = 0; i < 66; i++)
        {
            global_send_buf[i]=dc_mode[0].after_send_data[i];
            a = (unsigned char)dc_mode[0].after_send_data[i];
            temp = QString("%1 ").arg(a, 0, 16);
            Dis_data.append(temp);
        }
        ui->textEdit->setMarkdown(Dis_data);
    }
    // 碳钢 25%二氧化碳
    else if (input_direct_mode_flag == 0x01)
    {
        dc_mode[1].set_direct_mode_flag = input_direct_mode_flag; // 模式标记
        // dc_mode [1].set_voltage=input_voltage;                       // 输出电压
        dc_mode[1].set_offest_voltage = input_offest_voltage * 10 + 50; // 输出电压偏移值

        // dc_mode [1].set_feeding_speed = input_feeding_speed * 10;   // 送丝速度
        dc_mode[1].set_inductance = input_inductance + 10;
        ;                                                   // 电感偏移值
        dc_mode[1].set_wire_diameter = input_wire_diameter; // 丝径 0.8 0.9 1.0
        // dc_mode [1].set_unknown_data=input_unknown_data;       // dc_mdoe->after_send_data[55]，dc_mdoe->after_send_data[56]
        dc_mode[1].set_2T_4T = input_2T_4T;                                    // 2t，4t模式切换
        dc_mode[1].set_after_action_time = input_after_action_time * 10 - 1;   // 后吹时间
        dc_mode[1].set_slow_feeding_speed = input_slow_feeding_speed * 10; // 缓慢送丝速度
        dc_mode[1].set_feeding_flag = input_feeding_flag;                      // 送丝标记

        check_count = (int)(input_feeding_speed * 10);
        dc_mode[1].set_feeding_speed=check_count;

        switch (dc_mode[1].set_wire_diameter)
        {
        case 0x00:  //0.8丝径
            if(check_count>max_speed_08){
                dc_mode[1].set_feeding_speed = max_speed_08;                            // 送丝速度
            }
            dc_mode[1].set_voltage = 0.53*check_count+89.57 + input_offest_voltage * 10 + 50; // 数据采集回来是微调-5模式下采集，这里加5恢复
            if(dc_mode[1].set_voltage>270)  dc_mode[1].set_voltage=270;

            dc_mode[1].set_unknown_data = 0.55*check_count-1.17;
            if(dc_mode[1].set_unknown_data >70) dc_mode[1].set_unknown_data=70;

            dc_mode[1].dis_current = int(1.38*check_count +28.07);     // 显示电流
            //if(dc_mode[0].dis_current>270)
            dc_mode[1].dis_voltage = dc_mode[1].set_voltage * 0.1; // 显示电压
            break;

        case 0x01:
            if(check_count>max_speed_09){
                dc_mode[1].set_feeding_speed = max_speed_09;                            // 送丝速度
            }
            dc_mode[1].set_voltage = 0.91*check_count+59.96 + input_offest_voltage * 10 + 50; // 数据采集回来是微调-5模式下采集，这里加5恢复
            if(dc_mode[1].set_voltage>270)  dc_mode[1].set_voltage=270;

            dc_mode[1].set_unknown_data = 0.57*check_count-3.78;
            if(dc_mode[1].set_unknown_data >70) dc_mode[1].set_unknown_data=70;

            dc_mode[1].dis_current = int(1.64*check_count +32.98);     // 显示电流
            //if(dc_mode[0].dis_current)
            dc_mode[1].dis_voltage = dc_mode[1].set_voltage * 0.1; // 显示电压
            break;

        case 0x02:
            if(check_count>max_speed_10){
                dc_mode[1].set_feeding_speed = max_speed_10;                            // 送丝速度
            }
            dc_mode[1].set_voltage = 0.92*check_count+82.21 + input_offest_voltage * 10 + 50; // 数据采集回来是微调-5模式下采集，这里加5恢复
            if(dc_mode[1].set_voltage>270)  dc_mode[1].set_voltage=270;

            dc_mode[1].set_unknown_data = 0.58*check_count-3.55;
            if(dc_mode[1].set_unknown_data >70) dc_mode[1].set_unknown_data=70;

            dc_mode[1].dis_current = int(1.86*check_count +33.37);     // 显示电流
            //if(dc_mode[0].dis_current)
            dc_mode[1].dis_voltage = dc_mode[1].set_voltage * 0.1; // 显示电压
            break;
        }


        // 电流显示
        dis_tmp = QString("%1 ").arg(dc_mode[1].dis_current);
        ui->label->setText(dis_tmp);
        // 电压显示
        dis_tmp = QString("%1 ").arg(dc_mode[1].dis_voltage);
        ui->label_10->setText(dis_tmp);

        direct_set_send_data(&dc_mode[1]);

        for (int i = 0; i < 66; i++)
        {   global_send_buf[i]=dc_mode[1].after_send_data[i];
            a = (unsigned char)(dc_mode[1].after_send_data[i]);
            temp = QString("%1 ").arg(a, 0, 16);
            Dis_data.append(temp);
        }
        ui->textEdit->setMarkdown(Dis_data);
    }
    // 恒压 手动
    else if (input_direct_mode_flag == 0x02)
    {
        dc_mode[2].set_direct_mode_flag = input_direct_mode_flag; // 模式标记
        // dc_mode [2].set_voltage=input_voltage;                       // 输出电压
        // dc_mode [2].set_offest_voltage = input_offest_voltage * 10 + 49; // 输出电压偏移值

        // dc_mode [2].set_feeding_speed = input_feeding_speed * 10;   // 送丝速度
        dc_mode[2].set_inductance = input_inductance + 10;  // 电感偏移值
        dc_mode[2].set_wire_diameter = input_wire_diameter; // 丝径 0.8 0.9 1.0
        // dc_mode [2].set_unknown_data=input_unknown_data;       // dc_mdoe->after_send_data[55]，dc_mdoe->after_send_data[56]
        dc_mode[2].set_2T_4T = input_2T_4T;                                    // 2t，4t模式切换
        dc_mode[2].set_after_action_time = input_after_action_time * 10 - 1;   // 后吹时间
        dc_mode[2].set_slow_feeding_speed = input_slow_feeding_speed * 10; // 缓慢送丝速度
        dc_mode[2].set_feeding_flag = input_feeding_flag;                      // 送丝标记
        check_count = (int)(input_feeding_speed * 10);
        dc_mode[2].set_feeding_speed=check_count;

        if (input_voltage > 27.0)
            input_voltage = 27;
        if (input_voltage < 10.0)
            input_voltage = 10;
        dc_mode[2].set_voltage = input_voltage * 10;

        switch (dc_mode[2].set_wire_diameter)
        {
        case 0x00:  //0.8丝径
            if(check_count>max_speed_08){
                dc_mode[2].set_feeding_speed = max_speed_08;                            // 送丝速度
            }
            dc_mode[2].dis_current = int(1.38*check_count +28.07);     // 显示电流
            //if(dc_mode[0].dis_current>270)
            dc_mode[2].dis_voltage = dc_mode[2].set_voltage * 0.1; // 显示电压
            break;

        case 0x01:
            if(check_count>max_speed_09){
                dc_mode[2].set_feeding_speed = max_speed_09;                            // 送丝速度
            }
            dc_mode[2].dis_current = int(1.64*check_count +32.98);     // 显示电流
            //if(dc_mode[0].dis_current)
            dc_mode[2].dis_voltage = dc_mode[2].set_voltage * 0.1; // 显示电压
            break;

        case 0x02:
            if(check_count>max_speed_10){
                dc_mode[2].set_feeding_speed = max_speed_10;                            // 送丝速度
            }
            dc_mode[2].dis_current = int(1.86*check_count +33.37);     // 显示电流
            //if(dc_mode[0].dis_current)
            dc_mode[2].dis_voltage = dc_mode[2].set_voltage * 0.1; // 显示电压
            break;
        }

        // 电流显示
        dis_tmp = QString("%1 ").arg(dc_mode[2].dis_current);
        ui->label->setText(dis_tmp);
        // 电压显示
        dis_tmp = QString("%1 ").arg(dc_mode[2].dis_voltage);
        ui->label_10->setText(dis_tmp);

        direct_set_send_data(&dc_mode[2]);

        for (int i = 0; i < 66; i++)
        {
            global_send_buf[i]=dc_mode[2].after_send_data[i];
            a = (unsigned char)(dc_mode[2].after_send_data[i]);
            temp = QString("%1 ").arg(a, 0, 16);
            Dis_data.append(temp);
        }
        ui->textEdit->setMarkdown(Dis_data);
    }
    // 无气药芯
    else if (input_direct_mode_flag == 0x03)
    {
        dc_mode[3].set_direct_mode_flag = input_direct_mode_flag; // 模式标记
        // dc_mode [3].set_voltage=input_voltage;                       // 输出电压
        dc_mode[3].set_offest_voltage = input_offest_voltage * 10 + 50; // 输出电压偏移值

        // dc_mode [3].set_feeding_speed = input_feeding_speed * 10;   // 送丝速度
        dc_mode[3].set_inductance = input_inductance + 10;
        ;                                                   // 电感偏移值
        dc_mode[3].set_wire_diameter = input_wire_diameter; // 丝径 0.8 0.9 1.0
        // dc_mode [3].set_unknown_data=input_unknown_data;       // dc_mdoe->after_send_data[55]，dc_mdoe->after_send_data[56]
        dc_mode[3].set_2T_4T = input_2T_4T;                                    // 2t，4t模式切换
        dc_mode[3].set_after_action_time = input_after_action_time * 10 - 1;   // 后吹时间
        dc_mode[3].set_slow_feeding_speed = input_slow_feeding_speed * 10; // 缓慢送丝速度
        dc_mode[3].set_feeding_flag = input_feeding_flag;                      // 送丝标记

        check_count = (int)(input_feeding_speed * 10);
        dc_mode[3].set_feeding_speed=check_count;

        switch (dc_mode[3].set_wire_diameter)
        {
        case 0x00:  //0.8丝径
            if(check_count>max_speed_08){
                dc_mode[3].set_feeding_speed = max_speed_08;                            // 送丝速度
            }
            dc_mode[3].set_voltage = 0.9*check_count+65.67 + input_offest_voltage * 10 + 50; // 数据采集回来是微调-5模式下采集，这里加5恢复
            if(dc_mode[3].set_voltage>270)  dc_mode[1].set_voltage=270;

            dc_mode[3].set_unknown_data = 0.55*check_count-1.17;
            if(dc_mode[3].set_unknown_data >70) dc_mode[1].set_unknown_data=70;

            dc_mode[3].dis_current = int(1.38*check_count +28.07);     // 显示电流
            //if(dc_mode[0].dis_current>270)
            dc_mode[3].dis_voltage = dc_mode[1].set_voltage * 0.1; // 显示电压
            break;

        case 0x01:
            if(check_count>max_speed_09){
                dc_mode[3].set_feeding_speed = max_speed_09;                            // 送丝速度
            }
            dc_mode[3].set_voltage = 1.13*check_count+69.85 + input_offest_voltage * 10 + 50; // 数据采集回来是微调-5模式下采集，这里加5恢复
            if(dc_mode[3].set_voltage>270)  dc_mode[1].set_voltage=270;

            dc_mode[3].set_unknown_data = 0.57*check_count-3.78;
            if(dc_mode[3].set_unknown_data >70) dc_mode[1].set_unknown_data=70;

            dc_mode[3].dis_current = int(1.64*check_count +32.98);     // 显示电流
            //if(dc_mode[0].dis_current)
            dc_mode[3].dis_voltage = dc_mode[3].set_voltage * 0.1; // 显示电压
            break;

        case 0x02:
            if(check_count>max_speed_10){
                dc_mode[3].set_feeding_speed = max_speed_10;                            // 送丝速度
            }
            dc_mode[3].set_voltage = 1.14*check_count+79.29 + input_offest_voltage * 10 + 50; // 数据采集回来是微调-5模式下采集，这里加5恢复
            if(dc_mode[3].set_voltage>270)  dc_mode[3].set_voltage=270;

            dc_mode[3].set_unknown_data = 0.58*check_count-3.55;
            if(dc_mode[3].set_unknown_data >70) dc_mode[3].set_unknown_data=70;

            dc_mode[3].dis_current = int(1.86*check_count +33.37);     // 显示电流
            //if(dc_mode[0].dis_current)
            dc_mode[3].dis_voltage = dc_mode[3].set_voltage * 0.1; // 显示电压
            break;
        }


        // 电流显示
        dis_tmp = QString("%1 ").arg(dc_mode[3].dis_current);
        ui->label->setText(dis_tmp);
        // 电压显示
        dis_tmp = QString("%1 ").arg(dc_mode[3].dis_voltage);
        ui->label_10->setText(dis_tmp);

        direct_set_send_data(&dc_mode[3]);

        for (int i = 0; i < 66; i++)
        {   global_send_buf[i]=dc_mode[3].after_send_data[i];
            a = (unsigned char)(dc_mode[3].after_send_data[i]);
            temp = QString("%1 ").arg(a, 0, 16);
            Dis_data.append(temp);
        }
        ui->textEdit->setMarkdown(Dis_data);
    }
    // 拉丝枪
    else if (input_direct_mode_flag == 0x04)
    {
        dc_mode[4].set_direct_mode_flag = input_direct_mode_flag; // 模式标记
        // dc_mode [4].set_voltage=input_voltage;                       // 输出电压
        // dc_mode [4].set_offest_voltage = input_offest_voltage * 10 + 49; // 输出电压偏移值

        // dc_mode [4].set_feeding_speed = input_feeding_speed * 10;   // 送丝速度
        dc_mode[4].set_inductance = input_inductance + 10;  // 电感偏移值
        dc_mode[4].set_wire_diameter = input_wire_diameter; // 丝径 0.8 0.9 1.0
        // dc_mode [4].set_unknown_data=input_unknown_data;       // dc_mdoe->after_send_data[55]，dc_mdoe->after_send_data[56]
        dc_mode[4].set_2T_4T = input_2T_4T;                                    // 2t，4t模式切换
        dc_mode[4].set_after_action_time = input_after_action_time * 10 - 1;   // 后吹时间
        dc_mode[4].set_slow_feeding_speed = input_slow_feeding_speed * 10; // 缓慢送丝速度
        dc_mode[4].set_feeding_flag = input_feeding_flag;                      // 送丝标记
        check_count = (int)(input_feeding_speed * 10);
        dc_mode[4].set_feeding_speed=check_count;
        if (input_voltage > 27.0)
            input_voltage = 27;
        if (input_voltage < 10.0)
            input_voltage = 10;
        dc_mode[4].set_voltage = input_voltage * 10;

        switch (dc_mode[4].set_wire_diameter)
        {
        case 0x00:
            dc_mode[4].set_feeding_speed = data_08_mode2[check_count][0]; // 送丝速度
            // dc_mode [4].set_voltage=data_08_mode2[check_count][1]+input_offest_voltage*10+50;   //数据采集回来是微调-5模式下采集，这里加5恢复
            dc_mode[4].set_unknown_data = data_08_mode2[check_count][2];
            dc_mode[4].dis_current = data_08_mode2[check_count][3]; // 显示电流
            dc_mode[4].dis_voltage = dc_mode[4].set_voltage * 0.1;  // 显示电压
            break;

        case 0x01:
            dc_mode[4].set_feeding_speed = data_09_mode2[check_count][0]; // 送丝速度
            // dc_mode [4].set_voltage=data_09_mode2[check_count][1]+input_offest_voltage*10 +50;
            dc_mode[4].set_unknown_data = data_09_mode2[check_count][2];
            dc_mode[4].dis_current = data_09_mode2[check_count][3]; // 显示电流
            dc_mode[4].dis_voltage = dc_mode[4].set_voltage * 0.1;  // 显示电压
            break;

        case 0x02:
            dc_mode[4].set_feeding_speed = data_10_mode2[check_count][0]; // 送丝速度
            // dc_mode [4].set_voltage=data_10_mode2[check_count][1]+input_offest_voltage*10 +50;
            dc_mode[4].set_unknown_data = data_10_mode2[check_count][2];
            dc_mode[4].dis_current = data_10_mode2[check_count][3]; // 显示电流
            dc_mode[4].dis_voltage = dc_mode[4].set_voltage * 0.1;  // 显示电压
            break;
        }
        // 电流显示
        dis_tmp = QString("%1 ").arg(dc_mode[4].dis_current);
        ui->label->setText(dis_tmp);
        // 电压显示
        dis_tmp = QString("%1 ").arg(dc_mode[4].dis_voltage);
        ui->label_10->setText(dis_tmp);

        direct_set_send_data(&dc_mode[4]);

        for (int i = 0; i < 66; i++)
        {
            global_send_buf[i]=dc_mode[4].after_send_data[i];
            a = (unsigned char)(dc_mode[4].after_send_data[i]);
            temp = QString("%1 ").arg(a, 0, 16);
            Dis_data.append(temp);
        }
        ui->textEdit->setMarkdown(Dis_data);
    }
}

void Dialog::on_doubleSpinBox_valueChanged(double arg1)
{
    // 一元化
    if (input_direct_mode_flag == 0x00)
    {
        input_offest_voltage = arg1;
    }
    // 一元化
    else if (input_direct_mode_flag == 0x01)
    {
        input_offest_voltage = arg1;
    }
    // 手动模式输入电压设置
    else if (input_direct_mode_flag == 0x02)
    {
        input_voltage = arg1;
    }
    // 一元化
    else if (input_direct_mode_flag == 0x03)
    {
        input_offest_voltage = arg1;
    }
    // 手动模式输入电压设置
    else if (input_direct_mode_flag == 0x04)
    {
        input_voltage = arg1;
    }
    updata_display();
}

void Dialog::on_doubleSpinBox_2_valueChanged(double arg1)
{
    input_after_action_time = arg1;
    updata_display();
}

void Dialog::on_doubleSpinBox_3_valueChanged(double arg1)
{
    input_feeding_speed = arg1;
    updata_display();
}

void Dialog::on_doubleSpinBox_4_valueChanged(double arg1)
{
    input_slow_feeding_speed = arg1;
    updata_display();
}

void Dialog::on_spinBox_valueChanged(int arg1)
{
    input_inductance = arg1;
    updata_display();
}

void Dialog::on_comboBox_textActivated(const QString &arg1)
{
    QString dis = arg1;
    if (!dis.compare(("0.8")))
    {
        input_wire_diameter = 0X00;
        // ui->doubleSpinBox_18->setMaximum(17.5);
    }
    else if (!dis.compare(("0.9")))
    {
        input_wire_diameter = 0X01;
        // ui->doubleSpinBox_18->setMaximum(14.5);
    }
    else if (!dis.compare(("1.0")))
    {
        input_wire_diameter = 0X02;
        // ui->doubleSpinBox_18->setMaximum(12.8);
    }
    updata_display();
}

void Dialog::on_comboBox_2_textActivated(const QString &arg1)
{
    QString dis = arg1;
    if (!dis.compare(("2T")))
    {
        input_2T_4T = 0X02;
        // ui->stackedWidget->setCurrentWidget(ui->page_1);
    }
    else if (!dis.compare(("4T")))
    {
        input_2T_4T = 0X03;
        // ui->stackedWidget->setCurrentWidget(ui->page_1);
    }
    updata_display();
}

void Dialog::on_comboBox_3_textActivated(const QString &arg1)
{
    QString dis = arg1;
    if (!dis.compare(("碳钢100%二氧化碳")))
    {
        input_direct_mode_flag = 0x00;
    }
    else if (!dis.compare(("碳钢25%二氧化碳")))
    {
        input_direct_mode_flag = 0x01;
    }
    else if (!dis.compare(("恒压")))
    {
        // ui->stackedWidget->setCurrentWidget(ui->page_3);
        input_direct_mode_flag = 0x02;
    }
    else if (!dis.compare(("无气药芯")))
    {
        // ui->stackedWidget->setCurrentWidget(ui->page_4);
        input_direct_mode_flag = 0x03;
    }
    else if (!dis.compare("拉丝枪"))
    {
        // ui->stackedWidget->setCurrentWidget(ui->page_5);
        input_direct_mode_flag = 0x04;
    }
    updata_display();
}



void Dialog::on_pushButton_pressed()
{
    input_feeding_flag=1;
    updata_display();
}


void Dialog::on_pushButton_released()
{
     input_feeding_flag=0;
     updata_display();
}

