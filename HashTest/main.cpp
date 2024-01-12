#include <QCoreApplication>
#include <QDebug>
#include <QHash>
#include <QHashIterator>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QHash <int, QString> Employee;

    Employee.insert(1, "Bob");
    Employee.insert(2, "Mary");
    Employee.insert(3, "Chad");

    qDebug() << "3 = " << Employee.value(3);

    foreach(int key, Employee.keys()){
        qDebug() << Employee[key];
    }

    QHashIterator<int, QString> Iter(Employee);

    while(Iter.hasNext()){
        Iter.next();
        qDebug() << Iter.key() << " = " << Iter.value();
    }

    return a.exec();
}
