#ifndef INTRODUCCION_H
#define INTRODUCCION_H

#include <QDialog>
#include <mainwindow.h>
#include <menu.h>
namespace Ui {
class introduccion;
}

class introduccion : public QDialog
{
    Q_OBJECT

public:
    explicit introduccion(QWidget *parent = nullptr);
    ~introduccion();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::introduccion *ui;
};

#endif // INTRODUCCION_H
