#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QTime>
#include <QTimer>



QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void onTimeOut();
    void onTimeOut_1();


    void Buttonfunction();

    void Buttonfunction_f();

    void openSerialPort();
    void closeSerialPort();



    void about();
    void writeData(const QByteArray &data);
    void readData();

    void handleError(QSerialPort::SerialPortError error);

 //   void on_actionConnect_triggered();


    //void on_pushButton_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_5_pressed();

    void on_pushButton_5_released();

    void on_stackedWidget_currentChanged(int arg1);

    void on_comboBox_2_textActivated(const QString &arg1);

    void on_comboBox_5_textActivated(const QString &arg1);

    void on_comboBox_6_textActivated(const QString &arg1);

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_doubleSpinBox_18_valueChanged(double arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_doubleSpinBox_3_valueChanged(double arg1);

    void on_doubleSpinBox_4_valueChanged(double arg1);

private:
    void initActionsConnections();
//private slots:
//    void on_comboBox_activated(int index);
//    void on_pushButton_2_destroyed();
    void updata_display();

private:
    Ui::Widget *ui;
private:
    QSerialPort *m_serial = nullptr;
    QSerialPort *m_serial_2 = nullptr;
    QSerialPort *m_serial_3 = nullptr;
    QSerialPort *m_serial_4 = nullptr;

    QTimer *tim,*tim1;
};
#endif // WIDGET_H
