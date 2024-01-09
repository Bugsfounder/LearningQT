#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    mThread = new MyThread();

    connect(mThread, SIGNAL(NumberChanged(int)), this, SLOT(onNumberChanged(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onNumberChanged(int Number){
    ui->label->setText(QString::number(Number));
}

void MainWindow::on_pushButton_clicked()
{
    // started
    mThread->start();
}


void MainWindow::on_pushButton_2_clicked()
{
    // stoppped
    mThread->Stop = true;
}

