#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QString>
#include <QTextStream>

void write(QString filename){

    QFile mFile(filename);
    if (!mFile.open(QFile::WriteOnly | QFile::Text)){
        qDebug()<<"Could not open file for writing";
        return;
    }

    QTextStream out(&mFile);
    out << "Hello Manisha";

    mFile.close();
    mFile.flush();

    qDebug() <<"Writting completed";


}

void read(QString filename) {

    QFile mFile(filename);

    if (!mFile.open(QFile::ReadOnly| QFile::Text)){
        qDebug()<< "Could not open file for reading";
        return ;
    }

    QTextStream in(&mFile);
    QString mText = in.readAll();
    qDebug() << "reading completed\n"<< "Content: "<<mText;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString filename = "/home/bugs/workspace/file.txt";

    write(filename);
    read(filename);

    return a.exec();
}
