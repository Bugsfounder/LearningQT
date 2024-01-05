#include <QCoreApplication>
#include <QDebug>
#include <QFile>
#include <QString>
#include <QTextStream>

void Read(QString filename) {

    QFile mFile(filename);

    if (!mFile.open(QFile::ReadOnly| QFile::Text)){
        qDebug()<< "Could not open file for reading";
        return ;
    }

    QTextStream in(&mFile);
    QString mText = in.readAll();
    qDebug() << mText;

    mFile.close();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    Read(":/MyFiles/Files.pro");

    return a.exec();
}
