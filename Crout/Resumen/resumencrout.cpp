#include "resumencrout.h"
#include "ui_resumencrout.h"

resumencrout::resumencrout(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::resumencrout)
{
    ui->setupUi(this);
}

resumencrout::~resumencrout()
{
    delete ui;
}

void resumencrout::on_pushButton_clicked()
{
    menuFactorizacion *p = new menuFactorizacion();
    p->setVisible(true);
    this->setVisible(false);
}

void resumencrout::on_pushButton_2_clicked()
{
    crout *p = new crout();
    p->setVisible(true);
    this->setVisible(false);
}
