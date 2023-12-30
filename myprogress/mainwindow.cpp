#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->progressBar->setValue (0);
    connect (ui->horizontalSlider,SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));

    ui->progressBar_2->setValue (0);
    connect (ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar_2, SLOT(setValue(int)));

    disconnect (ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->progressBar, SLOT(setValue(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}
