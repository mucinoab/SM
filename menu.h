#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include <mensajeintroduccion.h>
#include <ecuacionesnolineales.h>
#include <sel.h>
#include <mensajesalida.h>
#include<menufactorizacion.h>
#include <resumenlu.h>

namespace Ui {
class Menu;
}

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = nullptr);
    ~Menu();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Menu *ui;
};

#endif // MENU_H
