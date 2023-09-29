#include "calculator.h"
#include <cstdio>
#include <QButtonGroup>
#include <QDebug>
#include <QString>
#include <QToolButton>
#include <QTextCursor>
#include <QVBoxLayout>
#include<stdio.h>
#include <cmath>
using namespace std;
#define PI acos(-1.0)

Calculator::Calculator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CalculatorClass())
{
    ui->setupUi(this);
    iniUI();
}
double f(double a)
{
    double b = a * PI / 180;
    return b;
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::iniUI()
{
    //找到所有按钮，把所有按钮放到一个组里面
    auto buttonGroup = new QButtonGroup(this);
    auto btnList = findChildren<QPushButton*>();
    for (auto btn : btnList)
    {
        buttonGroup->addButton(btn);

    }//
    connect(buttonGroup, QOverload<QAbstractButton*>::of(&QButtonGroup::buttonClicked), this, &Calculator::onButtonGroupClicked);
    vec.resize(5);
    //qInfo() << "vecSize" << vec.size() << vec.capacity();
}

void Calculator::onButtonGroupClicked(QAbstractButton* btn)
{
    float val = ui-> lineEdit->text().toFloat();
    //输出到控制台，但是没显示出
    //qInfo() << btn ->text();
    QString name = btn->text();
    //如果是数字，直接显示出来

    if (name >= "0" && name <= "9"||name ==".")
    {
        if (ui->lineEdit->text() =="0" && name != ".")
            ui->lineEdit->clear();
        //
        if(prevBtn=="+")
        {
            ui->lineEdit->clear();
        }
        if (prevBtn == "-")
        {
            ui->lineEdit->clear();
        }
        if (prevBtn == "*")
        {
            ui->lineEdit->clear();
        }
        if (prevBtn == "/")
        {
            ui->lineEdit->clear();
        }
        if (prevBtn == "%")
        {
            ui->lineEdit->clear();
        }
        ui->lineEdit->insert(name);
    }
    
    else if (name == "sin")
    {
        ui->lineEdit->clear();
        vec[0] = val;
        vec[1] == "sin";
        vec[2] == 0;
    }//暂未实现三角函数
    //
    else if (name == "+")
    {
        {
            vec[0] = val;
            vec[1] = "+";
        }
    }
    else if (name == "-")
    {
        if (vec[2].isNull())
        {
            vec[0] = val;
            vec[1] = "-";
        }
    }
    else if (name == "*")
    {
        if (vec[2].isNull())
        {
            vec[0] = val;
            vec[1] = "*";
        }
    }
    else if (name == "/")
    {
        if (vec[2].isNull())
        {
            vec[0] = val;
            vec[1] = "/";
        }
    }
    else if (name == "%")
    {
        if (vec[2].isNull())
        {
            vec[0] = val;
            vec[1] = "%";
        }
    }

    //
    else if (name == "=")
    {
        vec[2] = val;
        vec[3] = "=";
        if (vec[1] == "+")
        {
            vec[4] = vec[0].toFloat() + vec[2].toFloat();
        }
        else if (vec[1] == "-")
        {
            vec[4] = vec[0].toFloat() - vec[2].toFloat();
        }
        else if (vec[1] == "*")
        {
            vec[4] = vec[0].toFloat() * vec[2].toFloat();
        }
        else if (vec[1] == "/")
        {
            vec[4] = vec[0].toFloat() / vec[2].toFloat();
        }
        else if (vec[1] == "%")
        {
            vec[4] = vec[0].toInt() % vec[2].toInt();
        }
        else if (vec[1] == "sin")
        {
            vec[4] = sin(f(vec[0].toDouble()));
        }
        ui->lineEdit->setText(vec[4].toString());
    }

    //
    else if (name == "C")
    {
        vec.clear();	    // 调用 clear清理 vector之后 把size设置成0，capacity不变。不会释放vector内存
        vec.resize(5);		// 重新设置vector的大小
        ui->lineEdit->clear(); 
        ui->exp_lineEdit->clear(); 
    }
    else if (name == "CE")
    {
        ui->lineEdit->clear();
    }
    else if (name == "Del")
    {
        ui->lineEdit->setCursorPosition(ui->lineEdit->cursorPosition()-1);
        ui->lineEdit->del();
    }

    //显示表达式
    ui->exp_lineEdit->clear();
    for (auto var : vec)
    {
        qInfo() << var.toString();
        ui->exp_lineEdit->insert(var.toString());
    }
    prevBtn = name;

}
