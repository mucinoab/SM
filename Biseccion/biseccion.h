#ifndef BISECCION_H
#define BISECCION_H
#include <QMainWindow>
#include <menuecuacionesnolineales.h>
#include <QJSEngine>
#include <QJSValue>
#include<QStandardItemModel>
#include <QMessageBox>


namespace Ui {
class biseccion;
}

class biseccion : public QMainWindow
{
    Q_OBJECT

public:
    explicit biseccion(QWidget *parent = nullptr);
    ~biseccion();

private slots:
    void on_pushButton_clicked();
    void on_spinBox_valueChanged(int arg1);
    //void on_pushButton_2_windowIconTextChanged(const QString &iconText);

private:
    Ui::biseccion *ui;
    double func(double c) const;
    void   crear();
        QStandardItemModel *mModelResultado;
        QStandardItemModel *m_model;
        QJSEngine Engine;
        QString fot;
        std::string form;
        double ab;
        double bb;
        double cb;
        int ren;

};

#endif // BISECCION_H
