#include "QApplication"
#include "QPushButton"
#include "QHBoxLayout"
#include "QVBoxLayout"

int main(int agrc, char* agrv[]){
    QApplication app(agrc, agrv);

    QWidget *window = new QWidget();
    window->setWindowTitle("My App");

    // creating buttons
    QPushButton *button1 = new QPushButton("one");
    QPushButton *button2 = new QPushButton("two");
    QPushButton *button3 = new QPushButton("three");

    // layouts
    // QHBoxLayout *hlayout = new QHBoxLayout();
    QVBoxLayout *vlayout = new QVBoxLayout();

    // Horizontal Layout
    // hlayout->addWidget(button1);
    // hlayout->addWidget(button2);
    // hlayout->addWidget(button3);

    // Vertical Layout
    vlayout->addWidget(button1);
    vlayout->addWidget(button2);
    vlayout->addWidget(button3);


    // window->setLayout(hlayout);
    window->setLayout(vlayout);

    window->show();
    return app.exec();
}
