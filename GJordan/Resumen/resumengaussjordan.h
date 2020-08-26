#ifndef RESUMENGAUSSJORDAN_H
#define RESUMENGAUSSJORDAN_H

#include <QMainWindow>
#include <menusel.h>
#include <gaussjordan.h>

namespace Ui {
class resumenGaussJordan;
}

class resumenGaussJordan : public QMainWindow
{
    Q_OBJECT

public:
    explicit resumenGaussJordan(QWidget *parent = nullptr);
    ~resumenGaussJordan();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::resumenGaussJordan *ui;
};

#endif // RESUMENGAUSSJORDAN_H
