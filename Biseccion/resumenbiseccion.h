#ifndef RESUMENBISECCION_H
#define RESUMENBISECCION_H

#include <QMainWindow>
#include <menuecuacionesnolineales.h>
#include <biseccion.h>

namespace Ui {
class resumenbiseccion;
}

class resumenbiseccion : public QMainWindow
{
    Q_OBJECT

public:
    explicit resumenbiseccion(QWidget *parent = nullptr);
    ~resumenbiseccion();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::resumenbiseccion *ui;
};

#endif // RESUMENBISECCION_H
