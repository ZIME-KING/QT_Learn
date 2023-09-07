/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QComboBox *comboBox_3;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QComboBox *comboBox_2;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_12;
    QLabel *label;
    QLabel *label_11;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_2;
    QComboBox *comboBox;
    QSpinBox *spinBox;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_6;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(480, 480);
        comboBox_3 = new QComboBox(Dialog);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(10, 10, 141, 22));
        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 290, 461, 181));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier New")});
        font.setPointSize(16);
        textEdit->setFont(font);
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 10, 80, 24));
        comboBox_2 = new QComboBox(Dialog);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(368, 161, 44, 24));
        label_10 = new QLabel(Dialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(217, 61, 54, 16));
        doubleSpinBox = new QDoubleSpinBox(Dialog);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(21, 111, 50, 24));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMinimum(-5.000000000000000);
        doubleSpinBox->setMaximum(5.000000000000000);
        doubleSpinBox->setSingleStep(0.100000000000000);
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(119, 61, 36, 16));
        label_5->setLineWidth(3);
        doubleSpinBox_3 = new QDoubleSpinBox(Dialog);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setGeometry(QRect(21, 261, 52, 24));
        doubleSpinBox_3->setDecimals(1);
        doubleSpinBox_3->setMinimum(1.000000000000000);
        doubleSpinBox_3->setMaximum(12.800000000000001);
        doubleSpinBox_3->setSingleStep(0.100000000000000);
        doubleSpinBox_3->setValue(10.000000000000000);
        label_12 = new QLabel(Dialog);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(21, 211, 63, 16));
        label_12->setLineWidth(3);
        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(217, 211, 54, 16));
        label_11 = new QLabel(Dialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(21, 61, 48, 16));
        label_11->setLineWidth(3);
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(119, 211, 36, 16));
        label_7->setLineWidth(3);
        doubleSpinBox_2 = new QDoubleSpinBox(Dialog);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(368, 211, 44, 24));
        doubleSpinBox_2->setDecimals(1);
        doubleSpinBox_2->setMinimum(0.100000000000000);
        doubleSpinBox_2->setMaximum(2.000000000000000);
        doubleSpinBox_2->setSingleStep(0.100000000000000);
        comboBox = new QComboBox(Dialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(368, 111, 46, 24));
        spinBox = new QSpinBox(Dialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(368, 61, 47, 24));
        spinBox->setMinimum(-10);
        spinBox->setMaximum(10);
        doubleSpinBox_4 = new QDoubleSpinBox(Dialog);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setGeometry(QRect(368, 261, 44, 24));
        doubleSpinBox_4->setDecimals(1);
        doubleSpinBox_4->setMinimum(1.000000000000000);
        doubleSpinBox_4->setMaximum(4.000000000000000);
        doubleSpinBox_4->setSingleStep(0.100000000000000);
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(290, 160, 64, 21));
        label_8->setMinimumSize(QSize(33, 21));
        label_8->setLineWidth(3);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(290, 211, 64, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setKerning(true);
        label_4->setFont(font1);
        label_4->setLineWidth(3);
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(290, 261, 64, 21));
        label_9->setFont(font1);
        label_9->setLineWidth(3);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 60, 64, 21));
        label_2->setMinimumSize(QSize(24, 21));
        label_2->setLineWidth(3);
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(290, 110, 64, 21));
        label_6->setMinimumSize(QSize(24, 21));
        label_6->setLineWidth(3);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("Dialog", "\347\242\263\351\222\242100%\344\272\214\346\260\247\345\214\226\347\242\263", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("Dialog", "\347\242\263\351\222\24225%\344\272\214\346\260\247\345\214\226\347\242\263", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("Dialog", "\346\201\222\345\216\213", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("Dialog", "\346\227\240\346\260\224\350\215\257\350\212\257", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("Dialog", "\346\213\211\344\270\235\346\236\252", nullptr));

        textEdit->setHtml(QCoreApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Courier New'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-size:9pt;\">send_data</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog", "\345\207\272\344\270\235", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Dialog", "2T", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Dialog", "4T", nullptr));

        label_10->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "\347\224\265\345\216\213 V", nullptr));
        label_12->setText(QCoreApplication::translate("Dialog", "\351\200\237\345\272\246m/min", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_11->setText(QCoreApplication::translate("Dialog", "\347\224\265\345\216\213\345\276\256\350\260\203", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "\347\224\265\346\265\201 A", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Dialog", "1.0", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Dialog", "0.8", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Dialog", "0.9", nullptr));

        label_8->setText(QCoreApplication::translate("Dialog", "2T/4T", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "\345\220\216\345\220\271\346\227\266\351\227\264", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "\347\274\223\346\205\242\351\200\201\344\270\235", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\347\224\265\346\204\237", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "\344\270\235\345\276\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
