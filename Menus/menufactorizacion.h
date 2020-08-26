#ifndef MENUFACTORIZACION_H
#define MENUFACTORIZACION_H

#include <QMainWindow>
#include <menu.h>
#include <resumenlu.h>
#include <resumendolittle.h>
#include <resumencrout.h>

namespace Ui {
class menuFactorizacion;
}

class menuFactorizacion : public QMainWindow
{
    Q_OBJECT

public:
    explicit menuFactorizacion(QWidget *parent = nullptr);
    ~menuFactorizacion();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::menuFactorizacion *ui;
};

#endif // MENUFACTORIZACION_H
