#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include<QString>
#include <QMainWindow>
#include<qdebug>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
    void Comeon(QString &);//信号不能也不用实现
    void Comeon2();//测试信号与槽多对一
    void Comeon3();
    void Comeon4();
    void Comeon5();

private slots:
    void on_whBtn_clicked();

    void on_zgBtn_clicked();

    void on_sjBtn_clicked();//自动连接 on_对象名_信号名

    void ComeonGuys(QString &);

    void ComeonChina(QString &);

    void ComeonHuaxia();

    void ComeonPeople();

    void on_closeSingle_clicked();

    void on_closeSingleSAll_clicked();

    void on_closeSingleSAlls_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
