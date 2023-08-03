#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(this,SIGNAL(Comeon(QString&)),this,SLOT(ComeonGuys(QString&)));
    //connect(this,&MainWindow::Comeon,this ,&MainWindow::ComeonGuys);
    //connect(this,SIGNAL(Comeon(QString&)),this,SLOT(ComeonChina()));
    connect(this,SIGNAL(Comeon(QString&)),this,SLOT(ComeonChina(QString&)));
    //connect(this,SIGNAL(Comeon(QString&)),this,SLOT(ComeonHuaxia(QString&)));

    connect(this,SIGNAL(Comeon2()),this,SLOT(ComeonHuaxia()));
    connect(this,SIGNAL(Comeon3()),this,SLOT(ComeonHuaxia()));
    connect(this,SIGNAL(Comeon4()),this,SLOT(ComeonHuaxia()));
    connect(this,SIGNAL(Comeon(QString&)),this,SIGNAL(Comeon2()));
    connect(this,SIGNAL(Comeon2()),this,SLOT(ComeonPeople()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_whBtn_clicked()
{
    QString str="武汉加油";
    emit Comeon(str);

}

void MainWindow::on_zgBtn_clicked()
{
    QString str="中国加油";
    emit Comeon(str);
}

void MainWindow::on_sjBtn_clicked()
{
    QString str="世界加油";
    emit Comeon(str);
    emit Comeon2();
    emit Comeon3();
    emit Comeon4();
}

void MainWindow::ComeonGuys(QString&str)
{
    qDebug()<<str;
}

void MainWindow::ComeonChina(QString&str)
{
    qDebug()<<"大中国加油";
}

void MainWindow::ComeonHuaxia()
{
    qDebug()<<"华夏子孙加油";
}

void MainWindow::ComeonPeople()
{
    qDebug()<<"人类加油";
}

void MainWindow::on_closeSingle_clicked()
{
    //comeon--/--comegays 断开comeon与 comegays
    disconnect(this,SIGNAL(Comeon(QString&)),this,SLOT(ComeonGuys(QString&)));
    qDebug()<<"断开comeon 和comegays";
}

void MainWindow::on_closeSingleSAll_clicked()
{
    disconnect(this,SIGNAL(Comeon(QString&)),0,0);//断开该（comeon）信号连接的所有槽
    qDebug()<<"断开该（comeon）信号连接的所有槽";

}

void MainWindow::on_closeSingleSAlls_clicked()
{
    disconnect(this,0,this,0);//断开指定对象this的所有信号和槽连接
    qDebug()<<"断开指定对象this的所有信号和槽连接";
    //disconnect(this,0,0,0);断开this所有相关的对象的槽相应
}
