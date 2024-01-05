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

    for (int i = 0; i<9; i++){
        ui->listWidget->addItem(QString::number(i)+" item");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{

    QListWidgetItem *item = ui->listWidget->currentItem();
    item->setText("Fuzzy bunny of dooms");

    item->setForeground(Qt::red);
    item->setBackground(Qt::black);




}

