#ifndef MENUCELL_H
#define MENUCELL_H

#include <QWidget>
#include <QPixmap>

namespace Ui {
class menuCell;
}

class menuCell : public QWidget
{
    Q_OBJECT

public:
    explicit menuCell(QWidget *parent = nullptr);
    void setMenuItem(QString &name, QString &price, QString &image, QString &description);
    void setMenuItemCell();
    void refreshAndSetMenuCell();
    bool isSelected();

    ~menuCell();
    QString menuItemName;
    QString menuItmePrice;
    QString menuItemImagePath;
    QString menuItemImagePath2;
    QString menuItemDescription;
    int menuItemAddQuantity;
    int dbId;
    int cellIndex;

private slots:
    void on_btnPlus_clicked();

    void on_btnMinus_clicked();

private:
    Ui::menuCell *ui;
};

#endif // MENUCELL_H
