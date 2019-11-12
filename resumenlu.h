#ifndef RESUMENLU_H
#define RESUMENLU_H

#include <QMainWindow>
#include <menu.h>
#include <menufactorizacion.h>

namespace Ui {
class resumenLU;
}

class resumenLU : public QMainWindow
{
    Q_OBJECT

public:
    explicit resumenLU(QWidget *parent = nullptr);
    ~resumenLU();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::resumenLU *ui;
};

#endif // RESUMENLU_H
