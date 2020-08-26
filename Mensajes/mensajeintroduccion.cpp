#include "mensajeintroduccion.h"
#include "ui_mensajeintroduccion.h"

mensajeIntroduccion::mensajeIntroduccion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mensajeIntroduccion)
{
    ui->setupUi(this);
}

mensajeIntroduccion::~mensajeIntroduccion()
{
    delete ui;
}

void mensajeIntroduccion::on_pushButton_clicked()
{
    MainWindow *ventana = new MainWindow;
    ventana->setVisible(true);
    this->setVisible(false);
}

void mensajeIntroduccion::on_pushButton_2_clicked()
{
    Menu *ventana = new Menu;
    ventana->setVisible(true);
    this->setVisible(false);
}
