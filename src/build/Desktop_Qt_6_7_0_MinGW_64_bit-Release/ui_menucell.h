/********************************************************************************
** Form generated from reading UI file 'menucell.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUCELL_H
#define UI_MENUCELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menuCell
{
public:
    QLabel *labelImage;
    QLineEdit *editQuantity;
    QPushButton *btnPlus;
    QPushButton *btnMinus;
    QLabel *labelItem;
    QLabel *labelPrice;
    QCheckBox *checkAddItem;

    void setupUi(QWidget *menuCell)
    {
        if (menuCell->objectName().isEmpty())
            menuCell->setObjectName("menuCell");
        menuCell->resize(180, 237);
        labelImage = new QLabel(menuCell);
        labelImage->setObjectName("labelImage");
        labelImage->setGeometry(QRect(35, 10, 101, 111));
        editQuantity = new QLineEdit(menuCell);
        editQuantity->setObjectName("editQuantity");
        editQuantity->setGeometry(QRect(75, 180, 31, 21));
        editQuantity->setAlignment(Qt::AlignCenter);
        editQuantity->setReadOnly(true);
        btnPlus = new QPushButton(menuCell);
        btnPlus->setObjectName("btnPlus");
        btnPlus->setGeometry(QRect(110, 180, 20, 20));
        btnMinus = new QPushButton(menuCell);
        btnMinus->setObjectName("btnMinus");
        btnMinus->setGeometry(QRect(50, 180, 20, 20));
        labelItem = new QLabel(menuCell);
        labelItem->setObjectName("labelItem");
        labelItem->setGeometry(QRect(10, 120, 161, 20));
        labelItem->setStyleSheet(QString::fromUtf8("font: 10pt \"Calibri\";"));
        labelItem->setAlignment(Qt::AlignCenter);
        labelPrice = new QLabel(menuCell);
        labelPrice->setObjectName("labelPrice");
        labelPrice->setGeometry(QRect(10, 150, 161, 20));
        labelPrice->setStyleSheet(QString::fromUtf8("font: 10pt \"Calibri\";"));
        labelPrice->setAlignment(Qt::AlignCenter);
        checkAddItem = new QCheckBox(menuCell);
        checkAddItem->setObjectName("checkAddItem");
        checkAddItem->setGeometry(QRect(39, 210, 101, 20));

        retranslateUi(menuCell);

        QMetaObject::connectSlotsByName(menuCell);
    } // setupUi

    void retranslateUi(QWidget *menuCell)
    {
        menuCell->setWindowTitle(QCoreApplication::translate("menuCell", "Form", nullptr));
        labelImage->setText(QCoreApplication::translate("menuCell", "TextLabel", nullptr));
        editQuantity->setText(QCoreApplication::translate("menuCell", "1", nullptr));
        btnPlus->setText(QCoreApplication::translate("menuCell", "+", nullptr));
        btnMinus->setText(QCoreApplication::translate("menuCell", "-", nullptr));
        labelItem->setText(QCoreApplication::translate("menuCell", "TextLabel", nullptr));
        labelPrice->setText(QCoreApplication::translate("menuCell", "TextLabel", nullptr));
        checkAddItem->setText(QCoreApplication::translate("menuCell", "Add this item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menuCell: public Ui_menuCell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUCELL_H
