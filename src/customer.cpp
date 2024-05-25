#include "customer.h"
#include "ui_customer.h"

Customer::Customer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Customer)
{
    ui->setupUi(this);
    loadMenuGrid();
    queryModel = new QSqlQueryModel();
    this->setWindowTitle("Saint-Eagle Cafe");
    QPixmap pixWindow(":/resource/images/logo.png");
    int w = ui->label_logo->width();
    int h = ui->label_logo->height();
    ui->label_logo->setPixmap(pixWindow.scaled(w, h, Qt::KeepAspectRatio));
}

Customer::~Customer()
{
    delete ui;
    delete queryModel;
}



void Customer::loadMenuGrid()
{
    totalMenuCell = 0;
    QSqlQuery query;
    QString qs = QString("select * from items");
    query.exec(qs);
    while(query.next()){
        int dbId = query.value(0).toInt();
        QString itemName = query.value(1).toString();
        QString price = query.value(2).toString();
        QString image = query.value(3).toString();
        QString description = query.value(4).toString();
        loadMenuCell(dbId, itemName, price, image, description);
    }
}

void Customer::loadMenuCell(int dbId, QString &itemName, QString &price, QString &image, QString &description)
{
    menuCell *newMenuCell = new menuCell(this);
    ui->menuGrid->addWidget(newMenuCell, totalMenuCell/3, totalMenuCell%3);
    newMenuCell->setAttribute(Qt::WA_DeleteOnClose, true);
    newMenuCell->cellIndex = totalMenuCell;
    newMenuCell->dbId = dbId;
    newMenuCell->setMenuItem(itemName,price,image,description);
    newMenuCell->setMenuItemCell();
    menuCellList.append(newMenuCell);
    if(totalMenuCell >= 6 && totalMenuCell%3 == 0){
        ui->scrollAreaWidgetContents->setGeometry(0, 0, 580, ui->scrollAreaWidgetContents->height()+ 245);
    }
    totalMenuCell ++;

}

void Customer::refreshMenuGrid()
{
    for(int i = 0; i < menuCellList.length(); i++){
        menuCellList[i]->refreshAndSetMenuCell();
    }
    ui->stackedWidget->setCurrentIndex(0);
}

void Customer::setCustomerTag(QString &username)
{
    this->currentCustomer = username;
    ui->labelAccount->setText(QString("Welcome,") + this->currentCustomer);
}


void Customer::on_btnMenu_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void Customer::on_btnMyOrder_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    QString query = QString("select code, date, time, item_number, total_price, status from management.orders where customer=") + "'" + this->currentCustomer + "'";
    queryModel->setQuery(query);
    ui->table_my_order->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->table_my_order->setModel(queryModel);
}

/*
 * View selected items before paying and ordering.
 */

void Customer::on_btnPlaceOrder_clicked()
{
    ui->tableWidget_selectedItems->clear();
    ui->tableWidget_selectedItems->setColumnWidth(0,50);
    ui->tableWidget_selectedItems->setColumnWidth(1,200);
    ui->tableWidget_selectedItems->setColumnWidth(2,70);
    ui->tableWidget_selectedItems->setColumnWidth(3,70);
    QStringList headerLabels;
    headerLabels << "" << "Item" << "Price" << "Quantity";
    ui->tableWidget_selectedItems->setHorizontalHeaderLabels(headerLabels);

    ui->stackedWidget->setCurrentIndex(1);
    int rowCount = 0;
    for(int i = 0; i < menuCellList.length(); i++){
        if(menuCellList[i]->isSelected()){
            rowCount++;
        }
    }
    qDebug() << rowCount;
    int currentRow = 0;
    double totalPrice = 0;
    ui->tableWidget_selectedItems->setRowCount(rowCount);
    for(int i = 0; i < menuCellList.length(); i++){
        if(menuCellList[i]->isSelected()){
            rowCount ++;
            QString item = menuCellList[i]->menuItemName;
            QString price = menuCellList[i]->menuItmePrice;
            QString quantity = QString::number(menuCellList[i]->menuItemAddQuantity);
            QString index = QString::number(currentRow+1);
            totalPrice += (price.toDouble() * quantity.toInt());
            ui->tableWidget_selectedItems->setItem(currentRow,0, new QTableWidgetItem(index));
            ui->tableWidget_selectedItems->setItem(currentRow,1, new QTableWidgetItem(item));
            ui->tableWidget_selectedItems->setItem(currentRow,2, new QTableWidgetItem("$ " + price));
            ui->tableWidget_selectedItems->setItem(currentRow,3, new QTableWidgetItem(quantity));
            currentRow ++;
            // qDebug() << totalPrice;
        }
    }
    ui->labelTotalPrice->setText("$ " + QString::number(totalPrice));
}


void Customer::on_btnPayAndOrder_clicked()
{
    QMessageBox *msgBox = new QMessageBox();
    msgBox->setAttribute(Qt::WA_DeleteOnClose, true);
    msgBox->setWindowTitle("Confirm and Pay");
    msgBox->setText("Confirm and Pay");
    QAbstractButton *myYesButton = msgBox->addButton("Pay with WeChat", QMessageBox::YesRole);
    QAbstractButton *myNoButton = msgBox->addButton("Back", QMessageBox::NoRole);
    msgBox->exec();
    if(msgBox->clickedButton() == myYesButton){
        this->placeTheOrder();
    }


}


void Customer::placeTheOrder()
{
    QString date = QDateTime::currentDateTime().toString("yyyy/MM/dd");
    qDebug() << date;
    QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
    qDebug() << time;
    // generate code for the current order
    QString qs = QString("select * from management.system where system_mode = '%1'").arg("test");
    query.exec(qs);
    QString currentCode;
    while(query.next()){
        QString code = query.value(2).toString();
        int newCode = code.toInt() + 1;
        currentCode = QString("%1").arg(newCode, 5, 10, QLatin1Char('0'));
        qDebug() << "current code: " + currentCode;

    }
    // Update current code to database
    query.prepare("UPDATE management.system SET current_code = :code WHERE system_mode = 'test';");
    query.bindValue(":code", currentCode);

    if(query.exec()){
        qDebug() << "updated code";
    }

    // Insert the order items into database
    int itemNumber = ui->tableWidget_selectedItems->rowCount();
    for(int i = 0; i < itemNumber; i++){
        QString itemName = ui->tableWidget_selectedItems->item(i, 1)->text();
        QString price = ui->tableWidget_selectedItems->item(i,2)->text();
        QString quantity = ui->tableWidget_selectedItems->item(i,3)->text();
        QString status = "";
        query.prepare("insert into management.ordered_items(code, customer, date, time, item, quantity, price, status) values(?, ?, ?, ?, ?, ?, ?, ?);");
        query.addBindValue(currentCode);
        query.addBindValue(this->currentCustomer);
        query.addBindValue(date);
        query.addBindValue(time);
        query.addBindValue(itemName);
        query.addBindValue(quantity);
        query.addBindValue(price);
        query.addBindValue(status);
        if(query.exec()){
            qDebug() << "successfully added ordered items into database";
        }

    }

    query.prepare("insert into management.orders(code, customer, date, time, item_number, total_price, status) values(?, ?, ?, ?, ?, ?, ?);");
    query.addBindValue(currentCode);
    query.addBindValue(this->currentCustomer);
    query.addBindValue(date);
    query.addBindValue(time);
    query.addBindValue(itemNumber);
    query.addBindValue(ui->labelTotalPrice->text());
    query.addBindValue("preparing");
    if(query.exec()){
        qDebug() << "successfully added the order into database";
    }

}

void Customer::on_table_my_order_clicked(const QModelIndex &index)
{
    ui->stackedWidget->setCurrentIndex(3);
    int row = ui->table_my_order->currentIndex().row();
    QString info;
    for(int i = 0 ; i < 6; i++){
        QModelIndex id = queryModel->index(row,i);
        info = info + queryModel->data(id).toString() + "  ";
    }
    ui->label_details_code->setText(info);
    QModelIndex codeId = queryModel->index(row,0);
    QString code = queryModel->data(codeId).toString();
    QSqlQueryModel *queryModel2 = new QSqlQueryModel;
    QString query = QString("select item, quantity, price from management.ordered_items where code = ") + "'" + code + "'";
    queryModel2->setQuery(query);
    // ui->tableView_order_details->resizeColumnsToContents();
    ui->tableView_order_details->setModel(queryModel2);
    ui->tableView_order_details->setColumnWidth(0,300);
    ui->tableView_order_details->setColumnWidth(2,65);
    ui->tableView_order_details->setColumnWidth(1,80);


}

