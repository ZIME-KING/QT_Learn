/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTextEdit *textEdit_2;
    QCheckBox *checkBox;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QComboBox *comboBox_2;
    QPushButton *pushButton_5;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_16;
    QLabel *label_37;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_19;
    QLabel *label_38;
    QDoubleSpinBox *doubleSpinBox_18;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_17;
    QLabel *label_39;
    QLabel *label_7;
    QLabel *label_18;
    QLabel *label_15;
    QDoubleSpinBox *doubleSpinBox_3;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QSpinBox *spinBox_3;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label_3;
    QWidget *tab_2;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_5;
    QDoubleSpinBox *doubleSpinBox_6;
    QLabel *label_12;
    QWidget *layoutWidget_3;
    QGridLayout *gridLayout_5;
    QLabel *label_20;
    QSpinBox *spinBox_4;
    QLabel *label_21;
    QComboBox *comboBox_7;
    QLabel *label_22;
    QComboBox *comboBox_8;
    QLabel *label_23;
    QDoubleSpinBox *doubleSpinBox_7;
    QLabel *label_24;
    QDoubleSpinBox *doubleSpinBox_8;
    QWidget *tab_3;
    QWidget *layoutWidget_4;
    QGridLayout *gridLayout_6;
    QLabel *label_13;
    QDoubleSpinBox *doubleSpinBox_9;
    QDoubleSpinBox *doubleSpinBox_10;
    QLabel *label_14;
    QWidget *layoutWidget_5;
    QGridLayout *gridLayout_7;
    QLabel *label_25;
    QSpinBox *spinBox_5;
    QLabel *label_26;
    QComboBox *comboBox_9;
    QLabel *label_27;
    QComboBox *comboBox_10;
    QLabel *label_28;
    QDoubleSpinBox *doubleSpinBox_11;
    QLabel *label_29;
    QDoubleSpinBox *doubleSpinBox_12;
    QWidget *tab_4;
    QWidget *tab_5;
    QPushButton *pushButton_f;
    QLabel *label_2;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QLabel *label;
    QTextEdit *textEdit_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(925, 571);
        QFont font;
        font.setPointSize(12);
        Widget->setFont(font);
        textEdit_2 = new QTextEdit(Widget);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(230, 420, 601, 141));
        QFont font1;
        font1.setPointSize(16);
        textEdit_2->setFont(font1);
        checkBox = new QCheckBox(Widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(840, 420, 91, 20));
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(220, 10, 681, 401));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setKerning(true);
        tab_1->setFont(font2);
        comboBox_2 = new QComboBox(tab_1);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(0, 40, 164, 27));
        pushButton_5 = new QPushButton(tab_1);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(40, 290, 75, 24));
        layoutWidget = new QWidget(tab_1);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(160, 70, 461, 221));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(24, 21));
        label_16->setLineWidth(3);

        gridLayout->addWidget(label_16, 2, 3, 1, 1);

        label_37 = new QLabel(layoutWidget);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setLineWidth(3);

        gridLayout->addWidget(label_37, 1, 1, 2, 1);

        doubleSpinBox = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMinimum(-5.000000000000000);
        doubleSpinBox->setMaximum(5.000000000000000);
        doubleSpinBox->setSingleStep(0.100000000000000);

        gridLayout->addWidget(doubleSpinBox, 2, 0, 1, 1);

        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setMinimumSize(QSize(48, 21));
        label_19->setMaximumSize(QSize(48, 21));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setKerning(true);
        label_19->setFont(font3);
        label_19->setLineWidth(3);

        gridLayout->addWidget(label_19, 5, 3, 1, 1);

        label_38 = new QLabel(layoutWidget);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        gridLayout->addWidget(label_38, 1, 2, 2, 1);

        doubleSpinBox_18 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_18->setObjectName(QString::fromUtf8("doubleSpinBox_18"));
        doubleSpinBox_18->setDecimals(1);
        doubleSpinBox_18->setMinimum(1.000000000000000);
        doubleSpinBox_18->setMaximum(12.800000000000001);
        doubleSpinBox_18->setSingleStep(0.100000000000000);
        doubleSpinBox_18->setValue(10.000000000000000);

        gridLayout->addWidget(doubleSpinBox_18, 5, 0, 1, 1);

        label_40 = new QLabel(layoutWidget);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setLineWidth(3);

        gridLayout->addWidget(label_40, 4, 0, 1, 1);

        label_41 = new QLabel(layoutWidget);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        gridLayout->addWidget(label_41, 4, 2, 2, 1);

        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(33, 21));
        label_17->setLineWidth(3);

        gridLayout->addWidget(label_17, 3, 3, 1, 1);

        label_39 = new QLabel(layoutWidget);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setLineWidth(3);

        gridLayout->addWidget(label_39, 1, 0, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setLineWidth(3);

        gridLayout->addWidget(label_7, 4, 1, 2, 1);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setMinimumSize(QSize(48, 21));
        label_18->setMaximumSize(QSize(48, 21));
        label_18->setFont(font3);
        label_18->setLineWidth(3);

        gridLayout->addWidget(label_18, 4, 3, 1, 1);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(24, 21));
        label_15->setLineWidth(3);

        gridLayout->addWidget(label_15, 1, 3, 1, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setDecimals(1);
        doubleSpinBox_3->setMinimum(0.100000000000000);
        doubleSpinBox_3->setMaximum(2.000000000000000);
        doubleSpinBox_3->setSingleStep(0.100000000000000);

        gridLayout->addWidget(doubleSpinBox_3, 4, 4, 1, 1);

        comboBox_5 = new QComboBox(layoutWidget);
        comboBox_5->addItem(QString());
        comboBox_5->addItem(QString());
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));

        gridLayout->addWidget(comboBox_5, 3, 4, 1, 1);

        comboBox_6 = new QComboBox(layoutWidget);
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->addItem(QString());
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));

        gridLayout->addWidget(comboBox_6, 2, 4, 1, 1);

        spinBox_3 = new QSpinBox(layoutWidget);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMinimum(-10);
        spinBox_3->setMaximum(10);

        gridLayout->addWidget(spinBox_3, 1, 4, 1, 1);

        doubleSpinBox_4 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_4->setObjectName(QString::fromUtf8("doubleSpinBox_4"));
        doubleSpinBox_4->setDecimals(1);
        doubleSpinBox_4->setMinimum(1.000000000000000);
        doubleSpinBox_4->setMaximum(4.000000000000000);
        doubleSpinBox_4->setSingleStep(0.100000000000000);

        gridLayout->addWidget(doubleSpinBox_4, 5, 4, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 3);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        layoutWidget_2 = new QWidget(tab_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(50, 70, 161, 121));
        gridLayout_4 = new QGridLayout(layoutWidget_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setLineWidth(3);

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        doubleSpinBox_5 = new QDoubleSpinBox(layoutWidget_2);
        doubleSpinBox_5->setObjectName(QString::fromUtf8("doubleSpinBox_5"));
        doubleSpinBox_5->setDecimals(1);
        doubleSpinBox_5->setMinimum(90.000000000000000);
        doubleSpinBox_5->setSingleStep(0.100000000000000);

        gridLayout_4->addWidget(doubleSpinBox_5, 1, 1, 1, 1);

        doubleSpinBox_6 = new QDoubleSpinBox(layoutWidget_2);
        doubleSpinBox_6->setObjectName(QString::fromUtf8("doubleSpinBox_6"));
        doubleSpinBox_6->setDecimals(1);
        doubleSpinBox_6->setMinimum(90.000000000000000);
        doubleSpinBox_6->setSingleStep(0.100000000000000);

        gridLayout_4->addWidget(doubleSpinBox_6, 0, 1, 1, 1);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setLineWidth(3);

        gridLayout_4->addWidget(label_12, 1, 0, 1, 1);

        layoutWidget_3 = new QWidget(tab_2);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(250, 50, 161, 181));
        gridLayout_5 = new QGridLayout(layoutWidget_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(layoutWidget_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setMinimumSize(QSize(24, 21));
        label_20->setLineWidth(3);

        gridLayout_5->addWidget(label_20, 0, 0, 1, 1);

        spinBox_4 = new QSpinBox(layoutWidget_3);
        spinBox_4->setObjectName(QString::fromUtf8("spinBox_4"));

        gridLayout_5->addWidget(spinBox_4, 0, 1, 1, 1);

        label_21 = new QLabel(layoutWidget_3);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(24, 21));
        label_21->setLineWidth(3);

        gridLayout_5->addWidget(label_21, 1, 0, 1, 1);

        comboBox_7 = new QComboBox(layoutWidget_3);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));

        gridLayout_5->addWidget(comboBox_7, 1, 1, 1, 1);

        label_22 = new QLabel(layoutWidget_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(33, 21));
        label_22->setLineWidth(3);

        gridLayout_5->addWidget(label_22, 2, 0, 1, 1);

        comboBox_8 = new QComboBox(layoutWidget_3);
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));

        gridLayout_5->addWidget(comboBox_8, 2, 1, 1, 1);

        label_23 = new QLabel(layoutWidget_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMinimumSize(QSize(48, 21));
        label_23->setMaximumSize(QSize(48, 21));
        label_23->setLineWidth(3);

        gridLayout_5->addWidget(label_23, 3, 0, 1, 1);

        doubleSpinBox_7 = new QDoubleSpinBox(layoutWidget_3);
        doubleSpinBox_7->setObjectName(QString::fromUtf8("doubleSpinBox_7"));
        doubleSpinBox_7->setDecimals(1);
        doubleSpinBox_7->setMinimum(90.000000000000000);
        doubleSpinBox_7->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(doubleSpinBox_7, 3, 1, 1, 1);

        label_24 = new QLabel(layoutWidget_3);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setMinimumSize(QSize(48, 21));
        label_24->setMaximumSize(QSize(48, 21));
        label_24->setLineWidth(3);

        gridLayout_5->addWidget(label_24, 4, 0, 1, 1);

        doubleSpinBox_8 = new QDoubleSpinBox(layoutWidget_3);
        doubleSpinBox_8->setObjectName(QString::fromUtf8("doubleSpinBox_8"));
        doubleSpinBox_8->setDecimals(1);
        doubleSpinBox_8->setMinimum(90.000000000000000);
        doubleSpinBox_8->setSingleStep(0.100000000000000);

        gridLayout_5->addWidget(doubleSpinBox_8, 4, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        layoutWidget_4 = new QWidget(tab_3);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(50, 80, 161, 121));
        gridLayout_6 = new QGridLayout(layoutWidget_4);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(layoutWidget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setLineWidth(3);

        gridLayout_6->addWidget(label_13, 0, 0, 1, 1);

        doubleSpinBox_9 = new QDoubleSpinBox(layoutWidget_4);
        doubleSpinBox_9->setObjectName(QString::fromUtf8("doubleSpinBox_9"));
        doubleSpinBox_9->setDecimals(1);
        doubleSpinBox_9->setMinimum(90.000000000000000);
        doubleSpinBox_9->setSingleStep(0.100000000000000);

        gridLayout_6->addWidget(doubleSpinBox_9, 1, 1, 1, 1);

        doubleSpinBox_10 = new QDoubleSpinBox(layoutWidget_4);
        doubleSpinBox_10->setObjectName(QString::fromUtf8("doubleSpinBox_10"));
        doubleSpinBox_10->setDecimals(1);
        doubleSpinBox_10->setMinimum(90.000000000000000);
        doubleSpinBox_10->setSingleStep(0.100000000000000);

        gridLayout_6->addWidget(doubleSpinBox_10, 0, 1, 1, 1);

        label_14 = new QLabel(layoutWidget_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setLineWidth(3);

        gridLayout_6->addWidget(label_14, 1, 0, 1, 1);

        layoutWidget_5 = new QWidget(tab_3);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(250, 60, 161, 181));
        gridLayout_7 = new QGridLayout(layoutWidget_5);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        label_25 = new QLabel(layoutWidget_5);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setMinimumSize(QSize(24, 21));
        label_25->setLineWidth(3);

        gridLayout_7->addWidget(label_25, 0, 0, 1, 1);

        spinBox_5 = new QSpinBox(layoutWidget_5);
        spinBox_5->setObjectName(QString::fromUtf8("spinBox_5"));

        gridLayout_7->addWidget(spinBox_5, 0, 1, 1, 1);

        label_26 = new QLabel(layoutWidget_5);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setMinimumSize(QSize(24, 21));
        label_26->setLineWidth(3);

        gridLayout_7->addWidget(label_26, 1, 0, 1, 1);

        comboBox_9 = new QComboBox(layoutWidget_5);
        comboBox_9->setObjectName(QString::fromUtf8("comboBox_9"));

        gridLayout_7->addWidget(comboBox_9, 1, 1, 1, 1);

        label_27 = new QLabel(layoutWidget_5);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMinimumSize(QSize(33, 21));
        label_27->setLineWidth(3);

        gridLayout_7->addWidget(label_27, 2, 0, 1, 1);

        comboBox_10 = new QComboBox(layoutWidget_5);
        comboBox_10->setObjectName(QString::fromUtf8("comboBox_10"));

        gridLayout_7->addWidget(comboBox_10, 2, 1, 1, 1);

        label_28 = new QLabel(layoutWidget_5);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMinimumSize(QSize(48, 21));
        label_28->setMaximumSize(QSize(48, 21));
        label_28->setLineWidth(3);

        gridLayout_7->addWidget(label_28, 3, 0, 1, 1);

        doubleSpinBox_11 = new QDoubleSpinBox(layoutWidget_5);
        doubleSpinBox_11->setObjectName(QString::fromUtf8("doubleSpinBox_11"));
        doubleSpinBox_11->setDecimals(1);
        doubleSpinBox_11->setMinimum(90.000000000000000);
        doubleSpinBox_11->setSingleStep(0.100000000000000);

        gridLayout_7->addWidget(doubleSpinBox_11, 3, 1, 1, 1);

        label_29 = new QLabel(layoutWidget_5);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setMinimumSize(QSize(48, 21));
        label_29->setMaximumSize(QSize(48, 21));
        label_29->setLineWidth(3);

        gridLayout_7->addWidget(label_29, 4, 0, 1, 1);

        doubleSpinBox_12 = new QDoubleSpinBox(layoutWidget_5);
        doubleSpinBox_12->setObjectName(QString::fromUtf8("doubleSpinBox_12"));
        doubleSpinBox_12->setDecimals(1);
        doubleSpinBox_12->setMinimum(90.000000000000000);
        doubleSpinBox_12->setSingleStep(0.100000000000000);

        gridLayout_7->addWidget(doubleSpinBox_12, 4, 1, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tabWidget->addTab(tab_5, QString());
        pushButton_f = new QPushButton(Widget);
        pushButton_f->setObjectName(QString::fromUtf8("pushButton_f"));
        pushButton_f->setGeometry(QRect(840, 450, 75, 24));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 140, 221, 21));
        comboBox = new QComboBox(Widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(31, 71, 69, 22));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 70, 75, 24));
        textBrowser = new QTextBrowser(Widget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 290, 191, 271));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 210, 221, 21));
        textEdit_3 = new QTextEdit(Widget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(740, 430, 601, 141));
        textEdit_3->setFont(font1);

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        textEdit_2->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">send_data</span></p></body></html>", nullptr));
        checkBox->setText(QCoreApplication::translate("Widget", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Widget", "\347\242\263\351\222\242100%\344\272\214\346\260\247\345\214\226\347\242\263", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Widget", "\347\242\263\351\222\24225%\344\272\214\346\260\247\345\214\226\347\242\263", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("Widget", "\346\201\222\345\216\213", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("Widget", "\346\227\240\346\260\224\350\215\257\350\212\257", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("Widget", "\346\213\211\344\270\235\346\236\252", nullptr));

        pushButton_5->setText(QCoreApplication::translate("Widget", "\345\207\272\344\270\235", nullptr));
        label_16->setText(QCoreApplication::translate("Widget", "\344\270\235\345\276\204", nullptr));
        label_37->setText(QCoreApplication::translate("Widget", "\347\224\265\345\216\213 V", nullptr));
        label_19->setText(QCoreApplication::translate("Widget", "\347\274\223\346\205\242\351\200\201\344\270\235", nullptr));
        label_38->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_40->setText(QCoreApplication::translate("Widget", "\351\200\237\345\272\246m/min", nullptr));
        label_41->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        label_17->setText(QCoreApplication::translate("Widget", "2T/4T", nullptr));
        label_39->setText(QCoreApplication::translate("Widget", "\347\224\265\345\216\213\345\276\256\350\260\203", nullptr));
        label_7->setText(QCoreApplication::translate("Widget", "\347\224\265\346\265\201 A", nullptr));
        label_18->setText(QCoreApplication::translate("Widget", "\345\220\216\345\220\271\346\227\266\351\227\264", nullptr));
        label_15->setText(QCoreApplication::translate("Widget", "\347\224\265\346\204\237", nullptr));
        comboBox_5->setItemText(0, QCoreApplication::translate("Widget", "2T", nullptr));
        comboBox_5->setItemText(1, QCoreApplication::translate("Widget", "4T", nullptr));

        comboBox_6->setItemText(0, QCoreApplication::translate("Widget", "1.0", nullptr));
        comboBox_6->setItemText(1, QCoreApplication::translate("Widget", "0.8", nullptr));
        comboBox_6->setItemText(2, QCoreApplication::translate("Widget", "0.9", nullptr));

        label_3->setText(QCoreApplication::translate("Widget", "\347\242\263\351\222\242100%\344\272\214\346\260\247\345\214\226\347\242\263", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("Widget", "\347\233\264\346\265\201", nullptr));
        label_8->setText(QCoreApplication::translate("Widget", "\347\224\265\345\216\213", nullptr));
        label_12->setText(QCoreApplication::translate("Widget", "\347\224\265\346\265\201", nullptr));
        label_20->setText(QCoreApplication::translate("Widget", "\347\224\265\346\204\237", nullptr));
        label_21->setText(QCoreApplication::translate("Widget", "\344\270\235\345\276\204", nullptr));
        label_22->setText(QCoreApplication::translate("Widget", "2T/4T", nullptr));
        label_23->setText(QCoreApplication::translate("Widget", "\345\220\216\345\220\271\346\227\266\351\227\264", nullptr));
        label_24->setText(QCoreApplication::translate("Widget", "\347\274\223\346\205\242\351\200\201\344\270\235", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Widget", "\350\204\211\345\206\262", nullptr));
        label_13->setText(QCoreApplication::translate("Widget", "\347\224\265\345\216\213", nullptr));
        label_14->setText(QCoreApplication::translate("Widget", "\347\224\265\346\265\201", nullptr));
        label_25->setText(QCoreApplication::translate("Widget", "\347\224\265\346\204\237", nullptr));
        label_26->setText(QCoreApplication::translate("Widget", "\344\270\235\345\276\204", nullptr));
        label_27->setText(QCoreApplication::translate("Widget", "2T/4T", nullptr));
        label_28->setText(QCoreApplication::translate("Widget", "\345\220\216\345\220\271\346\227\266\351\227\264", nullptr));
        label_29->setText(QCoreApplication::translate("Widget", "\347\274\223\346\205\242\351\200\201\344\270\235", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Widget", "\345\217\214\350\204\211\345\206\262", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Widget", "\346\211\213\345\267\245\347\204\212", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("Widget", "\346\223\246\345\274\247\344\272\232\347\204\212", nullptr));
        pushButton_f->setText(QCoreApplication::translate("Widget", "\350\256\241\347\256\227", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">11111</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("Widget", "TextLabel", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("Widget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">send_data</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
