#include <QCoreApplication>
#include <QtSql>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase database;

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("./database.db");


    if (!database.open())
    {
        qDebug() << "Error = " << database.lastError().text();
    }
    else
    {

        QSqlQuery query;
        QStringList tables;
        query.prepare("SELECT * FROM sqlite_master");
        qDebug() << "Connected to Database Successfully!";
        while (query.next())
        {
            qDebug() << "get";
        }

        // if (qry.exec(""))
        // {

        // }
        // else
        // {

        //     qDebug() <<'Closing';
        // }
    }

    return a.exec();
}
