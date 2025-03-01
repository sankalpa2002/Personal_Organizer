#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QSqlDatabase>
#include "signup.h"
#include "dashboard.h"
#include "databaseheader.h"



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

private slots:

    void on_createaccount_clicked();

    void on_login_clicked();

private:
    Ui::MainWindow *ui;
    signup *ptrsignup;
    Dashboard *ptrdashboard;

    QSqlDatabase database;
};
#endif // MAINWINDOW_H
