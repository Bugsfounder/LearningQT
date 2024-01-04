#include "dialog.h"
#include "ui_dialog.h"
#include "QDebug"
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{`5
    qDebug() <<"Button Clicked";
}

