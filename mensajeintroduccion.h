#ifndef MENSAJEINTRODUCCION_H
#define MENSAJEINTRODUCCION_H

#include <QMainWindow>
#include <mainwindow.h>
#include <menu.h>
#include <mensajesalida.h>

namespace Ui {
class mensajeIntroduccion;
}

class mensajeIntroduccion : public QMainWindow
{
    Q_OBJECT

public:
    explicit mensajeIntroduccion(QWidget *parent = nullptr);
    ~mensajeIntroduccion();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::mensajeIntroduccion *ui;
};

#endif // MENSAJEINTRODUCCION_H
