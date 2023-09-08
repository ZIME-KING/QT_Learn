/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QTextEdit *textEdit;
    QComboBox *comboBox_2;
    QDoubleSpinBox *doubleSpinBox_2;
    QComboBox *comboBox;
    QSpinBox *spinBox;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_6;
    QWidget *widget;
    QGridLayout *gridLayout_3;
    QLabel *label_5;
    QFrame *line_4;
    QLabel *label;
    QFrame *line_6;
    QFrame *line_3;
    QFrame *line_5;
    QGridLayout *gridLayout;
    QLabel *label_11;
    QDoubleSpinBox *doubleSpinBox;
    QFrame *line;
    QGridLayout *gridLayout_2;
    QLabel *label_12;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_10;
    QLabel *label_7;
    QFrame *line_2;
    QWidget *widget1;
    QGridLayout *gridLayout_4;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(480, 480);
        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 320, 480, 160));
        QFont font;
        font.setFamilies({QString::fromUtf8("Courier")});
        font.setPointSize(15);
        font.setKerning(false);
        textEdit->setFont(font);
        comboBox_2 = new QComboBox(Dialog);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(378, 190, 56, 24));
        doubleSpinBox_2 = new QDoubleSpinBox(Dialog);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(378, 240, 56, 24));
        doubleSpinBox_2->setDecimals(1);
        doubleSpinBox_2->setMinimum(0.100000000000000);
        doubleSpinBox_2->setMaximum(2.000000000000000);
        doubleSpinBox_2->setSingleStep(0.100000000000000);
        comboBox = new QComboBox(Dialog);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(378, 140, 56, 24));
        spinBox = new QSpinBox(Dialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(378, 90, 56, 24));
        spinBox->setMinimum(-10);
        spinBox->setMaximum(10);
        doubleSpinBox_4 = new QDoubleSpinBox(Dialog);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setGeometry(QRect(378, 290, 56, 24));
        doubleSpinBox_4->setDecimals(1);
        doubleSpinBox_4->setMinimum(1.000000000000000);
        doubleSpinBox_4->setMaximum(4.000000000000000);
        doubleSpinBox_4->setSingleStep(0.100000000000000);
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(300, 189, 64, 21));
        label_8->setMinimumSize(QSize(33, 21));
        label_8->setLineWidth(3);
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 240, 64, 21));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setKerning(true);
        label_4->setFont(font1);
        label_4->setLineWidth(3);
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(300, 290, 64, 21));
        label_9->setFont(font1);
        label_9->setLineWidth(3);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 89, 64, 21));
        label_2->setMinimumSize(QSize(24, 21));
        label_2->setLineWidth(3);
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(300, 139, 64, 21));
        label_6->setMinimumSize(QSize(24, 21));
        label_6->setLineWidth(3);
        widget = new QWidget(Dialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 119, 241, 161));
        gridLayout_3 = new QGridLayout(widget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setTabletTracking(false);
        label_5->setLineWidth(3);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_5, 0, 2, 1, 1);

        line_4 = new QFrame(widget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_4, 0, 3, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setPointSize(20);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label, 2, 4, 1, 1);

        line_6 = new QFrame(widget);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_6, 2, 3, 1, 1);

        line_3 = new QFrame(widget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_3, 1, 0, 1, 1);

        line_5 = new QFrame(widget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_5, 1, 4, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setLineWidth(3);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(widget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMinimum(-5.000000000000000);
        doubleSpinBox->setMaximum(5.000000000000000);
        doubleSpinBox->setSingleStep(0.100000000000000);

        gridLayout->addWidget(doubleSpinBox, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 0, 1, 3, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setLineWidth(3);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_12, 0, 0, 1, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(widget);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setDecimals(1);
        doubleSpinBox_3->setMinimum(1.000000000000000);
        doubleSpinBox_3->setMaximum(12.800000000000001);
        doubleSpinBox_3->setSingleStep(0.100000000000000);
        doubleSpinBox_3->setValue(10.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox_3, 1, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 2, 0, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font2);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_10, 0, 4, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setLineWidth(3);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_7, 2, 2, 1, 1);

        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_2, 1, 2, 1, 1);

        widget1 = new QWidget(Dialog);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(1, 2, 481, 76));
        gridLayout_4 = new QGridLayout(widget1);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_3, 0, 0, 1, 1);

        comboBox_3 = new QComboBox(widget1);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        gridLayout_4->addWidget(comboBox_3, 1, 0, 1, 1);

        pushButton = new QPushButton(widget1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_4->addWidget(pushButton, 2, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Dialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Courier'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Microsoft YaHei UI'; font-size:9pt;\">send_data</span></p></body></html>", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Dialog", "2T", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Dialog", "4T", nullptr));

        comboBox->setItemText(0, QCoreApplication::translate("Dialog", "1.0", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Dialog", "0.8", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Dialog", "0.9", nullptr));

        label_8->setText(QCoreApplication::translate("Dialog", "2T/4T", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "\345\220\216\345\220\271\346\227\266\351\227\264", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "\347\274\223\346\205\242\351\200\201\344\270\235", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\347\224\265\346\204\237", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "\344\270\235\345\276\204", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "\347\224\265\345\216\213 V", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "270", nullptr));
        label_11->setText(QCoreApplication::translate("Dialog", "\347\224\265\345\216\213\345\276\256\350\260\203", nullptr));
        label_12->setText(QCoreApplication::translate("Dialog", "\351\200\237\345\272\246m/min", nullptr));
        label_10->setText(QCoreApplication::translate("Dialog", "27", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "\347\224\265\346\265\201 A", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "\347\233\264\346\265\201\346\250\241\345\274\217", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("Dialog", "\347\242\263\351\222\242100%\344\272\214\346\260\247\345\214\226\347\242\263", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("Dialog", "\347\242\263\351\222\24225%\344\272\214\346\260\247\345\214\226\347\242\263", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("Dialog", "\346\201\222\345\216\213", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("Dialog", "\346\227\240\346\260\224\350\215\257\350\212\257", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("Dialog", "\346\213\211\344\270\235\346\236\252", nullptr));

        pushButton->setText(QCoreApplication::translate("Dialog", "\345\207\272\344\270\235", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
