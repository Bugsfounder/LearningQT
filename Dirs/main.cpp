#include <QCoreApplication>
#include <QDebug>
#include<QDir>
#include <QFileInfo>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDir mDir("/home/bugs");
    qDebug()<<mDir.exists();

    QDir mDir;

    foreach(QFileInfo mItm, mDir.drives()){
        qDebug() <<mItm.absoluteFilePath();
    }

    QString mPath = "/home/bugs/zzzz";
    if(!mDir.exists(mPath)){
        qDebug() << "Creating file";
        mDir.mkpath(mPath);
        mDir.mkdir(mPath+"1");
    }
    else{
        qDebug()<<"File already exists";
    }


    QDir mDir2("/home/bugs/workspace/");

    foreach(QFileInfo mFile, mDir2.entryInfoList()){

        qDebug()<<mFile.absoluteFilePath();
        qDebug()<<mFile.absoluteDir();

        if (mFile.isDir()) qDebug()<<"Dirs: " << mFile.absoluteFilePath();
        if (mFile.isFile()) qDebug() <<"Files: " <<mFile.absoluteFilePath();

    }


    return a.exec();
}
