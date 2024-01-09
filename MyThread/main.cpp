#include <QCoreApplication>
#include "myThread.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    mythread thread1;
    thread1.name = "thread1";

    mythread thread2;
    thread2.name = "thread2";

    mythread thread3;
    thread3.name = "thread3";

    thread1.start(QThread::HighestPriority);
    thread2.start();
    thread3.start(QThread::LowestPriority);

    return a.exec();
}
