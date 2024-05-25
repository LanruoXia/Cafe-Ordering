#ifndef ITEMCELL_H
#define ITEMCELL_H

#include <QWidget>

namespace Ui {
class itemCell;
}

class itemCell : public QWidget
{
    Q_OBJECT

public:
    explicit itemCell(QWidget *parent = nullptr);
    ~itemCell();
    int cellIndex;
    QString itemName;
    QString itemPrice;
    QString itemImagePath;
    QString itemImagePath2;
    QString description;
    int dbId;


    void setItem(QString &name, QString &price, QString &image, QString &description);
    void setItemCell();
private slots:
    void on_btnRemove_clicked();

private:
    Ui::itemCell *ui;

signals:
    void closeThisItemCell(int);
};

#endif // ITEMCELL_H
