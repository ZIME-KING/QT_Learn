/********************************************************************************
** Form generated from reading UI file 'double_pulse.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOUBLE_PULSE_H
#define UI_DOUBLE_PULSE_H

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

class Ui_double_pulse
{
public:
    QTextEdit *textEdit;
    QComboBox *comboBox_3;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_11;
    QLabel *label_8;
    QLabel *label_5;
    QSpinBox *spinBox;
    QLabel *label_7;
    QLabel *label_12;
    QDoubleSpinBox *doubleSpinBox_3;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_9;
    QLabel *label;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_4;
    QComboBox *comboBox_2;
    QLabel *label_4;
    QComboBox *comboBox;
    QLabel *label_6;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox_5;
    QLabel *label_13;

    void setupUi(QDialog *double_pulse)
    {
        if (double_pulse->objectName().isEmpty())
            double_pulse->setObjectName(QString::fromUtf8("double_pulse"));
        double_pulse->resize(480, 480);
        textEdit = new QTextEdit(double_pulse);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 340, 461, 131));
        QFont font;
        font.setPointSize(16);
        textEdit->setFont(font);
        comboBox_3 = new QComboBox(double_pulse);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(0, 10, 331, 21));
        comboBox_3->setEditable(false);
        comboBox_3->setDuplicatesEnabled(false);
        comboBox_3->setFrame(true);
        layoutWidget = new QWidget(double_pulse);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 40, 481, 251));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setLineWidth(3);

        gridLayout->addWidget(label_11, 1, 0, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(33, 21));
        label_8->setLineWidth(3);

        gridLayout->addWidget(label_8, 3, 3, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setLineWidth(3);

        gridLayout->addWidget(label_5, 1, 1, 2, 1);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(-10);
        spinBox->setMaximum(10);

        gridLayout->addWidget(spinBox, 1, 4, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setLineWidth(3);

        gridLayout->addWidget(label_7, 4, 1, 2, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setLineWidth(3);

        gridLayout->addWidget(label_12, 4, 0, 1, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setDecimals(1);
        doubleSpinBox_3->setMinimum(1.000000000000000);
        doubleSpinBox_3->setMaximum(12.800000000000001);
        doubleSpinBox_3->setSingleStep(0.100000000000000);
        doubleSpinBox_3->setValue(10.000000000000000);

        gridLayout->addWidget(doubleSpinBox_3, 5, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMinimum(-5.000000000000000);
        doubleSpinBox->setMaximum(5.000000000000000);
        doubleSpinBox->setSingleStep(0.100000000000000);

        gridLayout->addWidget(doubleSpinBox, 2, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(24, 21));
        label_2->setLineWidth(3);

        gridLayout->addWidget(label_2, 1, 3, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setDecimals(1);
        doubleSpinBox_2->setMinimum(1.000000000000000);
        doubleSpinBox_2->setMaximum(2.500000000000000);
        doubleSpinBox_2->setSingleStep(0.100000000000000);

        gridLayout->addWidget(doubleSpinBox_2, 4, 4, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(48, 21));
        label_9->setMaximumSize(QSize(48, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setKerning(true);
        label_9->setFont(font1);
        label_9->setLineWidth(3);

        gridLayout->addWidget(label_9, 5, 3, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 2, 2, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 1, 2, 2, 1);

        doubleSpinBox_4 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setDecimals(1);
        doubleSpinBox_4->setMinimum(20.000000000000000);
        doubleSpinBox_4->setMaximum(99.000000000000000);
        doubleSpinBox_4->setSingleStep(1.000000000000000);

        gridLayout->addWidget(doubleSpinBox_4, 5, 4, 1, 1);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 3, 4, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(48, 21));
        label_4->setMaximumSize(QSize(48, 21));
        label_4->setFont(font1);
        label_4->setLineWidth(3);

        gridLayout->addWidget(label_4, 4, 3, 1, 1);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 2, 4, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(24, 21));
        label_6->setLineWidth(3);

        gridLayout->addWidget(label_6, 2, 3, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 3);

        doubleSpinBox_5 = new QDoubleSpinBox(double_pulse);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setGeometry(QRect(374, 300, 102, 21));
        doubleSpinBox_5->setDecimals(1);
        doubleSpinBox_5->setMinimum(20.000000000000000);
        doubleSpinBox_5->setMaximum(80.000000000000000);
        doubleSpinBox_5->setSingleStep(1.000000000000000);
        label_13 = new QLabel(double_pulse);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(320, 300, 48, 21));
        label_13->setMinimumSize(QSize(48, 21));
        label_13->setMaximumSize(QSize(48, 21));
        label_13->setFont(font1);
        label_13->setLineWidth(3);

        retranslateUi(double_pulse);

        QMetaObject::connectSlotsByName(double_pulse);
    } // setupUi

    void retranslateUi(QDialog *double_pulse)
    {
        double_pulse->setWindowTitle(QCoreApplication::translate("double_pulse", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("double_pulse", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">send_data</span></p></body></html>", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("double_pulse", "\347\242\263\351\222\242 80%\346\260\251\346\260\224", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("double_pulse", "\344\270\215\351\224\210\351\222\242 80%\346\260\251\346\260\224", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("double_pulse", "\344\270\215\351\224\210\351\222\242 97.5%\346\260\251\346\260\224", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("double_pulse", "\351\223\234\347\241\205\345\220\210\351\207\221 100%\346\260\251\346\260\224", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("double_pulse", "\351\223\235\347\241\205\345\220\210\351\207\221 100%\346\260\251\346\260\224", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("double_pulse", "\351\223\235\351\225\201\345\220\210\351\207\221", nullptr));

        label_11->setText(QCoreApplication::translate("double_pulse", "\347\224\265\345\216\213\345\276\256\350\260\203", nullptr));
        label_8->setText(QCoreApplication::translate("double_pulse", "2T/4T", nullptr));
        label_5->setText(QCoreApplication::translate("double_pulse", "\347\224\265\345\216\213 V", nullptr));
        label_7->setText(QCoreApplication::translate("double_pulse", "\347\224\265\346\265\201 A", nullptr));
        label_12->setText(QCoreApplication::translate("double_pulse", "\351\200\237\345\272\246m/min", nullptr));
        label_2->setText(QCoreApplication::translate("double_pulse", "\347\224\265\346\204\237", nullptr));
        label_9->setText(QCoreApplication::translate("double_pulse", "\345\237\272\346\236\201\347\224\265\346\265\201", nullptr));
        label->setText(QCoreApplication::translate("double_pulse", "TextLabel", nullptr));
        label_10->setText(QCoreApplication::translate("double_pulse", "TextLabel", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("double_pulse", "2T", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("double_pulse", "4T", nullptr));

        label_4->setText(QCoreApplication::translate("double_pulse", "\350\204\211\345\206\262\351\242\221\347\216\207", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("double_pulse", "1.0", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("double_pulse", "0.8", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("double_pulse", "0.9", nullptr));

        label_6->setText(QCoreApplication::translate("double_pulse", "\344\270\235\345\276\204", nullptr));
        label_3->setText(QCoreApplication::translate("double_pulse", "\347\242\263\351\222\242100%\344\272\214\346\260\247\345\214\226\347\242\263", nullptr));
        label_13->setText(QCoreApplication::translate("double_pulse", "\350\204\211\345\206\262\345\256\275\345\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class double_pulse: public Ui_double_pulse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOUBLE_PULSE_H
