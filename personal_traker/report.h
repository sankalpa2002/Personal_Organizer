#ifndef REPORT_H
#define REPORT_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class report;
}

class report : public QDialog
{
    Q_OBJECT

public:
    explicit report(QWidget *parent = nullptr);
    ~report();

private slots:
    void on_todashboard_clicked();

    void on_viewreport_clicked();

private:
    Ui::report *ui;
    QSqlQueryModel *model;
};

#endif // REPORT_H
