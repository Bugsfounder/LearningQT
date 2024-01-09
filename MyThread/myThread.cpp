#include "myThread.h"
#include <QtCore>
#include <QDebug>

mythread::mythread() {

}

void mythread::run(){

    // qDebug()<< this->currentThreadId()<<"running";


    for (int i = 0; i<1000000; i++)
    {
        qDebug()<< this->name<<i;
    }

}
