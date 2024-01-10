#include <QCoreApplication>
#include <QDebug>
#include <QList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<int> List;

    for (int i = 0; i<10;i++){
        List.append(i);
    }

    QListIterator<int> Iter(List);

    // iterating lowest to highest
    while(Iter.hasNext()){
        qDebug() << Iter.next();

        // know the next output before printing
        if (Iter.hasNext()){
            qDebug() << "next..."<<  Iter.peekNext();
        }
    }

    // iterating highest to lowest
    Iter.toBack(); // there is also a function called .toFront()
    while(Iter.hasPrevious()){
        qDebug() << Iter.previous();

        // know the next output before printing
        if (Iter.hasPrevious()){
            qDebug() << "next..."<<  Iter.peekPrevious();
        }
    }
    return a.exec();
}
