#include "falsaposicion.h"
#include "ui_falsaposicion.h"
#include <QApplication>
#include <QInputDialog>

falsaposicion::falsaposicion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::falsaposicion)
{
    ui->setupUi(this);
}

falsaposicion::~falsaposicion()
{
    delete ui;
}

void falsaposicion::on_pushButton_clicked()
{
    menuecuacionesnolineales *ventana = new menuecuacionesnolineales;
    ventana->setVisible(true);
    this->setVisible(false);
}

void falsaposicion::on_pushButton_2_clicked()
{
    QString aux;
    aux = ui->lineEdit->text();
}
