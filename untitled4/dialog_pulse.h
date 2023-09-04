#ifndef DIALOG_PULSE_H
#define DIALOG_PULSE_H

#include <QDialog>

namespace Ui {
class Dialog_pulse;
}

class Dialog_pulse : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_pulse(QWidget *parent = nullptr);
    ~Dialog_pulse();
private slots:
    void on_comboBox_activated(int index);

    void on_comboBox_2_activated(int index);

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_doubleSpinBox_2_valueChanged(double arg1);

    void on_doubleSpinBox_3_valueChanged(double arg1);


    void on_spinBox_valueChanged(int arg1);

    void on_comboBox_textActivated(const QString &arg1);

    void on_comboBox_2_textActivated(const QString &arg1);

    void on_comboBox_3_textActivated(const QString &arg1);

private:
    void updata_display();

    Ui::Dialog_pulse *ui;
};

#endif // DIALOG_PULSE_H
