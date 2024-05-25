#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H
#include <QFile>
#include <QApplication>
#include <QSqlQuery>
#include <QtWidgets/QApplication>
#include <QWidget>

#include "connection.h"
#include "mainwindow.h"

namespace Ui {
class databaseConnection;
}

class databaseConnection : public QWidget
{
    Q_OBJECT

public:
    explicit databaseConnection(QWidget *parent = nullptr);
    ~databaseConnection();
    void setDatabase(MainWindow *main, QSqlDatabase *db);
signals:
    void mySignal(int);
    void errorSignal(int);

private slots:
    void on_btnConnect_clicked();
private:
    Ui::databaseConnection *ui;
    QSqlDatabase *currentDB;
    MainWindow *mainWindow;

};

#endif // DATABASECONNECTION_H
