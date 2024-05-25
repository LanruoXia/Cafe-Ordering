#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "menucell.h"


#include <QWidget>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDateTime>
#include <QSqlQueryModel>

namespace Ui {
class Customer;
}

class Customer : public QWidget
{
    Q_OBJECT

public:
    explicit Customer(QWidget *parent = nullptr);
    ~Customer();

    void loadMenuGrid();
    void loadMenuCell(int dbId, QString& itemName, QString& price, QString& image, QString& description);
    void refreshMenuGrid();
    void setCustomerTag(QString& username);
    void placeTheOrder();

    int totalMenuCell;
    QVector<menuCell *> menuCellList;
    QSqlQuery query;

private slots:
    void on_btnMenu_clicked();

    void on_btnMyOrder_clicked();

    void on_btnPlaceOrder_clicked();

    void on_btnPayAndOrder_clicked();

    void on_table_my_order_clicked(const QModelIndex &index);
signals:
    void logOut();

private:
    Ui::Customer *ui;
    QString currentCustomer;
    QSqlQueryModel *queryModel;
    QWidget *mainWindow;
    void closeEvent(QCloseEvent *){//override closeEvent
        emit logOut();
    }

};

#endif // CUSTOMER_H
