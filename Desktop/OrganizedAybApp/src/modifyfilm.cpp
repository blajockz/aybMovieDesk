#include "modifyfilm.h"
#include "ui_modifyfilm.h"
#include "name.h"
#include "QSqlQuery"
#include "period.h"
#include "QValidator"
#include "field.h"

modifyfilm::modifyfilm(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::modifyfilm)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &modifyfilm::modifyname);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &modifyfilm::modifyperiod);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &modifyfilm::modifyfield);
}

modifyfilm::~modifyfilm()
{
    delete ui;
}
void modifyfilm::showinterface()
{
    modifyfilm *a=new modifyfilm;
    a->show();
}

void modifyfilm::modifyname()
{
    Name x;
    x.afficher();
    this->close();
}

void modifyfilm::modifyperiod()
{
    Period x;
    x.affich();
    this->close();
}
void modifyfilm::modifyfield()
{
    Field x;
    x.display();
    this->close();
}
