#ifndef ADMININTER_H
#define ADMININTER_H

#include <QWidget>

namespace Ui {
class admininter;
}

class admininter : public QWidget
{
    Q_OBJECT

public:
    explicit admininter(QWidget *parent = nullptr);
    ~admininter();
    void showinterface();
    void showAddFilm();
    void deletefilm();
    void showEdit();
    void closeinter();
    void delreser();
    void clearfilms();
    void clearreservations();
    void displayfilms();
    void displayRes();

private:
    Ui::admininter *ui;
    admininter *adminint;
};

#endif // ADMININTER_H
