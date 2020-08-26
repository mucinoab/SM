#include "biseccion.h"
#include "ui_biseccion.h"
#include <QStandardItemModel>
#include <QJSEngine>
#include <QJSValue>
#include <QMessageBox>

biseccion::biseccion(QWidget *parent)
    : QMainWindow(parent)
    ,ui(new Ui::biseccion)
{
    ui->setupUi(this);
    mModelResultado = new QStandardItemModel(this);
    ui->tableViewTabla->setModel(mModelResultado);
    ui->spinBox->setValue(10);
    ui->lineForm->setText("Math.exp(-x)-x");
    ui->lineEdit_2->setText("-1");
    ui->lineEdit_3->setText("3");
   crear();
}

biseccion::~biseccion()
{
    delete ui;
}
double biseccion::func(double c) const
{
    double my_val;
    QJSEngine expression;
    expression.globalObject().setProperty("x", c);
    my_val = expression.evaluate(fot).toNumber();
    return my_val;
}


void biseccion::on_spinBox_valueChanged(int arg1)
{
    ren = arg1;
    crear();
}

void biseccion::on_pushButton_clicked()
{
    menuecuacionesnolineales *ventana = new menuecuacionesnolineales;
    ventana->setVisible(true);
    this->setVisible(false);


}
void   biseccion::crear()
{
    fot = ui->lineForm->text();
    QString uno,dos;

    uno = ui->lineEdit_2->text();
    dos = ui->lineEdit_3->text();
    ab = uno.toInt();
    bb = dos.toInt();

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
    for(int ix = 1;ix < ren;ix++)
    {

            cb = (ab+bb)/2;
                 if (func(cb) == 0.0)
                   {
                     break;
                    }
                 else
                   {
                   if ((func(cb)*func(ab)) < 0)
                     bb = cb;
                   else
                     ab = cb;
                  }
            mModelResultado->setItem(ix,0,new QStandardItem(QString::number(ab)));
            mModelResultado->setItem(ix,1,new QStandardItem(QString::number(bb)));
            mModelResultado->setItem(ix,2,new QStandardItem(QString::number(cb)));
            mModelResultado->setItem(ix,3,new QStandardItem(QString::number(func(ab))));
            mModelResultado->setItem(ix,4,new QStandardItem(QString::number(func(bb))));
            mModelResultado->setItem(ix,5,new QStandardItem(QString::number(func(cb))));
    }

}

