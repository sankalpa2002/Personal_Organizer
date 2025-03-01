/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *addincome;
    QPushButton *addexpenses;
    QPushButton *setbudjets;
    QPushButton *financialstate;
    QPushButton *report;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QPushButton *settimetable;
    QPushButton *viewtimetable;
    QPushButton *specialdates;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label;
    QLabel *Alert;
    QPushButton *pushButton;

    void setupUi(QDialog *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(800, 800);
        Dashboard->setMaximumSize(QSize(800, 800));
        QFont font;
        font.setPointSize(24);
        Dashboard->setFont(font);
        layoutWidget = new QWidget(Dashboard);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 410, 289, 401));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        addincome = new QPushButton(layoutWidget);
        addincome->setObjectName("addincome");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font1.setPointSize(14);
        font1.setBold(false);
        addincome->setFont(font1);

        verticalLayout->addWidget(addincome);

        addexpenses = new QPushButton(layoutWidget);
        addexpenses->setObjectName("addexpenses");
        addexpenses->setFont(font1);

        verticalLayout->addWidget(addexpenses);

        setbudjets = new QPushButton(layoutWidget);
        setbudjets->setObjectName("setbudjets");
        setbudjets->setFont(font1);

        verticalLayout->addWidget(setbudjets);

        financialstate = new QPushButton(layoutWidget);
        financialstate->setObjectName("financialstate");
        financialstate->setFont(font1);

        verticalLayout->addWidget(financialstate);

        report = new QPushButton(layoutWidget);
        report->setObjectName("report");
        report->setFont(font1);

        verticalLayout->addWidget(report);

        layoutWidget1 = new QWidget(Dashboard);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(490, 140, 291, 281));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        settimetable = new QPushButton(layoutWidget1);
        settimetable->setObjectName("settimetable");
        settimetable->setFont(font1);

        verticalLayout_2->addWidget(settimetable);

        viewtimetable = new QPushButton(layoutWidget1);
        viewtimetable->setObjectName("viewtimetable");
        viewtimetable->setFont(font1);

        verticalLayout_2->addWidget(viewtimetable);

        specialdates = new QPushButton(layoutWidget1);
        specialdates->setObjectName("specialdates");
        specialdates->setFont(font1);

        verticalLayout_2->addWidget(specialdates);

        label_2 = new QLabel(Dashboard);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(510, 110, 301, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Rockwell")});
        font2.setPointSize(18);
        font2.setBold(true);
        label_2->setFont(font2);
        label_3 = new QLabel(Dashboard);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 380, 301, 51));
        label_3->setFont(font2);
        label_4 = new QLabel(Dashboard);
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
        label_6 = new QLabel(Dashboard);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(0, -240, 811, 331));
        label_6->setStyleSheet(QString::fromUtf8("image:url(:/images/header.jpg)"));
        label_5 = new QLabel(Dashboard);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(320, 310, 461, 601));
        label_5->setMaximumSize(QSize(800, 800));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Pristina")});
        font4.setPointSize(6);
        font4.setWeight(QFont::ExtraLight);
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("image:url(:/images/Screenshot 2024-11-12 222516.png)"));
        label = new QLabel(Dashboard);
        label->setObjectName("label");
        label->setGeometry(QRect(-10, 180, 471, 191));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Kunstler Script")});
        font5.setPointSize(6);
        font5.setWeight(QFont::Thin);
        font5.setStyleStrategy(QFont::PreferDefault);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("image:url(:/images/edu.jpg)"));
        label->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);
        Alert = new QLabel(Dashboard);
        Alert->setObjectName("Alert");
        Alert->setGeometry(QRect(20, 100, 451, 81));
        Alert->setStyleSheet(QString::fromUtf8("color: rgb(213, 0, 4);\n"
"font: 12pt \"Lucida Sans\";"));
        pushButton = new QPushButton(Dashboard);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 78, 100, 21));
        pushButton->setMaximumSize(QSize(100, 100));
        QFont font6;
        font6.setPointSize(10);
        pushButton->setFont(font6);
        label_5->raise();
        label_2->raise();
        label->raise();
        label_3->raise();
        label_6->raise();
        layoutWidget1->raise();
        layoutWidget1->raise();
        label_4->raise();
        Alert->raise();
        pushButton->raise();

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QDialog *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dialog", nullptr));
        addincome->setText(QCoreApplication::translate("Dashboard", "Add Income", nullptr));
        addexpenses->setText(QCoreApplication::translate("Dashboard", "Add Expenses", nullptr));
        setbudjets->setText(QCoreApplication::translate("Dashboard", "Set Budjets", nullptr));
        financialstate->setText(QCoreApplication::translate("Dashboard", "Currnt Financial State", nullptr));
        report->setText(QCoreApplication::translate("Dashboard", "Monthly Report", nullptr));
        settimetable->setText(QCoreApplication::translate("Dashboard", "Set Time Table", nullptr));
        viewtimetable->setText(QCoreApplication::translate("Dashboard", "View Time Table", nullptr));
        specialdates->setText(QCoreApplication::translate("Dashboard", "Special Dates", nullptr));
        label_2->setText(QCoreApplication::translate("Dashboard", "Academic Details", nullptr));
        label_3->setText(QCoreApplication::translate("Dashboard", "Financial Details", nullptr));
        label_4->setText(QCoreApplication::translate("Dashboard", "Personal Organizer", nullptr));
        label_6->setText(QCoreApplication::translate("Dashboard", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("Dashboard", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("Dashboard", "TextLabel", nullptr));
        Alert->setText(QCoreApplication::translate("Dashboard", "text lable", nullptr));
        pushButton->setText(QCoreApplication::translate("Dashboard", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
