#ifndef RESUMENDOLITTLE_H
#define RESUMENDOLITTLE_H

#include <QMainWindow>
#include <menufactorizacion.h>
#include <dolittle.h>

namespace Ui {
class resumenDolittle;
}

class resumenDolittle : public QMainWindow
{
    Q_OBJECT

public:
    explicit resumenDolittle(QWidget *parent = nullptr);
    ~resumenDolittle();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::resumenDolittle *ui;
};

#endif // RESUMENDOLITTLE_H
