#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(QString mask READ mask WRITE setMask NOTIFY maskChanged)//动态属性

public:
    explicit Widget(QWidget *parent = 0);
    QString mask() const;
    void setMask(QString strMaskNum);

    ~Widget();

public slots:
//void  ();

signals:

    void maskChanged(QString str);
private:
    Ui::Widget *ui;
private:
    QString m_mask;
};

#endif // WIDGET_H
