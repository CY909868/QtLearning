#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H
#include<QPushButton>
#include<QLabel>
class MyPushbutton : public QPushButton
{
public:
    MyPushbutton(QWidget *parent=0);
    ~MyPushbutton();
};

#endif // MYPUSHBUTTON_H
