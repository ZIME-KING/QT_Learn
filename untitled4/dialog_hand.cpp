#include "dialog_hand.h"
#include "ui_dialog_hand.h"
extern unsigned char global_send_buf[66];



int input_data0;
int input_data1;
int input_data2;
int input_data3;



unsigned char define_code_hand[]={
    0xFF  ,0x61  ,0x6B  ,0x61  ,0x61  ,0x61  ,0x67  ,0x61  ,0x61  ,0x66  ,0x68  ,0x66  ,
    0x69  ,0x64  ,0x64  ,0x61  ,0x61  ,0x61  ,0x6B  ,0x61  ,0x64  ,0x61  ,0x63  ,0x61  ,
    0x62  ,0x61  ,0x62  ,0x62  ,0x64  ,0x61  ,0x6B  ,0x61  ,0x63  ,0x61  ,0x66  ,0x92  ,
    0x64  ,0x68  ,0x68  ,0x61  ,0x61  ,0x73  ,0x6D  ,0x61  ,0x70  ,0x63  ,0x69  ,0x62  ,
    0x6F  ,0x62  ,0x65  ,0x62  ,0x6A  ,0x61  ,0x62  ,0x63  ,0x64  ,0x63  ,0x70  ,0x63  ,
    0x70  ,0x63  ,0x70  ,0x6F  ,0x62  ,0xFE
};
unsigned char set_data_hand[66];

Dialog_hand::Dialog_hand(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_hand)
{
    ui->setupUi(this);

    connect(ui->spinBox_2, &QSpinBox::valueChanged, this, &Dialog_hand::on_spinBox_2_valueChanged);
    connect(ui->spinBox_3, &QSpinBox::valueChanged, this, &Dialog_hand::on_spinBox_3_valueChanged);
    connect(ui->spinBox_4, &QSpinBox::valueChanged, this, &Dialog_hand::on_spinBox_4_valueChanged);
    connect(ui->spinBox_5, &QSpinBox::valueChanged, this, &Dialog_hand::on_spinBox_5_valueChanged);
}

Dialog_hand::~Dialog_hand()
{
    delete ui;
}

void Dialog_hand:: updata(){

   if(input_data0>200) input_data0=200;
   memcpy(set_data_hand, define_code_hand, sizeof(define_code_hand));

   set_data_hand[1] = (unsigned char)(input_data0) / 16 + 97; // 高位0x61，0x61为0
   set_data_hand[2]= (unsigned char)(input_data0) % 16 + 97; //

   set_data_hand[3]= (unsigned int)(input_data1) / 16 + 97; // 10.0->100,10.1->101
   set_data_hand[4]= (unsigned int)(input_data1) % 16 + 97;

   set_data_hand[5]= (unsigned int)(input_data2) / 16 + 97;
   set_data_hand[6]= (unsigned int)(input_data2) % 16 + 97;

   int check_data;
   check_data =  (set_data_hand[1] - 97) * 16 + set_data_hand[2] - 97;
   check_data += (set_data_hand[3] - 97) * 16 + set_data_hand[4] - 97;
   check_data += (set_data_hand[5] - 97) * 16 + set_data_hand[6] - 97;
   check_data += input_data3;

   //check_data += (set_data[16] - 97);
   //QString dis_tmp;
   qDebug("check_data:%d",check_data);
   set_data_hand[63] = ((unsigned char)(check_data + 209)) / 16 + 97;
   set_data_hand[64] = ((unsigned char)(check_data + 209)) % 16 + 97;
   set_data_hand[65] = 0xFE;


   QString dis_tmp;
   QString Dis_data;
   QString temp;
   int a;
   dis_tmp = QString("%1 ").arg(input_data0);
   ui->label_4->setText(dis_tmp);

   for (int i = 0; i < 66; i++)
   {
       a = (unsigned char)(set_data_hand[i]);
       temp = QString("%1 ").arg(a, 0, 16);
       Dis_data.append(temp);
   }
   ui->textEdit->setMarkdown(Dis_data);

}

void Dialog_hand::on_spinBox_2_valueChanged(int arg1)
{
    input_data0=arg1;
    updata();
}

void Dialog_hand::on_spinBox_3_valueChanged(int arg1)
{
    input_data1=arg1;
        updata();
}

void Dialog_hand::on_spinBox_4_valueChanged(int arg1)
{
    input_data2=arg1;
        updata();
}
void Dialog_hand::on_spinBox_5_valueChanged(int arg1)
{
    input_data3=arg1;
        updata();
}






