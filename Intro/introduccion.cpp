#include "introduccion.h"
#include "ui_introduccion.h"

introduccion::introduccion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::introduccion)
{
    ui->setupUi(this);
}

introduccion::~introduccion()
{
    delete ui;
}

void introduccion::on_buttonBox_accepted()
{
    Menu *ventana = new Menu;
    ventana->setVisible(true);
    this->setVisible(false);
}

void introduccion::on_buttonBox_rejected()
{
    MainWindow *ventana = new MainWindow;
    ventana->setVisible(true);
    this->setVisible(false);
}
