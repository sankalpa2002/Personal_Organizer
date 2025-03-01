#ifndef EDITTIMETABLE_H
#define EDITTIMETABLE_H

#include <QDialog>
#include "databaseheader.h"


namespace Ui {
class edittimetable;
}

class edittimetable : public QDialog
{
    Q_OBJECT

public:
    explicit edittimetable(QWidget *parent = nullptr);
    ~edittimetable();

private slots:
    void on_createshedule_clicked();

    void on_resetshedule_clicked();

    void on_resetshedule_2_clicked();

private:
    Ui::edittimetable *ui;
};

#endif // EDITTIMETABLE_H
