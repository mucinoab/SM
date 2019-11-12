#ifndef FALSAPOSICION_H
#define FALSAPOSICION_H

#include <QMainWindow>
#include <menuecuacionesnolineales.h>
#include <QJSEngine>
#include <QJSValue>
#include<QStandardItemModel>
#include <QMessageBox>


namespace Ui {
class falsaposicion;
}

class falsaposicion : public QMainWindow
{
    Q_OBJECT

public:
    explicit falsaposicion(QWidget *parent = nullptr);
    ~falsaposicion();

private slots:
    void on_pushButton_clicked();
  //  void on_pushButton_2_clicked();
    void on_spinBox_valueChanged(int);


private:
    Ui::falsaposicion *ui;
   // double func(double c) const;
    void fpos(double, double );
    double func(double c) const;
    void   crear();
    QStandardItemModel *mModelResultado;
    QStandardItemModel *m_model;
    QJSEngine Engine;
    QString fot;
    std::string form;
    double ab;
    double bb;
    double cb;
        int ren;
};

#endif // FALSAPOSICION_H
