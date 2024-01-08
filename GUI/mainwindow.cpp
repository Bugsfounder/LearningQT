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

    ui->treeWidget->setColumnCount(2);
    // ui->treeWidget->setHeaderLabel("col a"); // can set one header
    ui->treeWidget->setHeaderLabels(QStringList() <<"one"<<"two"); // setting headers

    AddRoot("Hello", "World");
    AddRoot("Hello", "World");
    AddRoot("Hello", "World");
    AddRoot("Hello", "World");

}

void MainWindow::AddRoot(QString name, QString description){

    QTreeWidgetItem *item = new  QTreeWidgetItem(ui->treeWidget);
    item->setText(0, name);
    item->setText(1, description);
    // ui->treeWidget->addTopLevelItem(item);

    AddChild(item, name, description);
    AddChild(item, name, description);
    AddChild(item, name, description);
}

void MainWindow::AddChild(QTreeWidgetItem *parent, QString name, QString description){
    QTreeWidgetItem *item = new QTreeWidgetItem();

    item->setText(0, name);
    item->setText(1, description);
    parent->addChild(item);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    ui->treeWidget->currentItem()->setBackground(0, Qt::red);
    ui->treeWidget->currentItem()->setBackground(1, Qt::blue);

}

