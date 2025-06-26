#include "addfilm.h"
#include "ui_addfilm.h"
#include "admin.h"
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlDatabase>

addfilm::addfilm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addfilm)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &addfilm::saveFilm);
}

addfilm::~addfilm()
{
    delete ui;
}
void addfilm::showOption()
{
    addfilm *x=new addfilm();
    x->setAttribute(Qt::WA_DeleteOnClose);
    x->show();
}
void addfilm::add()
{
    Admin a;
    a.AddFilm();
}
QString addfilm::getName()
{
    return ui->lineEdit->text();
}
QString addfilm::getDuree()
{
    return ui->lineEdit_4->text();
}
QString addfilm::getGenre()
{
    return ui->lineEdit_3->text();
}
void addfilm::saveFilm()
{
    QSqlQuery query;
    QString name=getName();
    QString genre=getGenre();
    QString duree=getDuree();
    if (name.isEmpty() || duree.isEmpty() || genre.isEmpty()) {
        QMessageBox::warning(this, "Empty!", "Please fill the blanks.");
        return;
    }

    query.prepare("INSERT INTO Film(Name, Duree, Genre) VALUES(:a, :b, :c)");
    query.bindValue(":a", name);
    query.bindValue(":b", duree);
    query.bindValue(":c", genre);

    if(!query.exec())
    {
        qDebug()<<"Erreur: "<<query.lastError().text();
    }
    else
    {
        qDebug()<<"Film added successfully to database";
    }
}
