#include "field.h"
#include "ui_field.h"
#include "modifyfilm.h"
#include "QSqlQuery"
#include "QSqlError"
#include "QValidator"

Field::Field(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Field)
{
    ui->setupUi(this);
    QIntValidator *val = new QIntValidator(1,999);
    ui->lineEdit->setValidator(val);
    connect(ui->pushButton, &QPushButton::clicked, this, Field::changefield);
}

Field::~Field()
{
    delete ui;
}
void Field::display()
{
    Field *field = new Field();
    field->setAttribute(Qt::WA_DeleteOnClose);
    field->show();
}
void Field::changefield()
{
    QSqlQuery query;
    int Id = ui->lineEdit->text().toInt();
    QString newfield = ui->lineEdit_2->text();

    if(newfield == ""){
        qDebug()<<"Please enter a valid field";
        return;
    }

    if(Id!=0)
    {
        query.prepare("UPDATE Film"
                      " SET Genre = :a"
                      " WHERE ID = :b");
        query.bindValue(":a", newfield);
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
