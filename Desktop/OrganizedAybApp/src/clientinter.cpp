#include "clientinter.h"
#include "ui_clientinter.h"
#include "viewfilms.h"
#include "reqdel.h"
#include "createres.h"

clientinter::clientinter(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::clientinter)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, clientinter::viewfilms);
    connect(ui->pushButton_3, &QPushButton::clicked, this, clientinter::Message);
    connect(ui->pushButton_4, &QPushButton::clicked, this, clientinter::QuitInter);
    connect(ui->pushButton_2, &QPushButton::clicked, this, clientinter::createreservation);
}

clientinter::~clientinter()
{
    delete ui;
}

void clientinter::viewfilms()
{
    ViewFilms x;
    x.OpenInterface();
    this->close();
}
void clientinter::showInter()
{
    clientinter *x = new clientinter();
    x->setAttribute(Qt::WA_DeleteOnClose);
    x->show();
}
void clientinter::Message()
{
    reqdel x;
    x.ShowMsg();
    this->close();
}
void clientinter::QuitInter()
{
    this->close();
}
void clientinter::createreservation()
{
    createres x;
    x.MoveToInter();
    this->close();
}
