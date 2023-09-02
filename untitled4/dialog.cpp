#include "dialog.h"
#include "ui_dialog.h"

#include "function.h"
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

Dialog::Dialog(QWidget *parent) : QDialog(parent),
                                  ui(new Ui::Dialog)
{
    ui->setupUi(this);

    connect(ui->comboBox, &QComboBox::textActivated, this, &Dialog::on_comboBox_textActivated);
    connect(ui->comboBox_2, &QComboBox::textActivated, this, &Dialog::on_comboBox_2_textActivated);
    connect(ui->comboBox_3, &QComboBox::textActivated, this, &Dialog::on_comboBox_3_textActivated);

    connect(ui->doubleSpinBox_2, &QDoubleSpinBox::valueChanged, this, &Dialog::on_doubleSpinBox_2_valueChanged);
    connect(ui->doubleSpinBox_3, &QDoubleSpinBox::valueChanged, this, &Dialog::on_doubleSpinBox_3_valueChanged);

    connect(ui->doubleSpinBox_3, &QDoubleSpinBox::valueChanged, this, &Dialog::on_doubleSpinBox_3_valueChanged);
    connect(ui->doubleSpinBox_4, &QDoubleSpinBox::valueChanged, this, &Dialog::on_doubleSpinBox_4_valueChanged);
    connect(ui->spinBox, &QSpinBox::valueChanged, this, &Dialog::on_spinBox_valueChanged);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::updata_display()
{

    QString dis_tmp;

    // 碳钢 100%二氧化碳
    if (input_direct_mode_flag == 0x00)
    {
        dc_mode[0].set_direct_mode_flag = input_direct_mode_flag; // 模式标记
        //dc_mode[0].set_voltage=input_voltage;                       // 输出电压
        dc_mode[0].set_offest_voltage = input_offest_voltage * 10; // 输出电压偏移值
        dc_mode[0].set_feeding_speed = input_feeding_speed * 10;   // 送丝速度
        dc_mode[0].set_inductance = input_inductance;              // 电感偏移值
        dc_mode[0].set_wire_diameter = input_wire_diameter;        // 丝径 0.8 0.9 1.0
        // dc_mode[0].set_unknown_data=input_unknown_data;       // dc_mdoe->after_send_data[55]，dc_mdoe->after_send_data[56]
        dc_mode[0].set_2T_4T = input_2T_4T;                              // 2t，4t模式切换
        dc_mode[0].set_after_action_time = input_after_action_time * 10 -1; // 后吹时间
        dc_mode[0].set_slow_feeding_speed = input_slow_feeding_speed *10 +49;    // 缓慢送丝速度
        dc_mode[0].set_feeding_flag = input_feeding_flag;                // 送丝标记
        switch (dc_mode[0].set_wire_diameter){
            case 0x00:
                //dc_mode[0].set_voltage=input_voltage;
             // dc_mode[0].set_unknown_data=input_unknown_data;
            break;

            case 0x01:
               //dc_mode[0].set_voltage=input_voltage;
             // dc_mode[0].set_unknown_data=input_unknown_data;
            break;

            case 0x02:
                //dc_mode[0].set_voltage=input_voltage;
             // dc_mode[0].set_unknown_data=input_unknown_data;
            break;
        }

    }
    // 碳钢 25%二氧化碳
    else if (input_direct_mode_flag == 0x01)
    {
    }
    // 恒压
    else if (input_direct_mode_flag == 0x02)
    {
    }
    // 无气药芯
    else if (input_direct_mode_flag == 0x03)
    {
    }
    // 拉丝枪
    else if (input_direct_mode_flag == 0x04)
    {
    }

    //    int temp=(int)(speed*10-10);
    //    switch(d_flag){
    //      case 0x61:   //0.8
    //        dis_tmp=QString("%1 ").arg(data_08[temp][3]);
    //        break;
    //    case 0x62:    //0.9
    //        dis_tmp=QString("%1 ").arg(data_09[temp][3]);
    //        break;
    //    case 0x63:    //1.0
    //        dis_tmp=QString("%1 ").arg(data_10[temp][3]);
    //        break;
    //    }
    // 电流显示
    //    dis_tmp=QString("%1 ").arg(final_set_v);
    ui->label->setText(dis_tmp);
    // 电压显示
    //   dis_tmp=QString("%1 ").arg(final_set_v);
    ui->label_10->setText(dis_tmp);
}

void Dialog::on_doubleSpinBox_valueChanged(double arg1)
{
    input_voltage = arg1;
}

void Dialog::on_doubleSpinBox_2_valueChanged(double arg1)
{
    input_after_action_time = arg1;
}

void Dialog::on_doubleSpinBox_3_valueChanged(double arg1)
{
    input_feeding_speed = arg1;
}

void Dialog::on_doubleSpinBox_4_valueChanged(double arg1)
{
    input_slow_feeding_speed = arg1;
}

void Dialog::on_spinBox_valueChanged(int arg1)
{
    input_inductance = arg1;
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
}

void Dialog::on_comboBox_3_textActivated(const QString &arg1)
{
    QString dis = arg1;
    // QDebug("%s",dis);
    // ui->tabWidget->setCurrentIndex(0);
    if (!dis.compare(("碳钢100%二氧化碳")))
    {
        // ui->stackedWidget->setCurrentWidget(ui->page_1);
        input_direct_mode_flag = 0x00;
    }
    else if (!dis.compare(("碳钢25%二氧化碳")))
    {
        // ui->stackedWidget->setCurrentWidget(ui->page_2);
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
}
