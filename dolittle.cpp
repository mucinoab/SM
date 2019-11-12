#include "dolittle.h"
#include "ui_dolittle.h"
#include <QStandardItemModel>
#include <QMessageBox>

dolittle::dolittle(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dolittle)
{
    ui->setupUi(this);
    mModelResultado = new QStandardItemModel(this);
            mModU = new QStandardItemModel(this);
            mModL = new QStandardItemModel(this);
            memset(lower, 0, sizeof(lower));

            memset(upper, 0, sizeof(upper));

            ui->tableViewA->setModel(mModelResultado);
            ui->tableViewL->setModel(mModL);
            ui->tableViewU->setModel(mModU);
            mModelResultado->setRowCount(3);
            mModelResultado->setColumnCount(3);
            setWindowTitle("FACTORIZACION LU");
}

dolittle::~dolittle()
{
    delete ui;
}

void dolittle::on_pushButton_clicked()
{
    menuFactorizacion *p = new menuFactorizacion();
    p->setVisible(true);
    this->setVisible(false);
}
void dolittle::get()
{
    for(int i =0;i<3;i++)
    {
       for(int j = 0;j<3;j++)
       {
           mat[i][j] = getValueAt(mModelResultado, i, j);
       }
    }
}
void dolittle::LU()
{
    int n = 3,  j = 0, k = 0;
    for (int i = 0; i < n; i++) {
            // Upper Triangular
            // for (int k = i; k < n; k++) {
            //
            //     // Summation of L(i, j) * U(j, k)
            //     double sum = 0;
            //     for (int j = 0; j < i; j++)
            //         sum += (lower[i][j] * upper[j][k]);
            //
            //     // Evaluating U(i, k)
            //     upper[i][k] = mat[i][k] - sum;
            // }
            for (j = 0; j < n; j++) {
               if (j < i)
               lower[j][i] = 0;
               else {
                  lower[j][i] = mat[j][i];
                  for (k = 0; k < i; k++) {
                     lower[j][i] = lower[j][i] - lower[j][k] * upper[k][i];
                  }
               }
            }

            // Lower Triangular
            // for (int k = i; k < n; k++) {
            //     if (i == k)
            //         lower[i][i] = 1; // Diagonal as 1
            //     else {
            //
            //         // Summation of L(k, j) * U(j, i)
            //         double sum = 0;
            //         for (int j = 0; j < i; j++)
            //             sum += (lower[k][j] * upper[j][i]);
            //
            //         // Evaluating L(k, i)
            //         lower[k][i] = (mat[k][i] - sum) / upper[i][i];
            //     }
            // }

            for (j = 0; j < n; j++) {
               if (j < i)
                  upper[i][j] = 0;
               else if (j == i)
                  upper[i][j] = 1;
               else {
                  upper[i][j] = mat[i][j] / lower[i][i];
                  for (k = 0; k < i; k++) {
                     upper[i][j] = upper[i][j] - ((lower[i][k] * upper[k][j]) / lower[i][i]);
                  }
               }
            }
        }

}
double dolittle::getValueAt(QStandardItemModel *model, int fila, int col) const
{
    auto item = model->item(fila,col);
    if(!item)
    {
        return 0.0;
    }
    return item->text().toDouble();
}
void dolittle::on_pushButton_3_clicked()
{
    int n =3;
    mModL->clear();
    mModU->clear();
    mModL->setRowCount(3);
    mModL->setColumnCount(3);
    mModU->setRowCount(3);
    mModU->setColumnCount(3);
    get();
    LU();
    for (int i = 0; i < n; i++) {
           // Lower
           for (int j = 0; j < n; j++)
                  mModL->setItem(i,j,new QStandardItem(QString::number(lower[i][j])));
           // Upper
           for (int j = 0; j < n; j++)
              mModU->setItem(i,j,new QStandardItem(QString::number(upper[i][j])));
       }
}



