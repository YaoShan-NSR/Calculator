/********************************************************************************
** Form generated from reading UI file 'Calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorClass
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_10;
    QPushButton *pushButton_16;
    QPushButton *btn_del;
    QPushButton *pushButton_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton_17;
    QPushButton *btn_div;
    QPushButton *btn_num7;
    QPushButton *btn_num8;
    QPushButton *btn_num9;
    QPushButton *btn_multi;
    QPushButton *btn_num4;
    QPushButton *btn_num5;
    QPushButton *btn_num6;
    QPushButton *btn_sub;
    QPushButton *btn_num1;
    QPushButton *btn_num2;
    QPushButton *btn_num3;
    QPushButton *btn_add;
    QPushButton *btn_numSign;
    QPushButton *btn_num0;
    QPushButton *btn_numDot;
    QPushButton *btn_equal;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLineEdit *exp_lineEdit;
    QLineEdit *lineEdit;

    void setupUi(QWidget *CalculatorClass)
    {
        if (CalculatorClass->objectName().isEmpty())
            CalculatorClass->setObjectName(QString::fromUtf8("CalculatorClass"));
        CalculatorClass->resize(320, 480);
        CalculatorClass->setMinimumSize(QSize(320, 480));
        CalculatorClass->setMaximumSize(QSize(320, 480));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        CalculatorClass->setFont(font);
        CalculatorClass->setStyleSheet(QString::fromUtf8("*\n"
"{   border:none;\n"
"	background-color: rgb(230, 230, 230);\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    font:nomal 18pt '\345\276\256\350\275\257\351\233\205\351\273\221';\n"
"	background-color: rgb(243, 243, 243);\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"    border:1px soild rgb(193.193.193);\n"
"	background-color: rgb(221, 223, 220);\n"
"}\n"
"\n"
"QPushButton#btn_numSign,#btn_numDot,#btn_num0,#btn_num1,#btn_num2,#btn_num3,#btn_num4,#btn_num5,#btn_num6,#btn_num7,#btn_num8,#btn_num9\n"
"{\n"
"    font:bold 12pt '\345\276\256\350\275\257\351\233\205\351\273\221';\n"
"	background-color: rgb(252, 252, 252);\n"
"}\n"
"\n"
"QPushButton#btn_numSign:hover,#btn_numDot:hover,#btn_num0:hover,#btn_num1:hover,#btn_num2:hover,#btn_num3:hover,#btn_num4:hover,#btn_num5:hover,#btn_num6:hover,#btn_num7:hover,#btn_num8:hover,#btn_num9:hover\n"
"{\n"
"    border:1px soild rgb(193.193.193);\n"
"	background-color: rgb(221, 223, 220);\n"
"}"));
        layoutWidget = new QWidget(CalculatorClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 140, 321, 331));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(70, 50));
        pushButton->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_10 = new QPushButton(layoutWidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(70, 50));
        pushButton_10->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(pushButton_10, 0, 1, 1, 1);

        pushButton_16 = new QPushButton(layoutWidget);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setMinimumSize(QSize(70, 50));
        pushButton_16->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(pushButton_16, 0, 2, 1, 1);

        btn_del = new QPushButton(layoutWidget);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));
        btn_del->setMinimumSize(QSize(70, 50));
        btn_del->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_del, 0, 3, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(70, 50));
        pushButton_2->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(pushButton_2, 1, 0, 1, 1);

        pushButton_11 = new QPushButton(layoutWidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(70, 50));
        pushButton_11->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(pushButton_11, 1, 1, 1, 1);

        pushButton_17 = new QPushButton(layoutWidget);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setMinimumSize(QSize(70, 50));
        pushButton_17->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(pushButton_17, 1, 2, 1, 1);

        btn_div = new QPushButton(layoutWidget);
        btn_div->setObjectName(QString::fromUtf8("btn_div"));
        btn_div->setMinimumSize(QSize(70, 50));
        btn_div->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_div, 1, 3, 1, 1);

        btn_num7 = new QPushButton(layoutWidget);
        btn_num7->setObjectName(QString::fromUtf8("btn_num7"));
        btn_num7->setMinimumSize(QSize(70, 50));
        btn_num7->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_num7, 2, 0, 1, 1);

        btn_num8 = new QPushButton(layoutWidget);
        btn_num8->setObjectName(QString::fromUtf8("btn_num8"));
        btn_num8->setMinimumSize(QSize(70, 50));
        btn_num8->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_num8, 2, 1, 1, 1);

        btn_num9 = new QPushButton(layoutWidget);
        btn_num9->setObjectName(QString::fromUtf8("btn_num9"));
        btn_num9->setMinimumSize(QSize(70, 50));
        btn_num9->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_num9, 2, 2, 1, 1);

        btn_multi = new QPushButton(layoutWidget);
        btn_multi->setObjectName(QString::fromUtf8("btn_multi"));
        btn_multi->setMinimumSize(QSize(70, 50));
        btn_multi->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_multi, 2, 3, 1, 1);

        btn_num4 = new QPushButton(layoutWidget);
        btn_num4->setObjectName(QString::fromUtf8("btn_num4"));
        btn_num4->setMinimumSize(QSize(70, 50));
        btn_num4->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_num4, 3, 0, 1, 1);

        btn_num5 = new QPushButton(layoutWidget);
        btn_num5->setObjectName(QString::fromUtf8("btn_num5"));
        btn_num5->setMinimumSize(QSize(70, 50));
        btn_num5->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_num5, 3, 1, 1, 1);

        btn_num6 = new QPushButton(layoutWidget);
        btn_num6->setObjectName(QString::fromUtf8("btn_num6"));
        btn_num6->setMinimumSize(QSize(70, 50));
        btn_num6->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_num6, 3, 2, 1, 1);

        btn_sub = new QPushButton(layoutWidget);
        btn_sub->setObjectName(QString::fromUtf8("btn_sub"));
        btn_sub->setMinimumSize(QSize(70, 50));
        btn_sub->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_sub, 3, 3, 1, 1);

        btn_num1 = new QPushButton(layoutWidget);
        btn_num1->setObjectName(QString::fromUtf8("btn_num1"));
        btn_num1->setMinimumSize(QSize(70, 50));
        btn_num1->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_num1, 4, 0, 1, 1);

        btn_num2 = new QPushButton(layoutWidget);
        btn_num2->setObjectName(QString::fromUtf8("btn_num2"));
        btn_num2->setMinimumSize(QSize(70, 50));
        btn_num2->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_num2, 4, 1, 1, 1);

        btn_num3 = new QPushButton(layoutWidget);
        btn_num3->setObjectName(QString::fromUtf8("btn_num3"));
        btn_num3->setMinimumSize(QSize(70, 50));
        btn_num3->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_num3, 4, 2, 1, 1);

        btn_add = new QPushButton(layoutWidget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        btn_add->setMinimumSize(QSize(70, 50));
        btn_add->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_add, 4, 3, 1, 1);

        btn_numSign = new QPushButton(layoutWidget);
        btn_numSign->setObjectName(QString::fromUtf8("btn_numSign"));
        btn_numSign->setMinimumSize(QSize(70, 50));
        btn_numSign->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_numSign, 5, 0, 1, 1);

        btn_num0 = new QPushButton(layoutWidget);
        btn_num0->setObjectName(QString::fromUtf8("btn_num0"));
        btn_num0->setMinimumSize(QSize(70, 50));
        btn_num0->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_num0, 5, 1, 1, 1);

        btn_numDot = new QPushButton(layoutWidget);
        btn_numDot->setObjectName(QString::fromUtf8("btn_numDot"));
        btn_numDot->setMinimumSize(QSize(70, 50));
        btn_numDot->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_numDot, 5, 2, 1, 1);

        btn_equal = new QPushButton(layoutWidget);
        btn_equal->setObjectName(QString::fromUtf8("btn_equal"));
        btn_equal->setMinimumSize(QSize(70, 50));
        btn_equal->setMaximumSize(QSize(70, 50));

        gridLayout->addWidget(btn_equal, 5, 3, 1, 1);

        layoutWidget1 = new QWidget(CalculatorClass);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 20, 301, 103));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 2, 0, 0);
        exp_lineEdit = new QLineEdit(layoutWidget1);
        exp_lineEdit->setObjectName(QString::fromUtf8("exp_lineEdit"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("AcadEref"));
        exp_lineEdit->setFont(font1);
        exp_lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        exp_lineEdit->setReadOnly(true);

        verticalLayout->addWidget(exp_lineEdit);

        lineEdit = new QLineEdit(layoutWidget1);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 70));
        lineEdit->setMaximumSize(QSize(16777215, 70));
        QFont font2;
        font2.setPointSize(26);
        lineEdit->setFont(font2);
        lineEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lineEdit->setReadOnly(true);

        verticalLayout->addWidget(lineEdit);


        retranslateUi(CalculatorClass);

        QMetaObject::connectSlotsByName(CalculatorClass);
    } // setupUi

    void retranslateUi(QWidget *CalculatorClass)
    {
        CalculatorClass->setWindowTitle(QApplication::translate("CalculatorClass", "Calculator", nullptr));
        pushButton->setText(QApplication::translate("CalculatorClass", "%", nullptr));
        pushButton_10->setText(QApplication::translate("CalculatorClass", "CE", nullptr));
        pushButton_16->setText(QApplication::translate("CalculatorClass", "C", nullptr));
        btn_del->setText(QApplication::translate("CalculatorClass", "Del", nullptr));
        pushButton_2->setText(QApplication::translate("CalculatorClass", "sin", nullptr));
        pushButton_11->setText(QApplication::translate("CalculatorClass", "cos", nullptr));
        pushButton_17->setText(QApplication::translate("CalculatorClass", "tan", nullptr));
        btn_div->setText(QApplication::translate("CalculatorClass", "/", nullptr));
        btn_num7->setText(QApplication::translate("CalculatorClass", "7", nullptr));
        btn_num8->setText(QApplication::translate("CalculatorClass", "8", nullptr));
        btn_num9->setText(QApplication::translate("CalculatorClass", "9", nullptr));
        btn_multi->setText(QApplication::translate("CalculatorClass", "*", nullptr));
        btn_num4->setText(QApplication::translate("CalculatorClass", "4", nullptr));
        btn_num5->setText(QApplication::translate("CalculatorClass", "5", nullptr));
        btn_num6->setText(QApplication::translate("CalculatorClass", "6", nullptr));
        btn_sub->setText(QApplication::translate("CalculatorClass", "-", nullptr));
        btn_num1->setText(QApplication::translate("CalculatorClass", "1", nullptr));
        btn_num2->setText(QApplication::translate("CalculatorClass", "2", nullptr));
        btn_num3->setText(QApplication::translate("CalculatorClass", "3", nullptr));
        btn_add->setText(QApplication::translate("CalculatorClass", "+", nullptr));
        btn_numSign->setText(QApplication::translate("CalculatorClass", "+/-", nullptr));
        btn_num0->setText(QApplication::translate("CalculatorClass", "0", nullptr));
        btn_numDot->setText(QApplication::translate("CalculatorClass", ".", nullptr));
        btn_equal->setText(QApplication::translate("CalculatorClass", "=", nullptr));
        exp_lineEdit->setText(QApplication::translate("CalculatorClass", "0", nullptr));
        lineEdit->setText(QApplication::translate("CalculatorClass", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorClass: public Ui_CalculatorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
