#include "viewres.h"
#include "ui_viewres.h"
#include "QSqlQueryModel"
#include "QSqlError"

viewres::viewres(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::viewres)
{
    ui->setupUi(this);
    displayReservations();
}

viewres::~viewres()
{
    delete ui;
}
void viewres::OpenInterface()
{
    viewres *res = new viewres;
    res->setAttribute(Qt::WA_DeleteOnClose);
    res->show();
}

void viewres::displayReservations()
{
    QSqlQueryModel *mod = new QSqlQueryModel(this);
    mod->setQuery("SELECT ID, Full_Name, Identifier, Film_Name, Date FROM Reservation");

    if(mod->lastError().isValid()){
        qDebug()<<"Error: "<<mod->lastError().text();
        return;
    }
    mod->setHeaderData(0, Qt::Horizontal, "ID");
    mod->setHeaderData(1, Qt::Horizontal, "Full_Name");
    mod->setHeaderData(2, Qt::Horizontal, "Identifier");
    mod->setHeaderData(3, Qt::Horizontal, "Film_Name");
    mod->setHeaderData(4, Qt::Horizontal, "Date");

    ui->tableView->setModel(mod);
    ui->tableView->resizeColumnsToContents();
}
