/********************************************************************************
** Form generated from reading UI file 'dialog_pulse.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_PULSE_H
#define UI_DIALOG_PULSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_pulse
{
public:
    QComboBox *comboBox_3;
    QTextEdit *textEdit;
    QLabel *label_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_11;
    QLabel *label_5;
    QLabel *label_10;
    QLabel *label_2;
    QSpinBox *spinBox;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_6;
    QComboBox *comboBox;
    QLabel *label_8;
    QComboBox *comboBox_2;
    QLabel *label_12;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox_3;

    void setupUi(QDialog *Dialog_pulse)
    {
        if (Dialog_pulse->objectName().isEmpty())
            Dialog_pulse->setObjectName(QString::fromUtf8("Dialog_pulse"));
        Dialog_pulse->resize(590, 535);
        comboBox_3 = new QComboBox(Dialog_pulse);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(56, 21, 331, 21));
        comboBox_3->setEditable(false);
        comboBox_3->setDuplicatesEnabled(false);
        comboBox_3->setFrame(true);
        textEdit = new QTextEdit(Dialog_pulse);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(60, 360, 461, 171));
        QFont font;
        font.setPointSize(16);
        textEdit->setFont(font);
        label_3 = new QLabel(Dialog_pulse);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(57, 52, 104, 16));
        widget = new QWidget(Dialog_pulse);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 110, 501, 221));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setLineWidth(3);

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setLineWidth(3);

        gridLayout->addWidget(label_5, 0, 1, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 0, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(24, 21));
        label_2->setLineWidth(3);

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        spinBox = new QSpinBox(widget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(-10);
        spinBox->setMaximum(10);

        gridLayout->addWidget(spinBox, 0, 4, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(widget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMinimum(-5.000000000000000);
        doubleSpinBox->setMaximum(5.000000000000000);
        doubleSpinBox->setSingleStep(0.100000000000000);

        gridLayout->addWidget(doubleSpinBox, 1, 0, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(24, 21));
        label_6->setLineWidth(3);

        gridLayout->addWidget(label_6, 1, 3, 1, 1);

        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 1, 4, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(33, 21));
        label_8->setLineWidth(3);

        gridLayout->addWidget(label_8, 2, 3, 1, 1);

        comboBox_2 = new QComboBox(widget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 2, 4, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setLineWidth(3);

        gridLayout->addWidget(label_12, 3, 0, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setLineWidth(3);

        gridLayout->addWidget(label_7, 3, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 2, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(48, 21));
        label_4->setMaximumSize(QSize(48, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setKerning(true);
        label_4->setFont(font1);
        label_4->setLineWidth(3);

        gridLayout->addWidget(label_4, 3, 3, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(widget);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setDecimals(1);
        doubleSpinBox_2->setMinimum(0.100000000000000);
        doubleSpinBox_2->setMaximum(2.000000000000000);
        doubleSpinBox_2->setSingleStep(0.100000000000000);

        gridLayout->addWidget(doubleSpinBox_2, 3, 4, 1, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(widget);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setDecimals(1);
        doubleSpinBox_3->setMinimum(1.000000000000000);
        doubleSpinBox_3->setMaximum(12.800000000000001);
        doubleSpinBox_3->setSingleStep(0.100000000000000);
        doubleSpinBox_3->setValue(10.000000000000000);

        gridLayout->addWidget(doubleSpinBox_3, 4, 0, 1, 1);


        retranslateUi(Dialog_pulse);

        QMetaObject::connectSlotsByName(Dialog_pulse);
    } // setupUi

    void retranslateUi(QDialog *Dialog_pulse)
    {
        Dialog_pulse->setWindowTitle(QCoreApplication::translate("Dialog_pulse", "Dialog", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("Dialog_pulse", "\347\242\263\351\222\242 80%\346\260\251\346\260\224", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("Dialog_pulse", "\344\270\215\351\224\210\351\222\242 80%\346\260\251\346\260\224", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("Dialog_pulse", "\344\270\215\351\224\210\351\222\242 97.5%\346\260\251\346\260\224", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("Dialog_pulse", "\351\223\234\347\241\205\345\220\210\351\207\221 100%\346\260\251\346\260\224", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("Dialog_pulse", "\351\223\235\347\241\205\345\220\210\351\207\221 100%\346\260\251\346\260\224", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("Dialog_pulse", "\351\223\235\351\225\201\345\220\210\351\207\221", nullptr));

        textEdit->setHtml(QCoreApplication::translate("Dialog_pulse", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">send_data</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_pulse", "\347\242\263\351\222\242100%\344\272\214\346\260\247\345\214\226\347\242\263", nullptr));
        label_11->setText(QCoreApplication::translate("Dialog_pulse", "\347\224\265\345\216\213\345\276\256\350\260\203", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog_pulse", "\347\224\265\345\216\213 V", nullptr));
        label_10->setText(QCoreApplication::translate("Dialog_pulse", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_pulse", "\347\224\265\346\204\237", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog_pulse", "\344\270\235\345\276\204", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Dialog_pulse", "1.0", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Dialog_pulse", "0.8", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Dialog_pulse", "0.9", nullptr));

        label_8->setText(QCoreApplication::translate("Dialog_pulse", "2T/4T", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Dialog_pulse", "2T", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Dialog_pulse", "4T", nullptr));

        label_12->setText(QCoreApplication::translate("Dialog_pulse", "\351\200\237\345\272\246m/min", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog_pulse", "\347\224\265\346\265\201 A", nullptr));
        label->setText(QCoreApplication::translate("Dialog_pulse", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog_pulse", "\345\220\216\345\220\271\346\227\266\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_pulse: public Ui_Dialog_pulse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_PULSE_H
