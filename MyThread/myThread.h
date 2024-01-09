#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QtCore>

class mythread : public QThread
{
public:
    mythread();
    void run();
    QString name;
    bool Stop;
};

#endif // MYTHREAD_H
