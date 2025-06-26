#ifndef CLIENT_H
#define CLIENT_H
#include <QApplication>
class Client
{
private:
    QString nom;
    QString email;
public:
    Client(QString a, QString b);
    void reserver(int sID, int nP);
    void AfficherSeances(int id);
    void CLogin();
};

#endif // CLIENT_H
