#include "addexpenses.h"
#include "ui_addexpenses.h"
#include <QMessageBox>
#include <QDate>

addexpenses::addexpenses(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addexpenses)
{
    ui->setupUi(this);
}

addexpenses::~addexpenses()
{
    delete ui;
}
void addexpenses::on_expensreset_clicked()
{
    ui->expensecomboBox->setCurrentIndex(-1);
    ui->expensedate -> setDate(QDate (2000,01,01));
    ui ->expensediscription -> clear();
    ui ->expenseamount ->clear();
}


void addexpenses::on_expensesave_2_clicked()
{
    this -> close();
}

void addexpenses::on_expensesave_clicked()
{
    QString date = ui ->expensedate->text();
    QString category = ui ->expensecomboBox->currentText();
    QString discription = ui ->expensediscription ->toPlainText();
    QString amount = ui ->expenseamount ->text();


    qDebug() << "date:" <<date <<"category:" <<category <<"discription:" <<discription <<"amount:" <<amount;
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
            QMessageBox::information(this,"Success","Expens Added Successfully!");
        }
        QSqlQuery query(database);
        query.prepare("insert into expenses (Date, Category, Description, Amount) values('" + date + "','" + category + "', '" + discription +"','" + amount + "')");
        query.exec();
        query.finish();query.clear();
        qDebug() <<"last error : " <<query.lastError();

        ui->expensecomboBox->setCurrentIndex(-1);
        ui ->expensediscription -> clear();
        ui ->expenseamount ->clear();
        double expenseAmount = amount.toDouble();

        double categoryBudget = 0.0;
        QSqlQuery budgetQuery(database);
        budgetQuery.prepare("SELECT Budget FROM Budgets WHERE Category = :category");
        budgetQuery.bindValue(":category", category);
        if (budgetQuery.exec() && budgetQuery.next()) {
            categoryBudget = budgetQuery.value(0).toDouble();
        } else {
            qDebug() << "Failed to retrieve budget for category:" << budgetQuery.lastError().text();
            return;
        }

        double totalSpentThisMonth = 0.0;
        QSqlQuery expenseQuery(database);
        QString firstDayOfMonth =  "01/" + QDate::currentDate().toString("MM") + QDate::currentDate().toString("yyyy");
        expenseQuery.prepare("SELECT SUM(Amount) FROM Expenses WHERE Category = :category AND Date >= :firstDayOfMonth");
        expenseQuery.bindValue(":category", category);
        expenseQuery.bindValue(":firstDayOfMonth", firstDayOfMonth);

        if (expenseQuery.exec() && expenseQuery.next()) {
            totalSpentThisMonth = expenseQuery.value(0).toDouble();
        } else {
            qDebug() << "Failed to retrieve total spent for the month:" << expenseQuery.lastError().text();
            return;
        }
        double remainingBudget = categoryBudget - totalSpentThisMonth;
        if ( expenseAmount> remainingBudget) {
            QMessageBox::warning(this, "Budget Exceeded", "Your Target Budget For This Category Has Exceeded");}

    }
}
