#ifndef MYLABEL_H
#define MYLABEL_H
#include<QLabel>
#include<QDebug>
class MyLabel : public QLabel
{
public:
    MyLabel(QWidget *parent=0);
    ~MyLabel();
};

#endif // MYLABEL_H
