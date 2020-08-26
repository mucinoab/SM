#include "ecuacionesnolineales.h"
#include "ui_ecuacionesnolineales.h"

ecuacionesnolineales::ecuacionesnolineales(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ecuacionesnolineales)
{
    ui->setupUi(this);
}

ecuacionesnolineales::~ecuacionesnolineales()
{
    delete ui;
}

void ecuacionesnolineales::on_pushButton_clicked()
{
    Menu *ventana = new Menu;
    ventana->setVisible(true);
    this->setVisible(false);
}

void ecuacionesnolineales::on_pushButton_2_clicked()
{
    menuecuacionesnolineales *ventana = new menuecuacionesnolineales;
    ventana->setVisible(true);
    this->setVisible(false);
}
