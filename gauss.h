#ifndef GAUSS_H
#define GAUSS_H

#include <QMainWindow>
#include <resumengauss.h>
#include <menusel.h>
#include<QStandardItemModel>
#include<vector>

namespace Ui {
class gauss;
}

class gauss : public QMainWindow
{
    Q_OBJECT

public:
    explicit gauss(QWidget *parent = nullptr);
    ~gauss();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_spinBox_valueChanged(int arg1);


private:
    Ui::gauss *ui;
    QStandardItemModel *mGauss;
    QStandardItemModel *mResp;
    double getValueAt(QStandardItemModel *model, int fila, int col) const;
    int n;
    void calc();
    double a[50][50];
    void EnterJordan();
    void gausss();
    void get();
};

#endif // GAUSS_H
