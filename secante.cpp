#include "secante.h"
#include "ui_secante.h"
#include <QApplication>
#include <QInputDialog>

secante::secante(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::secante)
{
    ui->setupUi(this);
    mModelResultado = new QStandardItemModel(this);
    ui->tableViewTabla->setModel(mModelResultado);
    ui->spinBox->setValue(10);
    ui->lineForm->setText("Math.exp(-x)-x");
    ui->lineAprox->setText("-1");
    ui->lineAprox_2->setText("3");
   crear();
}

secante::~secante()
{
    delete ui;
}
double secante::func(double c) const
{
    double my_val;
    QJSEngine expression;
    expression.globalObject().setProperty("x", c);
    my_val = expression.evaluate(fot).toNumber();
    return my_val;
}
void secante::on_pushButton_clicked()
{
    menuecuacionesnolineales *ventana = new menuecuacionesnolineales;
    ventana->setVisible(true);
    this->setVisible(false);
}
void secante::on_spinBox_valueChanged(int arg1)
{
    ren = arg1;
    crear();
}

void   secante::crear()
{
    fot = ui->lineForm->text();
    QString uno,dos;
   // int n = 0;
    uno = ui->lineAprox->text();
    dos = ui->lineAprox_2->text();
    ab = uno.toInt();
    bb = dos.toInt();
    QStandardItem *a = new QStandardItem("n");
    a->setIcon(QIcon( "" ));
    a->setToolTip("primer intervalo");

    QStandardItem *b = new QStandardItem("Xn");
    b->setIcon(QIcon( "b" ));
    b->setToolTip("File Status displayed by ...");

    QStandardItem *c = new QStandardItem("F(Xn)");
    c->setIcon( QIcon( "c" ) );
    c->setToolTip("File directory");



    mModelResultado->setRowCount(ren);
    mModelResultado->setColumnCount(2);
    mModelResultado->setHorizontalHeaderItem(0,a);
    mModelResultado->setHorizontalHeaderItem(1,b);
    //mModelResultado->setHorizontalHeaderItem(2,c);


    //mModelResultado->setItem(0,0,new QStandardItem(QString::number(n)));
    mModelResultado->setItem(0,0,new QStandardItem(QString::number(ab)));
    mModelResultado->setItem(1,0,new QStandardItem(QString::number(bb)));
    mModelResultado->setItem(0,1,new QStandardItem(QString::number(func((ab)))));
    mModelResultado->setItem(1,1,new QStandardItem(QString::number(func(bb))));



    for(int ix = 2;ix < ren;ix++)
    {
          cb=ab;
          ab=bb;
          bb=ab-(ab-cb)/(func(ab)-func(cb))*func(ab);
            //mModelResultado->setItem(ix,0,new QStandardItem(QString::number(ab)));
            mModelResultado->setItem(ix,0,new QStandardItem(QString::number(bb)));
           // mModelResultado->setItem(ix,2,new QStandardItem(QString::number(cb)));
            mModelResultado->setItem(ix,1,new QStandardItem(QString::number(func(ab))));
    }

}
