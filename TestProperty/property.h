#ifndef PROPERTY_H
#define PROPERTY_H

#include <QObject>

//class Property
//{
//public:
//    Property();
//};

class PropertyClass : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(QString mask READ mask WRITE setMask NOTIFY maskChanged)//动态属性

public:
    explicit PropertyClass(QObject *parent = nullptr);
    QString mask() const;
    void setMask(QString strMaskNum);

public slots:
signals:

    void maskChanged(QString str);
private:
    Ui::Widget *ui;
private:
    QString m_mask;
};
#endif // PROPERTY_H
