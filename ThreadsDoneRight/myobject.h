#ifndef MYOBJECT_H
#define MYOBJECT_H
#include <QThread>
#include <QDebug>

class MyObject : public QObject
{
    Q_OBJECT
public:
    explicit MyObject(QObject *parent = nullptr);
    void DoSetup(QThread &cThread);
signals:

public slots:
    void DoWork();
};

#endif // MYOBJECT_H
