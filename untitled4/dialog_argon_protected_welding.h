#ifndef DIALOG_ARGON_PROTECTED_WELDING_H
#define DIALOG_ARGON_PROTECTED_WELDING_H

#include <QDialog>

namespace Ui {
class Dialog_argon_protected_welding;
}

class Dialog_argon_protected_welding : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_argon_protected_welding(QWidget *parent = nullptr);
    ~Dialog_argon_protected_welding();

private slots:
    void on_spinBox_2_valueChanged(int arg1);

private:
    Ui::Dialog_argon_protected_welding *ui;
};

#endif // DIALOG_ARGON_PROTECTED_WELDING_H
