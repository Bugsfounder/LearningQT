#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    progressBar = new QProgressBar();
    label = new QLabel();

    // hide when another message appears
    // ui->statusbar->addWidget(progressBar);
    // ui->statusbar->addWidget(label);

    // permanet messages
    ui->statusbar->addPermanentWidget(progressBar); // second parameter like:1 which fills entire space of the statusbar for stretch
    ui->statusbar->addPermanentWidget(label);

    progressBar->setTextVisible(false); // true or false for show text of the progressbar

    progressBar->setValue(20);
    label->setText("hello");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionDo_Something_triggered()
{
    // ui->statusbar->showMessage("Hello", 2000); // show for 2 seconds
    ui->statusbar->showMessage("Hello"); // never hide

    progressBar->setValue(45);

}

