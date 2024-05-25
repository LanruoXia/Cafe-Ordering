#include "databaseconnection.h"
#include "ui_databaseconnection.h"

databaseConnection::databaseConnection(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::databaseConnection)
{
    ui->setupUi(this);
    // this->setWindowFlags(Qt::Window|Qt::WindowMinimizeButtonHint|Qt::WindowMaximizeButtonHint);
}

databaseConnection::~databaseConnection()
{
    delete ui;
}

void databaseConnection::setDatabase(MainWindow *main, QSqlDatabase *db)
{
    this->currentDB = db;
    this->mainWindow = main;
}

void databaseConnection::on_btnConnect_clicked()
{
    QString Host = ui->editHost->text();
    QString Port = ui->editPort->text();
    QString Source = ui->editSource->text();
    QString User = ui->editUser->text();
    QString Password = ui->EditPassword->text();
    connect(this, &databaseConnection::mySignal, this->mainWindow, &MainWindow::setMainInfo);
    connect(this, &databaseConnection::errorSignal, this->mainWindow, &MainWindow::setMainInfo);
    if(!createNewConnection(*currentDB, Host, Port, Source, User, Password)){
        QMessageBox msgBox;
        msgBox.setText("Failed to connect to the database. Please try again!");
        msgBox.exec();
        emit this->errorSignal(1);

    }else{
        this->close();
        QMessageBox msgBox;
        msgBox.setText("Successfully connected to database with data source: " + Source);
        msgBox.exec();
        emit this->mySignal(1);

    }
}

