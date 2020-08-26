#ifndef SEL_H
#define SEL_H

#include <QMainWindow>
#include <menu.h>
#include <menusel.h>

namespace Ui {
class SEL;
}

class SEL : public QMainWindow
{
    Q_OBJECT

public:
    explicit SEL(QWidget *parent = nullptr);
    ~SEL();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::SEL *ui;
};

#endif // SEL_H
