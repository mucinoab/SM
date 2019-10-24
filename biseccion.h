#ifndef BISECCION_H
#define BISECCION_H

#include <QMainWindow>
#include <menuecuacionesnolineales.h>

namespace Ui {
class biseccion;
}

class biseccion : public QMainWindow
{
    Q_OBJECT

public:
    explicit biseccion(QWidget *parent = nullptr);
    ~biseccion();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::biseccion *ui;
};

#endif // BISECCION_H
