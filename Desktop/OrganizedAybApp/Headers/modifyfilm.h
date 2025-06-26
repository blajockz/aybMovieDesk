#ifndef MODIFYFILM_H
#define MODIFYFILM_H

#include <QWidget>

namespace Ui {
class modifyfilm;
}

class modifyfilm : public QWidget
{
    Q_OBJECT

public:
    explicit modifyfilm(QWidget *parent = nullptr);
    ~modifyfilm();
    void showinterface();
    void modifyname();
    void modifyperiod();
    void modifyfield();
private:
    Ui::modifyfilm *ui;
};

#endif // MODIFYFILM_H
