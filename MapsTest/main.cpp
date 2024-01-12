#include <QCoreApplication>
#include <QDebug>
#include <QMap>
#include <QMapIterator>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QMap<int, QString> mMap;

    mMap.insert(1, "Bob");
    mMap.insert(2, "Chad");
    mMap.insert(3, "Mary");

    foreach(int i, mMap.keys())
    {
        qDebug() << mMap[i];
    }

    // iterating over map
    QMapIterator<int, QString> Iter(mMap);

    while(Iter.hasNext()){
        Iter.next();
        qDebug() << Iter.key() << " = " << Iter.value();
    }

    return a.exec();
}
