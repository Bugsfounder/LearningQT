#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTreeWidget>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

    void AddRoot(QString name, QString Description);
    void AddChild(QTreeWidgetItem *parent, QString name, QString description);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
