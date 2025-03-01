#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include "databaseheader.h"

namespace Ui {
class signup;
}

class signup : public QDialog
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();

private slots:
    void on_signupbuttn_clicked();

    void on_loginpage_clicked();

private:
    Ui::signup *ui;
};

#endif // SIGNUP_H
