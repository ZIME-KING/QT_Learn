/********************************************************************************
** Form generated from reading UI file 'dialog_argon_protected_welding.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ARGON_PROTECTED_WELDING_H
#define UI_DIALOG_ARGON_PROTECTED_WELDING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_argon_protected_welding
{
public:
    QTextEdit *textEdit;
    QLabel *label_17;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_4;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QLabel *label_3;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;

    void setupUi(QDialog *Dialog_argon_protected_welding)
    {
        if (Dialog_argon_protected_welding->objectName().isEmpty())
            Dialog_argon_protected_welding->setObjectName(QString::fromUtf8("Dialog_argon_protected_welding"));
        Dialog_argon_protected_welding->resize(480, 480);
        textEdit = new QTextEdit(Dialog_argon_protected_welding);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 320, 480, 160));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier")});
        font.setPointSize(15);
        textEdit->setFont(font);
        label_17 = new QLabel(Dialog_argon_protected_welding);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(0, 1, 481, 31));
        label_17->setAlignment(Qt::AlignCenter);
        widget = new QWidget(Dialog_argon_protected_welding);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 110, 241, 111));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setPointSize(20);
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 2, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimum(10);
        spinBox_2->setMaximum(270);

        gridLayout->addWidget(spinBox_2, 1, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 2, 1, 1);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 0, 1, 1);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 1, 2, 1, 1);

        line_3 = new QFrame(widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 2, 1, 1, 1);

        line_4 = new QFrame(widget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 0, 1, 1, 1);


        retranslateUi(Dialog_argon_protected_welding);

        QMetaObject::connectSlotsByName(Dialog_argon_protected_welding);
    } // setupUi

    void retranslateUi(QDialog *Dialog_argon_protected_welding)
    {
        Dialog_argon_protected_welding->setWindowTitle(QCoreApplication::translate("Dialog_argon_protected_welding", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Dialog_argon_protected_welding", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Courier'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-size:9pt;\">send_data</span></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("Dialog_argon_protected_welding", "\345\274\247\346\260\251\347\204\212", nullptr));
        label->setText(QCoreApplication::translate("Dialog_argon_protected_welding", "\347\224\265\345\216\213", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog_argon_protected_welding", "200", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_argon_protected_welding", "\347\224\265\346\265\201", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_argon_protected_welding", "10", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_argon_protected_welding: public Ui_Dialog_argon_protected_welding {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ARGON_PROTECTED_WELDING_H
