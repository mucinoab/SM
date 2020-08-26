#include "sel.h"
#include "ui_sel.h"

SEL::SEL(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SEL)
{
    ui->setupUi(this);
}

SEL::~SEL()
{
    delete ui;
}

void SEL::on_pushButton_clicked()
{
    Menu *ventana = new Menu;
    ventana->setVisible(true);
    this->setVisible(false);
}

void SEL::on_pushButton_2_clicked()
{
    menuSEL *ventana = new menuSEL;
    ventana->setVisible(true);
    this->setVisible(false);
}
