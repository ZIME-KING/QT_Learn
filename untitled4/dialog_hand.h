#ifndef DIALOG_HAND_H
#define DIALOG_HAND_H

#include <QDialog>

namespace Ui {
class Dialog_hand;
}

class Dialog_hand : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_hand(QWidget *parent = nullptr);
    ~Dialog_hand();

private slots:
    void on_spinBox_2_valueChanged(int arg1);

    //void on_spinBox_3_textChanged(const QString &arg1);

    //void on_spinBox_4_textChanged(const QString &arg1);

    void on_spinBox_5_valueChanged(int arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_spinBox_4_valueChanged(int arg1);

private:
    void updata();
    Ui::Dialog_hand *ui;
};

#endif // DIALOG_HAND_H
