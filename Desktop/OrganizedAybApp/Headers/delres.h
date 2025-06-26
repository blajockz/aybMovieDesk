#ifndef DELRES_H
#define DELRES_H

#include <QWidget>

namespace Ui {
class delRes;
}

class delRes : public QWidget
{
    Q_OBJECT

public:
    explicit delRes(QWidget *parent = nullptr);
    ~delRes();
    void open();
    void deletereservation();

private:
    Ui::delRes *ui;
};

#endif // DELRES_H
