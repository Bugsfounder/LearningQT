#include <QCoreApplication>
#include "mytimer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // MyTimer * timer = new MyTimer();

    MyTimer  timer;

    return a.exec();
}
