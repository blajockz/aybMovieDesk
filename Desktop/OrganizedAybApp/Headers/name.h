#ifndef NAME_H
#define NAME_H

#include <QWidget>
#include "QString"

namespace Ui {
class Name;
}

class Name : public QWidget
{
    Q_OBJECT

public:
    explicit Name(QWidget *parent = nullptr);
    ~Name();
    void afficher();
    void changename();

private:
    Ui::Name *ui;
};

#endif // NAME_H
