#include <QCoreApplication>
#include <QList>
#include <algorithm>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> list;

    list << 2 << 3 << 1 << 0;

    // std::sort(list.begin(), list.end());

    std::sort(list.begin()+1, list.end()-1);
    foreach(int item, list){
        qDebug() << item;
    }

    return a.exec();
}
