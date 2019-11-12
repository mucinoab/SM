#include "resumenjacobi.h"
#include "ui_resumenjacobi.h"

resumenJacobi::resumenJacobi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::resumenJacobi)
{
    ui->setupUi(this);
}

resumenJacobi::~resumenJacobi()
{
    delete ui;
}

void resumenJacobi::on_pushButton_clicked()
{
    menuSEL *x = new menuSEL();
    x->setVisible(true);
    this->setVisible(false);
}

void resumenJacobi::on_pushButton_2_clicked()
{
    jacobi *x = new jacobi;
    x->setVisible(true);
    this->setVisible(false);
}
