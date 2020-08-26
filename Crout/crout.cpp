#include "crout.h"
#include "ui_crout.h"
#include <QStandardItemModel>
#include <QMessageBox>

crout::crout(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::crout)
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

crout::~crout()
{
    delete ui;
}
void crout::get()
{
    for(int i =0;i<3;i++)
    {
       for(int j = 0;j<3;j++)
       {
           mat[i][j] = getValueAt(mModelResultado, i, j);
       }
    }
}
void crout::LU()
{
    int n = 3;
    for (int i = 0; i < n; i++) {

            // Upper Triangular
            for (int k = i; k < n; k++) {

                // Summation of L(i, j) * U(j, k)
                double sum = 0;
                for (int j = 0; j < i; j++)
                    sum += (lower[i][j] * upper[j][k]);

                // Evaluating U(i, k)
                upper[i][k] = mat[i][k] - sum;
            }

            // Lower Triangular
            for (int k = i; k < n; k++) {
                if (i == k)
                    lower[i][i] = 1; // Diagonal as 1
                else {

                    // Summation of L(k, j) * U(j, i)
                    double sum = 0;
                    for (int j = 0; j < i; j++)
                        sum += (lower[k][j] * upper[j][i]);

                    // Evaluating L(k, i)
                    lower[k][i] = (mat[k][i] - sum) / upper[i][i];
                }
            }
        }

}
double crout::getValueAt(QStandardItemModel *model, int fila, int col) const
{
    auto item = model->item(fila,col);
    if(!item)
    {
        return 0.0;
    }
    return item->text().toDouble();
}
void crout::on_pushButton_2_clicked()
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




void crout::on_pushButton_clicked()
{
    menuFactorizacion *p = new menuFactorizacion();
    p->setVisible(true);
    this->setVisible(false);
}
