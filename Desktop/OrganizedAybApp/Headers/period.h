#ifndef PERIOD_H
#define PERIOD_H

#include <QWidget>
#include "QString"

namespace Ui {
class Period;
}

class Period : public QWidget
{
    Q_OBJECT

public:
    explicit Period(QWidget *parent = nullptr);
    ~Period();
    void affich();
    void changeperiod();

private:
    Ui::Period *ui;
};

#endif // PERIOD_H
