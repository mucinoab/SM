#ifndef RESUMENFALSA_H
#define RESUMENFALSA_H

#include <QMainWindow>
#include <menuecuacionesnolineales.h>
#include <falsaposicion.h>

namespace Ui {
class resumenfalsa;
}

class resumenfalsa : public QMainWindow
{
    Q_OBJECT

public:
    explicit resumenfalsa(QWidget *parent = nullptr);
    ~resumenfalsa();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::resumenfalsa *ui;
};

#endif // RESUMENFALSA_H
