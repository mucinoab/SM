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
    biseccion *ventana = new biseccion;
    ventana->setVisible(true);
    this->setVisible(false);
}

void menuecuacionesnolineales::on_pushButton_3_clicked()
{
    falsaposicion *ventana = new falsaposicion;
    ventana->setVisible(true);
    this->setVisible(false);
}

void menuecuacionesnolineales::on_pushButton_4_clicked()
{
    newton *ventana = new newton;
    ventana->setVisible(true);
    this->setVisible(false);
}

void menuecuacionesnolineales::on_pushButton_5_clicked()
{
    secante *ventana = new secante;
    ventana->setVisible(true);
    this->setVisible(false);
}
