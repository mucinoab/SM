#include "falsaposicion.h"
#include "ui_falsaposicion.h"
#include <QApplication>
#include <QInputDialog>
#include <cstdlib>
//#include"exprtk.hpp"

falsaposicion::falsaposicion(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::falsaposicion)
{
    ui->setupUi(this);
    mModelResultado = new QStandardItemModel(this);
      ui->tableViewTabla->setModel(mModelResultado);
      ui->spinBox->setValue(20);
      ui->lineEdit->setText("Math.exp(-x)-x");
      ui->lineEdit_2->setText("-1");
      ui->lineEdit_3->setText("3");
      crear();
   crear();
}

falsaposicion::~falsaposicion()
{
    delete ui;

}
double falsaposicion::func(double c) const
{
    double my_val;
    QJSEngine expression;
    expression.globalObject().setProperty("x", c);
    my_val = expression.evaluate(fot).toNumber();
    return my_val;
}

void falsaposicion ::on_spinBox_valueChanged(int arg1)
{
    ren = arg1;
    crear();
}


void   falsaposicion::crear()
{

    fot = ui->lineEdit->text();
    QString uno,dos;

    uno = ui->lineEdit_2->text();
    dos = ui->lineEdit_3->text();
    ab = uno.toInt();//
    bb = dos.toInt();//

    QStandardItem *a = new QStandardItem("a");
    a->setIcon(QIcon( "" ));
    a->setToolTip("primer intervalo");

    QStandardItem *b = new QStandardItem("b");
    b->setIcon(QIcon( "b" ));
    b->setToolTip("File Status displayed by ...");

    QStandardItem *c = new QStandardItem("c");
    c->setIcon( QIcon( "c" ) );
    c->setToolTip("File directory");

    QStandardItem *fa = new QStandardItem("f(a)");
    fa->setIcon( QIcon( "f(a)" ) );
    fa->setToolTip("File directory");

    QStandardItem *fb = new QStandardItem("f(b)");
    fb->setIcon( QIcon( "f(b)" ) );
    fb->setToolTip("File directory");

    QStandardItem *fc = new QStandardItem("f(c)");
    fc->setIcon( QIcon( "f(c)" ) );
    fc->setToolTip("File directory");

    mModelResultado->setRowCount(ren);
    mModelResultado->setColumnCount(6);
    mModelResultado->setHorizontalHeaderItem(0,a);
    mModelResultado->setHorizontalHeaderItem(1,b);
    mModelResultado->setHorizontalHeaderItem(2,c);
    mModelResultado->setHorizontalHeaderItem(3,fa);
    mModelResultado->setHorizontalHeaderItem(4,fb);
    mModelResultado->setHorizontalHeaderItem(5,fc);

    mModelResultado->setItem(0,0,new QStandardItem(QString::number(ab)));
    mModelResultado->setItem(0,1,new QStandardItem(QString::number(bb)));
    mModelResultado->setItem(0,2,new QStandardItem(QString::number(cb)));
    mModelResultado->setItem(0,3,new QStandardItem(QString::number(func(ab))));
    mModelResultado->setItem(0,4,new QStandardItem(QString::number(func(bb))));
    mModelResultado->setItem(0,5,new QStandardItem(QString::number(func(cb))));
   // int i=1;
    double  xr, f1, f2, total;
    //double prevRoot ;

    f1 = func(ab); //xl
    f2= func (bb); //xu

   // double aa, bb, faa, fbb;

    for(int ix = 1;ix < ren;ix++)
    {

         xr = ab-((func(ab)*bb)-(func(ab)*ab))/(func(bb)-func(ab));

          f1= func(ab);
          f2=func(bb);
          total=f1*f2;
          cb = xr;

         mModelResultado->setItem(ix,0,new QStandardItem(QString::number(ab)));
         mModelResultado->setItem(ix,1,new QStandardItem(QString::number(bb)));
         mModelResultado->setItem(ix,2,new QStandardItem(QString::number(cb)));
         mModelResultado->setItem(ix,3,new QStandardItem(QString::number(f1)));
         mModelResultado->setItem(ix,4,new QStandardItem(QString::number(f2)));
         mModelResultado->setItem(ix,5,new QStandardItem(QString::number(func(cb))));


          if(total < 0)
              bb = xr;
          else if(total > 0)
              ab = xr;
          //i++;//
          cb = xr;
         // mModelResultado->setItem(ix,5,new QStandardItem(QString::number(func(cb))));



    }

   }

    /*
     * //lower     //upper
void falsa_posicion(double xl, double xu, string s){
    int i=1;
    double  xr, f1, f2, total;
    //double approxError;
    double prevRoot=INT_MAX;

    f1 = func(s, xl);
    f2= func (s, xu);

    total=f1*f2;

    if(total > 0){
      cout<<"Dentro de ese intervalo no hay raíz.";
      return;
    }

    //
    for (ix = 1; ix < ren ; ix++){
      if(i != 1)
        prevRoot = xr;

      xr = ((xu*func(s,xl))-(xl*func(s,xu)))/(func(s, xl)-func(s, xu));

      //approxError = abs((xr - prevRoot) / xr) * 100;

      f1= func(s, xl);
      f2=func(s, xr);
      total=f1*f2;

      if(total < 0)
          xu = xr;
      else if(total > 0)
          xl = xr;
      i++;//
      ix++;
    }

    c = xr;
}
     *
     * /
}

*/
void falsaposicion::on_pushButton_clicked()
{
    menuecuacionesnolineales *ventana = new menuecuacionesnolineales;
    ventana->setVisible(true);
    this->setVisible(false);
}

