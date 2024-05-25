/********************************************************************************
** Form generated from reading UI file 'customer.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMER_H
#define UI_CUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Customer
{
public:
    QPushButton *btnMenu;
    QPushButton *btnMyOrder;
    QStackedWidget *stackedWidget;
    QWidget *page_0_menu;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QGridLayout *menuGrid;
    QPushButton *btnPlaceOrder;
    QLabel *label_8;
    QWidget *page_1_place_order;
    QTableWidget *tableWidget_selectedItems;
    QPushButton *btnPayAndOrder;
    QLabel *label;
    QLabel *labelTotalPrice;
    QWidget *page_2_my_order;
    QTableView *table_my_order;
    QLabel *label_9;
    QWidget *page_3_order_details;
    QLabel *label_details_code;
    QTableView *tableView_order_details;
    QLabel *labelAccount;
    QLabel *label_logo;

    void setupUi(QWidget *Customer)
    {
        if (Customer->objectName().isEmpty())
            Customer->setObjectName("Customer");
        Customer->resize(938, 599);
        btnMenu = new QPushButton(Customer);
        btnMenu->setObjectName("btnMenu");
        btnMenu->setGeometry(QRect(30, 110, 151, 51));
        btnMenu->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        btnMyOrder = new QPushButton(Customer);
        btnMyOrder->setObjectName("btnMyOrder");
        btnMyOrder->setGeometry(QRect(30, 180, 151, 51));
        btnMyOrder->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        stackedWidget = new QStackedWidget(Customer);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(230, 40, 631, 521));
        page_0_menu = new QWidget();
        page_0_menu->setObjectName("page_0_menu");
        scrollArea = new QScrollArea(page_0_menu);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(20, 40, 601, 480));
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 599, 485));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName("gridLayout_2");
        menuGrid = new QGridLayout();
        menuGrid->setObjectName("menuGrid");

        gridLayout_2->addLayout(menuGrid, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);
        btnPlaceOrder = new QPushButton(page_0_menu);
        btnPlaceOrder->setObjectName("btnPlaceOrder");
        btnPlaceOrder->setGeometry(QRect(480, 10, 111, 23));
        label_8 = new QLabel(page_0_menu);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 0, 221, 31));
        label_8->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Arial\";"));
        stackedWidget->addWidget(page_0_menu);
        page_1_place_order = new QWidget();
        page_1_place_order->setObjectName("page_1_place_order");
        tableWidget_selectedItems = new QTableWidget(page_1_place_order);
        if (tableWidget_selectedItems->columnCount() < 4)
            tableWidget_selectedItems->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget_selectedItems->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget_selectedItems->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget_selectedItems->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        tableWidget_selectedItems->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget_selectedItems->setObjectName("tableWidget_selectedItems");
        tableWidget_selectedItems->setGeometry(QRect(60, 120, 401, 201));
        tableWidget_selectedItems->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_selectedItems->verticalHeader()->setVisible(false);
        btnPayAndOrder = new QPushButton(page_1_place_order);
        btnPayAndOrder->setObjectName("btnPayAndOrder");
        btnPayAndOrder->setGeometry(QRect(310, 340, 151, 23));
        label = new QLabel(page_1_place_order);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 340, 41, 16));
        label->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Microsoft YaHei UI\";"));
        labelTotalPrice = new QLabel(page_1_place_order);
        labelTotalPrice->setObjectName("labelTotalPrice");
        labelTotalPrice->setGeometry(QRect(100, 340, 53, 15));
        stackedWidget->addWidget(page_1_place_order);
        page_2_my_order = new QWidget();
        page_2_my_order->setObjectName("page_2_my_order");
        table_my_order = new QTableView(page_2_my_order);
        table_my_order->setObjectName("table_my_order");
        table_my_order->setGeometry(QRect(10, 70, 601, 361));
        table_my_order->setAutoScrollMargin(11);
        table_my_order->setEditTriggers(QAbstractItemView::NoEditTriggers);
        label_9 = new QLabel(page_2_my_order);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 10, 221, 31));
        label_9->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Arial\";"));
        stackedWidget->addWidget(page_2_my_order);
        page_3_order_details = new QWidget();
        page_3_order_details->setObjectName("page_3_order_details");
        label_details_code = new QLabel(page_3_order_details);
        label_details_code->setObjectName("label_details_code");
        label_details_code->setGeometry(QRect(40, 20, 551, 16));
        tableView_order_details = new QTableView(page_3_order_details);
        tableView_order_details->setObjectName("tableView_order_details");
        tableView_order_details->setGeometry(QRect(40, 50, 561, 361));
        stackedWidget->addWidget(page_3_order_details);
        labelAccount = new QLabel(Customer);
        labelAccount->setObjectName("labelAccount");
        labelAccount->setGeometry(QRect(10, 530, 201, 20));
        labelAccount->setAlignment(Qt::AlignCenter);
        label_logo = new QLabel(Customer);
        label_logo->setObjectName("label_logo");
        label_logo->setGeometry(QRect(40, 20, 101, 61));

        retranslateUi(Customer);

        QMetaObject::connectSlotsByName(Customer);
    } // setupUi

    void retranslateUi(QWidget *Customer)
    {
        Customer->setWindowTitle(QCoreApplication::translate("Customer", "Form", nullptr));
        btnMenu->setText(QCoreApplication::translate("Customer", "Menu", nullptr));
        btnMyOrder->setText(QCoreApplication::translate("Customer", "My Order", nullptr));
        btnPlaceOrder->setText(QCoreApplication::translate("Customer", "Order and Pay", nullptr));
        label_8->setText(QCoreApplication::translate("Customer", "Menu", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_selectedItems->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Customer", "Item", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_selectedItems->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Customer", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_selectedItems->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Customer", "Quantity", nullptr));
        btnPayAndOrder->setText(QCoreApplication::translate("Customer", "Pay to place your order", nullptr));
        label->setText(QCoreApplication::translate("Customer", "Total:", nullptr));
        labelTotalPrice->setText(QCoreApplication::translate("Customer", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("Customer", "My ordering", nullptr));
        label_details_code->setText(QCoreApplication::translate("Customer", "TextLabel", nullptr));
        labelAccount->setText(QCoreApplication::translate("Customer", "TextLabel", nullptr));
        label_logo->setText(QCoreApplication::translate("Customer", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Customer: public Ui_Customer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMER_H
