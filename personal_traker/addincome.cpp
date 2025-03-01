#include "addincome.h"
#include "ui_addincome.h"
#include <QMessageBox>

addincome::addincome(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addincome)
{
    ui->setupUi(this);
}

addincome::~addincome()
{
    delete ui;
}

void addincome::on_insave_clicked()
{
    QString date = ui ->incomedateEdit->text();
    QString source = ui ->incomecomboBox->currentText();
    QString discription = ui ->incomediscription ->toPlainText();
    QString amount = ui ->incomeamount ->text();

    qDebug() << "date:" <<date <<"source:" <<source <<"discription:" <<discription <<"amount:" <<amount;
    if (discription == nullptr || amount == nullptr)
    {
        QMessageBox::warning(this,"Warning","Fields Cannot be Empty!");
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
        QMessageBox::information(this,"Success","Income Added Successfully!");
    }
    QSqlQuery query(database);
    query.prepare("insert into income (Date, Source, Description, Amount) values('" + date + "','" + source + "', '" + discription +"','" + amount + "')");
    query.exec();
    query.finish();query.clear();
    qDebug() <<"last error : " <<query.lastError().text();

    ui ->incomecomboBox ->setCurrentIndex(-1);
    ui ->incomediscription ->clear();
    ui ->incomeamount ->clear();
    }
}


void addincome::on_incomereset_clicked()
{
    ui ->incomedateEdit ->setDate(QDate (2000,01,01));
    ui ->incomecomboBox ->setCurrentIndex(-1);
    ui ->incomediscription ->clear();
    ui ->incomeamount ->clear();
}


void addincome::on_insave_2_clicked()
{
    this -> close();
}

