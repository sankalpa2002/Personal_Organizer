/********************************************************************************
** Form generated from reading UI file 'viewtimetable.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWTIMETABLE_H
#define UI_VIEWTIMETABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_viewtimetable
{
public:
    QPushButton *timetableview_2;
    QTableView *timetabletableview;
    QLabel *label_6;
    QPushButton *resettimetable;
    QPushButton *gotodashboard;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label;

    void setupUi(QDialog *viewtimetable)
    {
        if (viewtimetable->objectName().isEmpty())
            viewtimetable->setObjectName("viewtimetable");
        viewtimetable->resize(800, 800);
        viewtimetable->setMaximumSize(QSize(800, 800));
        timetableview_2 = new QPushButton(viewtimetable);
        timetableview_2->setObjectName("timetableview_2");
        timetableview_2->setGeometry(QRect(310, 100, 131, 41));
        timetableview_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        timetabletableview = new QTableView(viewtimetable);
        timetabletableview->setObjectName("timetabletableview");
        timetabletableview->setGeometry(QRect(40, 150, 721, 641));
        label_6 = new QLabel(viewtimetable);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 90, 271, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Variable")});
        font.setPointSize(18);
        font.setBold(true);
        label_6->setFont(font);
        resettimetable = new QPushButton(viewtimetable);
        resettimetable->setObjectName("resettimetable");
        resettimetable->setGeometry(QRect(470, 100, 131, 41));
        resettimetable->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        gotodashboard = new QPushButton(viewtimetable);
        gotodashboard->setObjectName("gotodashboard");
        gotodashboard->setGeometry(QRect(630, 100, 131, 41));
        gotodashboard->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        label_7 = new QLabel(viewtimetable);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, -240, 811, 331));
        label_7->setStyleSheet(QString::fromUtf8("image:url(:/images/header.jpg)"));
        label_4 = new QLabel(viewtimetable);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 0, 641, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font1.setPointSize(28);
        font1.setBold(true);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(false);
        label_4->setFont(font1);
        label = new QLabel(viewtimetable);
        label->setObjectName("label");
        label->setGeometry(QRect(-210, 80, 1291, 871));
        label->setStyleSheet(QString::fromUtf8("image:url(:/images/sky.jpg)"));
        label->raise();
        label_7->raise();
        label_4->raise();
        timetableview_2->raise();
        timetabletableview->raise();
        label_6->raise();
        resettimetable->raise();
        gotodashboard->raise();

        retranslateUi(viewtimetable);

        QMetaObject::connectSlotsByName(viewtimetable);
    } // setupUi

    void retranslateUi(QDialog *viewtimetable)
    {
        viewtimetable->setWindowTitle(QCoreApplication::translate("viewtimetable", "Dialog", nullptr));
        timetableview_2->setText(QCoreApplication::translate("viewtimetable", "View", nullptr));
        label_6->setText(QCoreApplication::translate("viewtimetable", "View Time Table", nullptr));
        resettimetable->setText(QCoreApplication::translate("viewtimetable", "Clear", nullptr));
        gotodashboard->setText(QCoreApplication::translate("viewtimetable", "Dashboard", nullptr));
        label_7->setText(QCoreApplication::translate("viewtimetable", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("viewtimetable", "Personal Organizer", nullptr));
        label->setText(QCoreApplication::translate("viewtimetable", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewtimetable: public Ui_viewtimetable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWTIMETABLE_H
