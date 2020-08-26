#ifndef DOLITTLE_H
#define DOLITTLE_H

#include <QMainWindow>
#include <menufactorizacion.h>
#include <QStandardItemModel>
#include <QMessageBox>

namespace Ui {
class dolittle;
}

class dolittle : public QMainWindow
{
    Q_OBJECT

public:
    explicit dolittle(QWidget *parent = nullptr);
    ~dolittle();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_3_clicked();


private:
    Ui::dolittle *ui;
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

#endif // DOLITTLE_H
