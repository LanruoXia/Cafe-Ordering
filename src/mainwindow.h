#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "admin.h"
#include "customer.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setMainInfo();
    void setError();

private slots:
    void on_btnLogin_clicked();

    void on_btnSignUp_clicked();

    void onLogOutAdmin();

private:
    Ui::MainWindow *ui;
    QString status = "Disconnected";
    Admin *admin;
    Customer *customer;
};
#endif // MAINWINDOW_H
