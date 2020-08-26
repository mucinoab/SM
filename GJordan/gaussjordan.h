#ifndef GAUSSJORDAN_H
#define GAUSSJORDAN_H

#include <QMainWindow>
#include<QStandardItemModel>
#include<vector>
#include <resumengauss.h>
#include <menusel.h>

namespace Ui {
class gaussjordan;
}

class gaussjordan : public QMainWindow
{
    Q_OBJECT

public:
    explicit gaussjordan(QWidget *parent = nullptr);
    ~gaussjordan();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_spinBox_valueChanged(int arg1);


private:
    Ui::gaussjordan *ui;     
    QStandardItemModel *mGauss;
    QStandardItemModel *mResp;
    double getValueAt(QStandardItemModel *model, int fila, int col) const;
    int n;
    void calc();
    double a[50][50];
    void EnterJordan();
    void gauss();
    void get();
};

#endif // GAUSSJORDAN_H
