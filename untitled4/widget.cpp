#include "widget.h"
#include "ui_widget.h"

#include "set_code.h"


#include <QMessageBox>
#include <QTime>
#include <QTimer>
#include <QDebug>


char out_wire_flag=0x61;     //出丝
char T2_T4_flag=0x61;       //t2t4
char d_flag=0x61;           //线径

float final_set_v=10.0;     //输出电压值(计算值加上偏移量，并判断上限值)
int final_speed_v=5;        //输出速度根据设置速度查表可得

float set_v=10.0;       //计算得出的电压值（查表）
float set_a=50;     //计算得出的电流值（查表）
float offest_v=1.0; //电压偏移量
float speed=1.0;    //出丝速度

float low_speed=1.0;     //慢送丝
float after_time=1.0;    //后吹时间
float offset_h=1.0;      //电感量偏移






char direct_mode_flag =0x61;    //模式




Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    ,m_serial(new QSerialPort(this))
{
    ui->setupUi(this);

    tim = new QTimer(this);
    tim->setSingleShot(true);

    tim1 = new QTimer(this);
    tim1->setInterval(500);
 //   tim1->start();

    connect(tim,SIGNAL(timeout()),this,SLOT(onTimeOut()));
    connect(tim1,SIGNAL(timeout()),this,SLOT(onTimeOut_1()));
    //tim->start();


    const auto infos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : infos)
    ui->comboBox->addItem(info.portName());

    connect(m_serial, &QSerialPort::errorOccurred, this, &Widget::handleError);
    connect(m_serial, &QSerialPort::readyRead, this, &Widget::readData);

    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::Buttonfunction);
    connect(ui->pushButton_f, &QPushButton::clicked, this, &Widget::Buttonfunction_f);
    connect(ui->checkBox, &QCheckBox::stateChanged, this, &Widget::on_checkBox_stateChanged);


    connect(ui->checkBox, &QCheckBox::stateChanged, this, &Widget::on_checkBox_stateChanged);
    connect(ui->checkBox, &QCheckBox::stateChanged, this, &Widget::on_checkBox_stateChanged);

    connect(ui->pushButton_5, &QPushButton::pressed, this, &Widget::on_pushButton_5_pressed);
    connect(ui->pushButton_5, &QPushButton::released, this, &Widget::on_pushButton_5_released);

    connect(ui->comboBox_2, &QComboBox::textActivated, this, &Widget::on_comboBox_2_textActivated);
    connect(ui->comboBox_5, &QComboBox::textActivated, this, &Widget::on_comboBox_5_textActivated);
    connect(ui->comboBox_6, &QComboBox::textActivated, this, &Widget::on_comboBox_6_textActivated);

    connect(ui->doubleSpinBox, &QDoubleSpinBox::valueChanged, this, &Widget::on_doubleSpinBox_valueChanged);
    connect(ui->doubleSpinBox_18, &QDoubleSpinBox::valueChanged, this, &Widget::on_doubleSpinBox_18_valueChanged);

    connect(ui->spinBox_3, &QSpinBox::valueChanged, this, &Widget::on_spinBox_3_valueChanged);


    connect(ui->doubleSpinBox_3, &QDoubleSpinBox::valueChanged, this, &Widget::on_doubleSpinBox_3_valueChanged);
    connect(ui->doubleSpinBox_4, &QDoubleSpinBox::valueChanged, this, &Widget::on_doubleSpinBox_4_valueChanged);


}

unsigned char define_cede[]={
    0xFF, 0x61, 0x6B, 0x6C, 0x66, 0x61, 0x6B, 0x61, 0x61, 0x66, 0x68, 0x66, 0x69, 0x64, 0x64,
    0x61, 0x61, 0x61, 0x6B, 0x61, 0x63, 0x61 ,0x64, 0x61, 0x63, 0x61, 0x61, 0x61, 0x61, 0x61,
    0x61, 0x61, 0x61, 0x61, 0x62, 0x92, 0x64, 0x68, 0x68, 0x61, 0x61, 0x73, 0x6D, 0x61, 0x70,
    0x63, 0x69, 0x62, 0x6F, 0x62, 0x65, 0x62, 0x6A, 0x64, 0x62, 0x61, 0x66, 0x63, 0x70, 0x63,
    0x70, 0x63, 0x70, 0x69, 0x6B, 0xFE
};

QByteArray send_data;
void Widget::Buttonfunction_f(){
    send_data.resize(66);

    int b=sizeof(define_cede);
    for(int i=0;i<b;i++){
       send_data[i]= define_cede[i];
    }


    send_data[0]=0xFF;
    send_data[1]=(unsigned char)(set_a)/16+97;                                 //高位0x61，0x61为0
    send_data[2]=(unsigned char)(set_a)%16+97;                                 //

    final_set_v=set_v+offest_v;
    if (final_set_v>27) final_set_v=27;
    send_data[3]=(unsigned int)(final_set_v*10)/16+97;                   //10.0->100,10.1->101
    send_data[4]=(unsigned int)(final_set_v*10)%16+97;

    send_data[5]=(unsigned int)(offset_h+10)/16+97;
    send_data[6]=(unsigned int)(offset_h+10)%16+97;
//    send_data[7]=0xFF;
//    send_data[8]=0xFF;
//    send_data[9]=0xFF;
//    send_data[10]=0xFF;
//    send_data[11]=0xFF;
//    send_data[12]=0xFF;
//    send_data[13]=0xFF;
//    send_data[14]=0xFF;
//    send_data[15]=0xFF;

    send_data[16]=out_wire_flag+97;
    send_data[17]=int(low_speed*10)/16+97;             //慢送丝
    send_data[18]=int(low_speed*10)%16+97;             //慢送丝
//    send_data[19]=0xFF;
    send_data[20]=T2_T4_flag;
//    send_data[21]=0xFF;
//    send_data[22]=0xFF;
//    send_data[23]=0xFF;
    send_data[24]=d_flag;
//    send_data[25]=0xFF;
//    send_data[26]=0xFF;
    send_data[27]=int(after_time*10-1)/16+97;           //后吹时间
    send_data[28]=int(after_time*10-1)%16+97;           //后吹时间
//    send_data[29]=0xFF;
    send_data[30]=direct_mode_flag;                     //模式切换
//    send_data[31]=0xFF;
//    send_data[32]=0xFF;
//    send_data[33]=0xFF;

//    send_data[34]=0x62;                                 //直流参数0x62

//    send_data[35]=0X92;                                 //固定格式
//    send_data[36]=0xFF;
//    send_data[37]=0xFF;
//    send_data[38]=0xFF;
//    send_data[39]=0xFF;
//    send_data[40]=0xFF;
//    send_data[41]=0xFF;
//    send_data[42]=0xFF;
//    send_data[43]=0xFF;
//    send_data[44]=0xFF;
//    send_data[45]=0xFF;
//    send_data[46]=0xFF;
//    send_data[47]=0xFF;
//    send_data[48]=0xFF;
//    send_data[49]=0xFF;
//    send_data[50]=0xFF;
//    send_data[51]=0xFF;
//    send_data[52]=0xFF;
    send_data[53]=char(offest_v*10+50-1)/16+97;    //final_speed_v
    send_data[54]=char(offest_v*10+50-1)%16+97;
    send_data[55]=(final_speed_v)/16+97;
    send_data[56]=(final_speed_v)%16+97;
//    send_data[57]=0xFF;
//    send_data[58]=0xFF;
//    send_data[59]=0xFF;
//    send_data[60]=0xFF;
//    send_data[61]=0xFF;
//    send_data[62]=0xFF;



    int check_data=(send_data[1]-97)*16+send_data[2]-97;

    check_data+=(send_data[3]-97)*16+send_data[4]-97;

    check_data+=(send_data[5]-97)*16+send_data[6]-97;

    check_data+=(send_data[16]-97);

    check_data+=(send_data[17]-97)*16+send_data[18]-97;

    check_data+=(send_data[20]-97);

    check_data+=(send_data[24]-97);

    check_data+=(send_data[27]-97)*16+send_data[28]-97;

    check_data+=(send_data[30]-97);

    check_data+=(send_data[53]-97)*16+send_data[54]-97;

    check_data+=(send_data[55]-97)*16+send_data[56]-97;



    send_data[63]=((unsigned char)(check_data+124))/16+97;
    send_data[64]=((unsigned char)(check_data+124))%16+97;
    send_data[65]=0xFE;




    QString Dis_data;
    QString temp;
    for(int i=0;i<66;i++){
        unsigned int a=(unsigned char)send_data[i];
        temp=QString("%1 ").arg(a,0,16);
        Dis_data.append(temp);
    }
    ui->textEdit_2->setMarkdown(Dis_data);



    //m_serial->write(send_data,send_data.length());
}

void sleep(unsigned int msec){
//currnentTime 返回当前时间 用当前时间加上我们要延时的时间msec得到一个新的时刻
    QTime reachTime = QTime::currentTime().addMSecs(msec);
    //用while循环不断比对当前时间与我们设定的时间
    while(QTime::currentTime()<reachTime){
    //如果当前的系统时间尚未达到我们设定的时刻，就让Qt的应用程序类执行默认的处理，
    //以使程序仍处于响应状态。一旦到达了我们设定的时刻，就跳出该循环，继续执行后面的语句。
        QApplication::processEvents(QEventLoop::AllEvents,100);
    }
}
//————————————————
//版权声明：本文为CSDN博主「kuLong_x」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。
//原文链接：https://blog.csdn.net/kuLong_x/article/details/113591047

Widget::~Widget()
{
    delete ui;
}


void Widget::Buttonfunction(){
    static int flag=1;
//    const  char tx_date[]={static_cast<char>(0xaa),0x00,0x00,0x20,0x00,0x01,0x00,0x06,0x27};
//    char close_date[2]={0x58,0x58};
    if(flag){
        Widget::openSerialPort();
 //       m_serial->write(&tx_date[0],9);
        ui->pushButton->setText("COM打开");
    }else{
 //       m_serial->write(&close_date[0],1);
        sleep(100);
        //ui->label_rx->setText("close");
        Widget::closeSerialPort();
        ui->pushButton->setText("COM关闭");
    }
    flag=!flag;
}

void Widget::openSerialPort()
{
    m_serial->setPortName(ui->comboBox->currentText());
    m_serial->setBaudRate(QSerialPort::Baud9600);
    m_serial->setDataBits(QSerialPort::Data8);
    m_serial->setParity(QSerialPort::NoParity);
    m_serial->setStopBits(QSerialPort::OneStop);
    m_serial->setFlowControl(QSerialPort::NoFlowControl);

    if (m_serial->open(QIODevice::ReadWrite)) {
        ui->label->setText(QString("Connected to %1 : %2, %3, %4, %5, %6")
                           .arg(ui->comboBox->currentText()).arg(QSerialPort::Baud19200).arg(QSerialPort::Data8)
                           .arg(QSerialPort::NoParity).arg(QSerialPort::OneStop).arg(QSerialPort::NoFlowControl));
    } else {
        QMessageBox::critical(this, tr("Error"), m_serial->errorString());
        ui->label->setText("Open error");
    }
         ui->label->adjustSize();
}
void Widget::closeSerialPort()
{
    if (m_serial->isOpen())
        m_serial->close();
      ui->label->setText("Disconnected");
}
void Widget::about()
{
//    QMessageBox::about(this, tr("About Simple Terminal"),
//                       tr("The <b>Simple Terminal</b> example demonstrates how to "
//                          "use the Qt Serial Port module in modern GUI applications "
//                          "using Qt, with a menu bar, toolbars, and a status bar."));
}

//! [6]
void Widget::writeData(const QByteArray &data)
{
    m_serial->write(data);
}
//! [6]

//! [7]

typedef union{
    unsigned int a;
    unsigned char date[4];
}hex2int;

//qDebug("start");
//for(int i = 0;i<data.length();i++)
//qDebug("%2x", *(pdata+i));
//qDebug("end\r\n");
//qDebug("%d", now_rx_len);
//qDebug("start");
//for(int i = 0;i<now_rx_len;i++)
//qDebug("%2x", rx_data[i]);
//qDebug("end\r\n");

void Widget::readData()
{
    static QByteArray data ;//= m_serial->readAll();

    data=m_serial->readAll();
//    data.append(m_serial->readAll());
//    ui->label_2->setText(QString(data));

 //   ui->textBrowser->setMarkdown(data);

    for(int i=0;i<data.length();i++){
        qDebug("%x", data[i]);
    }

//    int a=data.length();
//    char buff[data.size()*2];
//    char num;
//    for(int i = 0;i < data.size();i += 2)
//    {
//        num = data.mid(i,2).toUInt(nullptr,16);
//        buff[i/2] = num&0xFF;
//    }

}

void Widget::onTimeOut()
{
  // qDebug("len %d",now_rx4_len);
  // qDebug("start");
//   for(int i = 0;i<now_rx4_len;i++)
//   qDebug("%2x", rx4_data[i]);
//   qDebug("end\r\n");

//    if(now_rx4_len==44){
// //          qDebug("flen %d",now_rx4_len);
////           for(int i = 0;i<now_rx4_len;i++)
////           qDebug("%2x", rx4_data[i]);
////           qDebug("end\r\n");

//          //  unsigned short a,b,c;
//      //  qDebug("%.2x", rx4_data[24]);
//     //   qDebug("%.2x", rx4_data[25]);
//    //    unsigned short a=(rx4_data[22+2]|(rx4_data[22+3]<<8));
//            f_x=(float)(((unsigned char)rx4_data[25]<<8)|(unsigned char)rx4_data[24])*180.0/32768.0;
//            f_y=(float)(((unsigned char)rx4_data[27]<<8)|(unsigned char)rx4_data[26])*180.0/32768.0;
//            f_z=(float)(((unsigned char)rx4_data[29]<<8)|(unsigned char)rx4_data[28])*180.0/32768.0;
//      //      f_z+=180;

//            user_f_x=f_x-user_f_x_offset;
//            user_f_y=f_y-user_f_y_offset;
//            user_f_z=((float)f_z-(float)user_f_z_offset);

//            ui->label_rx_4->setText(QString("%1 ，%2 ，%3 ")
//                                  .arg(f_x).arg(f_y).arg(f_z));

//            ui->label_user->setText(QString("%1 ，%2 ，%3 ")
//                                  .arg(user_f_x).arg(user_f_y).arg(user_f_z));
//        now_rx4_len=0;
        tim->stop();
 //   }
}
void Widget::onTimeOut_1()
{
//   ui->textEdit_2->setMarkdown(send_data);
//    ui->textEdit_2->setMarkdown(send_data);
//    QString send_data=ui->textEdit_2->toPlainText();
//    QByteArray bytes = send_data.toLatin1();  // QString转QByteArray方法2

    Buttonfunction_f();

    m_serial->write(&send_data[0],send_data.length());
    //m_serial->write(&bytes[0],bytes.length());
    qDebug("onTimeOut_1 500ms");
}



void Widget::handleError(QSerialPort::SerialPortError error)
{
    if (error == QSerialPort::ResourceError) {
        QMessageBox::critical(this, tr("Critical Error"), m_serial->errorString());
        closeSerialPort();
    }
}
//! [8]

void Widget::initActionsConnections()
{
//      connect(m_ui
//    connect(m_ui->actionConnect, &QAction::triggered, this, &MainWindow::openSerialPort);
//    connect(m_ui->actionDisconnect, &QAction::triggered, this, &MainWindow::closeSerialPort);
//    connect(m_ui->actionQuit, &QAction::triggered, this, &MainWindow::close);
//    connect(m_ui->actionConfigure, &QAction::triggered, m_settings, &SettingsDialog::show);
//    connect(m_ui->actionClear, &QAction::triggered, m_console, &Console::clear);
//    connect(m_ui->actionAbout, &QAction::triggered, this, &MainWindow::about);
//    connect(m_ui->actionAboutQt, &QAction::triggered, qApp, &QApplication::aboutQt);
}


void Widget::on_checkBox_stateChanged(int arg1)
{
    qDebug("on_checkBox_stateChanged:%d",arg1);
    if(arg1==0){
        tim1->stop();
    }
    else{
        tim1->start();
    }
}


void Widget::on_pushButton_5_pressed()
{
    out_wire_flag=1;
    updata_display();
}


void Widget::on_pushButton_5_released()
{
    out_wire_flag=0;
    updata_display();
}



void Widget::on_comboBox_2_textActivated(const QString &arg1)
{
    QString dis=arg1;
    //QDebug("%s",dis);
    //ui->tabWidget->setCurrentIndex(0);
//    if(!dis.compare(("碳钢100%二氧化碳"))){
//        ui->stackedWidget->setCurrentWidget(ui->page_1);
//        direct_mode_flag=0x61;
//    }
//    else if(!dis.compare(("碳钢25%二氧化碳"))){
//        ui->stackedWidget->setCurrentWidget(ui->page_2);
//        direct_mode_flag=0x62;
//    }
//    else if(!dis.compare(("恒压"))){
//        ui->stackedWidget->setCurrentWidget(ui->page_3);
//        direct_mode_flag=0x63;
//    }
//    else if(!dis.compare(("无气药芯"))){
//        ui->stackedWidget->setCurrentWidget(ui->page_4);
//        direct_mode_flag=0x64;
//    }
//    else if(!dis.compare("拉丝枪")){
//        ui->stackedWidget->setCurrentWidget(ui->page_5);
//        direct_mode_flag=0x65;
//    }
}


void Widget::on_comboBox_5_textActivated(const QString &arg1)
{
        QString dis=arg1;
        if(!dis.compare(("2T"))){
            T2_T4_flag=0X63;
            //ui->stackedWidget->setCurrentWidget(ui->page_1);
        }
        else if(!dis.compare(("4T"))){
            T2_T4_flag=0X64;
            //ui->stackedWidget->setCurrentWidget(ui->page_1);
        }

            updata_display();
}


void Widget::on_comboBox_6_textActivated(const QString &arg1)
{
    QString dis=arg1;
    if(!dis.compare(("0.8"))){
        d_flag=0X61;
        ui->doubleSpinBox_18->setMaximum(17.5);
    }
    else if(!dis.compare(("0.9"))){
        d_flag=0X62;
        ui->doubleSpinBox_18->setMaximum(14.5);
    }
    else if(!dis.compare(("1.0"))){
        d_flag=0X63;
        ui->doubleSpinBox_18->setMaximum(12.8);
    }

    int temp=(int)(speed*10-10);

    switch(d_flag){
      case 0x61:   //0.8
        set_a=data_08[temp][0];
        set_v=data_08[temp][1]*0.1+5;    //数据采集回来是微调-5模式下采集，这里加5恢复
        break;
    case 0x62:    //0.9
        set_a=data_09[temp][0];
        set_v=data_09[temp][1]*0.1+5;
        break;
    case 0x63:    //1.0
        set_a=data_10[temp][0];
        set_v=data_10[temp][1]*0.1+5;
        break;
    }
       updata_display();
}


void Widget::updata_display(){

    QString dis_tmp;

    Buttonfunction_f();

    int temp=(int)(speed*10-10);
    switch(d_flag){
      case 0x61:   //0.8
        dis_tmp=QString("%1 ").arg(data_08[temp][3]);
        break;
    case 0x62:    //0.9
        dis_tmp=QString("%1 ").arg(data_09[temp][3]);
        break;
    case 0x63:    //1.0
        dis_tmp=QString("%1 ").arg(data_10[temp][3]);
        break;
    }
    //电流显示
    ui->label_41->setText(dis_tmp);
    //电压显示
    dis_tmp=QString("%1 ").arg(final_set_v);
    ui->label_38->setText(dis_tmp);
}


void Widget::on_doubleSpinBox_valueChanged(double arg1)
{
    offest_v=arg1;
    updata_display();
}


void Widget::on_doubleSpinBox_18_valueChanged(double arg1)
{
  speed=arg1;
  int temp=(int)(speed*10-10);

  switch(d_flag){
    case 0x61:   //0.8
      set_a=data_08[temp][0];
      set_v=data_08[temp][1]*0.1+5;    //数据采集回来是微调-5模式下采集，这里加5恢复
      final_speed_v=data_08[temp][2];
      break;
  case 0x62:    //0.9
      set_a=data_09[temp][0];
      set_v=data_09[temp][1]*0.1+5;
      final_speed_v=data_09[temp][2];
      break;
  case 0x63:    //1.0
      set_a=data_10[temp][0];
      set_v=data_10[temp][1]*0.1+5;
      final_speed_v=data_10[temp][2];
      break;
  }
   updata_display();
}


void Widget::on_spinBox_3_valueChanged(int arg1)
{
    offset_h=arg1;
       updata_display();
}


void Widget::on_stackedWidget_currentChanged(int arg1)
{
    QString dis_tmp;
    dis_tmp=QString("%1 ").arg(arg1);
    updata_display();
}


void Widget::on_doubleSpinBox_3_valueChanged(double arg1)
{
        after_time=arg1;
        updata_display();
}


void Widget::on_doubleSpinBox_4_valueChanged(double arg1)
{
    low_speed=arg1;
    updata_display();
}

