#ifndef JACOBI_H
#define JACOBI_H

#include <QMainWindow>
#include <menusel.h>
#include <resumenjacobi.h>
#include<QStandardItemModel>
namespace Ui {
class jacobi;
}

class jacobi : public QMainWindow
{
    Q_OBJECT

public:
    explicit jacobi(QWidget *parent = nullptr);
    ~jacobi();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked(); //calcula
    void on_pushButton_3_clicked(); // muestra ok
    void on_spinBox_valueChanged(int arg1);
    void on_spinBox_2_valueChanged(int);

private:
    Ui::jacobi *ui;
    QStandardItemModel *mGauss;
    QStandardItemModel *mResp;
    QStandardItemModel *mEstima;
    double getValueAt(QStandardItemModel *model, int fila, int col) const;
    int n, p=1;
    double T[50][1],e,k;
    void calc();
    double a[50][50], x[50][1], y[50], b[50], xnorm, sum[50];
    void EnterJordan();
    void gaussSeide();
    void get();
};

#endif // JACOBI_H
