#pragma once

#include <QtWidgets/QWidget>
#include "ui_calculator.h"
#include<QVector>

QT_BEGIN_NAMESPACE
namespace Ui { class CalculatorClass; };
QT_END_NAMESPACE

class Calculator : public QWidget
{
    Q_OBJECT

public:
    Calculator(QWidget *parent = nullptr);
    ~Calculator();
    void iniUI();
public slots:
    void onButtonGroupClicked(QAbstractButton*btn);
private:
    Ui::CalculatorClass *ui;
    QVector<QVariant>  vec;
    QString prevBtn;
};
