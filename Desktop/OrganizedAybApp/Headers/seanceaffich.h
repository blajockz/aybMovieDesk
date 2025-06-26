#ifndef SEANCEAFFICH_H
#define SEANCEAFFICH_H

#include <QWidget>

namespace Ui {
class SeanceAffich;
}

class SeanceAffich : public QWidget
{
    Q_OBJECT

public:
    explicit SeanceAffich(QWidget *parent = nullptr);
    ~SeanceAffich();

private:
    Ui::SeanceAffich *ui;
};

#endif // SEANCEAFFICH_H
