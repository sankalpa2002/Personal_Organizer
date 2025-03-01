#ifndef ADDEXPENSES_H
#define ADDEXPENSES_H

#include <QDialog>
#include "databaseheader.h"


namespace Ui {
class addexpenses;
}

class addexpenses : public QDialog
{
    Q_OBJECT

public:
    explicit addexpenses(QWidget *parent = nullptr);
    ~addexpenses();

private slots:
    void on_expensesave_clicked();

    void on_expensreset_clicked();

    void on_expensesave_2_clicked();

private:
    Ui::addexpenses *ui;
    QSqlQueryModel *model;
};

#endif // ADDEXPENSES_H
