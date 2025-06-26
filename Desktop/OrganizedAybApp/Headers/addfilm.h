#ifndef ADDFILM_H
#define ADDFILM_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class addfilm;
}

class addfilm : public QWidget
{
    Q_OBJECT

public:
    explicit addfilm(QWidget *parent = nullptr);
    ~addfilm();

    void showOption();
    void add();
    QString getName();
    QString getDuree();
    QString getGenre();
    void OnButtonClicked();
    void saveFilm();

private:
    Ui::addfilm *ui;
};

#endif // ADDFILM_H
