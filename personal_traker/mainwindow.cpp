#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ptrsignup = new signup();
    ptrdashboard = new Dashboard();
    ui-> enterusername ->setPlaceholderText("Enter Your Username");
    ui-> enterpassword ->setPlaceholderText("Enter Your Password");
}

MainWindow::~MainWindow()
{
    delete ptrsignup;
    delete ptrdashboard;
    delete ui;
}

void MainWindow::on_createaccount_clicked()
{
    ptrsignup->show();
}


void MainWindow::on_login_clicked()
{
    QString username = ui->enterusername->text();
    QString password = ui->enterpassword->text();

    qDebug() << "username : "<< username <<" password : "<<password;
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("E:/QT/database/personalorganizer.db");

    if (QFile::exists("E:/QT/database/personalorganizer.db")) {
        qDebug() << "Database file exists";
    } else {
        qDebug() << "Database file doesn't exist";
        return;
    }

    if (!database.open()) {
        qDebug() << "Error: Unable to open Database";
        return;
    } else {
        qDebug() << "Database opened successfully...";
    }


      QSqlQuery query(database);
      query.prepare(QString("SELECT * FROM Users WHERE username= :username AND password= :password"));
       query.bindValue(":username",username);
        query.bindValue(":password",password);

            if(!query.exec())
            {
                qDebug()<<"Query Failed To Execute"<< query.lastError().text();
                return;
            }


            if(query.next())
            {
                QString usernameFromDB=query.value("username").toString();
                QString passwordFromDB=query.value("password").toString();
                qDebug() << "User found in database: " << usernameFromDB;

                if(usernameFromDB ==username && passwordFromDB==password)
                {
                    QMessageBox::information(this,"Success","Welcome To Personal Organizer!");
                    ptrdashboard->show();
                    this->close();

                }
                else
                {
                    QMessageBox::warning(this,"Failed","Login Failed");
                }
            }else {
                qDebug() << "No matching user found in the database.";
                QMessageBox::warning(this, "Failed", "Login Failed: Incorrect username or password.");
            }


}
