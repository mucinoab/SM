#include "secante.h"
#include "ui_secante.h"
#include <QApplication>
#include <QInputDialog>

secante::secante(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::secante)
{
    ui->setupUi(this);
}

secante::~secante()
{
    delete ui;
}

void secante::on_pushButton_clicked()
{
    menuecuacionesnolineales *ventana = new menuecuacionesnolineales;
    ventana->setVisible(true);
    this->setVisible(false);
}

void secante::on_pushButton_2_clicked()
{
    QString aux;
    aux = ui->lineEdit->text();
}
