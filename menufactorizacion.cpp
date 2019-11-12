#include "menufactorizacion.h"
#include "ui_menufactorizacion.h"

menuFactorizacion::menuFactorizacion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menuFactorizacion)
{
    ui->setupUi(this);
}

menuFactorizacion::~menuFactorizacion()
{
    delete ui;
}

void menuFactorizacion::on_pushButton_clicked()
{
    Menu *p = new Menu();
    p->setVisible(true);
    this->setVisible(false);
}

void menuFactorizacion::on_pushButton_2_clicked()
{
    resumenDolittle *p = new resumenDolittle();
    p->setVisible(true);
    this->setVisible(false);
}

void menuFactorizacion::on_pushButton_3_clicked()
{
    resumencrout *p = new resumencrout();
    p->setVisible(true);
    this->setVisible(false);
}
