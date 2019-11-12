#include "resumenlu.h"
#include "ui_resumenlu.h"

resumenLU::resumenLU(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::resumenLU)
{
    ui->setupUi(this);
}

resumenLU::~resumenLU()
{
    delete ui;
}

void resumenLU::on_pushButton_clicked()
{
    Menu *x = new Menu();
    x->setVisible(true);
    this->setVisible(false);
}

void resumenLU::on_pushButton_2_clicked()
{
    menuFactorizacion *x = new menuFactorizacion();
    x->setVisible(true);
    this->setVisible(false);
}
