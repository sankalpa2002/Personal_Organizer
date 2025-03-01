#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>
#include "addincome.h"
#include "addexpenses.h"
#include "setbudget.h"
#include "financialstate.h"
#include "report.h"
#include "edittimetable.h"
#include "viewtimetable.h"
#include "specialdates.h"
#include "databaseheader.h"



namespace Ui {
class Dashboard;
}

class Dashboard : public QDialog
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void on_addincome_clicked();

    void on_addexpenses_clicked();

    void on_setbudjets_clicked();

    void on_financialstate_clicked();

    void on_report_clicked();

    void on_settimetable_clicked();

    void on_viewtimetable_clicked();

    void on_specialdates_clicked();

    void on_pushButton_clicked();

private:
    Ui::Dashboard *ui;
    addincome *ptraddincome;
    addexpenses *ptraddexpenses;
    setbudget *ptrsetbudget;
    financialstate *ptrfinancialstate;
    report *ptrreport;
    edittimetable *ptredittimetable;
    viewtimetable *ptrviewtimetable;
    specialdates *ptrspecialdates;

    void displayspecialdates();
};

#endif // DASHBOARD_H
