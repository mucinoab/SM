#ifndef NEWTON_H
#define NEWTON_H

#include <QMainWindow>
#include <menuecuacionesnolineales.h>

namespace Ui {
class newton;
}

class newton : public QMainWindow
{
    Q_OBJECT

public:
    explicit newton(QWidget *parent = nullptr);
    ~newton();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::newton *ui;
};

#endif // NEWTON_H
