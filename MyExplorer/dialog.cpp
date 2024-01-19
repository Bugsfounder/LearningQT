#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);

    QString sPath = "/home";

    dirModel = new QFileSystemModel(this);
    dirModel->setRootPath(sPath);
    dirModel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);

    ui->treeView->setModel(dirModel);

    // file
    fileModel = new QFileSystemModel(this);
    fileModel->setRootPath(sPath);
    dirModel->setFilter(QDir::NoDotAndDotDot | QDir::Files);

    ui->listView->setModel(fileModel);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_treeView_clicked(const QModelIndex &index)
{
    QString sPath = dirModel->fileInfo(index).absoluteFilePath();
    ui->listView->setRootIndex(fileModel->setRootPath(sPath));
}

