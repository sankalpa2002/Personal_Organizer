/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_2;
    QLineEdit *enterusername;
    QLineEdit *enterpassword;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *login;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *createaccount;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 800);
        MainWindow->setMaximumSize(QSize(800, 800));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 130, 531, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Variable Text Semibold")});
        font.setPointSize(22);
        font.setBold(true);
        label_2->setFont(font);
        enterusername = new QLineEdit(centralwidget);
        enterusername->setObjectName("enterusername");
        enterusername->setGeometry(QRect(340, 207, 301, 41));
        enterpassword = new QLineEdit(centralwidget);
        enterpassword->setObjectName("enterpassword");
        enterpassword->setGeometry(QRect(340, 300, 301, 41));
        enterpassword->setMaximumSize(QSize(700, 800));
        enterpassword->setEchoMode(QLineEdit::EchoMode::Password);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 220, 121, 20));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_3->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(200, 310, 111, 20));
        label_4->setFont(font1);
        login = new QPushButton(centralwidget);
        login->setObjectName("login");
        login->setGeometry(QRect(350, 378, 101, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        login->setFont(font2);
        login->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 470, 261, 20));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 460, 321, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Variable Text Light")});
        font3.setPointSize(12);
        font3.setBold(true);
        label_6->setFont(font3);
        createaccount = new QPushButton(centralwidget);
        createaccount->setObjectName("createaccount");
        createaccount->setGeometry(QRect(300, 540, 201, 51));
        createaccount->setFont(font2);
        createaccount->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 0, 641, 61));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font4.setPointSize(28);
        font4.setBold(true);
        font4.setUnderline(false);
        font4.setStrikeOut(false);
        font4.setKerning(false);
        label_8->setFont(font4);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, -240, 801, 351));
        label_7->setStyleSheet(QString::fromUtf8("image:url(:/images/header.jpg)"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-210, 90, 1291, 871));
        label->setStyleSheet(QString::fromUtf8("image:url(:/images/sky.jpg)"));
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        label_7->raise();
        label_2->raise();
        enterusername->raise();
        enterpassword->raise();
        label_3->raise();
        label_4->raise();
        login->raise();
        label_5->raise();
        label_6->raise();
        createaccount->raise();
        label_8->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Log In To Continue", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        login->setText(QCoreApplication::translate("MainWindow", "Log In", nullptr));
        label_5->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Already Didn't Have An Account ?", nullptr));
        createaccount->setText(QCoreApplication::translate("MainWindow", "Create account", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Personal Organizer", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
