/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QPushButton *btn_ordering;
    QStackedWidget *stackedWidget;
    QWidget *page_0_orders;
    QTableView *tableView_orders;
    QLabel *label_8;
    QWidget *page_1;
    QLabel *label_2;
    QTableView *table_customer;
    QWidget *page_2;
    QPushButton *btn_create_item;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidget;
    QGridLayout *gridLayout;
    QGridLayout *itemManagementGrid;
    QLabel *label_9;
    QWidget *page_3_add;
    QPushButton *btn_add_item;
    QLineEdit *editItemText;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *editItemImage;
    QLabel *label_6;
    QLineEdit *editItemPrice;
    QLabel *label_7;
    QLabel *label_10;
    QWidget *page_4_order_details;
    QLabel *labelOrderDetail;
    QTableView *tableView_orderDetails;
    QPushButton *btn_ready;
    QLabel *labelCode;
    QPushButton *btn_customers;
    QLabel *label_staff;
    QPushButton *btn_menu_item;
    QLabel *label_logo;

    void setupUi(QWidget *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName("Admin");
        Admin->resize(850, 600);
        Admin->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_ordering = new QPushButton(Admin);
        btn_ordering->setObjectName("btn_ordering");
        btn_ordering->setGeometry(QRect(10, 130, 171, 51));
        btn_ordering->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(135, 125, 120);\n"
"        color: #fff;\n"
"        font-size: 13px;\n"
"        font-weight: bold;\n"
"        border-top-right-radius: 15px;\n"
"        border-top-left-radius: 0px;\n"
"        border-bottom-right-radius: 0px;\n"
"        border-bottom-left-radius: 15px;\n"
"        padding: 10px;\n"
"\n"
"}"));
        stackedWidget = new QStackedWidget(Admin);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(190, 60, 641, 521));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        page_0_orders = new QWidget();
        page_0_orders->setObjectName("page_0_orders");
        tableView_orders = new QTableView(page_0_orders);
        tableView_orders->setObjectName("tableView_orders");
        tableView_orders->setGeometry(QRect(40, 80, 541, 391));
        tableView_orders->setEditTriggers(QAbstractItemView::NoEditTriggers);
        label_8 = new QLabel(page_0_orders);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 20, 221, 31));
        label_8->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Arial\";"));
        stackedWidget->addWidget(page_0_orders);
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        page_1->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(page_1);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 20, 221, 31));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Arial\";"));
        table_customer = new QTableView(page_1);
        table_customer->setObjectName("table_customer");
        table_customer->setGeometry(QRect(40, 90, 501, 351));
        table_customer->setAutoScrollMargin(10);
        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_create_item = new QPushButton(page_2);
        btn_create_item->setObjectName("btn_create_item");
        btn_create_item->setGeometry(QRect(550, 470, 75, 23));
        scrollArea = new QScrollArea(page_2);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(50, 60, 580, 395));
        scrollArea->setWidgetResizable(false);
        scrollAreaWidget = new QWidget();
        scrollAreaWidget->setObjectName("scrollAreaWidget");
        scrollAreaWidget->setGeometry(QRect(0, 0, 580, 405));
        gridLayout = new QGridLayout(scrollAreaWidget);
        gridLayout->setObjectName("gridLayout");
        itemManagementGrid = new QGridLayout();
        itemManagementGrid->setObjectName("itemManagementGrid");

        gridLayout->addLayout(itemManagementGrid, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidget);
        label_9 = new QLabel(page_2);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(50, 10, 221, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Arial\";"));
        stackedWidget->addWidget(page_2);
        page_3_add = new QWidget();
        page_3_add->setObjectName("page_3_add");
        btn_add_item = new QPushButton(page_3_add);
        btn_add_item->setObjectName("btn_add_item");
        btn_add_item->setGeometry(QRect(210, 280, 111, 23));
        editItemText = new QLineEdit(page_3_add);
        editItemText->setObjectName("editItemText");
        editItemText->setGeometry(QRect(270, 90, 113, 21));
        label_3 = new QLabel(page_3_add);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(120, 90, 91, 16));
        label_4 = new QLabel(page_3_add);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(120, 140, 111, 16));
        label_5 = new QLabel(page_3_add);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(270, 140, 111, 16));
        editItemImage = new QLineEdit(page_3_add);
        editItemImage->setObjectName("editItemImage");
        editItemImage->setGeometry(QRect(390, 140, 141, 21));
        label_6 = new QLabel(page_3_add);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(120, 210, 111, 16));
        editItemPrice = new QLineEdit(page_3_add);
        editItemPrice->setObjectName("editItemPrice");
        editItemPrice->setGeometry(QRect(280, 210, 51, 21));
        label_7 = new QLabel(page_3_add);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(260, 210, 21, 16));
        label_7->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(page_3_add);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(270, 160, 271, 16));
        stackedWidget->addWidget(page_3_add);
        page_4_order_details = new QWidget();
        page_4_order_details->setObjectName("page_4_order_details");
        labelOrderDetail = new QLabel(page_4_order_details);
        labelOrderDetail->setObjectName("labelOrderDetail");
        labelOrderDetail->setGeometry(QRect(70, 10, 421, 16));
        tableView_orderDetails = new QTableView(page_4_order_details);
        tableView_orderDetails->setObjectName("tableView_orderDetails");
        tableView_orderDetails->setGeometry(QRect(70, 60, 541, 331));
        tableView_orderDetails->setEditTriggers(QAbstractItemView::NoEditTriggers);
        btn_ready = new QPushButton(page_4_order_details);
        btn_ready->setObjectName("btn_ready");
        btn_ready->setGeometry(QRect(530, 400, 75, 23));
        labelCode = new QLabel(page_4_order_details);
        labelCode->setObjectName("labelCode");
        labelCode->setGeometry(QRect(422, 400, 61, 21));
        stackedWidget->addWidget(page_4_order_details);
        btn_customers = new QPushButton(Admin);
        btn_customers->setObjectName("btn_customers");
        btn_customers->setGeometry(QRect(10, 210, 171, 51));
        btn_customers->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(135, 125, 120);\n"
"        color: #fff;\n"
"        font-size: 13px;\n"
"        font-weight: bold;\n"
"        border-top-right-radius: 15px;\n"
"        border-top-left-radius: 0px;\n"
"        border-bottom-right-radius: 0px;\n"
"        border-bottom-left-radius: 15px;\n"
"        padding: 10px;\n"
"\n"
"}"));
        label_staff = new QLabel(Admin);
        label_staff->setObjectName("label_staff");
        label_staff->setGeometry(QRect(712, 10, 101, 20));
        btn_menu_item = new QPushButton(Admin);
        btn_menu_item->setObjectName("btn_menu_item");
        btn_menu_item->setGeometry(QRect(10, 290, 171, 51));
        btn_menu_item->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"	background-color: rgb(135, 125, 120);\n"
"        color: #fff;\n"
"        font-size: 13px;\n"
"        font-weight: bold;\n"
"        border-top-right-radius: 15px;\n"
"        border-top-left-radius: 0px;\n"
"        border-bottom-right-radius: 0px;\n"
"        border-bottom-left-radius: 15px;\n"
"        padding: 10px;\n"
"\n"
"}"));
        label_logo = new QLabel(Admin);
        label_logo->setObjectName("label_logo");
        label_logo->setGeometry(QRect(40, 20, 101, 61));

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QWidget *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Form", nullptr));
        btn_ordering->setText(QCoreApplication::translate("Admin", "Odering List", nullptr));
        label_8->setText(QCoreApplication::translate("Admin", "Customer Orders", nullptr));
        label_2->setText(QCoreApplication::translate("Admin", "Customer Information", nullptr));
        btn_create_item->setText(QCoreApplication::translate("Admin", "Add Item", nullptr));
        label_9->setText(QCoreApplication::translate("Admin", "All Items", nullptr));
        btn_add_item->setText(QCoreApplication::translate("Admin", "Add to Menu", nullptr));
        label_3->setText(QCoreApplication::translate("Admin", "Item Name", nullptr));
        label_4->setText(QCoreApplication::translate("Admin", "Item Image Path", nullptr));
        label_5->setText(QCoreApplication::translate("Admin", ":/resource/images/", nullptr));
        label_6->setText(QCoreApplication::translate("Admin", "Item Price", nullptr));
        label_7->setText(QCoreApplication::translate("Admin", "$", nullptr));
        label_10->setText(QCoreApplication::translate("Admin", "or ./exeImages/ (for running released exe)", nullptr));
        labelOrderDetail->setText(QCoreApplication::translate("Admin", "TextLabel", nullptr));
        btn_ready->setText(QCoreApplication::translate("Admin", "Ready", nullptr));
        labelCode->setText(QCoreApplication::translate("Admin", "TextLabel", nullptr));
        btn_customers->setText(QCoreApplication::translate("Admin", "Customers", nullptr));
        label_staff->setText(QCoreApplication::translate("Admin", "TextLabel", nullptr));
        btn_menu_item->setText(QCoreApplication::translate("Admin", "Menu Items", nullptr));
        label_logo->setText(QCoreApplication::translate("Admin", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
