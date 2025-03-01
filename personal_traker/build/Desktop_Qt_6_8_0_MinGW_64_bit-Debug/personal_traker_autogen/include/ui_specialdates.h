/********************************************************************************
** Form generated from reading UI file 'specialdates.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECIALDATES_H
#define UI_SPECIALDATES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_specialdates
{
public:
    QLabel *label_6;
    QLabel *label;
    QDateEdit *dateEdit5;
    QLabel *label_2;
    QTextEdit *discriptionedit;
    QTableView *specialdateview;
    QLabel *label_3;
    QPushButton *viewdates;
    QPushButton *clear;
    QPushButton *pushButton_3;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_8;
    QPushButton *adddate;
    QPushButton *clear_2;

    void setupUi(QDialog *specialdates)
    {
        if (specialdates->objectName().isEmpty())
            specialdates->setObjectName("specialdates");
        specialdates->resize(800, 800);
        specialdates->setMaximumSize(QSize(800, 800));
        label_6 = new QLabel(specialdates);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 80, 321, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Variable")});
        font.setPointSize(18);
        font.setBold(true);
        label_6->setFont(font);
        label = new QLabel(specialdates);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 160, 81, 31));
        label->setMaximumSize(QSize(700, 800));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Yu Gothic UI Semibold")});
        font1.setPointSize(14);
        font1.setBold(true);
        label->setFont(font1);
        dateEdit5 = new QDateEdit(specialdates);
        dateEdit5->setObjectName("dateEdit5");
        dateEdit5->setGeometry(QRect(200, 150, 131, 41));
        label_2 = new QLabel(specialdates);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 220, 131, 31));
        label_2->setMaximumSize(QSize(700, 800));
        label_2->setFont(font1);
        discriptionedit = new QTextEdit(specialdates);
        discriptionedit->setObjectName("discriptionedit");
        discriptionedit->setGeometry(QRect(200, 200, 511, 91));
        specialdateview = new QTableView(specialdates);
        specialdateview->setObjectName("specialdateview");
        specialdateview->setGeometry(QRect(70, 390, 641, 401));
        label_3 = new QLabel(specialdates);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 340, 171, 31));
        label_3->setMaximumSize(QSize(700, 800));
        label_3->setFont(font1);
        viewdates = new QPushButton(specialdates);
        viewdates->setObjectName("viewdates");
        viewdates->setGeometry(QRect(300, 330, 111, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        viewdates->setFont(font2);
        viewdates->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        clear = new QPushButton(specialdates);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(450, 330, 111, 41));
        clear->setFont(font2);
        clear->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        pushButton_3 = new QPushButton(specialdates);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(600, 330, 111, 41));
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        label_7 = new QLabel(specialdates);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, -240, 811, 331));
        label_7->setStyleSheet(QString::fromUtf8("image:url(:/images/header.jpg)"));
        label_4 = new QLabel(specialdates);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 0, 641, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font3.setPointSize(28);
        font3.setBold(true);
        font3.setUnderline(false);
        font3.setStrikeOut(false);
        font3.setKerning(false);
        label_4->setFont(font3);
        label_5 = new QLabel(specialdates);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 0, 641, 61));
        label_5->setFont(font3);
        label_8 = new QLabel(specialdates);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(-210, 80, 1291, 871));
        label_8->setStyleSheet(QString::fromUtf8("image:url(:/images/sky.jpg)"));
        adddate = new QPushButton(specialdates);
        adddate->setObjectName("adddate");
        adddate->setGeometry(QRect(600, 150, 111, 41));
        QFont font4;
        font4.setBold(true);
        adddate->setFont(font4);
        adddate->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        clear_2 = new QPushButton(specialdates);
        clear_2->setObjectName("clear_2");
        clear_2->setGeometry(QRect(480, 150, 111, 41));
        clear_2->setFont(font4);
        clear_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: rgb(0, 0, 0);\n"
"color: rgb(0, 0, 0);"));
        label_8->raise();
        label_4->raise();
        label_7->raise();
        label_6->raise();
        label->raise();
        dateEdit5->raise();
        label_2->raise();
        discriptionedit->raise();
        specialdateview->raise();
        label_3->raise();
        viewdates->raise();
        clear->raise();
        pushButton_3->raise();
        label_5->raise();
        adddate->raise();
        clear_2->raise();

        retranslateUi(specialdates);

        QMetaObject::connectSlotsByName(specialdates);
    } // setupUi

    void retranslateUi(QDialog *specialdates)
    {
        specialdates->setWindowTitle(QCoreApplication::translate("specialdates", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("specialdates", "Add Special Dates", nullptr));
        label->setText(QCoreApplication::translate("specialdates", "Date", nullptr));
        label_2->setText(QCoreApplication::translate("specialdates", "Description", nullptr));
        label_3->setText(QCoreApplication::translate("specialdates", "Special Dates", nullptr));
        viewdates->setText(QCoreApplication::translate("specialdates", "View", nullptr));
        clear->setText(QCoreApplication::translate("specialdates", "Clear", nullptr));
        pushButton_3->setText(QCoreApplication::translate("specialdates", "Back", nullptr));
        label_7->setText(QCoreApplication::translate("specialdates", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("specialdates", "Personal Organizer", nullptr));
        label_5->setText(QCoreApplication::translate("specialdates", "Personal Organizer", nullptr));
        label_8->setText(QCoreApplication::translate("specialdates", "TextLabel", nullptr));
        adddate->setText(QCoreApplication::translate("specialdates", "Add", nullptr));
        clear_2->setText(QCoreApplication::translate("specialdates", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class specialdates: public Ui_specialdates {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECIALDATES_H
