/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *editUsername;
    QLineEdit *editPassword;
    QPushButton *btnLogin;
    QPushButton *btnSignUp;
    QCheckBox *checkStaff;
    QLabel *mainInfo;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(476, 313);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 70, 80, 20));
        label->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Microsoft YaHei UI\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 130, 80, 20));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Microsoft YaHei UI\";"));
        editUsername = new QLineEdit(centralwidget);
        editUsername->setObjectName("editUsername");
        editUsername->setGeometry(QRect(170, 70, 150, 20));
        editUsername->setAutoFillBackground(false);
        editPassword = new QLineEdit(centralwidget);
        editPassword->setObjectName("editPassword");
        editPassword->setGeometry(QRect(170, 130, 150, 20));
        editPassword->setEchoMode(QLineEdit::Password);
        btnLogin = new QPushButton(centralwidget);
        btnLogin->setObjectName("btnLogin");
        btnLogin->setGeometry(QRect(140, 190, 80, 23));
        btnLogin->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(135, 125, 120);\n"
"        color: #fff;\n"
"        font-size: 9px;\n"
"        font-weight: bold;\n"
"        border-top-right-radius: 0px;\n"
"        border-top-left-radius: 0px;\n"
"        border-bottom-right-radius: 0px;\n"
"        border-bottom-left-radius: 0px;\n"
"        padding: 2px;\n"
"}"));
        btnSignUp = new QPushButton(centralwidget);
        btnSignUp->setObjectName("btnSignUp");
        btnSignUp->setGeometry(QRect(240, 190, 80, 23));
        btnSignUp->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(135, 125, 120);\n"
"        color: #fff;\n"
"        font-size: 9px;\n"
"        font-weight: bold;\n"
"        border-top-right-radius: 0px;\n"
"        border-top-left-radius: 0px;\n"
"        border-bottom-right-radius: 0px;\n"
"        border-bottom-left-radius: 0px;\n"
"        padding: 2px;\n"
"}"));
        checkStaff = new QCheckBox(centralwidget);
        checkStaff->setObjectName("checkStaff");
        checkStaff->setGeometry(QRect(160, 260, 161, 16));
        mainInfo = new QLabel(centralwidget);
        mainInfo->setObjectName("mainInfo");
        mainInfo->setGeometry(QRect(150, 230, 161, 16));
        mainInfo->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        btnLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        btnSignUp->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        checkStaff->setText(QCoreApplication::translate("MainWindow", "I'm a staff member", nullptr));
        mainInfo->setText(QCoreApplication::translate("MainWindow", "Not connected to database", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
