/********************************************************************************
** Form generated from reading UI file 'databaseconnection.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASECONNECTION_H
#define UI_DATABASECONNECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_databaseConnection
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *editHost;
    QLineEdit *editPort;
    QLineEdit *editSource;
    QLineEdit *editUser;
    QLineEdit *EditPassword;
    QPushButton *btnConnect;

    void setupUi(QWidget *databaseConnection)
    {
        if (databaseConnection->objectName().isEmpty())
            databaseConnection->setObjectName("databaseConnection");
        databaseConnection->resize(356, 300);
        label = new QLabel(databaseConnection);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 10, 181, 16));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(databaseConnection);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 60, 91, 16));
        label_3 = new QLabel(databaseConnection);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 90, 91, 16));
        label_4 = new QLabel(databaseConnection);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 120, 111, 16));
        label_5 = new QLabel(databaseConnection);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 150, 111, 16));
        label_6 = new QLabel(databaseConnection);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 180, 111, 16));
        editHost = new QLineEdit(databaseConnection);
        editHost->setObjectName("editHost");
        editHost->setGeometry(QRect(150, 60, 141, 21));
        editPort = new QLineEdit(databaseConnection);
        editPort->setObjectName("editPort");
        editPort->setGeometry(QRect(150, 90, 141, 21));
        editSource = new QLineEdit(databaseConnection);
        editSource->setObjectName("editSource");
        editSource->setGeometry(QRect(150, 120, 141, 21));
        editUser = new QLineEdit(databaseConnection);
        editUser->setObjectName("editUser");
        editUser->setGeometry(QRect(150, 150, 141, 21));
        EditPassword = new QLineEdit(databaseConnection);
        EditPassword->setObjectName("EditPassword");
        EditPassword->setGeometry(QRect(150, 180, 141, 21));
        EditPassword->setEchoMode(QLineEdit::Password);
        btnConnect = new QPushButton(databaseConnection);
        btnConnect->setObjectName("btnConnect");
        btnConnect->setGeometry(QRect(40, 230, 251, 23));

        retranslateUi(databaseConnection);

        QMetaObject::connectSlotsByName(databaseConnection);
    } // setupUi

    void retranslateUi(QWidget *databaseConnection)
    {
        databaseConnection->setWindowTitle(QCoreApplication::translate("databaseConnection", "Form", nullptr));
        label->setText(QCoreApplication::translate("databaseConnection", "Connect to Database", nullptr));
        label_2->setText(QCoreApplication::translate("databaseConnection", "Host Name", nullptr));
        label_3->setText(QCoreApplication::translate("databaseConnection", "Port", nullptr));
        label_4->setText(QCoreApplication::translate("databaseConnection", "Data Source Name", nullptr));
        label_5->setText(QCoreApplication::translate("databaseConnection", "User", nullptr));
        label_6->setText(QCoreApplication::translate("databaseConnection", "Password", nullptr));
        editHost->setText(QCoreApplication::translate("databaseConnection", "127.0.0.1", nullptr));
        editPort->setText(QCoreApplication::translate("databaseConnection", "3306", nullptr));
        btnConnect->setText(QCoreApplication::translate("databaseConnection", "Connect", nullptr));
    } // retranslateUi

};

namespace Ui {
    class databaseConnection: public Ui_databaseConnection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASECONNECTION_H
