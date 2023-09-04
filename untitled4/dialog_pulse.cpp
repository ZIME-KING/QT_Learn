#include "dialog_pulse.h"
#include "ui_dialog_pulse.h"

#include "function_pulse.h"
#include "set_code.h"

extern unsigned char global_send_buf[66];


extern int input_direct_mode_flag; // 模式标记
extern float input_voltage;        // 电压
extern float input_offest_voltage; // 电压偏移值
extern float input_feeding_speed;  // 送丝速度
extern int input_inductance;       // 电感偏移值
extern int input_wire_diameter;    // 丝径 0.8 0.9 1.0
//extern int input_unknown_data;       // dc_mdoe->after_send_data[55]，dc_mdoe->after_send_data[56]
extern int input_2T_4T;                // 2t，4t模式切换
extern float input_after_action_time;  // 后吹时间
extern float input_slow_feeding_speed; // 缓慢送丝速度
extern int input_feeding_flag;         // 送丝标记


Dialog_pulse::Dialog_pulse(QWidget *parent) : QDialog(parent),
                                  ui(new Ui::Dialog_pulse)
{
    ui->setupUi(this);

    connect(ui->comboBox, &QComboBox::textActivated, this, &Dialog_pulse::on_comboBox_textActivated);
    connect(ui->comboBox_2, &QComboBox::textActivated, this, &Dialog_pulse::on_comboBox_2_textActivated);
    connect(ui->comboBox_3, &QComboBox::textActivated, this, &Dialog_pulse::on_comboBox_3_textActivated);

    connect(ui->doubleSpinBox_2, &QDoubleSpinBox::valueChanged, this, &Dialog_pulse::on_doubleSpinBox_2_valueChanged);
    connect(ui->doubleSpinBox_3, &QDoubleSpinBox::valueChanged, this, &Dialog_pulse::on_doubleSpinBox_3_valueChanged);

    connect(ui->doubleSpinBox_3, &QDoubleSpinBox::valueChanged, this, &Dialog_pulse::on_doubleSpinBox_3_valueChanged);
 //   connect(ui->doubleSpinBox_4, &QDoubleSpinBox::valueChanged, this, &Dialog_pulse::on_doubleSpinBox_4_valueChanged);
    connect(ui->spinBox, &QSpinBox::valueChanged, this, &Dialog_pulse::on_spinBox_valueChanged);
}

Dialog_pulse::~Dialog_pulse()
{
    delete ui;
}

void Dialog_pulse::updata_display()
{
    QString dis_tmp;
    QString Dis_data;
    QString temp;

    int a;
    int check_count = 0;

    // 0.8
    if (input_wire_diameter == 0x00)
    {
        ui->doubleSpinBox_3->setMaximum(18.0);
    }
    // 0.9
    else if (input_wire_diameter == 0x01)
    {
        ui->doubleSpinBox_3->setMaximum(17.0);
    }
    // 1.0
    else if (input_wire_diameter == 0x02)
    {
        ui->doubleSpinBox_3->setMaximum(14.0);
    }

    // 碳钢 80%氩气
    if (input_direct_mode_flag == 0x05)
    {
        pulse_mode[0].set_direct_mode_flag = input_direct_mode_flag;        //模式标记
        // pulse_mode[0].set_voltage=input_voltage;                         //输出电压
        pulse_mode[0].set_offest_voltage = input_offest_voltage * 10 + 49;  //输出电压偏移值
        // pulse_mode[0].set_feeding_speed = input_feeding_speed * 10;      //送丝速度
        pulse_mode[0].set_inductance = input_inductance + 10;               //电感偏移值
        pulse_mode[0].set_wire_diameter = input_wire_diameter;              //丝径 0.8 0.9 1.0
        // pulse_mode[0].set_unknown_data=input_unknown_data;               //dc_mdoe->after_send_data[55]，dc_mdoe->after_send_data[56]
        pulse_mode[0].set_2T_4T = input_2T_4T;                                    // 2t，4t模式切换
        pulse_mode[0].set_after_action_time = input_after_action_time * 10 - 1;   // 后吹时间
        pulse_mode[0].set_feeding_flag = input_feeding_flag;                      // 送丝标记
        check_count = (int)(input_feeding_speed * 10 - 10);
        switch (pulse_mode[0].set_wire_diameter)
        {
        case 0x00:
            pulse_mode[0].set_feeding_speed = data_08[check_count][0];                            // 送丝速度
            pulse_mode[0].set_voltage = data_08[check_count][1] + input_offest_voltage * 10 + 50; // 数据采集回来是微调-5模式下采集，这里加5恢复
            pulse_mode[0].set_unknown_data = data_08[check_count][2];
            pulse_mode[0].dis_current = data_08[check_count][3];      // 显示电流
            pulse_mode[0].dis_voltage = pulse_mode[0].set_voltage * 0.1; // 显示电压
            break;
        case 0x01:
            pulse_mode[0].set_feeding_speed = data_09[check_count][0]; // 送丝速度
            pulse_mode[0].set_voltage = data_09[check_count][1] + input_offest_voltage * 10 + 50;
            pulse_mode[0].set_unknown_data = data_09[check_count][2];
            pulse_mode[0].dis_current = data_09[check_count][3];      // 显示电流
            pulse_mode[0].dis_voltage = pulse_mode[0].set_voltage * 0.1; // 显示电压
            break;
        case 0x02:
            pulse_mode[0].set_feeding_speed = data_10[check_count][0]; // 送丝速度
            pulse_mode[0].set_voltage = data_10[check_count][1] + input_offest_voltage * 10 + 50;
            pulse_mode[0].set_unknown_data = data_10[check_count][2];
            pulse_mode[0].dis_current = data_10[check_count][3];      // 显示电流
            pulse_mode[0].dis_voltage = pulse_mode[0].set_voltage * 0.1; // 显示电压
            break;
        }
        // 电流显示
        dis_tmp = QString("%1 ").arg(pulse_mode[0].dis_current);
        ui->label->setText(dis_tmp);
        // 电压显示
        dis_tmp = QString("%1 ").arg(pulse_mode[0].dis_voltage);
        ui->label_10->setText(dis_tmp);
        pulse_set_send_data(&pulse_mode[0]);
        for (int i = 0; i < 66; i++)
        {
            a = (unsigned char)pulse_mode[0].after_send_data[i];
            temp = QString("%1 ").arg(a, 0, 16);
            Dis_data.append(temp);
        }
        ui->textEdit->setMarkdown(Dis_data);
    }
    // 不锈钢 80%氩气
    else if (input_direct_mode_flag == 0x06)
    {
        pulse_mode[1].set_direct_mode_flag = input_direct_mode_flag;       // 模式标记
        // pulse_mode [1].set_voltage=input_voltage;                       // 输出电压
        pulse_mode[1].set_offest_voltage = input_offest_voltage * 10 + 49; // 输出电压偏移值
        // pulse_mode [1].set_feeding_speed = input_feeding_speed * 10;    // 送丝速度
        pulse_mode[1].set_inductance = input_inductance + 10;              // 电感偏移值
        pulse_mode[1].set_wire_diameter = input_wire_diameter;             // 丝径 0.8 0.9 1.0
        // pulse_mode [1].set_unknown_data=input_unknown_data;             // dc_mdoe->after_send_data[55]，dc_mdoe->after_send_data[56]
        pulse_mode[1].set_2T_4T = input_2T_4T;                                    // 2t，4t模式切换
        pulse_mode[1].set_after_action_time = input_after_action_time * 10 - 1;   // 后吹时间
        pulse_mode[1].set_feeding_flag = input_feeding_flag;                      // 送丝标记
        check_count = (int)(input_feeding_speed * 10 - 10);
        switch (pulse_mode[1].set_wire_diameter)
        {
        case 0x00:
            pulse_mode[1].set_feeding_speed = data_08_mode1[check_count][0];                            // 送丝速度
            pulse_mode[1].set_voltage = data_08_mode1[check_count][1] + input_offest_voltage * 10 + 50; // 数据采集回来是微调-5模式下采集，这里加5恢复
            pulse_mode[1].set_unknown_data = data_08_mode1[check_count][2];
            pulse_mode[1].dis_current = data_08_mode1[check_count][3]; // 显示电流
            pulse_mode[1].dis_voltage = pulse_mode[1].set_voltage * 0.1;  // 显示电压
            break;

        case 0x01:
            pulse_mode[1].set_feeding_speed = data_09_mode1[check_count][0]; // 送丝速度
            pulse_mode[1].set_voltage = data_09_mode1[check_count][1] + input_offest_voltage * 10 + 50;
            pulse_mode[1].set_unknown_data = data_09_mode1[check_count][2];
            pulse_mode[1].dis_current = data_09_mode1[check_count][3]; // 显示电流
            pulse_mode[1].dis_voltage = pulse_mode[1].set_voltage * 0.1;  // 显示电压
            break;

        case 0x02:
            pulse_mode[1].set_feeding_speed = data_10_mode1[check_count][0]; // 送丝速度
            pulse_mode[1].set_voltage = data_10_mode1[check_count][1] + input_offest_voltage * 10 + 50;
            pulse_mode[1].set_unknown_data = data_10_mode1[check_count][2];
            pulse_mode[1].dis_current = data_10_mode1[check_count][3]; // 显示电流
            pulse_mode[1].dis_voltage = pulse_mode[1].set_voltage * 0.1;  // 显示电压
            break;
        }
        // 电流显示
        dis_tmp = QString("%1 ").arg(pulse_mode[1].dis_current);
        ui->label->setText(dis_tmp);
        // 电压显示
        dis_tmp = QString("%1 ").arg(pulse_mode[1].dis_voltage);
        ui->label_10->setText(dis_tmp);
        pulse_set_send_data(&pulse_mode[1]);
        for (int i = 0; i < 66; i++)
        {
            a = (unsigned char)(pulse_mode[1].after_send_data[i]);
            temp = QString("%1 ").arg(a, 0, 16);
            Dis_data.append(temp);
        }
        ui->textEdit->setMarkdown(Dis_data);
    }
    // 不锈钢 97.5%氩气
    else if (input_direct_mode_flag == 0x07)
    {
        pulse_mode[2].set_direct_mode_flag = input_direct_mode_flag;       // 模式标记
        // pulse_mode [2].set_voltage=input_voltage;                       // 输出电压
        pulse_mode[2].set_offest_voltage = input_offest_voltage * 10 + 49; // 输出电压偏移值
        // pulse_mode [2].set_feeding_speed = input_feeding_speed * 10;    // 送丝速度
        pulse_mode[2].set_inductance = input_inductance + 10;              // 电感偏移值
        pulse_mode[2].set_wire_diameter = input_wire_diameter;             // 丝径 0.8 0.9 1.0
        // pulse_mode [2].set_unknown_data=input_unknown_data;             // dc_mdoe->after_send_data[55]，dc_mdoe->after_send_data[56]
        pulse_mode[2].set_2T_4T = input_2T_4T;                                    // 2t，4t模式切换
        pulse_mode[2].set_after_action_time = input_after_action_time * 10 - 1;   // 后吹时间
        pulse_mode[2].set_feeding_flag = input_feeding_flag;                      // 送丝标记
        check_count = (int)(input_feeding_speed * 10 - 10);
        switch (pulse_mode[1].set_wire_diameter)
        {
        case 0x00:
            pulse_mode[2].set_feeding_speed = data_08_mode1[check_count][0];                            // 送丝速度
            pulse_mode[2].set_voltage = data_08_mode1[check_count][1] + input_offest_voltage * 10 + 50; // 数据采集回来是微调-5模式下采集，这里加5恢复
            pulse_mode[2].set_unknown_data = data_08_mode1[check_count][2];
            pulse_mode[2].dis_current = data_08_mode1[check_count][3]; // 显示电流
            pulse_mode[2].dis_voltage = pulse_mode[2].set_voltage * 0.1;  // 显示电压
            break;

        case 0x01:
            pulse_mode[2].set_feeding_speed = data_09_mode1[check_count][0]; // 送丝速度
            pulse_mode[2].set_voltage = data_09_mode1[check_count][1] + input_offest_voltage * 10 + 50;
            pulse_mode[2].set_unknown_data = data_09_mode1[check_count][2];
            pulse_mode[2].dis_current = data_09_mode1[check_count][3]; // 显示电流
            pulse_mode[2].dis_voltage = pulse_mode[2].set_voltage * 0.1;  // 显示电压
            break;

        case 0x02:
            pulse_mode[2].set_feeding_speed = data_10_mode1[check_count][0]; // 送丝速度
            pulse_mode[2].set_voltage = data_10_mode1[check_count][1] + input_offest_voltage * 10 + 50;
            pulse_mode[2].set_unknown_data = data_10_mode1[check_count][2];
            pulse_mode[2].dis_current = data_10_mode1[check_count][3]; // 显示电流
            pulse_mode[2].dis_voltage = pulse_mode[2].set_voltage * 0.1;  // 显示电压
            break;
        }
        // 电流显示
        dis_tmp = QString("%1 ").arg(pulse_mode[2].dis_current);
        ui->label->setText(dis_tmp);
        // 电压显示
        dis_tmp = QString("%1 ").arg(pulse_mode[2].dis_voltage);
        ui->label_10->setText(dis_tmp);
        pulse_set_send_data(&pulse_mode[2]);
        for (int i = 0; i < 66; i++)
        {
            a = (unsigned char)(pulse_mode[2].after_send_data[i]);
            temp = QString("%1 ").arg(a, 0, 16);
            Dis_data.append(temp);
        }
        ui->textEdit->setMarkdown(Dis_data);
    }
    //铜硅合金 100%氩气
    else if (input_direct_mode_flag == 0x08)
    {
        pulse_mode[3].set_direct_mode_flag = input_direct_mode_flag;       // 模式标记
        // pulse_mode[3].set_voltage=input_voltage;                       // 输出电压
        pulse_mode[3].set_offest_voltage = input_offest_voltage * 10 + 49; // 输出电压偏移值
        // pulse_mode[3].set_feeding_speed = input_feeding_speed * 10;    // 送丝速度
        pulse_mode[3].set_inductance = input_inductance + 10;              // 电感偏移值
        pulse_mode[3].set_wire_diameter = input_wire_diameter;             // 丝径 0.8 0.9 1.0
        // pulse_mode[3].set_unknown_data=input_unknown_data;             // dc_mdoe->after_send_data[55]，dc_mdoe->after_send_data[56]
        pulse_mode[3].set_2T_4T = input_2T_4T;                                    // 2t，4t模式切换
        pulse_mode[3].set_after_action_time = input_after_action_time * 10 - 1;   // 后吹时间
        pulse_mode[3].set_feeding_flag = input_feeding_flag;                      // 送丝标记
        check_count = (int)(input_feeding_speed * 10 - 10);
        switch (pulse_mode[3].set_wire_diameter)
        {
        case 0x00:
            pulse_mode[3].set_feeding_speed = data_08_mode1[check_count][0];                            // 送丝速度
            pulse_mode[3].set_voltage = data_08_mode1[check_count][1] + input_offest_voltage * 10 + 50; // 数据采集回来是微调-5模式下采集，这里加5恢复
            pulse_mode[3].set_unknown_data = data_08_mode1[check_count][2];
            pulse_mode[3].dis_current = data_08_mode1[check_count][3]; // 显示电流
            pulse_mode[3].dis_voltage = pulse_mode[3].set_voltage * 0.1;  // 显示电压
            break;

        case 0x01:
            pulse_mode[3].set_feeding_speed = data_09_mode1[check_count][0]; // 送丝速度
            pulse_mode[3].set_voltage = data_09_mode1[check_count][1] + input_offest_voltage * 10 + 50;
            pulse_mode[3].set_unknown_data = data_09_mode1[check_count][2];
            pulse_mode[3].dis_current = data_09_mode1[check_count][3]; // 显示电流
            pulse_mode[3].dis_voltage = pulse_mode[3].set_voltage * 0.1;  // 显示电压
            break;

        case 0x02:
            pulse_mode[3].set_feeding_speed = data_10_mode1[check_count][0]; // 送丝速度
            pulse_mode[3].set_voltage = data_10_mode1[check_count][1] + input_offest_voltage * 10 + 50;
            pulse_mode[3].set_unknown_data = data_10_mode1[check_count][2];
            pulse_mode[3].dis_current = data_10_mode1[check_count][3]; // 显示电流
            pulse_mode[3].dis_voltage = pulse_mode[3].set_voltage * 0.1;  // 显示电压
            break;
        }

        // 电流显示
        dis_tmp = QString("%1 ").arg(pulse_mode[3].dis_current);
        ui->label->setText(dis_tmp);
        // 电压显示
        dis_tmp = QString("%1 ").arg(pulse_mode[3].dis_voltage);
        ui->label_10->setText(dis_tmp);
        pulse_set_send_data(&pulse_mode[3]);
        for (int i = 0; i < 66; i++)
        {
            a = (unsigned char)(pulse_mode[3].after_send_data[i]);
            temp = QString("%1 ").arg(a, 0, 16);
            Dis_data.append(temp);
        }
        ui->textEdit->setMarkdown(Dis_data);
    }
    //铝硅合金 100%氩气
    else if (input_direct_mode_flag == 0x09)
    {
        pulse_mode[4].set_direct_mode_flag = input_direct_mode_flag;       // 模式标记
        // pulse_mode[3].set_voltage=input_voltage;                       // 输出电压
        pulse_mode[4].set_offest_voltage = input_offest_voltage * 10 + 49; // 输出电压偏移值
        // pulse_mode[3].set_feeding_speed = input_feeding_speed * 10;    // 送丝速度
        pulse_mode[4].set_inductance = input_inductance + 10;              // 电感偏移值
        pulse_mode[4].set_wire_diameter = input_wire_diameter;             // 丝径 0.8 0.9 1.0
        // pulse_mode[3].set_unknown_data=input_unknown_data;             // dc_mdoe->after_send_data[55]，dc_mdoe->after_send_data[56]
        pulse_mode[4].set_2T_4T = input_2T_4T;                                    // 2t，4t模式切换
        pulse_mode[4].set_after_action_time = input_after_action_time * 10 - 1;   // 后吹时间
        pulse_mode[4].set_feeding_flag = input_feeding_flag;                      // 送丝标记
        check_count = (int)(input_feeding_speed * 10 - 10);
        switch (pulse_mode[4].set_wire_diameter)
        {
        case 0x00:
            pulse_mode[3].set_feeding_speed = data_08_mode1[check_count][0];                            // 送丝速度
            pulse_mode[3].set_voltage = data_08_mode1[check_count][1] + input_offest_voltage * 10 + 50; // 数据采集回来是微调-5模式下采集，这里加5恢复
            pulse_mode[4].set_unknown_data = data_08_mode1[check_count][2];
            pulse_mode[4].dis_current = data_08_mode1[check_count][3]; // 显示电流
            pulse_mode[4].dis_voltage = pulse_mode[4].set_voltage * 0.1;  // 显示电压
            break;

        case 0x01:
            pulse_mode[4].set_feeding_speed = data_09_mode1[check_count][0]; // 送丝速度
            pulse_mode[4].set_voltage = data_09_mode1[check_count][1] + input_offest_voltage * 10 + 50;
            pulse_mode[4].set_unknown_data = data_09_mode1[check_count][2];
            pulse_mode[4].dis_current = data_09_mode1[check_count][3]; // 显示电流
            pulse_mode[4].dis_voltage = pulse_mode[4].set_voltage * 0.1;  // 显示电压
            break;

        case 0x02:
            pulse_mode[4].set_feeding_speed = data_10_mode1[check_count][0]; // 送丝速度
            pulse_mode[4].set_voltage = data_10_mode1[check_count][1] + input_offest_voltage * 10 + 50;
            pulse_mode[4].set_unknown_data = data_10_mode1[check_count][2];
            pulse_mode[4].dis_current = data_10_mode1[check_count][3]; // 显示电流
            pulse_mode[4].dis_voltage = pulse_mode[4].set_voltage * 0.1;  // 显示电压
            break;
        }

        // 电流显示
        dis_tmp = QString("%1 ").arg(pulse_mode[4].dis_current);
        ui->label->setText(dis_tmp);
        // 电压显示
        dis_tmp = QString("%1 ").arg(pulse_mode[4].dis_voltage);
        ui->label_10->setText(dis_tmp);
        pulse_set_send_data(&pulse_mode[4]);
        for (int i = 0; i < 66; i++)
        {
            a = (unsigned char)(pulse_mode[4].after_send_data[i]);
            temp = QString("%1 ").arg(a, 0, 16);
            Dis_data.append(temp);
        }
        ui->textEdit->setMarkdown(Dis_data);
    }
    //铝镁合金
    else if (input_direct_mode_flag == 0x0A){
        pulse_mode[5].set_direct_mode_flag = input_direct_mode_flag;       // 模式标记
        // pulse_mode[5].set_voltage=input_voltage;                       // 输出电压
        pulse_mode[5].set_offest_voltage = input_offest_voltage * 10 + 49; // 输出电压偏移值
        // pulse_mode[5].set_feeding_speed = input_feeding_speed * 10;    // 送丝速度
        pulse_mode[5].set_inductance = input_inductance + 10;              // 电感偏移值
        pulse_mode[5].set_wire_diameter = input_wire_diameter;             // 丝径 0.8 0.9 1.0
        // pulse_mode[3].set_unknown_data=input_unknown_data;             // dc_mdoe->after_send_data[55]，dc_mdoe->after_send_data[56]
        pulse_mode[5].set_2T_4T = input_2T_4T;                                    // 2t，4t模式切换
        pulse_mode[5].set_after_action_time = input_after_action_time * 10 - 1;   // 后吹时间
        pulse_mode[5].set_feeding_flag = input_feeding_flag;                      // 送丝标记
        check_count = (int)(input_feeding_speed * 10 - 10);
        switch (pulse_mode[5].set_wire_diameter)
        {
        case 0x00:
            pulse_mode[5].set_feeding_speed = data_08_mode1[check_count][0];                            // 送丝速度
            pulse_mode[5].set_voltage = data_08_mode1[check_count][1] + input_offest_voltage * 10 + 50; // 数据采集回来是微调-5模式下采集，这里加5恢复
            pulse_mode[5].set_unknown_data = data_08_mode1[check_count][2];
            pulse_mode[5].dis_current = data_08_mode1[check_count][3]; // 显示电流
            pulse_mode[5].dis_voltage = pulse_mode[5].set_voltage * 0.1;  // 显示电压
            break;

        case 0x01:
            pulse_mode[5].set_feeding_speed = data_09_mode1[check_count][0]; // 送丝速度
            pulse_mode[5].set_voltage = data_09_mode1[check_count][1] + input_offest_voltage * 10 + 50;
            pulse_mode[5].set_unknown_data = data_09_mode1[check_count][2];
            pulse_mode[5].dis_current = data_09_mode1[check_count][3]; // 显示电流
            pulse_mode[5].dis_voltage = pulse_mode[5].set_voltage * 0.1;  // 显示电压
            break;

        case 0x02:
            pulse_mode[3].set_feeding_speed = data_10_mode1[check_count][0]; // 送丝速度
            pulse_mode[3].set_voltage = data_10_mode1[check_count][1] + input_offest_voltage * 10 + 50;
            pulse_mode[3].set_unknown_data = data_10_mode1[check_count][2];
            pulse_mode[3].dis_current = data_10_mode1[check_count][3]; // 显示电流
            pulse_mode[3].dis_voltage = pulse_mode[3].set_voltage * 0.1;  // 显示电压
            break;
        }
        // 电流显示
        dis_tmp = QString("%1 ").arg(pulse_mode[5].dis_current);
        ui->label->setText(dis_tmp);
        // 电压显示
        dis_tmp = QString("%1 ").arg(pulse_mode[5].dis_voltage);
        ui->label_10->setText(dis_tmp);
        pulse_set_send_data(&pulse_mode[4]);
        for (int i = 0; i < 66; i++)
        {
            a = (unsigned char)(pulse_mode[5].after_send_data[i]);
            temp = QString("%1 ").arg(a, 0, 16);
            Dis_data.append(temp);
        }
        ui->textEdit->setMarkdown(Dis_data);
    }
}

void Dialog_pulse::on_doubleSpinBox_valueChanged(double arg1)
{
    // 一元化
    input_offest_voltage = arg1;
    updata_display();
}

void Dialog_pulse::on_doubleSpinBox_2_valueChanged(double arg1)
{
    input_after_action_time = arg1;
    updata_display();
}

void Dialog_pulse::on_doubleSpinBox_3_valueChanged(double arg1)
{
    input_feeding_speed = arg1;
    updata_display();
}

//void Dialog_pulse::on_doubleSpinBox_4_valueChanged(double arg1)
//{
//    input_slow_feeding_speed = arg1;
//    updata_display();
//}

void Dialog_pulse::on_spinBox_valueChanged(int arg1)
{
    input_inductance = arg1;
    updata_display();
}

void Dialog_pulse::on_comboBox_textActivated(const QString &arg1)
{
    QString dis = arg1;
    if (!dis.compare(("0.8")))
    {
        input_wire_diameter = 0X00;
    }
    else if (!dis.compare(("0.9")))
    {
        input_wire_diameter = 0X01;
    }
    else if (!dis.compare(("1.0")))
    {
        input_wire_diameter = 0X02;
    }
    updata_display();
}

void Dialog_pulse::on_comboBox_2_textActivated(const QString &arg1)
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

void Dialog_pulse::on_comboBox_3_textActivated(const QString &arg1)
{
    QString dis = arg1;
    // QDebug("%s",dis);
    // ui->tabWidget->setCurrentIndex(0);
    if (!dis.compare(("碳钢 80%氩气")))
    {
        // ui->stackedWidget->setCurrentWidget(ui->page_1);
        input_direct_mode_flag = 0x05;
    }
    else if (!dis.compare(("不锈钢 80%氩气")))
    {
        // ui->stackedWidget->setCurrentWidget(ui->page_2);
        input_direct_mode_flag = 0x06;
    }
    else if (!dis.compare(("不锈钢 97.5%氩气")))
    {
        // ui->stackedWidget->setCurrentWidget(ui->page_3);
        input_direct_mode_flag = 0x07;
    }
    else if (!dis.compare(("铜硅合金 100%氩气")))
    {
        // ui->stackedWidget->setCurrentWidget(ui->page_4);
        input_direct_mode_flag = 0x08;
    }
    else if (!dis.compare("铝硅合金 100%氩气"))
    {
        // ui->stackedWidget->setCurrentWidget(ui->page_5);
        input_direct_mode_flag = 0x09;
    }
    else if (!dis.compare("铝镁合金"))
    {
        // ui->stackedWidget->setCurrentWidget(ui->page_5);
        input_direct_mode_flag = 0x0A;
    }
    updata_display();
}
