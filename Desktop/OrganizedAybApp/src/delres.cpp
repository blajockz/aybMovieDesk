#include "delres.h"
#include "ui_delres.h"
#include "QValidator"
#include "QSqlQuery"
#include "QSqlError"

delRes::delRes(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::delRes)
{
    ui->setupUi(this);
    QIntValidator *validator = new QIntValidator(1,999, this);
    ui->lineEdit_2->setValidator(validator);
    connect(ui->pushButton, &QPushButton::clicked, this, delRes::deletereservation);
}

delRes::~delRes()
{
    delete ui;
}

void delRes::open()
{
    delRes *x = new delRes();
    x->setAttribute(Qt::WA_DeleteOnClose);
    x->show();
}

void delRes::deletereservation()
{
    int x = ui->lineEdit_2->text().toInt();
    QSqlQuery query;
    if(x!=0){
        query.prepare("DELETE FROM Reservation WHERE ID=:a");

        query.bindValue(":a", x);
        if(!query.exec())
            qDebug()<<"Erreur: "<<query.lastError().text();
        else if (query.numRowsAffected() == 0)
            qDebug() << "ID or Identifier Invalid";

        else
            qDebug()<<"Reservation has been successfully canceled";
    }

}
