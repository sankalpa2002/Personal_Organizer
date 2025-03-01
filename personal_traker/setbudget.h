#ifndef SETBUDGET_H
#define SETBUDGET_H

#include <QDialog>
#include "databaseheader.h"
#include "databaseheader.h"


namespace Ui {
class setbudget;
}

class setbudget : public QDialog
{
    Q_OBJECT

public:
    explicit setbudget(QWidget *parent = nullptr);
    ~setbudget();

private slots:
    void on_savebudget_clicked();

    void on_back_clicked();

    void on_view_clicked();

    void on_cleartable_clicked();
private:
    Ui::setbudget *ui;
    QSqlQueryModel *model;
};

#endif // SETBUDGET_H
