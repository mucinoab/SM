#include "resumendolittle.h"
#include "ui_resumendolittle.h"

resumenDolittle::resumenDolittle(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::resumenDolittle)
{
    ui->setupUi(this);
}

resumenDolittle::~resumenDolittle()
{
    delete ui;
}

void resumenDolittle::on_pushButton_clicked()
{
    menuFactorizacion *p = new menuFactorizacion();
    p->setVisible(true);
    this->setVisible(false);
}

void resumenDolittle::on_pushButton_2_clicked()
{
    dolittle *p = new dolittle();
    p->setVisible(true);
    this->setVisible(false);
}
