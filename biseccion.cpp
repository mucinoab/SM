#include "biseccion.h"
#include "ui_biseccion.h"
#include <QApplication>
#include <QInputDialog>

biseccion::biseccion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::biseccion)
{
    ui->setupUi(this);
}

biseccion::~biseccion()
{
    delete ui;
}

void biseccion::on_pushButton_clicked()
{
    menuecuacionesnolineales *ventana = new menuecuacionesnolineales;
    ventana->setVisible(true);
    this->setVisible(false);
}

void biseccion::on_pushButton_2_clicked()
{
    QString aux;
    aux = ui->lineEdit->text();
    ui->label_3->setText(aux);
}
