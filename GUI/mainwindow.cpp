#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{

    if(ui->checkBox->isChecked()){

        QMessageBox :: information(this, "Title","You like cats");

    }else{
        QMessageBox::information(this, "Title", "You don't like cats");
    }


}

