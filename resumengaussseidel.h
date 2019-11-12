#ifndef RESUMENGAUSSSEIDEL_H
#define RESUMENGAUSSSEIDEL_H

#include <QMainWindow>
#include <menusel.h>
#include<gaussseidel.h>

namespace Ui {
class resumenGaussSeidel;
}

class resumenGaussSeidel : public QMainWindow
{
    Q_OBJECT

public:
    explicit resumenGaussSeidel(QWidget *parent = nullptr);
    ~resumenGaussSeidel();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::resumenGaussSeidel *ui;
};

#endif // RESUMENGAUSSSEIDEL_H
