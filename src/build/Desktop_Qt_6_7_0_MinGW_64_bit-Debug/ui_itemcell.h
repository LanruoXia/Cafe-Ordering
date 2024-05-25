/********************************************************************************
** Form generated from reading UI file 'itemcell.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMCELL_H
#define UI_ITEMCELL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_itemCell
{
public:
    QPushButton *btnRemove;
    QLabel *labelItemName;
    QLabel *labelImage;
    QLabel *labelPrice;

    void setupUi(QWidget *itemCell)
    {
        if (itemCell->objectName().isEmpty())
            itemCell->setObjectName("itemCell");
        itemCell->resize(180, 195);
        btnRemove = new QPushButton(itemCell);
        btnRemove->setObjectName("btnRemove");
        btnRemove->setGeometry(QRect(130, 170, 45, 21));
        btnRemove->setStyleSheet(QString::fromUtf8("font: 7pt \"Microsoft YaHei UI\";"));
        labelItemName = new QLabel(itemCell);
        labelItemName->setObjectName("labelItemName");
        labelItemName->setGeometry(QRect(10, 140, 161, 21));
        labelItemName->setAlignment(Qt::AlignCenter);
        labelImage = new QLabel(itemCell);
        labelImage->setObjectName("labelImage");
        labelImage->setGeometry(QRect(30, 20, 121, 121));
        labelPrice = new QLabel(itemCell);
        labelPrice->setObjectName("labelPrice");
        labelPrice->setGeometry(QRect(60, 160, 61, 21));
        labelPrice->setAlignment(Qt::AlignCenter);

        retranslateUi(itemCell);

        QMetaObject::connectSlotsByName(itemCell);
    } // setupUi

    void retranslateUi(QWidget *itemCell)
    {
        itemCell->setWindowTitle(QCoreApplication::translate("itemCell", "Form", nullptr));
        btnRemove->setText(QCoreApplication::translate("itemCell", "Remove", nullptr));
        labelItemName->setText(QCoreApplication::translate("itemCell", "TextLabel", nullptr));
        labelImage->setText(QCoreApplication::translate("itemCell", "TextLabel", nullptr));
        labelPrice->setText(QCoreApplication::translate("itemCell", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class itemCell: public Ui_itemCell {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMCELL_H
