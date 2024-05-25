#include "menucell.h"
#include "ui_menucell.h"

menuCell::menuCell(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::menuCell)
{
    ui->setupUi(this);
    ui->editQuantity->setText("1");
}

void menuCell::setMenuItem(QString &name, QString &price, QString &image, QString &description)
{
    this->menuItemAddQuantity = 1;
    this->menuItemName = name;
    this->menuItmePrice = price;
    this->menuItemImagePath = ":/resource/images/" + image;
    this->menuItemImagePath2 = "./exeImages/" + image;
    this->menuItemDescription = description;
}

void menuCell::setMenuItemCell()
{
    ui->labelItem->setText(this->menuItemName);
    ui->labelPrice->setText("$ " + this->menuItmePrice);
    ui->editQuantity->setText(QString::number(this->menuItemAddQuantity));
    QPixmap pix(this->menuItemImagePath);
    QPixmap pix2(this->menuItemImagePath2);
    int w = ui->labelImage->width();
    int h = ui->labelImage->height();
    if(!pix.isNull()){
        ui->labelImage->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));// open image when it is in qt resources
    }else{
        ui->labelImage->setPixmap(pix2.scaled(w, h, Qt::KeepAspectRatio));
    }
}

void menuCell::refreshAndSetMenuCell()
{
    this->menuItemAddQuantity = 1;
    ui->editQuantity->setText(QString::number(1));
    ui->checkAddItem->setChecked(0);
}

bool menuCell::isSelected()
{
    return ui->checkAddItem->isChecked();
}

menuCell::~menuCell()
{
    delete ui;
}

void menuCell::on_btnPlus_clicked()
{
    QString currentNum = ui->editQuantity->text();
    int num = currentNum.toInt();
    num ++;
    this->menuItemAddQuantity ++;
    ui->editQuantity->setText(QString::number(num));
}


void menuCell::on_btnMinus_clicked()
{
    QString currentNum = ui->editQuantity->text();
    int num = currentNum.toInt();
    if(num == 1){
        return;
    }
    num --;
    this->menuItemAddQuantity --;
    ui->editQuantity->setText(QString::number(num));
}

