#include "widget.h"
#include "dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    Dialog m1;
    w.show();
    m1.show();


    return a.exec();
}
