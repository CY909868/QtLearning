#ifndef MYRADIOBUTTON_H
#define MYRADIOBUTTON_H
#include<QRadioButton>
#include<QDebug>
class MyRadioButton : public QRadioButton
{
public:
    MyRadioButton(QWidget *praent=0);
    ~MyRadioButton();
};

#endif // MYRADIOBUTTON_H
