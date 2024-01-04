#include "QApplication"
#include "QLabel"


int main(int agrc, char* agrv[]){
    QApplication app(agrc, agrv);
    QLabel* label = new QLabel("<h2>Hello <font color=red><i>World</i></font> </h2>");
    label->show();

    return app.exec();
}
