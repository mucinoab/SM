#ifndef ECUACIONESNOLINEALES_H
#define ECUACIONESNOLINEALES_H

#include <QMainWindow>
#include <menu.h>
#include <menuecuacionesnolineales.h>
#include <mensajesalida.h>

namespace Ui {
class ecuacionesnolineales;
}

class ecuacionesnolineales : public QMainWindow
{
    Q_OBJECT

public:
    explicit ecuacionesnolineales(QWidget *parent = nullptr);
    ~ecuacionesnolineales();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ecuacionesnolineales *ui;
};

#endif // ECUACIONESNOLINEALES_H
