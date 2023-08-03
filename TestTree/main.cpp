#include "widget.h"
#include <QApplication>
#include<QDebug>
#include<QWidget>
#include<QGridLayout>
#include<mylabel.h>
#include<mylayout.h>
#include<mypushbutton.h>
#include<myradiobutton.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    MyLabel *mylablel=new MyLabel(&w);
    MyPushbutton *mypbtn=new MyPushbutton(&w);
    MyRadioButton*myrbtn=new MyRadioButton(&w);
    MyLayout *mylayout=new MyLayout();
    MyLayout *sunlayout=new MyLayout(mylablel);
    MyPushbutton *sunbtn1=new MyPushbutton();
    MyPushbutton *sunbtn2=new MyPushbutton();
    MyPushbutton *sunbtn3=new MyPushbutton();
    sunbtn1->setText("孙按钮1");
    sunbtn2->setText("孙按钮2");
    sunbtn3->setText("孙按钮3");
    sunlayout->addWidget(sunbtn1);
    sunlayout->addWidget(sunbtn2);
    sunlayout->addWidget(sunbtn3);
    mylablel->setLayout(sunlayout);//孙布局布局到标签上面去

    mylablel->setWindowTitle("我的标签窗体");
    mylablel->setText("子标签");
    mypbtn->setText("子按钮");
    myrbtn->setText("子单选");
    //显示
    mylablel->show();
//    mylablel->addAction(mylablel);
//    mylablel->addAction(mypbtn);
//    mylablel->addAction(myrbtn);
    mylayout->addWidget(mylablel,0,0);
    mylayout->addWidget(mypbtn,1,0);
    mylayout->addWidget(myrbtn,2,0);
    w.setLayout(mylayout);
    w.show();
    const QObjectList list=w.children();
    qDebug()<<"w.children():";
    foreach (QObject*obj, list)
    {
        qDebug()<<obj;
    }
    const QObjectList listMylabel=mylablel->children();
    qDebug()<<"mylablel.children():";
    foreach (QObject*obj, listMylabel)
    {
        qDebug()<<obj;
    }
    //手动回收 mylablel作为父对象，他的子对象都会被回收
    mylablel->deleteLater();
    //打印W子对象
    qDebug()<<"w.children():";
    foreach (QObject*obj, list)
    {
        qDebug()<<obj;
    }

    return a.exec();
}
