#include "resumengauss.h"
#include "ui_resumengauss.h"

resumenGauss::resumenGauss(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::resumenGauss)
{
    ui->setupUi(this);
}

resumenGauss::~resumenGauss()
{
    delete ui;
}

void resumenGauss::on_pushButton_clicked()
{
    menuSEL *x = new menuSEL();
    x->setVisible(true);
    this->setVisible(false);
}

void resumenGauss::on_pushButton_2_clicked()
{
    gauss *x = new gauss;
    x->setVisible(true);
    this->setVisible(false);
}
