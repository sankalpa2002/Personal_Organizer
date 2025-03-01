#include "financialstate.h"
#include "ui_financialstate.h"
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QMessageBox>
#include <QSqlError>
#include <QDate>
#include <QDebug>
#include <QFile>


financialstate::financialstate(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::financialstate)
{
    ui->setupUi(this);

    if (checkAndAlertNewMonth()) {
        QMessageBox::information(this, "New Month Alert", "Enter New Budgets For This Month.");
    } else {
        updateDailyBudgets();
    }

    QChartView *chartView = createExpensesBarChart();
    ui->bargraph->addWidget(chartView);

}

financialstate::~financialstate()
{
    delete ui;
}
bool financialstate::checkAndAlertNewMonth() {
    static QDate lastCheckedDate = QDate::currentDate();
    QDate currentDate = QDate::currentDate();

    if (lastCheckedDate.month() != currentDate.month()) {
        lastCheckedDate = currentDate;
        resetBudgetsForNewMonth();
        return true;
    }
    return false;
}
void financialstate::resetBudgetsForNewMonth() {
    QSqlQuery query;
    if (!query.exec("DELETE FROM Budgets")) {
        qDebug() << "Error resetting budgets:" << query.lastError().text();
    }
}
void financialstate::updateDailyBudgets() {
    QMap<QString, double> categoryRemainingAmounts = getTodayRemainingByCategory();

    for (auto it = categoryRemainingAmounts.begin(); it != categoryRemainingAmounts.end(); ++it) {
        QString category = it.key();
        double newBudget = it.value();

        QSqlQuery query;
        query.prepare("INSERT OR REPLACE INTO Budgets (Category, Budget) VALUES (:category, :budget)");
        query.bindValue(":Category", category);
        query.bindValue(":Budget", newBudget);

        if (!query.exec()) {
            qDebug() << "Error updating daily budget:" << query.lastError().text();
        }
    }
}
QMap<QString, double> financialstate::getTodayRemainingByCategory() {
    QMap<QString, double> categoryRemaining;

    QMap<QString, double> categoryBudgets = getBudgetsByCategory();
    QMap<QString, double> categoryExpenses = getTodayExpensesByCategory();

    for (auto it = categoryBudgets.begin(); it != categoryBudgets.end(); ++it) {
        QString category = it.key();
        double budget = it.value();
        double spent = categoryExpenses.value(category, 0);
        double remaining = budget - spent > 0 ? budget - spent : 0;
        categoryRemaining[category] = remaining;
    }
    return categoryRemaining;
}
QMap<QString, double> financialstate::getTodayExpensesByCategory() {
    QMap<QString, double> categoryExpenses;

    QString currentDate = QDate::currentDate().toString("dd/MM/yyyy");

    QSqlQuery query;
    query.prepare("SELECT Category, SUM(Amount) as total FROM expenses "
                  "WHERE Date = :Date "
                  "GROUP BY Category");
    query.bindValue(":Date", currentDate);

    if (query.exec()) {
        while (query.next()) {
            QString category = query.value("Category").toString();
            double totalAmount = query.value("total").toDouble();
            categoryExpenses[category] = totalAmount;
        }
    } else {
        qDebug() <<"Expense query error:" << query.lastError().text();
    }

    return categoryExpenses;
}
QMap<QString, double> financialstate::getBudgetsByCategory() {
    QMap<QString, double> categoryBudgets;


    QSqlQuery query("SELECT Category, Budget FROM Budgets");

    if (query.exec()) {
        while (query.next()) {
            QString category = query.value("Category").toString();
            double budgetAmount = query.value("Budget").toDouble();
            categoryBudgets[category] = budgetAmount;
        }
    } else {
        qDebug() << "Budget query error:" << query.lastError().text();
    }


    return categoryBudgets;
}
QChartView* financialstate::createExpensesBarChart() {
    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("E:/QT/database/personalorganizer.db");

    if(QFile::exists("E:/QT/database/personalorganizer.db"))
    {

        qDebug()<<"Database file exists";
    }
    else
    {
        qDebug()<<"Database file doesn't exist";

    }

    if(!database.open())
    {
        qDebug()<<"Error: Unable to open Database";

    }
    else
    {
        qDebug()<<"Database open successfully...";
    }
    QMap<QString, double> categoryExpenses = getTodayExpensesByCategory();
    QMap<QString, double> categoryBudgets = getBudgetsByCategory();

    QBarSet *spentSet = new QBarSet("Spent");
    QBarSet *remainingSet = new QBarSet("Remaining");

    QStringList categories;
    for (auto it = categoryBudgets.begin(); it != categoryBudgets.end(); ++it) {
        QString category = it.key();
        double budget = it.value();
        double spent = categoryExpenses.value(category, 0);
        double remaining = budget - spent > 0 ? budget - spent : 0;

        *spentSet << spent;
        *remainingSet << remaining;
        categories << category;
    }

    QBarSeries *series = new QBarSeries();
    series->append(spentSet);
    series->append(remainingSet);

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Today's Expenses by Category");

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    axisX->setTitleText("Category");
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Amount");
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    return chartView;
}


void financialstate::on_todahboard_clicked()
{
    this -> close();
}


