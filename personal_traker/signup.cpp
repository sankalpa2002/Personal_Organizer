#include "signup.h"
#include "ui_signup.h"
#include <QMessageBox>

signup::signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);
    ui-> setusername ->setPlaceholderText("Create Your Username");
    ui-> setpassword ->setPlaceholderText("Create Your Password");
}

signup::~signup()
{
    delete ui;
}
void signup::on_loginpage_clicked()
{
    this -> close();
}


void signup::on_signupbuttn_clicked()
{
    QString username = ui ->setusername->text();
    QString password = ui ->setpassword->text();

    qDebug() << "username:" <<username <<"password:" <<password;
    if(username  == nullptr){
        QMessageBox::warning(this,"Failed","Username or Password Cannot be Null");
    }
    else{
        if (password == nullptr)
        {
            QMessageBox::warning(this,"Failed","Username or Password Cannot be Null");
        }
        else{
            QSqlDatabase database =QSqlDatabase::addDatabase("QSQLITE");
            database.setDatabaseName("E:/QT/database/personalorganizer.db");
            if(QFile::exists("E:/QT/database/personalorganizer.db"))
            {

                qDebug()<<"Database file exists";
            }
            else
            {
                qDebug()<<"Database file doesn't exist";
                return;
            }

            if(!database.open())
            {
                qDebug()<<"Error: Unable to open Database";
                return;
            }
            else
            {
                qDebug()<<"Database open successfully...";
                QMessageBox::information(this,"Success","Account Created Successfully!\n Log In Now");
                this->close();
            }
            QSqlQuery query(database);
            query.prepare("insert into users(username, password) values('" + username + "','" + password + "')");
            query.exec();
            query.finish();query.clear();
            qDebug() <<"last error : " <<query.lastError().text();
            database.close();
        }
    }

}

