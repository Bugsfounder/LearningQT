#include <QCoreApplication>
#include <QDebug>
#include <QStringList>
#include <QVector>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringList List;

    List << "a" << "b" << "c";

    // qCopy is depricated
    // QVector<QString> Vect(3);
    // qCopy(List.begin(), List.end(), Vect.begin(), Vect.end());

    // updated way to do this
    QVector<QString> Vect(List.begin(), List.end());
    foreach(QString item, Vect){
        qDebug() << item;
    }

    return a.exec();
}
