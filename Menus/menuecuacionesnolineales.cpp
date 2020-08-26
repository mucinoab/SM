#include "menuecuacionesnolineales.h"
#include "ui_menuecuacionesnolineales.h"

menuecuacionesnolineales::menuecuacionesnolineales(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menuecuacionesnolineales)
{
    ui->setupUi(this);
}

menuecuacionesnolineales::~menuecuacionesnolineales()
{
    delete ui;
}

void menuecuacionesnolineales::on_pushButton_clicked()
{
    Menu *ventana = new Menu;
    ventana->setVisible(true);
    this->setVisible(false);
}

void menuecuacionesnolineales::on_pushButton_2_clicked()
{
    resumenbiseccion *ventana = new resumenbiseccion;
    ventana->setVisible(true);
    this->setVisible(false);
}

void menuecuacionesnolineales::on_pushButton_3_clicked()
{
    resumenfalsa *ventana = new resumenfalsa;
    ventana->setVisible(true);
    this->setVisible(false);
}

void menuecuacionesnolineales::on_pushButton_4_clicked()
{
    resumenNewton *ventana = new resumenNewton;
    ventana->setVisible(true);
    this->setVisible(false);
}

void menuecuacionesnolineales::on_pushButton_5_clicked()
{
    resumenSecante *ventana = new resumenSecante;
    ventana->setVisible(true);
    this->setVisible(false);
}
