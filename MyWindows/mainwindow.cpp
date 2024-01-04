#include "mainwindow.h"
#include "ui_mainwindow.h"
// #include "mydialog.h" # for Modal dialog

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setCentralWidget (ui->plainTextEdit);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_Window_triggered()
{

    /*
     * Modal dialog
     *
     * include the .h file of the dialog

     * using t his way the main window is not accesseble until the dialog is active

        MyDialog mDialog;
        mDialog.setModal(true);
        mDialog.exec();
     */


    /*
     * Modeless dialog
     *
     * make a pointer of the dialog in the mainwindow.h file `MyDialog *mDialog;` ,
     * don't forget to include the .h file of the dialog 😁
     *
     * we can interact with main window and dialog also
     * we can make multiple dialog also
    */
    mDialog = new MyDialog(this);
    mDialog->show();

}

