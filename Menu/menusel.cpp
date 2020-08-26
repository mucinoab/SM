#include "menusel.h"
#include "ui_menusel.h"

menuSEL::menuSEL(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menuSEL)
{
    ui->setupUi(this);
}

menuSEL::~menuSEL()
{
    delete ui;
}

void menuSEL::on_pushButton_clicked()
{
    Menu *ventana = new Menu;
    ventana->setVisible(true);
    this->setVisible(false);
}

void menuSEL::on_pushButton_2_clicked()
{
    resumenGauss *ventana = new resumenGauss;
    ventana->setVisible(true);
    this->setVisible(false);
}

void menuSEL::on_pushButton_5_clicked()
{
    resumenGaussSeidel *ventana = new resumenGaussSeidel;
    ventana->setVisible(true);
    this->setVisible(false);
}

void menuSEL::on_pushButton_3_clicked()
{
    resumenGaussJordan *ventana = new resumenGaussJordan;
    ventana->setVisible(true);
    this->setVisible(false);
}

void menuSEL::on_pushButton_4_clicked()
{
    resumenJacobi *ventana = new resumenJacobi;
    ventana->setVisible(true);
    this->setVisible(false);
}
