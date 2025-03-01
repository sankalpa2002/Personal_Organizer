#ifndef FINANCIALSTATE_H
#define FINANCIALSTATE_H

#include <QDialog>
#include <QDialog>
#include "databaseheader.h"
#include <QMap>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>

namespace Ui {
class financialstate;
}

class financialstate : public QDialog
{
    Q_OBJECT

public:
    explicit financialstate(QWidget *parent = nullptr);
    ~financialstate();

private slots:
    void on_todahboard_clicked();

private:
    Ui::financialstate *ui;
    bool checkAndAlertNewMonth();
    void resetBudgetsForNewMonth();
    void updateDailyBudgets();
    QMap<QString, double> getTodayRemainingByCategory();


    QMap<QString, double> getTodayExpensesByCategory();
    QMap<QString, double> getBudgetsByCategory();
    QChartView* createExpensesBarChart();
};

#endif // FINANCIALSTATE_H
