#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QApplication>
#include "admin.h"
#include "clientinter.h"
#include "QDate"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    InitialiseDatabase();
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::OnAdminClicked);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::ClientInter);
}

MainWindow::~MainWindow()
{
    delete ui;
    db.close();
}
void MainWindow::InitialiseDatabase()
{
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Cinema");

    if(!db.open())
    {
        qDebug()<<"Erreur d'ouverture du bd: "<<db.lastError().text();
    }
    else
        qDebug()<<"Accédée au bd avec succés";

    QSqlQuery query;
    query.exec("CREATE TABLE IF NOT EXISTS Reservation("
               "ID INTEGER PRIMARY KEY AUTOINCREMENT, "
               "Full_Name TEXT, "
               "Identifier TEXT, "
               "Film_Name TEXT, "
               "Date TEXT)");

    query.exec("CREATE TABLE IF NOT EXISTS Film("
               "ID INTEGER PRIMARY KEY AUTOINCREMENT, "
               "Name TEXT, "
               "Duree TEXT, "
               "Genre TEXT)");
}
void MainWindow::OnAdminClicked()
{
    Admin A;
    A.LoginC();
    this->close();
}
void MainWindow::ClientInter()
{
    clientinter x;
    x.showInter();
    this->close();
}
