#include "dialog_double_pulse.h"
#include "ui_dialog_double_pulse.h"
extern unsigned char global_send_buf[66];

Dialog_double_pulse::Dialog_double_pulse(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_double_pulse)
{
    ui->setupUi(this);
}

Dialog_double_pulse::~Dialog_double_pulse()
{
    delete ui;
}
