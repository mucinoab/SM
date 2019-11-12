#ifndef CROUT_H
#define CROUT_H

#include <QMainWindow>
#include <menufactorizacion.h>
#include<QStandardItemModel>


namespace Ui {
class crout;
}

class crout : public QMainWindow
{
    Q_OBJECT

public:
    explicit crout(QWidget *parent = nullptr);
    ~crout();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();


private:
    Ui::crout *ui;
    QStandardItemModel *mModelResultado;
    QStandardItemModel *mModL;
    QStandardItemModel *mModU;
    double getValueAt(QStandardItemModel *model, int fila, int col) const;
    void LU();
    void get();
    double lower[3][3],upper[3][3];
    double mat[3][3];
    void poner();
};

#endif // CROUT_H
