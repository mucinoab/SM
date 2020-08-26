#ifndef SECANTE_H
#define SECANTE_H

#include <QMainWindow>
#include <menuecuacionesnolineales.h>
#include <QJSEngine>
#include <QJSValue>
#include<QStandardItemModel>
#include <QMessageBox>


namespace Ui {
class secante;
}

class secante : public QMainWindow
{
    Q_OBJECT

public:
    explicit secante(QWidget *parent = nullptr);
    ~secante();

private slots:
    void on_pushButton_clicked();
    //void on_pushButton_2_clicked();
    void on_spinBox_valueChanged(int);


private:
    Ui::secante *ui;
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

#endif // SECANTE_H
