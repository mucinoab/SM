#include "resumengaussjordan.h"
#include "ui_resumengaussjordan.h"

resumenGaussJordan::resumenGaussJordan(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::resumenGaussJordan)
{
    ui->setupUi(this);
}

resumenGaussJordan::~resumenGaussJordan()
{
    delete ui;
}

void resumenGaussJordan::on_pushButton_clicked()
{
    menuSEL *x = new menuSEL;
    x->setVisible(true);
    this->setVisible(false);
}

void resumenGaussJordan::on_pushButton_2_clicked()
{
    gaussjordan *x = new gaussjordan;
    x->setVisible(true);
    this->setVisible(false);
}
