/********************************************************************************
** Form generated from reading UI file 'edittimetable.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITTIMETABLE_H
#define UI_EDITTIMETABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_edittimetable
{
public:
    QLabel *label_8;
    QLineEdit *tuesdayedit;
    QLabel *label_12;
    QLineEdit *wednesdayedit;
    QPushButton *createshedule;
    QLabel *label_6;
    QLabel *label;
    QLineEdit *mondayedit;
    QLabel *label_3;
    QLabel *label_5;
    QTimeEdit *starttime;
    QLineEdit *thursdayedit;
    QLabel *label_10;
    QLineEdit *fridayedit;
    QTimeEdit *endtime;
    QLabel *label_7;
    QLabel *label_2;
    QPushButton *resetshedule;
    QPushButton *resetshedule_2;
    QLabel *label_9;
    QLabel *label_4;
    QLabel *label_11;

    void setupUi(QDialog *edittimetable)
    {
        if (edittimetable->objectName().isEmpty())
            edittimetable->setObjectName("edittimetable");
        edittimetable->resize(800, 800);
        edittimetable->setMaximumSize(QSize(800, 800));
        label_8 = new QLabel(edittimetable);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(140, 560, 161, 31));
        label_8->setMaximumSize(QSize(700, 800));
        QFont font;
        font.setFamilies({QString::fromUtf8("Yu Gothic UI Semibold")});
        font.setPointSize(14);
        font.setBold(true);
        label_8->setFont(font);
        tuesdayedit = new QLineEdit(edittimetable);
        tuesdayedit->setObjectName("tuesdayedit");
        tuesdayedit->setGeometry(QRect(430, 380, 231, 31));
        label_12 = new QLabel(edittimetable);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(140, 440, 161, 31));
        label_12->setMaximumSize(QSize(700, 800));
        label_12->setFont(font);
        wednesdayedit = new QLineEdit(edittimetable);
        wednesdayedit->setObjectName("wednesdayedit");
        wednesdayedit->setGeometry(QRect(430, 440, 231, 31));
        createshedule = new QPushButton(edittimetable);
        createshedule->setObjectName("createshedule");
        createshedule->setGeometry(QRect(80, 670, 181, 41));
        createshedule->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        label_6 = new QLabel(edittimetable);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 90, 431, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Variable")});
        font1.setPointSize(18);
        font1.setBold(true);
        label_6->setFont(font1);
        label = new QLabel(edittimetable);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 230, 161, 31));
        label->setMaximumSize(QSize(700, 800));
        label->setFont(font);
        mondayedit = new QLineEdit(edittimetable);
        mondayedit->setObjectName("mondayedit");
        mondayedit->setGeometry(QRect(430, 320, 231, 31));
        label_3 = new QLabel(edittimetable);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 230, 91, 31));
        label_3->setMaximumSize(QSize(700, 800));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Yu Gothic UI Semibold")});
        font2.setPointSize(14);
        font2.setBold(false);
        label_3->setFont(font2);
        label_5 = new QLabel(edittimetable);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(140, 320, 161, 31));
        label_5->setMaximumSize(QSize(700, 800));
        label_5->setFont(font);
        starttime = new QTimeEdit(edittimetable);
        starttime->setObjectName("starttime");
        starttime->setGeometry(QRect(360, 230, 118, 29));
        thursdayedit = new QLineEdit(edittimetable);
        thursdayedit->setObjectName("thursdayedit");
        thursdayedit->setGeometry(QRect(430, 500, 231, 31));
        label_10 = new QLabel(edittimetable);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(140, 500, 161, 31));
        label_10->setMaximumSize(QSize(700, 800));
        label_10->setFont(font);
        fridayedit = new QLineEdit(edittimetable);
        fridayedit->setObjectName("fridayedit");
        fridayedit->setGeometry(QRect(430, 560, 231, 31));
        endtime = new QTimeEdit(edittimetable);
        endtime->setObjectName("endtime");
        endtime->setGeometry(QRect(580, 230, 118, 29));
        label_7 = new QLabel(edittimetable);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(140, 380, 161, 31));
        label_7->setMaximumSize(QSize(700, 800));
        label_7->setFont(font);
        label_2 = new QLabel(edittimetable);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(530, 230, 51, 31));
        label_2->setMaximumSize(QSize(700, 800));
        label_2->setFont(font2);
        resetshedule = new QPushButton(edittimetable);
        resetshedule->setObjectName("resetshedule");
        resetshedule->setGeometry(QRect(300, 670, 181, 41));
        resetshedule->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        resetshedule_2 = new QPushButton(edittimetable);
        resetshedule_2->setObjectName("resetshedule_2");
        resetshedule_2->setGeometry(QRect(530, 670, 181, 41));
        resetshedule_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        label_9 = new QLabel(edittimetable);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, -240, 811, 331));
        label_9->setStyleSheet(QString::fromUtf8("image:url(:/images/header.jpg)"));
        label_4 = new QLabel(edittimetable);
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
        label_11 = new QLabel(edittimetable);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(-210, 80, 1291, 871));
        label_11->setStyleSheet(QString::fromUtf8("image:url(:/images/sky.jpg)"));
        label_11->raise();
        label_9->raise();
        label_4->raise();
        label_8->raise();
        tuesdayedit->raise();
        label_12->raise();
        wednesdayedit->raise();
        createshedule->raise();
        label_6->raise();
        label->raise();
        mondayedit->raise();
        label_3->raise();
        label_5->raise();
        starttime->raise();
        thursdayedit->raise();
        label_10->raise();
        fridayedit->raise();
        endtime->raise();
        label_7->raise();
        label_2->raise();
        resetshedule->raise();
        resetshedule_2->raise();

        retranslateUi(edittimetable);

        QMetaObject::connectSlotsByName(edittimetable);
    } // setupUi

    void retranslateUi(QDialog *edittimetable)
    {
        edittimetable->setWindowTitle(QCoreApplication::translate("edittimetable", "Dialog", nullptr));
        label_8->setText(QCoreApplication::translate("edittimetable", "Friday", nullptr));
        label_12->setText(QCoreApplication::translate("edittimetable", "Wednesday", nullptr));
        createshedule->setText(QCoreApplication::translate("edittimetable", "Add to Shedule", nullptr));
        label_6->setText(QCoreApplication::translate("edittimetable", "Edit Your Timetable Here", nullptr));
        label->setText(QCoreApplication::translate("edittimetable", "Set time", nullptr));
        label_3->setText(QCoreApplication::translate("edittimetable", "From", nullptr));
        label_5->setText(QCoreApplication::translate("edittimetable", "Monday", nullptr));
        label_10->setText(QCoreApplication::translate("edittimetable", "Thursday", nullptr));
        label_7->setText(QCoreApplication::translate("edittimetable", "Tuesday", nullptr));
        label_2->setText(QCoreApplication::translate("edittimetable", "To", nullptr));
        resetshedule->setText(QCoreApplication::translate("edittimetable", "Reset", nullptr));
        resetshedule_2->setText(QCoreApplication::translate("edittimetable", "Dashboard", nullptr));
        label_9->setText(QCoreApplication::translate("edittimetable", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("edittimetable", "Personal Organizer", nullptr));
        label_11->setText(QCoreApplication::translate("edittimetable", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class edittimetable: public Ui_edittimetable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITTIMETABLE_H
