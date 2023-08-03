#include "mylabel.h"


MyLabel::MyLabel(QWidget *parent):QLabel(parent)//parent不能有括号。 是parent非parent()
{
    qDebug()<<"MyLabel构造"<<this;
}

MyLabel::~MyLabel()
{
     qDebug()<<"MyLabel析构"<<this;
}
