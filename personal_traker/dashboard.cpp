#include "dashboard.h"
#include "ui_dashboard.h"
#include <QMessageBox>
#include <QDate>

Dashboard::Dashboard(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
    ptraddincome = new addincome();
    ptraddexpenses = new addexpenses();
    ptrsetbudget = new setbudget();
    ptrfinancialstate = new financialstate();
    ptrreport = new report();
    ptredittimetable = new edittimetable();
    ptrviewtimetable = new viewtimetable();
    ptrspecialdates = new specialdates();
    displayspecialdates();
}
void Dashboard::displayspecialdates()
{
    QSqlQuery query;
    QDate currentDate = QDate::currentDate();
    QDate alertDate = currentDate.addDays(3);

    query.prepare("SELECT Date, Description FROM specialdates WHERE Date BETWEEN :currentDate AND :alertDate");
    query.bindValue(":currentDate", currentDate.toString("dd/MM/yyyy"));
    query.bindValue(":alertDate", alertDate.toString("dd/MM/yyyy"));

    QString alertMessage;
    if (query.exec()) {
        while (query.next()) {
            QString date = query.value("Date").toString();
            QString description = query.value("Description").toString();
            alertMessage += QString("• %1: %2\n").arg(date, description);
        }

        if (alertMessage.isEmpty()) {
            alertMessage = "No upcoming deadlines.";
        }
    } else {
        alertMessage = "Error loading deadlines.";
        qDebug() << "Error querying ImportantDates:" << query.lastError().text();
    }


    ui->Alert->setText(alertMessage);
}
Dashboard::~Dashboard()
{
    delete ui;
    delete ptraddincome;
    delete ptraddexpenses;
    delete ptrsetbudget;
    delete ptrfinancialstate;
    delete ptrreport;
    delete ptredittimetable;
    delete ptrviewtimetable;
    delete ptrspecialdates;


}

void Dashboard::on_addincome_clicked()
{
    ptraddincome -> show();
}


void Dashboard::on_addexpenses_clicked()
{
    ptraddexpenses -> show();
}


void Dashboard::on_setbudjets_clicked()
{
    ptrsetbudget -> show();
}


void Dashboard::on_financialstate_clicked()
{
    ptrfinancialstate -> show();
}


void Dashboard::on_report_clicked()
{
    ptrreport -> show();
}


void Dashboard::on_settimetable_clicked()
{
    ptredittimetable -> show();
}


void Dashboard::on_viewtimetable_clicked()
{
    ptrviewtimetable -> show();
}


void Dashboard::on_specialdates_clicked()
{
    ptrspecialdates -> show();
}


void Dashboard::on_pushButton_clicked()
{

    QSqlQuery query;
    QDate currentDate = QDate::currentDate();
    QDate alertDate = currentDate.addDays(3);

    query.prepare("SELECT Date, Description FROM specialdates WHERE Date BETWEEN :currentDate AND :alertDate");
    query.bindValue(":currentDate", currentDate.toString("dd/MM/yyyy"));
    query.bindValue(":alertDate", alertDate.toString("dd/MM/yyyy"));

    QString alertMessage;
    if (query.exec()) {
        while (query.next()) {
            QString date = query.value("Date").toString();
            QString description = query.value("Description").toString();
            alertMessage += QString("• %1: %2\n").arg(date, description);
        }

        if (alertMessage.isEmpty()) {
            alertMessage = "No upcoming deadlines.";
        }
    } else {
        alertMessage = "Error loading deadlines.";
        qDebug() << "Error querying ImportantDates:" << query.lastError().text();
    }


    ui->Alert->setText(alertMessage);
}

