#include "specialdates.h"
#include "ui_specialdates.h"
#include <QMessageBox>

specialdates::specialdates(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::specialdates)
{
    ui->setupUi(this);
}

specialdates::~specialdates()
{
    delete ui;
}

void specialdates::on_pushButton_3_clicked()
{
    this -> close();
}


void specialdates::on_adddate_clicked()
{
    QString dates = ui ->dateEdit5->text();
    QString discriptions = ui ->discriptionedit->toPlainText();

    qDebug() << "date- " << dates << "discription-" << discriptions;
    if (discriptions == nullptr){QMessageBox::warning(this,"Warning","Description Cannot be Empty!");}
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
        QMessageBox::information(this,"Success","Date Added Successfully!");
    }
    QSqlQuery query(database);
    query.prepare("insert into specialdates (Date, Description) values('" +dates+ "','" +discriptions+ "')");
    query.exec();

    query.finish();query.clear();
    ui ->discriptionedit ->clear();

    model = new QSqlQueryModel();

    model->setQuery("SELECT * FROM specialdates");
    ui ->specialdateview -> setModel (model);

    ui->dateEdit5 -> setDate(QDate (2000,01,01));
    ui->discriptionedit->clear();
    }
}


void specialdates::on_viewdates_clicked()
{
    model = new QSqlQueryModel();

    model->setQuery("SELECT * FROM specialdates");
    ui ->specialdateview -> setModel (model);
}


void specialdates::on_entryclear_clicked()
{

}


void specialdates::on_clear_clicked()
{
    ui ->specialdateview -> setModel(nullptr);
}


void specialdates::on_clear_2_clicked()
{
    ui->dateEdit5 -> setDate(QDate (2000,01,01));
    ui->discriptionedit->clear();
}

