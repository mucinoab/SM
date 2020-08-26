#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    mensajesalida *ventana = new mensajesalida;
    ventana->setVisible(true);
    this->setVisible(false);
}

void Menu::on_pushButton_2_clicked()
{
    ecuacionesnolineales *ventana = new ecuacionesnolineales;
    ventana->setVisible(true);
    this->setVisible(false);
}

void Menu::on_pushButton_5_clicked()
{
    mensajeIntroduccion *ventana = new mensajeIntroduccion;
    ventana->setVisible(true);
    this->setVisible(false);
}

void Menu::on_pushButton_3_clicked()
{
    SEL *ventana = new SEL;
    ventana->setVisible(true);
    this->setVisible(false);
}

void Menu::on_pushButton_4_clicked()
{
    resumenLU *x = new resumenLU;
    x->setVisible(true);
    this->setVisible(false);
}
