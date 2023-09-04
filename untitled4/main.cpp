#include "widget.h"
#include "dialog.h"
#include "dialog_pulse.h"
#include "dialog_double_pulse.h"
#include "dialog_hand.h"
#include "dialog_argon_protected_welding.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    Dialog w1;
    Dialog_pulse w2;
    Dialog_double_pulse w3;
    Dialog_hand w4;
    Dialog_argon_protected_welding w5;

    //w.show();
    w1.show();
    w2.show();
    w3.show();
    w4.show();
    w5.show();

    return a.exec();
}
