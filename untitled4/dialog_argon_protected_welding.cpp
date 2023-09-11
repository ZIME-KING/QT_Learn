#include "dialog_argon_protected_welding.h"
#include "ui_dialog_argon_protected_welding.h"

extern unsigned char global_send_buf[66];


unsigned char define_code_apw[]={
    0xFF ,0x61 ,0x6B ,0x61 ,0x61 ,0x61 ,0x61 ,0x61 ,0x61 ,0x66 ,0x68 ,0x66 ,0x69 ,0x64 ,0x64,
    0x61 ,0x61 ,0x61 ,0x6B ,0x61 ,0x64 ,0x61 ,0x62 ,0x61 ,0x62 ,0x61 ,0x62 ,0x62 ,0x64 ,0x61,
    0x65 ,0x61 ,0x61 ,0x61 ,0x65 ,0x92 ,0x64 ,0x68 ,0x68 ,0x61 ,0x61 ,0x73 ,0x6D ,0x61 ,0x70,
    0x63 ,0x69 ,0x62 ,0x6F ,0x62 ,0x65 ,0x62 ,0x6A ,0x61 ,0x62 ,0x62 ,0x6E ,0x63 ,0x70 ,0x63,
    0x70 ,0x63 ,0x70 ,0x6D ,0x6C ,0xFE
};
unsigned char set_data[66];

Dialog_argon_protected_welding::Dialog_argon_protected_welding(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_argon_protected_welding)
{
    connect(ui->spinBox_2, &QSpinBox::valueChanged, this, &Dialog_argon_protected_welding::on_spinBox_2_valueChanged);
    ui->setupUi(this);
}

Dialog_argon_protected_welding::~Dialog_argon_protected_welding()
{
    delete ui;
}



void Dialog_argon_protected_welding::on_spinBox_2_valueChanged(int arg1)
{
   int set_a=arg1;

   if(set_a>200) set_a=200;

    memcpy(set_data, define_code_apw, sizeof(define_code_apw));

    set_data[1] = (unsigned char)(set_a) / 16 + 97; // 高位0x61，0x61为0
    set_data[2] = (unsigned char)(set_a) % 16 + 97; //

//    set_data[3] = (unsigned char)(set_a) / 16 + 97; // 高位0x61，0x61为0
//    set_data[4] = (unsigned char)(set_a) % 16 + 97; //


    int check_data;
    check_data = (set_data[1] - 97) * 16 + set_data[2] - 97;
    check_data += (set_data[3] - 97) * 16 + set_data[4] - 97;
    check_data += (set_data[5] - 97) * 16 + set_data[6] - 97;
    check_data += (set_data[16] - 97);
    check_data += (set_data[17] - 97) * 16 + set_data[18] - 97;
    check_data += (set_data[20] - 97);
    check_data += (set_data[22] - 97);
    check_data += (set_data[24] - 97);
    check_data += (set_data[27] - 97) * 16 + set_data[28] - 97;
    check_data += (set_data[30] - 97);
    check_data += (set_data[32] - 97);
    check_data += (set_data[34] - 97);
    check_data += (set_data[53] - 97) * 16 + set_data[54] - 97;
    check_data += (set_data[55] - 97) * 16 + set_data[56] - 97;

    //check_data += (set_data[16] - 97);
    //QString dis_tmp;
    qDebug("check_data:%d",check_data);
    set_data[63] = ((unsigned char)(check_data + 121)) / 16 + 97;
    set_data[64] = ((unsigned char)(check_data + 121)) % 16 + 97;




    set_data[65] = 0xFE;

    QString dis_tmp;
    QString Dis_data;
    QString temp;
    int a;
    dis_tmp = QString("%1 ").arg(arg1);
    ui->label_4->setText(dis_tmp);

    for (int i = 0; i < 66; i++)
    {   global_send_buf[i]=set_data[i];
        a = (unsigned char)(set_data[i]);
        temp = QString("%1 ").arg(a, 0, 16);
        Dis_data.append(temp);
    }
    ui->textEdit->setMarkdown(Dis_data);
}

