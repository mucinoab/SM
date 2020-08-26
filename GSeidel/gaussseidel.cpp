#include "gaussseidel.h"
#include "ui_gaussseidel.h"
#include <QStandardItemModel>
#include <QMessageBox>
#include <iostream>

gaussSeidel::gaussSeidel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::gaussSeidel)
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

gaussSeidel::~gaussSeidel()
{
    delete ui;
}
void gaussSeidel::get()
{
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
         {
              a[i][j] = getValueAt(mGauss,i,j);
              std::cout << a[i][j]<<"\t";
         }
    }
    std::cout <<"bbbbbbbbbbbb\n";

   for(int i=0;i<n;i++){
    b[i] = getValueAt(mGauss,i,n+1);
    std::cout << b[i]<<"\t";

   }
   std::cout <<"xxxxxxxxxxxxxxx\n";
    for(int j=0;j<n;j++)
       {
          x[j] = getValueAt(mEstima, 0,j);
          std::cout << x[j]<<"\t";
       }
}

void gaussSeidel::gaussSeide()//converting augmented matrix to row echelon form
    {
        double temp;//Line 1
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                temp=a[j][i]/a[i][i];//Line 2
                for(int k=i;k<n+1;k++)
                {
                      a[j][k]-=temp*a[i][k];//Line 3
                    //a[j][k]-=a[j][i]*a[i][k]/a[i][i];//Line 4
                }
            }
        }
    }
void gaussSeidel::EnterJordan()//converting to reduced row echelon form
   {
      double temp;
       for(int i=n-1;i>=0;i--)
       {

           for(int j=i-1;j>=0;j--)
           {
               temp= a[j][i]/a[i][i];
               for(int k=n;k>=i;k--)
               {
                   a[j][k]-=temp*a[i][k];
               }
           }
       }

       double s[n];
       for(int i=0;i<n;i++)//making leading coefficients zero
           s[i]=0;
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n+1;j++)
           {
               if(s[i] == 0.0&&j!=n)
                   s[i]=a[i][j];
               if(s[i] != 0.0)
                   a[i][j]/=s[i];
           }
       }
   }

void gaussSeidel::on_spinBox_valueChanged(int arg1)
{
    n = arg1;
}
double gaussSeidel::getValueAt(QStandardItemModel *model, int fila, int col) const
{
    auto item = model->item(fila,col);
    if(!item)
    {
        return 0.0;
    }
    return item->text().toDouble();
}
void gaussSeidel::on_pushButton_3_clicked(){
    mGauss->setColumnCount(n+1);
    mGauss->setRowCount(n);

    mResp->setColumnCount(3);
    mResp->setRowCount(p);

    mEstima ->setColumnCount(n);
    mEstima -> setRowCount(1);
}

void gaussSeidel::on_pushButton_2_clicked() //calcula
{

    get();
   // gaussSeide();
    //EnterJordan();
    //QString f = "x";

    for (int w = 0; w< p; w++){
        for (int i = 0; i < n; i++){
            y[i] = (b[i] / a[i][i]);
            for (int j = 0; j < n; j++){
                if (j == i)
                    continue;
                y[i] = y[i] - ((a[i][j] / a[i][i]) * x[j]);
                x[i] = y[i];

            }
          mResp->setItem(w,i,new QStandardItem(QString::number(y[i])));
        }
}

/*
    for(int z = 0;z<n;z++)
    {  f.append(QString::number(z));
       mResp->setItem(z,0,new QStandardItem(p)); f= "x" ;
    }
    for(int i=0;i<p;i++)
        for(int j=0;j<n;j++)
        mResp->setItem(i,1,new QStandardItem(QString::number(y[i][j])));
*/
}

void gaussSeidel::on_pushButton_clicked()
{
    menuSEL *ventana = new menuSEL;
    ventana->setVisible(true);
    this->setVisible(false);
}
void gaussSeidel::on_spinBox_2_valueChanged(int arg1)
{
    p = arg1;
    on_pushButton_2_clicked();
}
