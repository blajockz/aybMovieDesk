#include "admininter.h"
#include "ui_admininter.h"
#include <QApplication>
#include "addfilm.h"
#include "admincmd.h"
#include "modifyfilm.h"
#include "delres.h"
#include "QSqlQuery"
#include "QSqlError"
#include "viewfilms.h"
#include "viewres.h"


admininter::admininter(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admininter)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &admininter::showAddFilm);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &admininter::deletefilm);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &admininter::showEdit);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &admininter::closeinter);
    connect(ui->pushButton_5, &QPushButton::clicked, this, &admininter::delreser);
    connect(ui->pushButton_7, &QPushButton::clicked, this, &admininter::clearfilms);
    connect(ui->pushButton_8, &QPushButton::clicked, this, &admininter::clearreservations);
    connect(ui->pushButton_6, &QPushButton::clicked, this, &admininter::displayfilms);
    connect(ui->pushButton_9, &QPushButton::clicked, this, &admininter::displayRes);
}
admininter::~admininter()
{
    delete ui;
}

void admininter::showinterface()
{
    adminint = new admininter();
    adminint->setAttribute(Qt::WA_DeleteOnClose);
    adminint->show();
}
void admininter::showAddFilm()
{
    addfilm a;
    a.showOption();
    this->close();
}
void admininter::deletefilm()
{
    admincmd ad;
    ad.showinterface();
    this->close();
    ad.DropFilm();
}

void admininter::showEdit()
{
    modifyfilm film;
    film.showinterface();
    this->close();
}
void admininter::delreser()
{
    delRes x;
    x.open();
    this->close();
}
void admininter::closeinter()
{
    this->close();
}

void admininter::displayfilms()
{
    ViewFilms x;
    x.OpenInterface();
    this->close();
}
void admininter::displayRes()
{
    viewres res;
    res.OpenInterface();
    this->close();
}
void admininter::clearfilms()
{
    QSqlQuery query;

    if (!query.exec("DELETE FROM Film")) {
        qDebug() << "Failed to delete films:" << query.lastError().text();
        return;
    }

    if (!query.exec("DELETE FROM sqlite_sequence WHERE name='Film'")) {
        qDebug() << "Failed to reset Film sequence:" << query.lastError().text();
        return;
    }

    qDebug() << "All films have been successfully deleted from database!";
}
void admininter::clearreservations()
{
    QSqlQuery query;

    if(!query.exec("DELETE FROM Reservation")){
        qDebug()<<"Failed to delete reservations: "<<query.lastError().text();
        return;
    }
    else if(!query.exec("DELETE FROM sqlite_sequence WHERE name='Reservation'"))
    {
        qDebug()<<"Failed to reset Reservations sequence: "<<query.lastError().text();
        return;
    }
    else
        qDebug()<<"All reservations have been successfully deleted from database!";
}
