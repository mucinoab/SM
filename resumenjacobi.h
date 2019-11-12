#ifndef RESUMENJACOBI_H
#define RESUMENJACOBI_H

#include <QMainWindow>
#include <menusel.h>
#include <jacobi.h>

namespace Ui {
class resumenJacobi;
}

class resumenJacobi : public QMainWindow
{
    Q_OBJECT

public:
    explicit resumenJacobi(QWidget *parent = nullptr);
    ~resumenJacobi();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::resumenJacobi *ui;
};

#endif // RESUMENJACOBI_H
