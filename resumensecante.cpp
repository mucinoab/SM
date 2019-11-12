#include "resumensecante.h"
#include "ui_resumensecante.h"

resumenSecante::resumenSecante(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::resumenSecante)
{
    ui->setupUi(this);
}

resumenSecante::~resumenSecante()
{
    delete ui;
}

void resumenSecante::on_pushButton_clicked()
{
    menuecuacionesnolineales *ventana = new menuecuacionesnolineales;
    ventana->setVisible(true);
    this->setVisible(false);
}

void resumenSecante::on_pushButton_2_clicked()
{
    secante *ventana = new secante;
    ventana->setVisible(true);
    this->setVisible(false);
}
