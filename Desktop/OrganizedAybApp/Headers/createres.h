#ifndef CREATERES_H
#define CREATERES_H

#include <QWidget>

namespace Ui {
class createres;
}

class createres : public QWidget
{
    Q_OBJECT

public:
    explicit createres(QWidget *parent = nullptr);
    ~createres();
    void MoveToInter();
    bool isFilmInDatabase(QString name);
    void MakeRes();

private:
    Ui::createres *ui;
};

#endif // CREATERES_H
