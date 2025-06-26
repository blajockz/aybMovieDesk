#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>

namespace Ui {
class Admin;
}

class Admin : public QWidget
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();
    void LoginC();
    void Auth();
    void AddFilm();
    void deleteFilm();
private:
    Ui::Admin *ui;
    Admin *AdminWin;
};

#endif // ADMIN_H
