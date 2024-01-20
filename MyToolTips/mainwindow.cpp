#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->pushButton->setToolTip("Hello <font color='red'><b>World</b></font>"
                               "<ul>"
                               "<li>bugs</li>"
                               "<li>jocefyne</li>"
                               "<li>pyro</li>"
                               "</ul>");

    ui->pushButton_2->setToolTip("<img src=':/images/stop.png' style='height:10px;width:10px;' />");
}

MainWindow::~MainWindow()
{
    delete ui;
}
