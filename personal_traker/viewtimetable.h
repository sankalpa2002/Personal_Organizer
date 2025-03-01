#ifndef VIEWTIMETABLE_H
#define VIEWTIMETABLE_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class viewtimetable;
}

class viewtimetable : public QDialog
{
    Q_OBJECT

public:
    explicit viewtimetable(QWidget *parent = nullptr);
    ~viewtimetable();

private slots:
    void on_timetableview_2_clicked();

    void on_resettimetable_clicked();

    void on_gotodashboard_clicked();

private:
    Ui::viewtimetable *ui;
    QSqlQueryModel *model;
};

#endif // VIEWTIMETABLE_H
