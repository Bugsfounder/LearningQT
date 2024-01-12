#include <QCoreApplication>
#include <QDebug>
#include <QStringList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QStringList List;

    List.append("bugs");

    QString Line = "a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z";

    List = Line.split(',');

    QString After = List.join(",");
    qDebug() << After;

    foreach(QString item, List){
        qDebug() << item;
    }

    return a.exec();
}
