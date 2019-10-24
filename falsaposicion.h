#ifndef FALSAPOSICION_H
#define FALSAPOSICION_H

#include <QMainWindow>
#include <menuecuacionesnolineales.h>

namespace Ui {
class falsaposicion;
}

class falsaposicion : public QMainWindow
{
    Q_OBJECT

public:
    explicit falsaposicion(QWidget *parent = nullptr);
    ~falsaposicion();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::falsaposicion *ui;
};

#endif // FALSAPOSICION_H
