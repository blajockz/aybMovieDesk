#ifndef CLIENTINTER_H
#define CLIENTINTER_H

#include <QWidget>

namespace Ui {
class clientinter;
}

class clientinter : public QWidget
{
    Q_OBJECT

public:
    explicit clientinter(QWidget *parent = nullptr);
    ~clientinter();
    void viewfilms();
    void showInter();
    void Message();
    void QuitInter();
    void createreservation();

private:
    Ui::clientinter *ui;
};

#endif // CLIENTINTER_H
