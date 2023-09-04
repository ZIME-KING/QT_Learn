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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_hand
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QSpinBox *spinBox_2;
    QLabel *label_4;
    QTextEdit *textEdit;
    QLabel *label_8;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_5;
    QSpinBox *spinBox_3;
    QLabel *label_6;
    QSpinBox *spinBox_4;
    QLabel *label_7;
    QSpinBox *spinBox_5;

    void setupUi(QDialog *Dialog_hand)
    {
        if (Dialog_hand->objectName().isEmpty())
            Dialog_hand->setObjectName(QString::fromUtf8("Dialog_hand"));
        Dialog_hand->resize(583, 467);
        layoutWidget = new QWidget(Dialog_hand);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 80, 261, 61));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 2, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        spinBox_2 = new QSpinBox(layoutWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimum(10);
        spinBox_2->setMaximum(270);

        gridLayout_2->addWidget(spinBox_2, 1, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 1, 2, 1, 1);

        textEdit = new QTextEdit(Dialog_hand);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(80, 230, 451, 181));
        QFont font;
        font.setPointSize(16);
        textEdit->setFont(font);
        label_8 = new QLabel(Dialog_hand);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(120, 30, 82, 32));
        widget = new QWidget(Dialog_hand);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(381, 80, 151, 131));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 0, 1, 1);

        spinBox_3 = new QSpinBox(widget);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMinimum(0);
        spinBox_3->setMaximum(10);

        gridLayout->addWidget(spinBox_3, 0, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 0, 1, 1);

        spinBox_4 = new QSpinBox(widget);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));
        spinBox_4->setMinimum(0);
        spinBox_4->setMaximum(10);

        gridLayout->addWidget(spinBox_4, 1, 1, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        spinBox_5 = new QSpinBox(widget);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));
        spinBox_5->setMinimum(0);
        spinBox_5->setMaximum(1);

        gridLayout->addWidget(spinBox_5, 2, 1, 1, 1);


        retranslateUi(Dialog_hand);

        QMetaObject::connectSlotsByName(Dialog_hand);
    } // setupUi

    void retranslateUi(QDialog *Dialog_hand)
    {
        Dialog_hand->setWindowTitle(QCoreApplication::translate("Dialog_hand", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_hand", "\347\224\265\345\216\213", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_hand", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_hand", "\347\224\265\346\265\201", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog_hand", "TextLabel", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Dialog_hand", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">send_data</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog_hand", "\346\211\213\345\267\245\347\204\212", nullptr));
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
