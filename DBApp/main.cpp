#include <QCoreApplication>
#include <QtSql>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase Database;

    Database = QSqlDatabase::addDatabase("QSQLITE");
    Database.setDatabaseName("./test.db");

    if (!Database.open())
    {
        qDebug() << "Error = " << Database.lastError().text();
    }
    else{

        qDebug() << "connected to data base successcull";
        Database.close();
    }

    return a.exec();
}
