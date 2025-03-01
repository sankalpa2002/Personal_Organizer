#ifndef SPECIALDATES_H
#define SPECIALDATES_H

#include <QDialog>
#include "databaseheader.h"


namespace Ui {
class specialdates;
}

class specialdates : public QDialog
{
    Q_OBJECT

public:
    explicit specialdates(QWidget *parent = nullptr);
    ~specialdates();

private slots:
    void on_pushButton_3_clicked();

    void on_adddate_clicked();

    void on_viewdates_clicked();

    void on_entryclear_clicked();

    void on_clear_clicked();

    void on_clear_2_clicked();

private:
    Ui::specialdates *ui;
    QSqlQueryModel *model;
};

#endif // SPECIALDATES_H
