#include "createres.h"
#include "ui_createres.h"
#include "QDate"
#include "QSqlQuery"
#include "QString"
#include "QSqlError"

createres::createres(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::createres)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, createres::MakeRes);
}

createres::~createres()
{
    delete ui;
}

void createres::MoveToInter()
{
    createres *x = new createres;
    x->setAttribute(Qt::WA_DeleteOnClose);
    x->show();
}
bool createres::isFilmInDatabase(QString name)
{
    QSqlQuery query;
    query.exec("SELECT Name FROM Film");
    while(query.next())
    {
        if(query.value(0).toString() == name)
            return true;
    }

    return false;
}
void createres::MakeRes()
{
    int Id;
    QString x = ui->lineEdit->text();
    QString y = ui->lineEdit_2->text();
    QString z = ui->lineEdit_3->text();
    QDate today = QDate::currentDate();
    QString dateres = today.toString("dd-MM-yyyy");

    int rows=0;
    QSqlQuery queryrow;
    queryrow.exec("SELECT COUNT(*) FROM Reservation");

    if(queryrow.next()){
        rows=queryrow.value(0).toInt();
    }

    if(rows>=200)
    {
        qDebug()<<"Reservations have reached their limit for now, retry someday later!";
        return;
    }

    if(z == "" || x == "" || y == ""){
        qDebug()<<"Please enter valid informations!";
        return;
    }

    if(isFilmInDatabase(y))
    {
        QSqlQuery query;
        query.prepare("INSERT INTO Reservation(Full_Name, Identifier, Film_Name, Date) VALUES(:a, :b, :c, :d)");
        query.bindValue(":a", z);
        query.bindValue(":b", x);
        query.bindValue(":c", y);
        query.bindValue(":d", dateres);

        if(!query.exec())
            qDebug()<<"Error: "<<query.lastError().text();
        else{
            QSqlQuery query2;
            query2.exec("SELECT MAX(ID) FROM Reservation");
            if(query2.next())
                Id= query2.value(0).toInt();

            qDebug()<<"    ---- Reservation ----    \n\n"
                     <<"Reservation ID: "<<Id<<"\n"
                     <<"Your name: "<<z<<"\n"
                     <<"Identifier: "<<x<<"\n"
                     <<"Film_Name: "<<y<<"\n"
                     <<"Reservation_Date: "<<dateres<<"\n\n"
                     <<"<< IMPORTANT: PLEASE SAVE THE INFORMATIONS OF YOUR RESERVATION!! (EG: MAKES A SCREENSHOT)\n"
                     <<"REQUESTING DELETION OF YOUR RESERVATION WILL REQUIRE RESERVATION ID! >> \n";
        }


    }
    else
        qDebug()<<"Film is OUT of our database!";
}
