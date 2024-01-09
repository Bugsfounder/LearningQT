#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class MyThread : public QThread
{
    Q_OBJECT
public:
    MyThread();
    void run();
    bool Stop ;

signals:
    void NumberChanged(int);
};

#endif // MYTHREAD_H
