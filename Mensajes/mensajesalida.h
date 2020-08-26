#ifndef MENSAJESALIDA_H
#define MENSAJESALIDA_H

#include <QMainWindow>

namespace Ui {
class mensajesalida;
}

class mensajesalida : public QMainWindow
{
    Q_OBJECT

public:
    explicit mensajesalida(QWidget *parent = nullptr);
    ~mensajesalida();

private slots:
    void on_pushButton_clicked();

private:
    Ui::mensajesalida *ui;
};

#endif // MENSAJESALIDA_H
