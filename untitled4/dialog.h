#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_comboBox_activated(int index);

    void on_comboBox_2_activated(int index);

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_doubleSpinBox_2_valueChanged(double arg1);

    void on_doubleSpinBox_3_valueChanged(double arg1);

    void on_doubleSpinBox_4_valueChanged(double arg1);

    void on_spinBox_valueChanged(int arg1);

    void on_comboBox_textActivated(const QString &arg1);

    void on_comboBox_2_textActivated(const QString &arg1);

    void on_comboBox_3_textActivated(const QString &arg1);

private:
    void updata_display();

    Ui::Dialog *ui;
};

#endif // DIALOG_H
