#include "mensajesalida.h"
#include "ui_mensajesalida.h"

mensajesalida::mensajesalida(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mensajesalida)
{
    ui->setupUi(this);
}

mensajesalida::~mensajesalida()
{
    delete ui;
}

void mensajesalida::on_pushButton_clicked()
{
    this->close();
}
