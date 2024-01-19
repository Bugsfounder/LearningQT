#include "dialog.h"
#include "ui_dialog.h"
#include <QInputDialog>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    model = new QFileSystemModel(this);

    model->setReadOnly(false);
    model->setRootPath("/");
    ui->treeView->setModel(model);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    bool ok;
    QString name = QInputDialog::getText(nullptr, "Enter Folder Name", "Enter Folder Name:", QLineEdit::Normal, "", &ok);

    // Check if the user clicked "OK" and entered a valid string
    if (ok && !name.isEmpty()) {
        QModelIndex newIndex = model->mkdir(ui->treeView->currentIndex(), name);
        qDebug() << "Entered text: " << name;
        ui->treeView->setCurrentIndex(newIndex);
    } else {
        qDebug() << "Operation canceled.";
    }
}

void Dialog::on_pushButton_2_clicked()
{
    model->rmdir(ui->treeView->currentIndex());
}

void Dialog::on_pushButton_3_clicked()
{
    close();
}

