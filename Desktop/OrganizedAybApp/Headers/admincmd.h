#ifndef ADMINCMD_H
#define ADMINCMD_H

#include <QWidget>

namespace Ui {
class admincmd;
}

class admincmd : public QWidget
{
    Q_OBJECT

public:
    explicit admincmd(QWidget *parent = nullptr);
    ~admincmd();
    void showinterface();
    void DropFilm();

private:
    Ui::admincmd *ui;
};

#endif // ADMINCMD_H
