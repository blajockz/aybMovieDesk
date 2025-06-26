#include "period.h"
#include "ui_period.h"
#include "QSqlQuery"
#include "modifyfilm.h"
#include "QSqlError"
#include "QValidator"

Period::Period(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Period)
{
    ui->setupUi(this);
    QIntValidator *val = new QIntValidator(1,999);
    ui->lineEdit->setValidator(val);
    connect(ui->pushButton, &QPushButton::clicked, this, Period::changeperiod);
}

Period::~Period()
{
    delete ui;
}
void Period::affich()
{
    Period *x = new Period();
    x->setAttribute(Qt::WA_DeleteOnClose);
    x->show();
}

void Period::changeperiod()
{
    QSqlQuery query;
    int Id = ui->lineEdit->text().toInt();
    QString newperiod = ui->lineEdit_2->text();

    if(newperiod == ""){
        qDebug()<<"Please enter a valid field";
        return;
    }

    if(Id!=0)
    {
        query.prepare("UPDATE Film"
                      " SET Duree = :a"
                      " WHERE ID = :b");
        query.bindValue(":a", newperiod);
        query.bindValue(":b", Id);

        if(!query.exec())
            qDebug()<<"Error: "<<query.lastError().text();
        else if(query.numRowsAffected() == 0)
            qDebug()<<"Invalid ID";
        else
        {
            qDebug()<<"ID Fetched: "<<Id;
            qDebug()<<"Film period updated successfully";
        }
    }
}
