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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_pulse
{
public:
    QTextEdit *textEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QPushButton *pushButton;
    QWidget *widget1;
    QGridLayout *gridLayout_4;
    QLabel *label_10;
    QFrame *line_4;
    QGridLayout *gridLayout_3;
    QLabel *label_11;
    QDoubleSpinBox *doubleSpinBox;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QLabel *label_12;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label;
    QFrame *line_2;
    QLabel *label_5;
    QLabel *label_7;
    QFrame *line_5;
    QFrame *line_3;
    QFrame *line_6;
    QFrame *line_7;
    QWidget *widget2;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_5;
    QLabel *label_2;
    QSpinBox *spinBox;
    QGridLayout *gridLayout_6;
    QLabel *label_6;
    QComboBox *comboBox;
    QGridLayout *gridLayout_7;
    QLabel *label_8;
    QComboBox *comboBox_2;
    QGridLayout *gridLayout_8;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox_2;

    void setupUi(QDialog *Dialog_pulse)
    {
        if (Dialog_pulse->objectName().isEmpty())
            Dialog_pulse->setObjectName(QString::fromUtf8("Dialog_pulse"));
        Dialog_pulse->resize(480, 480);
        textEdit = new QTextEdit(Dialog_pulse);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 320, 480, 160));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier")});
        font.setPointSize(15);
        textEdit->setFont(font);
        widget = new QWidget(Dialog_pulse);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(1, 1, 481, 76));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        comboBox_3 = new QComboBox(widget);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setEditable(false);
        comboBox_3->setDuplicatesEnabled(false);
        comboBox_3->setFrame(true);

        gridLayout->addWidget(comboBox_3, 1, 0, 1, 1);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        widget1 = new QWidget(Dialog_pulse);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(10, 110, 261, 161));
        gridLayout_4 = new QGridLayout(widget1);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QFont font1;
        font1.setPointSize(20);
        label_10->setFont(font1);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_10, 0, 4, 1, 1);

        line_4 = new QFrame(widget1);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_4, 0, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_11 = new QLabel(widget1);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setLineWidth(3);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_11, 0, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(widget1);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMinimum(-5.000000000000000);
        doubleSpinBox->setMaximum(5.000000000000000);
        doubleSpinBox->setSingleStep(0.100000000000000);

        gridLayout_3->addWidget(doubleSpinBox, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_3, 0, 0, 1, 1);

        line = new QFrame(widget1);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 1, 2, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_12 = new QLabel(widget1);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setLineWidth(3);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_12, 0, 0, 1, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(widget1);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setDecimals(1);
        doubleSpinBox_3->setMinimum(1.000000000000000);
        doubleSpinBox_3->setMaximum(12.800000000000001);
        doubleSpinBox_3->setSingleStep(0.100000000000000);
        doubleSpinBox_3->setValue(10.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox_3, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 2, 0, 1, 1);

        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 2, 4, 1, 1);

        line_2 = new QFrame(widget1);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_2, 1, 4, 1, 1);

        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setLineWidth(3);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_5, 0, 2, 1, 1);

        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setLineWidth(3);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_7, 2, 2, 1, 1);

        line_5 = new QFrame(widget1);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_5, 2, 1, 1, 1);

        line_3 = new QFrame(widget1);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_3, 1, 0, 1, 1);

        line_6 = new QFrame(widget1);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_6, 2, 3, 1, 1);

        line_7 = new QFrame(widget1);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_7, 0, 3, 1, 1);

        widget2 = new QWidget(Dialog_pulse);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(300, 110, 161, 171));
        gridLayout_9 = new QGridLayout(widget2);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_2 = new QLabel(widget2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(24, 21));
        label_2->setLineWidth(3);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        spinBox = new QSpinBox(widget2);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(-10);
        spinBox->setMaximum(10);

        gridLayout_5->addWidget(spinBox, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_5, 0, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_6 = new QLabel(widget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(24, 21));
        label_6->setLineWidth(3);

        gridLayout_6->addWidget(label_6, 0, 0, 1, 1);

        comboBox = new QComboBox(widget2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout_6->addWidget(comboBox, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_6, 1, 0, 1, 1);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_8 = new QLabel(widget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(33, 21));
        label_8->setLineWidth(3);

        gridLayout_7->addWidget(label_8, 0, 0, 1, 1);

        comboBox_2 = new QComboBox(widget2);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout_7->addWidget(comboBox_2, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_7, 2, 0, 1, 1);

        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_4 = new QLabel(widget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setKerning(true);
        label_4->setFont(font2);
        label_4->setLineWidth(3);

        gridLayout_8->addWidget(label_4, 0, 0, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(widget2);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setDecimals(1);
        doubleSpinBox_2->setMinimum(0.100000000000000);
        doubleSpinBox_2->setMaximum(2.000000000000000);
        doubleSpinBox_2->setSingleStep(0.100000000000000);

        gridLayout_8->addWidget(doubleSpinBox_2, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_8, 3, 0, 1, 1);


        retranslateUi(Dialog_pulse);

        QMetaObject::connectSlotsByName(Dialog_pulse);
    } // setupUi

    void retranslateUi(QDialog *Dialog_pulse)
    {
        Dialog_pulse->setWindowTitle(QCoreApplication::translate("Dialog_pulse", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Dialog_pulse", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Courier'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-size:9pt;\">send_data</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_pulse", "\350\204\211\345\206\262", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("Dialog_pulse", "\347\242\263\351\222\242 80%\346\260\251\346\260\224", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("Dialog_pulse", "\344\270\215\351\224\210\351\222\242 80%\346\260\251\346\260\224", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("Dialog_pulse", "\344\270\215\351\224\210\351\222\242 97.5%\346\260\251\346\260\224", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("Dialog_pulse", "\351\223\234\347\241\205\345\220\210\351\207\221 100%\346\260\251\346\260\224", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("Dialog_pulse", "\351\223\235\347\241\205\345\220\210\351\207\221 100%\346\260\251\346\260\224", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("Dialog_pulse", "\351\223\235\351\225\201\345\220\210\351\207\221", nullptr));

        pushButton->setText(QCoreApplication::translate("Dialog_pulse", "\345\207\272\344\270\235", nullptr));
        label_10->setText(QCoreApplication::translate("Dialog_pulse", "20", nullptr));
        label_11->setText(QCoreApplication::translate("Dialog_pulse", "\347\224\265\345\216\213\345\276\256\350\260\203", nullptr));
        label_12->setText(QCoreApplication::translate("Dialog_pulse", "\351\200\237\345\272\246m/min", nullptr));
        label->setText(QCoreApplication::translate("Dialog_pulse", "200", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog_pulse", "\347\224\265\345\216\213 V", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog_pulse", "\347\224\265\346\265\201 A", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_pulse", "\347\224\265\346\204\237", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog_pulse", "\344\270\235\345\276\204", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("Dialog_pulse", "1.0", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Dialog_pulse", "0.8", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Dialog_pulse", "0.9", nullptr));

        label_8->setText(QCoreApplication::translate("Dialog_pulse", "2T/4T", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Dialog_pulse", "2T", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Dialog_pulse", "4T", nullptr));

        label_4->setText(QCoreApplication::translate("Dialog_pulse", "\345\220\216\345\220\271\346\227\266\351\227\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_pulse: public Ui_Dialog_pulse {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_PULSE_H
