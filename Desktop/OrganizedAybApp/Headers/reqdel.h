#ifndef REQDEL_H
#define REQDEL_H

#include <QWidget>

namespace Ui {
class reqdel;
}

class reqdel : public QWidget
{
    Q_OBJECT

public:
    explicit reqdel(QWidget *parent = nullptr);
    ~reqdel();
    void ShowMsg();

private:
    Ui::reqdel *ui;
};

#endif // REQDEL_H
