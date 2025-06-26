#ifndef VIEWFILMS_H
#define VIEWFILMS_H

#include <QWidget>

namespace Ui {
class ViewFilms;
}

class ViewFilms : public QWidget
{
    Q_OBJECT

public:
    explicit ViewFilms(QWidget *parent = nullptr);
    ~ViewFilms();
    void displayFilms();
    void OpenInterface();

private:
    Ui::ViewFilms *ui;
};

#endif // VIEWFILMS_H
