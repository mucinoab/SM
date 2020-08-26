#ifndef MENUSEL_H
#define MENUSEL_H

#include <QMainWindow>
#include <sel.h>
#include <resumengauss.h>
#include <resumengaussseidel.h>
#include <resumengaussjordan.h>
#include <resumenjacobi.h>

namespace Ui {
class menuSEL;
}

class menuSEL : public QMainWindow
{
    Q_OBJECT

public:
    explicit menuSEL(QWidget *parent = nullptr);
    ~menuSEL();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::menuSEL *ui;
};

#endif // MENUSEL_H
