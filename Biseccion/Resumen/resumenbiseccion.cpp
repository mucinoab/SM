#include "resumenbiseccion.h"
#include "ui_resumenbiseccion.h"

resumenbiseccion::resumenbiseccion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::resumenbiseccion)
{
    ui->setupUi(this);
}

resumenbiseccion::~resumenbiseccion()
{
    delete ui;
}

void resumenbiseccion::on_pushButton_clicked()
{
    menuecuacionesnolineales *ventana = new menuecuacionesnolineales;
    ventana->setVisible(true);
    this->setVisible(false);
}

void resumenbiseccion::on_pushButton_2_clicked()
{
    biseccion *ventana = new biseccion;
    ventana->setVisible(true);
    this->setVisible(false);
}
