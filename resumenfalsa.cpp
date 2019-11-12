#include "resumenfalsa.h"
#include "ui_resumenfalsa.h"

resumenfalsa::resumenfalsa(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::resumenfalsa)
{
    ui->setupUi(this);
}

resumenfalsa::~resumenfalsa()
{
    delete ui;
}

void resumenfalsa::on_pushButton_clicked()
{
    menuecuacionesnolineales *ventana = new menuecuacionesnolineales;
    ventana->setVisible(true);
    this->setVisible(false);
}

void resumenfalsa::on_pushButton_2_clicked()
{
    falsaposicion *ventana = new falsaposicion;
    ventana->setVisible(true);
    this->setVisible(false);
}
