#include "registration.h"
#include "ui_registration.h"

#include <QMessageBox>
#include <QSqlQuery>
#include <QDebug>

registration::registration(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::registration)
{
    ui->setupUi(this);
    this->setWindowTitle("Saint-Eagle Cafe");
}

registration::~registration()
{
    delete ui;
}

void registration::on_btnRegister_clicked() // handle registration(sign up)
{
    QString username = ui->editNewUser->text();
    QString password = ui->editNewPass->text();
    QString confirm = ui->editConfirm->text();
    QString gender = ui->editGender->text();
    QMessageBox msgBox;

    if(username == "" || username.contains(" ")){
        msgBox.setText("Username cannot be empty or contain any space");
        msgBox.exec();
        return;
    }
    QSqlQuery query;
    QString qs = QString("select * from management.accounts where username = '%1'").arg(username);
    query.exec(qs);
    // check duplicated username
    if(query.next()){
        msgBox.setText("This username already exists. Please fill in another one.");
        msgBox.exec();
        return;
    }
    // check confirmed password
    if(confirm != password){
        msgBox.setText("Confirmed password does not match the password");
        msgBox.exec();
        return;
    }
    query.prepare("insert into accounts(username, password, phone) values(?, ?, ?);");
    query.addBindValue(username);
    query.addBindValue(password);
    query.addBindValue(gender);


    // qs = QString("insert into accounts(username,password,phone)values('Zhaomin','4321','male')");
    if(query.exec()){
        qDebug() << username + " was added to the database.";
        msgBox.setText("You're signed up successfully!");
        msgBox.exec();
        this->close();

    }

}

