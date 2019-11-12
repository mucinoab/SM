#include "newton.h"
#include "ui_newton.h"
#include <QApplication>
#include <QInputDialog>
#include <cstdlib>
#include <QStandardItemModel>
#include <QMessageBox>


newton::newton(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::newton)
{
    ui->setupUi(this);
    mModelResultado = new QStandardItemModel(this);
      ui->tableViewTabla->setModel(mModelResultado);
      ui->spinBox->setValue(10);
      ui->lineEdit->setText("Math.exp(-x)-x");
      ui->lineAprox->setText("1");
      fot = ui->lineEdit->text();


      mModelResultado->setColumnCount(3);

      QStandardItem *a = new QStandardItem("x");
      a->setIcon(QIcon( "" ));
      a->setToolTip("Aproximación");

      QStandardItem *fa = new QStandardItem("f(x)");
      fa->setIcon( QIcon( "f(x)" ) );
      fa->setToolTip("File directory");

      QStandardItem *fb = new QStandardItem("f'(x)");
      fb->setIcon( QIcon( "f'(x)" ) );
      fb->setToolTip("File directory");

      QString uno = ui->lineAprox->text();
      c = uno.toDouble();//

     mModelResultado->setItem(0,0,new QStandardItem(QString::number(c)));
     mModelResultado->setItem(0,1,new QStandardItem(QString::number(func(c))));
     mModelResultado->setItem(0,2,new QStandardItem(QString::number(derivada(c))));
     ab = getValueAt(mModelResultado,0,0);
     crear();
}

newton::~newton()
{
    delete ui;
}

double newton::func(double c) const
{
    double my_val;
    QJSEngine expression;
    expression.globalObject().setProperty("x", c);
    my_val = expression.evaluate(fot).toNumber();
    return my_val;
}
void newton::on_spinBox_valueChanged(int arg1)
{
    ren = arg1;
    crear();
}
double newton::getValueAt(QStandardItemModel *model, int fila, int col) const
{
    auto item = model->item(fila,col);
    if(!item)
    {
        return 0.0;
    }
    return item->text().toDouble();
}
void newton::on_pushButton_clicked()
{
    menuecuacionesnolineales *ventana = new menuecuacionesnolineales;
    ventana->setVisible(true);
    this->setVisible(false);
}
double newton::derivada(double x)
{

  double h = .000000001;
  double d;

  d = (func((x+h))-func(x))/h;

  return d;
}
/*
void newton::on_pushButton_2_clicked()
{
    QString aux;
    aux = ui->lineEdit->text();
}
*/
void   newton::crear(){
    fot = ui->lineEdit->text();
    mModelResultado->setRowCount(ren);



    QString uno = ui->lineAprox->text();
    c = uno.toDouble();//

   mModelResultado->setItem(0,0,new QStandardItem(QString::number(c)));
   mModelResultado->setItem(0,1,new QStandardItem(QString::number(func(c))));
   mModelResultado->setItem(0,2,new QStandardItem(QString::number(derivada(c))));
   ab = getValueAt(mModelResultado,0,0);

    bb = ab - (func(ab) / derivada(ab));

    for(int ix = 1;ix < ren; ix++){
         ab = (bb - (func(bb) / derivada(bb)));
         bb = ab;

         mModelResultado->setItem(ix,0,new QStandardItem(QString::number(ab)));
         mModelResultado->setItem(ix,1,new QStandardItem(QString::number(func(ab))));
         mModelResultado->setItem(ix,2,new QStandardItem(QString::number(derivada(ab))));
    }
 }
