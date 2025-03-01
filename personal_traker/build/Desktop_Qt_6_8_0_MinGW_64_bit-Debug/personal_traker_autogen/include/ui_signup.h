/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *setusername;
    QLineEdit *setpassword;
    QPushButton *signupbuttn;
    QLabel *label_6;
    QPushButton *loginpage;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_8;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(800, 800);
        signup->setMaximumSize(QSize(800, 800));
        label = new QLabel(signup);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 220, 391, 41));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        label_2 = new QLabel(signup);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 369, 231, 61));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_2->setFont(font1);
        label_3 = new QLabel(signup);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 490, 241, 61));
        label_3->setFont(font1);
        setusername = new QLineEdit(signup);
        setusername->setObjectName("setusername");
        setusername->setGeometry(QRect(350, 370, 341, 41));
        setpassword = new QLineEdit(signup);
        setpassword->setObjectName("setpassword");
        setpassword->setGeometry(QRect(350, 490, 341, 41));
        setpassword->setEchoMode(QLineEdit::EchoMode::Password);
        signupbuttn = new QPushButton(signup);
        signupbuttn->setObjectName("signupbuttn");
        signupbuttn->setGeometry(QRect(340, 590, 111, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        signupbuttn->setFont(font2);
        signupbuttn->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        label_6 = new QLabel(signup);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 680, 311, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Variable Text Light")});
        font3.setPointSize(12);
        font3.setBold(false);
        label_6->setFont(font3);
        loginpage = new QPushButton(signup);
        loginpage->setObjectName("loginpage");
        loginpage->setGeometry(QRect(340, 730, 111, 41));
        loginpage->setFont(font2);
        loginpage->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        label_7 = new QLabel(signup);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, -240, 811, 331));
        label_7->setStyleSheet(QString::fromUtf8("image:url(:/images/header.jpg)"));
        label_4 = new QLabel(signup);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 0, 641, 61));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font4.setPointSize(28);
        font4.setBold(true);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        font4.setKerning(false);
        label_4->setFont(font4);
        label_5 = new QLabel(signup);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(-210, 80, 1291, 871));
        label_5->setStyleSheet(QString::fromUtf8("image:url(:/images/sky.jpg)"));
        label_8 = new QLabel(signup);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(110, 280, 611, 61));
        label_8->setFont(font1);
        label_5->raise();
        label_7->raise();
        label_4->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        setusername->raise();
        setpassword->raise();
        signupbuttn->raise();
        label_6->raise();
        loginpage->raise();
        label_8->raise();

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("signup", "Create Account", nullptr));
        label_2->setText(QCoreApplication::translate("signup", "Enter Your Username", nullptr));
        label_3->setText(QCoreApplication::translate("signup", "Set New Password", nullptr));
        signupbuttn->setText(QCoreApplication::translate("signup", "Sign Up", nullptr));
        label_6->setText(QCoreApplication::translate("signup", "Already Have An Account ?", nullptr));
        loginpage->setText(QCoreApplication::translate("signup", "Log In", nullptr));
        label_7->setText(QCoreApplication::translate("signup", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("signup", "Personal Organizer", nullptr));
        label_5->setText(QCoreApplication::translate("signup", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("signup", "Remember Your Username And Password to Log In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
