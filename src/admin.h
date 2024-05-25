#ifndef ADMIN_H
#define ADMIN_H

#include "itemcell.h"
#include <QWidget>
#include <QSqlQueryModel>
#include <QVector>
#include <QPixmap>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDateTime>

namespace Ui {
class Admin;
}

class Admin : public QWidget
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();
    void setAdminTag(QString& id_admin);

    int totalItemCell;
    QVector<itemCell *> itemCellList;

private slots:


    void on_btn_ordering_clicked();

    void on_btn_customers_clicked();


    void on_btn_menu_item_clicked();


    void on_btn_create_item_clicked();

    void on_btn_add_item_clicked();

    void addNewItemCell(int dbId, QString& itemName, QString& price, QString& image, QString& description, bool initialzing);

    void closeItemCell(int cellIndex);

    void initializeItemManagementGrid();


    void on_tableView_orders_clicked(const QModelIndex &index);

    void on_btn_ready_clicked();


signals:
    void logOut();

private:
    Ui::Admin *ui;
    QString adminId;
    QSqlQueryModel *queryModel;
    QSqlQueryModel *queryModel2;
    void closeEvent(QCloseEvent *){//override closeEvent
        emit logOut();
    }

};


#endif // ADMIN_H
