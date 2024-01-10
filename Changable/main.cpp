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

    QMutableListIterator Iter(List); // changable <-> Mutable

    // want to delete an item from the list
    while(Iter.hasNext()){
        // deleting 5 from list
        int i = Iter.next();

        if (i==5){
            Iter.remove();
        }
    }

    Iter.toFront();
    while(Iter.hasNext()){
        qDebug() << Iter.next();
    }
    return a.exec();
}
