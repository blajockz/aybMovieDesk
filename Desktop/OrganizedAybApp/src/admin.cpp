#include "admin.h"
#include "ui_admin.h"
#include <QString>
#include <QStringList>
#include "admininter.h"
#include "admincmd.h"
#include "addfilm.h"
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QMessageBox>
#include "ui_addfilm.h"

Admin::Admin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Admin)
{
    ui->setupUi(this);
    connect(ui->pushButtonLogin, &QPushButton::clicked, this, &Admin::Auth);
}

Admin::~Admin()
{
    delete ui;
}

void Admin::LoginC()
{
    AdminWin=new Admin();
    AdminWin->setAttribute(Qt::WA_DeleteOnClose);
    AdminWin->show();
}

void Admin::Auth()
{
    admininter admin;
    QString a = ui->lineEdit->text();
    QStringList admins = {"AYOUB", "ALI", "YASSINE", "MOHAMMED", "driss"};
    if(admins.contains(a, Qt::CaseInsensitive))
    {
        QString b = ui->lineEdit_2->text();
        QStringList passwords = {"2468", "1234", "5678", "qt2468", "cisco125"};
        if(passwords.contains(b, Qt::CaseInsensitive))
        {
            if(a.compare("AYOUB", Qt::CaseInsensitive)==0 && b=="2468"){
                    qDebug()<<"Successfully logged-in";
                    admin.showinterface();
                    this->close();
                }
            else if(a.compare("ALI", Qt::CaseInsensitive)==0 && b=="1234")
            {
                qDebug()<<"Successfully logged-in";
                    admin.showinterface();
                this->close();
                }
            else if(a.compare("driss", Qt::CaseInsensitive)==0 && b=="cisco125")
                {
                    qDebug()<<"Successfully logged-in";
                    admin.showinterface();
                }
            else if(a.compare("MOHAMMED", Qt::CaseInsensitive)==0 && b=="qt2468")
                {
                    qDebug()<<"Successfully logged-in";
                    admin.showinterface();
                }
            else
                qDebug()<<"Username or password incorrect";
        }
        else
            qDebug()<<"Password incorrect";
    }
    else
    {
        qDebug()<<"Username incorrect";
    }
}
void Admin::AddFilm()
{
    addfilm a;
    a.saveFilm();
}
void Admin::deleteFilm()
{
    admincmd ad;
    ad.DropFilm();
}
