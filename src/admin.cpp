#include "admin.h"
#include "ui_admin.h"


Admin::Admin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Admin)
{
    ui->setupUi(this);
    queryModel = new QSqlQueryModel();
    queryModel2 = new QSqlQueryModel();
    totalItemCell = 0;
    initializeItemManagementGrid();
    on_btn_ordering_clicked();
    this->setWindowTitle("Saint-Eagle Cafe");

    QPixmap pixWindow(":/resource/images/logo.png");
    int w = ui->label_logo->width();
    int h = ui->label_logo->height();
    ui->label_logo->setPixmap(pixWindow.scaled(w, h, Qt::KeepAspectRatio));

}

Admin::~Admin()
{
    delete ui;
    delete queryModel;
}
void Admin::setAdminTag(QString& id_admin){
    this->adminId = id_admin;
    ui->label_staff->setText("Staff: " + this->adminId);
}


void Admin::on_btn_ordering_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    queryModel2 = new QSqlQueryModel;
    QString query = QString("select code, customer, date, time, item_number, total_price, status from management.orders order by idorders asc");
    queryModel2->setQuery(query);
    ui->tableView_orders->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView_orders->setModel(queryModel2);
    ui->tableView_orders->setColumnWidth(0, 60);
    ui->tableView_orders->setColumnWidth(1, 120);
    ui->tableView_orders->setColumnWidth(2, 80);
    for(int i = 3; i < 7; i ++){
        ui->tableView_orders->setColumnWidth(i, 70);
    }


}


void Admin::on_btn_customers_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    queryModel->setQuery("select * from accounts");
    // QScrollBar *verticalScroll = ui->table_customer->verticalScrollBar();

    ui->table_customer->setModel(queryModel);
}




void Admin::on_btn_menu_item_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}



void Admin::on_btn_create_item_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}


void Admin::on_btn_add_item_clicked()
{
    QString itemName = ui->editItemText->text();
    QString itemImage = ui->editItemImage->text();
    QString itemPrice = ui->editItemPrice->text();
    QString description = "";
    addNewItemCell(-1, itemName, itemPrice, itemImage, description,0);
}

/*
 * Add new item to menu grid, used when clicking btn_add_item
 */
void Admin::addNewItemCell(int dbId, QString& itemName, QString& price, QString& image, QString& description, bool initializing)
{

    itemCell *newItemCell = new itemCell(this); // create a newItmeCell instence on the heap and set parent to it
    ui->itemManagementGrid->addWidget(newItemCell, totalItemCell/3, totalItemCell%3); // add a new itemCell to the item management grid
    connect(newItemCell, SIGNAL(closeThisItemCell(int)), this, SLOT(closeItemCell(int))); // connect signal with slot function for removing an item cell
    newItemCell->setAttribute(Qt::WA_DeleteOnClose,true); // this newItemCell will be deleted when it is closed.
    newItemCell->cellIndex = totalItemCell;
    newItemCell->setItem(itemName, price, image, description);
    newItemCell->setItemCell();
    itemCellList.append(newItemCell); // record the newItemCell pointer to the list
    if(totalItemCell >= 6 && totalItemCell%3 == 0){
        ui->scrollAreaWidget->setGeometry(0, 0, 559, ui->scrollAreaWidget->height()+ 200);
    }
    totalItemCell ++;

    if(initializing){
        newItemCell->dbId = dbId;
        return; // do not add item to database when loading items to the grid at initialization
    }else{
        // add new item to database
        QSqlQuery query;
        query.prepare("insert into items(item_name, price, image, description) values(?, ?, ?, ?);");
        query.addBindValue(itemName);
        query.addBindValue(price);
        query.addBindValue(image);
        query.addBindValue(description);
        QMessageBox *msgBox = new QMessageBox();
        msgBox->setAttribute(Qt::WA_DeleteOnClose, true);
        if(query.exec()){
            QString qs = QString("SELECT * FROM items ORDER BY id_item DESC LIMIT 1;");
            query.exec(qs);
            while(query.next()){
                int dbId = query.value(0).toInt();
                newItemCell->dbId = dbId;
                qDebug() << dbId;

            }
            msgBox->setText(itemName + " was added to database sucessfully.");
            msgBox->exec();
            ui->editItemText->clear();
            ui->editItemPrice->clear();
            ui->editItemImage->clear();
            this->on_btn_menu_item_clicked();
            qDebug() << "item " + itemName + " was added to the database.";

        }else{
            msgBox->setText(itemName + " failed to be added to database.");
            msgBox->exec();
        }
    }

}

void Admin::closeItemCell(int cellIndex)
{
    int dbId = itemCellList[cellIndex]->dbId;
    QString itemName = itemCellList[cellIndex]->itemName;
    itemCellList[cellIndex]->close();
    // delete the item from database
    QSqlQuery query;
    QString qs = QString("delete from items where id_item = '%1'").arg(dbId);
    if(query.exec(qs)){
        for (int i = cellIndex + 1; i < itemCellList.length(); i ++){
            int newIndex = --itemCellList[i]->cellIndex;
            ui->itemManagementGrid->addWidget(itemCellList[i], newIndex/3, newIndex%3);
            itemCellList[i]->setItemCell();
        }
        totalItemCell --;
        itemCellList.remove(cellIndex);
        QMessageBox *msgBox = new QMessageBox();
        msgBox->setAttribute(Qt::WA_DeleteOnClose, true);
        msgBox->setText(itemName + " was deleted from database sucessfully.");
        qDebug() << itemName + "was deleted from database successfully";
        msgBox->exec();

    }else{
        QMessageBox *msgBox = new QMessageBox();
        msgBox->setAttribute(Qt::WA_DeleteOnClose, true);
        msgBox->setText( itemName + " failed to be deleted from database .");
        msgBox->exec();
    }
}

/*
 * Load item information from database to itemCell when opening and initializing the admin window
 */

void Admin::initializeItemManagementGrid()
{
    QSqlQuery query;
    QString qs = QString("select * from items");
    query.exec(qs);
    while(query.next()){
        int dbId = query.value(0).toInt();
        QString itemName = query.value(1).toString();
        QString price = query.value(2).toString();
        QString image = query.value(3).toString();
        QString description = query.value(4).toString();
        addNewItemCell(dbId, itemName, price, image, description, 1); // loading items to itemManagementGrid
    }
}






void Admin::on_tableView_orders_clicked(const QModelIndex &index)
{
    ui->stackedWidget->setCurrentIndex(4);
    int row = ui->tableView_orders->currentIndex().row();
    QString info;
    for(int i = 0; i < 7; i ++){
        QModelIndex id = queryModel2->index(row, i);
        info = info + queryModel2->data(id).toString() + "  ";
    }
    ui->labelOrderDetail->setText(info);
    QModelIndex codeId = queryModel2->index(row, 0);
    QString code = queryModel2->data(codeId).toString();
    QSqlQueryModel *queryModel3 = new QSqlQueryModel;
    QString query = QString("select item, quantity, price from management.ordered_items where code = ") + "'" + code + "'";
    queryModel3->setQuery(query);
    // ui->tableView_order_details->resizeColumnsToContents();
    ui->tableView_orderDetails->setModel(queryModel3);
    ui->tableView_orderDetails->setColumnWidth(0,300);
    ui->tableView_orderDetails->setColumnWidth(2,65);
    ui->tableView_orderDetails->setColumnWidth(1,80);

    ui->labelCode->setText(code);


}


void Admin::on_btn_ready_clicked()
{
    QString code = ui->labelCode->text();
    QSqlQuery query;
    QString ready_time = QDateTime::currentDateTime().toString("HH:mm:ss");
    query.prepare(QString("UPDATE management.orders SET status = :status, time_ready = :time WHERE code =") + "'" + code +"';" );
    query.bindValue(":status", "ready");
    query.bindValue(":time", ready_time);
    if(query.exec()){
        qDebug() << "update status: the order is ready!";
    }
}



