#include "setbudget.h"
#include "ui_setbudget.h"
#include <QMessageBox>
#include <QString>

setbudget::setbudget(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::setbudget)
{
    ui->setupUi(this);
}

setbudget::~setbudget()
{
    delete ui;
    delete model;
}

void setbudget::on_savebudget_clicked()
{
    QString category = ui ->categorycomboBox->currentText();
    QString limit = ui ->limit->text();

    qDebug() << "category- " << category << "limit-" << limit;
    if (limit == nullptr){QMessageBox::warning(this,"Warning","Limit Cannot Be zero!");}

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
        QMessageBox::information(this,"Success","Limits Added Successfully!");
    }
    QSqlQuery query(database);
    query.prepare("insert into Budgets (Category,Budget) values('" +category+ "','" +limit+ "')");
    query.exec();

    query.finish();query.clear();
    ui ->limit ->clear();

    model = new QSqlQueryModel();

    model->setQuery("SELECT FROM Budgets");
    ui ->budgetview -> setModel (model);

    ui ->categorycomboBox->setCurrentIndex(-1);
    }
}
void setbudget::on_back_clicked()
{
    this -> close();
}


void setbudget::on_view_clicked()
{
    model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM Budgets");
    ui ->budgetview -> setModel (model);
}


void setbudget::on_cleartable_clicked()
{
    ui ->budgetview -> setModel(nullptr);
}
