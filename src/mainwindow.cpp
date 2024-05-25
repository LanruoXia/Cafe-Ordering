#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "registration.h"
#include "admin.h"
#include "customer.h"

#include <QSqlQuery>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->mainInfo->setVisible(true);
    this->setWindowTitle("Saint-Eagle Cafe");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setMainInfo()
{
    ui->mainInfo->setText("Connected to database");
    this->status = "Connected";
}

void MainWindow::setError()
{
    ui->mainInfo->setText("Not connected to database");
    this->status = "Disconnected";
}

QString username, password;

void MainWindow::on_btnLogin_clicked() // event handler for login button
{

    if(status != "Connected"){
        QMessageBox msgBox;
        msgBox.setText("No connection to the database.");
        msgBox.exec();
        return;
    }
    username = ui->editUsername->text();
    password = ui->editPassword->text();

    if(!ui->checkStaff->isChecked()){
        QSqlQuery query;
        QString qs = QString("select * from management.accounts where username = '%1' and password='%2'").arg(username).arg(password);
        query.exec(qs);
        if(!query.next()){
            QMessageBox msgBox;
            msgBox.setText("Invalid username or password. Please try again!");
            msgBox.exec();
        }else{
            qDebug()<<"login successfully";
            this->hide();
            Customer* customer_window = new Customer;
            customer_window->setAttribute(Qt::WA_DeleteOnClose);
            connect(customer_window, &Customer::logOut, this, &MainWindow::show);
            customer_window->setCustomerTag(username);
            customer_window->show();
        }

    }else{// login as a staff
        QSqlQuery query;
        QString qs = QString("select * from management.staff where staff_id = '%1' and password='%2'").arg(username).arg(password);
        query.exec(qs);
        if(!query.next()){
            QMessageBox msgBox;
            msgBox.setText("Invalid staff id or password. Please try again!");
            msgBox.exec();
        }else{
            qDebug()<<"login successfully as staff";
            Admin* admin_window = new Admin();
            admin_window->setAttribute(Qt::WA_DeleteOnClose);
            connect(admin_window, &Admin::logOut, this, &MainWindow::show);
            admin_window->setAdminTag(username);
            this->hide();
            admin_window->show();
        }
    }


}



void MainWindow::on_btnSignUp_clicked()
{
    if(status != "Connected"){
        QMessageBox msgBox;
        msgBox.setText("No connection to the database.");
        msgBox.exec();
        return;
    }
    registration* reg_form = new registration(); // should be deleted later
    reg_form->show();
}

void MainWindow::onLogOutAdmin()
{
    this->show();
    this->admin->close();
    // this->customer->close();

}

