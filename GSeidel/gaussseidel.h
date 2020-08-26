#ifndef GAUSSSEIDEL_H
#define GAUSSSEIDEL_H

#include <QMainWindow>
#include <menusel.h>
#include <resumengaussseidel.h>
#include<QStandardItemModel>
#include<vector>

namespace Ui {
class gaussSeidel;
}

class gaussSeidel : public QMainWindow
{
    Q_OBJECT

public:
    explicit gaussSeidel(QWidget *parent = nullptr);
    ~gaussSeidel();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked(); //calcula
    void on_pushButton_3_clicked(); // muestra ok
    void on_spinBox_valueChanged(int arg1);
    void on_spinBox_2_valueChanged(int);



private:
    Ui::gaussSeidel *ui;
    QStandardItemModel *mGauss;
    QStandardItemModel *mResp;
    QStandardItemModel *mEstima;
    double getValueAt(QStandardItemModel *model, int fila, int col) const;
    int n, p=1;
    void calc();
    double a[50][50], x[50], y[50], b[50];
    void EnterJordan();
    void gaussSeide();
    void get();
};

#endif // GAUSSSEIDEL_H
