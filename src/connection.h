#ifndef CONNECTION_H
#define CONNECTION_H


#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>
#include <qsqlquery.h>
#include <qmessagebox.h>
#include <QSqlDriver>


static bool createNewConnection(QSqlDatabase & db, QString &HostName, QString &Port,
                                QString &ConnectionName, QString &UserName, QString& Password){
    //QTextCodec::setCodecForTr(QTextCodec::codecForLocale());

    int portId = Port.toInt();
    db = QSqlDatabase::addDatabase("QODBC");

    db.setHostName(HostName);
    db.setPort(portId);
    db.setDatabaseName(ConnectionName);
    db.setUserName(UserName);
    db.setPassword(Password);
    if(db.open()){
        qDebug()<<"Successfully connected to database through ODBC";

        return true;
    }else{

        // qCritical("Can't open database: %s(%s)",
        //           db.lastError().text().toLocal8Bit().data(),
        //           qt_error_string().toLocal8Bit().data());
        qDebug()<<"error: cannot open database because"<<db.lastError().text();
        return false;
    }
}


static bool createConnection(QSqlDatabase & db){ // run in main.cpp
    //QTextCodec::setCodecForTr(QTextCodec::codecForLocale());

    db = QSqlDatabase::addDatabase("QODBC");

    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("qtConnection");
    db.setUserName("root");
    db.setPassword("");
    if(db.open()){
        qDebug()<<"Successfully connected to database through ODBC";

        return true;
    }else{

        // qCritical("Can't open database: %s(%s)",
        //           db.lastError().text().toLocal8Bit().data(),
        //           qt_error_string().toLocal8Bit().data());
        qDebug()<<"error: cannot open database because"<<db.lastError().text();
        return false;
    }
}

static bool closeConnection()
{
    QSqlDatabase::database().close();
    return 1;
}

#endif // CONNECTION_H
