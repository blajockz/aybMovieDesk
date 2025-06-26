#ifndef VIEWRES_H
#define VIEWRES_H

#include <QWidget>

namespace Ui {
class viewres;
}

class viewres : public QWidget
{
    Q_OBJECT

public:
    explicit viewres(QWidget *parent = nullptr);
    ~viewres();
    void OpenInterface();
    void displayReservations();

private:
    Ui::viewres *ui;
};

#endif // VIEWRES_H
