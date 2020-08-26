#ifndef RESUMENGAUSS_H
#define RESUMENGAUSS_H

#include <QMainWindow>
#include <menusel.h>
#include <gauss.h>

namespace Ui {
class resumenGauss;
}

class resumenGauss : public QMainWindow
{
    Q_OBJECT

public:
    explicit resumenGauss(QWidget *parent = nullptr);
    ~resumenGauss();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::resumenGauss *ui;
};

#endif // RESUMENGAUSS_H
