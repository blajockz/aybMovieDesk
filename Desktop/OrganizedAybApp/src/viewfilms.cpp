#include "viewfilms.h"
#include "ui_viewfilms.h"
#include "QSqlQueryModel"
#include "QSqlError"

ViewFilms::ViewFilms(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ViewFilms)
{
    ui->setupUi(this);
    displayFilms();
}

ViewFilms::~ViewFilms()
{
    delete ui;
}

void ViewFilms::displayFilms()
{
    QSqlQueryModel *model = new QSqlQueryModel(this);
    model->setQuery("SELECT ID, Name, Duree, Genre FROM Film");

    if(model->lastError().isValid())
    {
        qDebug()<<"Error: "<<model->lastError().text();
        return;
    }
    model->setHeaderData(0, Qt::Horizontal, "ID");
    model->setHeaderData(1, Qt::Horizontal, "Name");
    model->setHeaderData(2, Qt::Horizontal, "Duree");
    model->setHeaderData(3, Qt::Horizontal, "Genre");
    ui->tableView->setModel(model);
    ui->tableView->resizeColumnsToContents();
}
void ViewFilms::OpenInterface()
{
    ViewFilms *x = new ViewFilms();
    x->setAttribute(Qt::WA_DeleteOnClose);
    x->show();
}
