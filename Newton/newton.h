#ifndef NEWTON_H
#define NEWTON_H

#include <QMainWindow>
#include <menuecuacionesnolineales.h>
#include <QJSEngine>
#include <QJSValue>
#include<QStandardItemModel>
#include <QMessageBox>
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
    //void on_pushButton_2_clicked();
    void on_spinBox_valueChanged(int);


private:
    Ui::newton *ui;
    double func(double c) const;
    void crear();
    double derivada(double x);
    QStandardItemModel *mModelResultado;
    QStandardItemModel *m_model;
    QJSEngine Engine;
    double getValueAt(QStandardItemModel *model, int fila, int col) const;
    QString fot;
    std::string form;
    double ab;
    double bb;
    double c;
    int ren;
};

#endif // NEWTON_H
