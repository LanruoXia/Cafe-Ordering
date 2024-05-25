#include "itemcell.h"
#include "ui_itemcell.h"

#include <QMessageBox>

itemCell::itemCell(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::itemCell)
{
    ui->setupUi(this);
}

itemCell::~itemCell()
{
    delete ui;
}

/*
 * Set item name, price, image to the itemCell instance.
 */
void itemCell::setItem(QString &name, QString &price, QString &image, QString &description)
{
    this->itemName = name;
    this->itemPrice = price;
    this->itemImagePath = ":/resource/images/" + image;
    this->itemImagePath2 = "./exeImages/" + image;
    this->description = description;
}

/*
 * Set item name, price, image to the ui labels of the itemCell instance.
 */
void itemCell::setItemCell()
{
    ui->labelItemName->setText(this->itemName);
    ui->labelPrice->setText("$ " + this->itemPrice);
    QPixmap pix(this->itemImagePath);
    QPixmap pix2(this->itemImagePath2);
    int w = ui->labelImage->width();
    int h = ui->labelImage->height();
    if(!pix.isNull()){
        ui->labelImage->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));// open image when it is in qt resources
    }else{
        ui->labelImage->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));
    }
}

void itemCell::on_btnRemove_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Remove Confirmation", "Remove this item?", QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes){
        emit closeThisItemCell(cellIndex);
        this->close();
    }
}

