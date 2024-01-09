#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_info_clicked()
{
    QMessageBox::information(this, "Title Here", "Message Here");
}


void MainWindow::on_warning_clicked()
{
    QMessageBox::warning(this, "Title Here", "Warning Message here");
}

void MainWindow::on_question_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Title Here", "Do You Like Coding?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Ok){
        QMessageBox::information(this, "Title Here", "You Love Coding!");
    }else{
        QMessageBox::information(this, "Title Here", "You Don't Like Coding!");
    }
}

void MainWindow::on_custom_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "MyTitle", "My Text Here", QMessageBox::YesToAll | QMessageBox::Yes|QMessageBox::No|QMessageBox::NoToAll);
}
