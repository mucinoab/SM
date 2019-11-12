#include "resumengaussseidel.h"
#include "ui_resumengaussseidel.h"

resumenGaussSeidel::resumenGaussSeidel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::resumenGaussSeidel)
{
    ui->setupUi(this);
}

resumenGaussSeidel::~resumenGaussSeidel()
{
    delete ui;
}

void resumenGaussSeidel::on_pushButton_clicked()
{
    menuSEL *x = new menuSEL();
    x->setVisible(true);
    this->setVisible(false);
}

void resumenGaussSeidel::on_pushButton_2_clicked()
{
    gaussSeidel *x = new gaussSeidel;
    x->setVisible(true);
    this->setVisible(false);
}
