#include "name.h"
#include "ui_name.h"
#include "QSqlQuery"
#include "QString"
#include "modifyfilm.h"
#include "QValidator"
#include "QSqlQuery"
#include "QSqlError"

Name::Name(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Name)
{
    ui->setupUi(this);
    QIntValidator *val = new QIntValidator(1,999);
    ui->lineEdit->setValidator(val);
    connect(ui->pushButton, &QPushButton::clicked, this, Name::changename);
}

Name::~Name()
{
    delete ui;
}

void Name::afficher()
{
    Name *x = new Name;
    x->setAttribute(Qt::WA_DeleteOnClose);
    x->show();
}
void Name::changename()
{
    QSqlQuery query;
    int Id = ui->lineEdit->text().toInt();
    QString newname = ui->lineEdit_2->text();

    if(newname == ""){
        qDebug()<<"Please enter a name!";
        return;
    }

    if(Id!=0)
    {
        query.prepare("UPDATE Film"
                      " SET name = :a"
                      " WHERE ID = :b");
        query.bindValue(":a", newname);
        query.bindValue(":b", Id);

        if(!query.exec())
            qDebug()<<"Error: "<<query.lastError().text();
        else if(query.numRowsAffected() == 0)
            qDebug()<<"Invalid ID";
        else
        {
            qDebug()<<"ID Fetched: "<<Id;
            qDebug()<<"Film name updated successfully";
        }
    }
}


