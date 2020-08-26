#ifndef RESUMENCROUT_H
#define RESUMENCROUT_H

#include <QMainWindow>
#include <menufactorizacion.h>
#include <crout.h>

namespace Ui {
class resumencrout;
}

class resumencrout : public QMainWindow
{
    Q_OBJECT

public:
    explicit resumencrout(QWidget *parent = nullptr);
    ~resumencrout();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::resumencrout *ui;
};

#endif // RESUMENCROUT_H
