#include "reqdel.h"
#include "ui_reqdel.h"

reqdel::reqdel(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::reqdel)
{
    ui->setupUi(this);
}

reqdel::~reqdel()
{
    delete ui;
}

void reqdel::ShowMsg()
{
    reqdel *x = new reqdel();
    x->setAttribute(Qt::WA_DeleteOnClose);
    x->show();
}
