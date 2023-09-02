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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_9;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_12;
    QLabel *label;
    QLabel *label_8;
    QLabel *label_11;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox_2;
    QComboBox *comboBox_2;
    QComboBox *comboBox;
    QSpinBox *spinBox;
    QDoubleSpinBox *doubleSpinBox_4;
    QLabel *label_3;
    QComboBox *comboBox_3;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(718, 463);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(180, 130, 461, 251));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(24, 21));
        label_6->setLineWidth(3);

        gridLayout->addWidget(label_6, 2, 3, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setLineWidth(3);

        gridLayout->addWidget(label_5, 1, 1, 2, 1);

        doubleSpinBox = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMinimum(-5.000000000000000);
        doubleSpinBox->setMaximum(5.000000000000000);
        doubleSpinBox->setSingleStep(0.100000000000000);

        gridLayout->addWidget(doubleSpinBox, 2, 0, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(48, 21));
        label_9->setMaximumSize(QSize(48, 21));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setKerning(true);
        label_9->setFont(font);
        label_9->setLineWidth(3);

        gridLayout->addWidget(label_9, 5, 3, 1, 1);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 1, 2, 2, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_3->setObjectName(QString::fromUtf8("doubleSpinBox_3"));
        doubleSpinBox_3->setDecimals(1);
        doubleSpinBox_3->setMinimum(1.000000000000000);
        doubleSpinBox_3->setMaximum(12.800000000000001);
        doubleSpinBox_3->setSingleStep(0.100000000000000);
        doubleSpinBox_3->setValue(10.000000000000000);

        gridLayout->addWidget(doubleSpinBox_3, 5, 0, 1, 1);

        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setLineWidth(3);

        gridLayout->addWidget(label_12, 4, 0, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 2, 2, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(33, 21));
        label_8->setLineWidth(3);

        gridLayout->addWidget(label_8, 3, 3, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setLineWidth(3);

        gridLayout->addWidget(label_11, 1, 0, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setLineWidth(3);

        gridLayout->addWidget(label_7, 4, 1, 2, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(48, 21));
        label_4->setMaximumSize(QSize(48, 21));
        label_4->setFont(font);
        label_4->setLineWidth(3);

        gridLayout->addWidget(label_4, 4, 3, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(24, 21));
        label_2->setLineWidth(3);

        gridLayout->addWidget(label_2, 1, 3, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox_2->setObjectName(QString::fromUtf8("doubleSpinBox_2"));
        doubleSpinBox_2->setDecimals(1);
        doubleSpinBox_2->setMinimum(0.100000000000000);
        doubleSpinBox_2->setMaximum(2.000000000000000);
        doubleSpinBox_2->setSingleStep(0.100000000000000);

        gridLayout->addWidget(doubleSpinBox_2, 4, 4, 1, 1);

        comboBox_2 = new QComboBox(layoutWidget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 3, 4, 1, 1);

        comboBox = new QComboBox(layoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 2, 4, 1, 1);

        spinBox = new QSpinBox(layoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(-10);
        spinBox->setMaximum(10);

        gridLayout->addWidget(spinBox, 1, 4, 1, 1);

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

        comboBox_3 = new QComboBox(Dialog);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(180, 80, 141, 22));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("Dialog", "\344\270\235\345\276\204", nullptr));
        label_5->setText(QCoreApplication::translate("Dialog", "\347\224\265\345\216\213 V", nullptr));
        label_9->setText(QCoreApplication::translate("Dialog", "\347\274\223\346\205\242\351\200\201\344\270\235", nullptr));
        label_10->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("Dialog", "\351\200\237\345\272\246m/min", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("Dialog", "2T/4T", nullptr));
        label_11->setText(QCoreApplication::translate("Dialog", "\347\224\265\345\216\213\345\276\256\350\260\203", nullptr));
        label_7->setText(QCoreApplication::translate("Dialog", "\347\224\265\346\265\201 A", nullptr));
        label_4->setText(QCoreApplication::translate("Dialog", "\345\220\216\345\220\271\346\227\266\351\227\264", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\347\224\265\346\204\237", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("Dialog", "2T", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("Dialog", "4T", nullptr));

        comboBox->setItemText(0, QCoreApplication::translate("Dialog", "1.0", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Dialog", "0.8", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("Dialog", "0.9", nullptr));

        label_3->setText(QCoreApplication::translate("Dialog", "\347\242\263\351\222\242100%\344\272\214\346\260\247\345\214\226\347\242\263", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("Dialog", "\347\242\263\351\222\242100%\344\272\214\346\260\247\345\214\226\347\242\263", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("Dialog", "\347\242\263\351\222\24225%\344\272\214\346\260\247\345\214\226\347\242\263", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("Dialog", "\346\201\222\345\216\213", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("Dialog", "\346\227\240\346\260\224\350\215\257\350\212\257", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("Dialog", "\346\213\211\344\270\235\346\236\252", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
