#include <QCoreApplication>
#include <QDebug>
#include <QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> list;

    list << 1 << 2 << 3;

    foreach(int number, list){
        qDebug()<<number;
    }
    return a.exec();
}
