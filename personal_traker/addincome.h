#ifndef ADDINCOME_H
#define ADDINCOME_H

#include <QDialog>
#include "databaseheader.h"


namespace Ui {
class addincome;
}

class addincome : public QDialog
{
    Q_OBJECT

public:
    explicit addincome(QWidget *parent = nullptr);
    ~addincome();

private slots:

    void on_insave_clicked();

    void on_incomereset_clicked();

    void on_insave_2_clicked();

private:
    Ui::addincome *ui;
};

#endif // ADDINCOME_H
