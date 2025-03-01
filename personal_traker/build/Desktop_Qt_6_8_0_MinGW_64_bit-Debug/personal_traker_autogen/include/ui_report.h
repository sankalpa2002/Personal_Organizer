/********************************************************************************
** Form generated from reading UI file 'report.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_H
#define UI_REPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_report
{
public:
    QLabel *label_6;
    QPushButton *todashboard;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label;
    QPushButton *viewreport;
    QTableView *reporttable;

    void setupUi(QDialog *report)
    {
        if (report->objectName().isEmpty())
            report->setObjectName("report");
        report->resize(800, 800);
        report->setMaximumSize(QSize(800, 800));
        label_6 = new QLabel(report);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 80, 501, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Variable")});
        font.setPointSize(18);
        font.setBold(true);
        label_6->setFont(font);
        todashboard = new QPushButton(report);
        todashboard->setObjectName("todashboard");
        todashboard->setGeometry(QRect(620, 710, 141, 41));
        todashboard->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        label_7 = new QLabel(report);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, -250, 811, 341));
        label_7->setStyleSheet(QString::fromUtf8("image:url(:/images/header.jpg)"));
        label_4 = new QLabel(report);
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
        label = new QLabel(report);
        label->setObjectName("label");
        label->setGeometry(QRect(-210, 80, 1291, 871));
        label->setStyleSheet(QString::fromUtf8("image:url(:/images/sky.jpg)"));
        viewreport = new QPushButton(report);
        viewreport->setObjectName("viewreport");
        viewreport->setGeometry(QRect(540, 90, 201, 41));
        viewreport->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        reporttable = new QTableView(report);
        reporttable->setObjectName("reporttable");
        reporttable->setGeometry(QRect(20, 200, 741, 491));
        label->raise();
        label_7->raise();
        label_4->raise();
        label_6->raise();
        todashboard->raise();
        viewreport->raise();
        reporttable->raise();

        retranslateUi(report);

        QMetaObject::connectSlotsByName(report);
    } // setupUi

    void retranslateUi(QDialog *report)
    {
        report->setWindowTitle(QCoreApplication::translate("report", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("report", "Income Expense - Monthly Report", nullptr));
        todashboard->setText(QCoreApplication::translate("report", "Dashboard", nullptr));
        label_7->setText(QCoreApplication::translate("report", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("report", "Personal Organizer", nullptr));
        label->setText(QCoreApplication::translate("report", "TextLabel", nullptr));
        viewreport->setText(QCoreApplication::translate("report", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class report: public Ui_report {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_H
