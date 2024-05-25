#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QWidget>


namespace Ui {
class registration;
}

class registration : public QWidget
{
    Q_OBJECT

public:
    explicit registration(QWidget *parent = nullptr);
    ~registration();

private slots:
    void on_btnRegister_clicked();

private:
    Ui::registration *ui;
};

#endif // REGISTRATIOBN_H
