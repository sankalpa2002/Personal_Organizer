#include "report.h"
#include "ui_report.h"

report::report(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::report)
{
    ui->setupUi(this);
}

report::~report()
{
    delete ui;
    delete model;
}

void report::on_todashboard_clicked()
{
    this -> close();
}


void report::on_viewreport_clicked()
{
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("E:/QT/database/personalorganizer.db");

    if(QFile::exists("E:/QT/database/personalorganizer.db"))
    {
        qDebug() << "Database file exists";
    }
    else
    {
        qDebug() << "Database file doesn't exist";
        return;
    }

    if(!database.open())
    {
        qDebug() << "Error: Unable to open Database";
        return;
    }
    else
    {
        qDebug() << "Database open successfully...";
    }

    model = new QSqlQueryModel();

    QString queryStr = "SELECT "
                       "(SELECT SUM(Amount) FROM income) AS TotalIncomes, "
                       "(SELECT SUM(Amount) FROM expenses) AS TotalExpenses, "
                       "(SELECT SUM(Amount) FROM income) - (SELECT SUM(Amount) FROM Expenses) AS Savings";

    model->setQuery(queryStr, database);
    ui->reporttable->setModel(model);

}

