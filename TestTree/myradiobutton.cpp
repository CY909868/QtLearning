#include "myradiobutton.h"
#include<QRadioButton>


MyRadioButton::MyRadioButton(QWidget *parent):QRadioButton(parent)
{
    qDebug()<<"MyRadioButton构造函数"<<this;
}

MyRadioButton::~MyRadioButton()
{
    qDebug()<<"MyRadioButton析构函数"<<this;
}
