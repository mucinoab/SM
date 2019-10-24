#ifndef MENUSEL_H
#define MENUSEL_H

#include <QMainWindow>
#include <sel.h>

namespace Ui {
class menuSEL;
}

class menuSEL : public QMainWindow
{
    Q_OBJECT

public:
    explicit menuSEL(QWidget *parent = nullptr);
    ~menuSEL();

private slots:
    void on_pushButton_clicked();

private:
    Ui::menuSEL *ui;
};

#endif // MENUSEL_H
