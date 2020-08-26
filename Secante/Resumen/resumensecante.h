#ifndef RESUMENSECANTE_H
#define RESUMENSECANTE_H

#include <QMainWindow>
#include <menuecuacionesnolineales.h>
#include <secante.h>

namespace Ui {
class resumenSecante;
}

class resumenSecante : public QMainWindow
{
    Q_OBJECT

public:
    explicit resumenSecante(QWidget *parent = nullptr);
    ~resumenSecante();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::resumenSecante *ui;
};

#endif // RESUMENSECANTE_H
