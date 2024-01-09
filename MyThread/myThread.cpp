#include "myThread.h"
#include <QtCore>
#include <QDebug>

mythread::mythread() {

}

void mythread::run(){

    qDebug()<< this->currentThreadId()<<"running";

    QMutex mutex;

    for (int i = 0; i<1000000; i++)
    {
        mutex.lock();
        if (this->Stop){
            break;
        }
        mutex.unlock();

        qDebug()<< this->name<<i;
    }

}
