#ifndef SECANTE_H
#define SECANTE_H

#include <QMainWindow>
#include <menuecuacionesnolineales.h>

namespace Ui {
class secante;
}

class secante : public QMainWindow
{
    Q_OBJECT

public:
    explicit secante(QWidget *parent = nullptr);
    ~secante();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::secante *ui;
};

#endif // SECANTE_H
