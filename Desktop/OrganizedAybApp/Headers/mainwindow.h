#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QSqlDatabase>

#include <QMainWindow>
#include "admin.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    void InitialiseDatabase();
    void OnAdminLogin();
    void OnClientLogin();
    void AdminAuth();
    void OnAdminClicked();
    void ClientInter();
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
