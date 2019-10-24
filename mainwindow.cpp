#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_boton_clicked()
{
    mensajesalida *ventana = new mensajesalida;
    ventana->setVisible(true);
    this->setVisible(false);
}

void MainWindow::on_pushButton_clicked()
{
    mensajeIntroduccion *ventana = new mensajeIntroduccion;
    ventana->show();            //ventana->setVisible(true);   ==  ventana->show();
    this->setVisible(false);    //this->hide();  ==  ventana->setVisible(false);
}
