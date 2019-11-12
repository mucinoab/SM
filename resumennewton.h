#ifndef RESUMENNEWTON_H
#define RESUMENNEWTON_H

#include <QMainWindow>
#include <menuecuacionesnolineales.h>
#include <newton.h>


namespace Ui {
class resumenNewton;
}

class resumenNewton : public QMainWindow
{
    Q_OBJECT

public:
    explicit resumenNewton(QWidget *parent = nullptr);
    ~resumenNewton();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::resumenNewton *ui;
};

#endif // RESUMENNEWTON_H
