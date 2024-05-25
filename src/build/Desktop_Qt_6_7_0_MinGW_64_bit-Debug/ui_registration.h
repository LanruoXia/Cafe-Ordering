/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registration
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *btnRegister;
    QLineEdit *editNewUser;
    QLineEdit *editNewPass;
    QLineEdit *editConfirm;
    QLineEdit *editGender;

    void setupUi(QWidget *registration)
    {
        if (registration->objectName().isEmpty())
            registration->setObjectName("registration");
        registration->resize(422, 359);
        label = new QLabel(registration);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 20, 141, 16));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(registration);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 90, 120, 20));
        label_3 = new QLabel(registration);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 130, 120, 20));
        label_4 = new QLabel(registration);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 170, 120, 20));
        label_5 = new QLabel(registration);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 210, 120, 20));
        btnRegister = new QPushButton(registration);
        btnRegister->setObjectName("btnRegister");
        btnRegister->setGeometry(QRect(130, 280, 171, 23));
        editNewUser = new QLineEdit(registration);
        editNewUser->setObjectName("editNewUser");
        editNewUser->setGeometry(QRect(170, 90, 180, 23));
        editNewPass = new QLineEdit(registration);
        editNewPass->setObjectName("editNewPass");
        editNewPass->setGeometry(QRect(170, 130, 180, 23));
        editConfirm = new QLineEdit(registration);
        editConfirm->setObjectName("editConfirm");
        editConfirm->setGeometry(QRect(170, 170, 180, 23));
        editGender = new QLineEdit(registration);
        editGender->setObjectName("editGender");
        editGender->setGeometry(QRect(170, 210, 180, 23));

        retranslateUi(registration);

        QMetaObject::connectSlotsByName(registration);
    } // setupUi

    void retranslateUi(QWidget *registration)
    {
        registration->setWindowTitle(QCoreApplication::translate("registration", "Form", nullptr));
        label->setText(QCoreApplication::translate("registration", "Registration", nullptr));
        label_2->setText(QCoreApplication::translate("registration", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("registration", "Password", nullptr));
        label_4->setText(QCoreApplication::translate("registration", "Confirm Password", nullptr));
        label_5->setText(QCoreApplication::translate("registration", "Phone Number", nullptr));
        btnRegister->setText(QCoreApplication::translate("registration", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registration: public Ui_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
