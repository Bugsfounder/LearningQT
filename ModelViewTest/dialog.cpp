#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    model = new QStringListModel(this);

    QStringList List;
    List << "Cat" << "Dog" << "Rabbit";

    model->setStringList(List);

    ui->listView->setModel(model); f
    ui->comboBox->setModel(model);

    ui->listView->setEditTriggers(QAbstractItemView::AnyKeyPressed | QAbstractItemView::DoubleClicked);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    // add
    int row = model->rowCount();
    model->insertRow(row);


    QModelIndex  index = model->index(row);

    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);
}


void Dialog::on_pushButton_2_clicked()
{
    // insert
    int row = ui->listView->currentIndex().row();
    model->insertRow(row);

    QModelIndex index = model->index(row);
    ui->listView->setCurrentIndex(index);
    ui->listView->edit(index);
}


void Dialog::on_pushButton_3_clicked()
{
    // delete
    model->removeRows(ui->listView->currentIndex().row(),1);
}

