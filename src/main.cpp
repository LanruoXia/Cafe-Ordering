#include "mainwindow.h"
#include "connection.h"
#include "databaseconnection.h"
#include <QFile>
#include <QApplication>
#include <QSqlQuery>
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QSqlDatabase db;
    databaseConnection conn;
    MainWindow w;
    w.show();
    conn.show();
    conn.setDatabase(&w, &db);
    return a.exec();

}
