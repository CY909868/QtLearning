#include "mypushbutton.h"
#include<QDebug>
#include<mylabel.h>
#include<QLabel>
#include<QWidget>
MyPushbutton::MyPushbutton(QWidget *parent):QPushButton(parent)
{
    qDebug()<<"MyPushbutton构造函数"<<this;
}

MyPushbutton::~MyPushbutton()
{
    qDebug()<<"MyPushbutton析构函数"<<this;
}
//MyLabel::MyLabel(QWidget *parent):QLabel(parent)//parent不能有括号。 是parent非parent()
//{
//    qDebug()<<"MyLabel构造";
//}

//MyLabel::~MyLabel()
//{
//     qDebug()<<"MyLabel析构";
//}
