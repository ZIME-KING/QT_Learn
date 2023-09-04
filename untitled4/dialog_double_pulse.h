#ifndef DIALOG_DOUBLE_PULSE_H
#define DIALOG_DOUBLE_PULSE_H

#include <QDialog>

namespace Ui {
class Dialog_double_pulse;
}

class Dialog_double_pulse : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_double_pulse(QWidget *parent = nullptr);
    ~Dialog_double_pulse();

private:
    Ui::Dialog_double_pulse *ui;
};

#endif // DIALOG_DOUBLE_PULSE_H
