#include "mythread.h"
#include <QtCore>
#include <QDebug>
MyThread::MyThread() {}


void MyThread::run(){
    for(int i = 0; i<10000;i++){

        QMutexLocker locl(&mutex);
        if (this->Stop) {break;}

        emit NumberChanged(i);
        this->msleep(100);
    }
}
