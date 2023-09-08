/********************************************************************************
** Form generated from reading UI file 'dialog_hand.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_HAND_H
#define UI_DIALOG_HAND_H

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

class Ui_Dialog_hand
{
public:
    QTextEdit *textEdit;
    QLabel *label_8;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLabel *label_3;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QFrame *line_2;
    QLabel *label_4;
    QFrame *line;
    QFrame *line_3;
    QFrame *line_4;
    QWidget *widget1;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QSpinBox *spinBox_3;
    QGridLayout *gridLayout_4;
    QLabel *label_6;
    QSpinBox *spinBox_4;
    QGridLayout *gridLayout_5;
    QLabel *label_7;
    QSpinBox *spinBox_5;

    void setupUi(QDialog *Dialog_hand)
    {
        if (Dialog_hand->objectName().isEmpty())
            Dialog_hand->setObjectName(QString::fromUtf8("Dialog_hand"));
        Dialog_hand->resize(480, 480);
        textEdit = new QTextEdit(Dialog_hand);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 320, 480, 160));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier")});
        font.setPointSize(15);
        textEdit->setFont(font);
        label_8 = new QLabel(Dialog_hand);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(0, 0, 481, 32));
        label_8->setAlignment(Qt::AlignCenter);
        widget = new QWidget(Dialog_hand);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 130, 221, 111));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(20);
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_3, 0, 2, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        spinBox_2 = new QSpinBox(widget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimum(10);
        spinBox_2->setMaximum(270);

        gridLayout_2->addWidget(spinBox_2, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_2, 1, 2, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_4, 2, 2, 1, 1);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 1, 0, 1, 1);

        line_3 = new QFrame(widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_3, 2, 1, 1, 1);

        line_4 = new QFrame(widget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_4, 0, 1, 1, 1);

        widget1 = new QWidget(Dialog_hand);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(312, 124, 131, 161));
        gridLayout_6 = new QGridLayout(widget1);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        spinBox_3 = new QSpinBox(widget1);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMinimum(0);
        spinBox_3->setMaximum(10);

        gridLayout->addWidget(spinBox_3, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_6 = new QLabel(widget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 0, 0, 1, 1);

        spinBox_4 = new QSpinBox(widget1);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setMinimum(0);
        spinBox_4->setMaximum(10);

        gridLayout_4->addWidget(spinBox_4, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 1, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        spinBox_5 = new QSpinBox(widget1);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setMinimum(0);
        spinBox_5->setMaximum(1);

        gridLayout_5->addWidget(spinBox_5, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 2, 0, 1, 1);


        retranslateUi(Dialog_hand);

        QMetaObject::connectSlotsByName(Dialog_hand);
    } // setupUi

    void retranslateUi(QDialog *Dialog_hand)
    {
        Dialog_hand->setWindowTitle(QCoreApplication::translate("Dialog_hand", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Dialog_hand", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Courier'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-size:9pt;\">send_data</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog_hand", "\346\211\213\345\267\245\347\204\212", nullptr));
        label->setText(QCoreApplication::translate("Dialog_hand", "\347\224\265\345\216\213", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_hand", "0", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_hand", "\347\224\265\346\265\201", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog_hand", "200", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog_hand", "\347\203\255\350\265\267\345\274\247", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog_hand", "\346\216\250\345\212\233", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog_hand", "VR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_hand: public Ui_Dialog_hand {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_HAND_H
