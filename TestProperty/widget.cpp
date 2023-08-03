#include "widget.h"
#include "ui_widget.h"
#include<property.h>
#include<QDebug>
#include<QString>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    Property *mypc =new Property;
    //mypc
    connect(mypc,SIGNAL(mashChange(QString)),this,SLOT(mashChange(QString)));
}
QString Widget::mask() const
{
    return m_mask;
}

void Widget::setMask(QString strMaskNum)
{
    m_mask=strMaskNum;
    emit maskChanged( strMaskNum  );
}

Widget::~Widget()
{
    delete ui;
}

void Widget::mashChange(QString str)
{
    qDebug()<<"新的口罩库存："<<str;
}
