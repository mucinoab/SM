#include "newton.h"
#include "ui_newton.h"
#include <QApplication>
#include <QInputDialog>

newton::newton(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::newton)
{
    ui->setupUi(this);
}

newton::~newton()
{
    delete ui;
}

void newton::on_pushButton_clicked()
{
    menuecuacionesnolineales *ventana = new menuecuacionesnolineales;
    ventana->setVisible(true);
    this->setVisible(false);
}

void newton::on_pushButton_2_clicked()
{
    QString aux;
    aux = ui->lineEdit->text();
}
