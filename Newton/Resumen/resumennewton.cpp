#include "resumennewton.h"
#include "ui_resumennewton.h"

resumenNewton::resumenNewton(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::resumenNewton)
{
    ui->setupUi(this);
}

resumenNewton::~resumenNewton()
{
    delete ui;
}

void resumenNewton::on_pushButton_clicked()
{
    menuecuacionesnolineales *ventana = new menuecuacionesnolineales;
    ventana->setVisible(true);
    this->setVisible(false);
}

void resumenNewton::on_pushButton_2_clicked()
{
    newton *ventana = new newton;
    ventana->setVisible(true);
    this->setVisible(false);
}
