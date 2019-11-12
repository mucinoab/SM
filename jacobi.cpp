#include "jacobi.h"
#include "ui_jacobi.h"
#include <QStandardItemModel>
#include <QMessageBox>
#include<math.h>
#include<iostream>

jacobi::jacobi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::jacobi)
{
    ui->setupUi(this);
    mGauss = new QStandardItemModel(this);
        mResp = new QStandardItemModel(this);
        mEstima = new QStandardItemModel(this);
        ui->tableView->setModel(mGauss);
        ui->tableView_2->setModel(mResp);
        ui->tableView_3->setModel(mEstima);
        n = 3;
        p = 3;
        ui->spinBox->setValue(3);
        ui->spinBox_2->setValue(3);
        mEstima->setItem(0,0,new QStandardItem(QString::number(1)));
        mEstima->setItem(0,1,new QStandardItem(QString::number(1)));
        mEstima->setItem(0,2,new QStandardItem(QString::number(1)));
        mGauss->setColumnCount(n+1);
        mGauss->setRowCount(n);
        mResp->setColumnCount(3);
        mResp->setRowCount(p);
}

jacobi::~jacobi()
{
    delete ui;
}
void jacobi::get()
    {
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<n;j++)
             {
                  a[i][j] = getValueAt(mGauss,i,j);
             }
        }

       for(int i=0;i<n;i++){
        b[i] = getValueAt(mGauss,i,n+1);

       }
        for(int j=0;j<n;j++)
           {
              T[j][0] = getValueAt(mEstima, 0,j);
           }
}
void jacobi::on_spinBox_valueChanged(int arg1)
    {
        n = arg1;
    }
    double jacobi::getValueAt(QStandardItemModel *model, int fila, int col) const
    {
        auto item = model->item(fila,col);
        if(!item)
        {
            return 0.0;
        }
        return item->text().toDouble();
    }
    void jacobi::on_pushButton_3_clicked(){
        mGauss->setColumnCount(n+1);
        mGauss->setRowCount(n);

        mResp->setColumnCount(3);
        mResp->setRowCount(p);

        mEstima ->setColumnCount(n);
        mEstima -> setRowCount(1);
    }
    void jacobi::on_pushButton_2_clicked() //calcula
        {
            get();

         /*   int m = 0;
            for (int w = 0; w< p; w++){
                m++;
                    for (int j = 0; j <= n; j++){
                        sum[j] = 0;
                        if (j == 0){
                            for (int i = 1; i <= n; i++)
                                sum[j] += ((a[j][i])*(x[i][m-1]));
                            x[j][m] = (1/a[j][j])*(b[j] - sum[j]);
                        }else
                           if ((j > 0) && (j < n)){
                            for (int i = 0; i < j; i++)
                                sum[j] = sum[j] + (a[j][i]*x[i][m-1]);
                            for (int i = j + 1; i <= n; i++)
                                sum[j] = sum[j] + (a[j][i]*x[i][m-1]);
                            x[j][w] = (1/a[j][j])*(b[j] - sum[j]);
                        }else
                           if (j == n){
                            for (int i = 0; i < n; i++)
                                sum[j] = sum[j] + (a[j][i]*x[i][m-1]);
                            x[j][m] = (1/a[j][j])*(b[j] - sum[j]);
                        }
                    }
                    xnorm = 0;
                    for(int j=0;j<=n;j=j+1)
                    {
                        xnorm = xnorm + pow(x[j][m]-x[j][m-1],2);
                    }
                    xnorm = sqrt(abs(xnorm));
                    std::cout<<xnorm<<"\n";
        for(int j=0;j<=n;j=j+1){
            mResp->setItem(w,j,new QStandardItem(QString::number(x[j][m])));
            std::cout  << x[j][m]<<"\n";
       }
            }


            */
            for (int w = 0; w< p; w++){

                for (int i=0;i<n;i++)
                        {
                            x[i][0]=(1/a[i][i])*(b[i]);
                            for (int j=0;j<n;j++)
                            {
                                if (j!=i)
                                x[i][0]=x[i][0]-(1/a[i][i])*(a[i][j]*T[j][0]);
                            }
                        }
                        for(int i=0;i<n;i++)
                        {
                            k=abs(x[i][0]-T[i][0]);
                        }
                    for (int i=0;i<n;i++)
                        T[i][0]=x[i][0];
            for(int j=0;j<n;j++)
                 mResp->setItem(w,j,new QStandardItem(QString::number(x[j][0])));
}
}
    void jacobi::on_spinBox_2_valueChanged(int arg1)
    {
        p = arg1;
        on_pushButton_2_clicked();
    }
void jacobi::on_pushButton_clicked()
{
    menuSEL *ventana = new menuSEL;
    ventana->setVisible(true);
    this->setVisible(false);
}
