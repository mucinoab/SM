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
