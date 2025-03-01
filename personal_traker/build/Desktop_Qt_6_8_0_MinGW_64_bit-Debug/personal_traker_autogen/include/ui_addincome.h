/********************************************************************************
** Form generated from reading UI file 'addincome.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINCOME_H
#define UI_ADDINCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addincome
{
public:
    QLabel *label_4;
    QDateEdit *incomedateEdit;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *incomediscription;
    QLabel *label_5;
    QLineEdit *incomeamount;
    QPushButton *incomereset;
    QPushButton *insave;
    QComboBox *incomecomboBox;
    QLabel *label_6;
    QPushButton *insave_2;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_8;

    void setupUi(QDialog *addincome)
    {
        if (addincome->objectName().isEmpty())
            addincome->setObjectName("addincome");
        addincome->resize(800, 800);
        addincome->setMaximumSize(QSize(800, 800));
        label_4 = new QLabel(addincome);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 0, 621, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font.setPointSize(28);
        font.setBold(true);
        font.setUnderline(false);
        font.setStrikeOut(false);
        font.setKerning(false);
        label_4->setFont(font);
        incomedateEdit = new QDateEdit(addincome);
        incomedateEdit->setObjectName("incomedateEdit");
        incomedateEdit->setGeometry(QRect(200, 560, 151, 51));
        label_2 = new QLabel(addincome);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 160, 181, 31));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_2->setFont(font1);
        label_3 = new QLabel(addincome);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 240, 181, 31));
        label_3->setFont(font1);
        incomediscription = new QTextEdit(addincome);
        incomediscription->setObjectName("incomediscription");
        incomediscription->setGeometry(QRect(220, 240, 351, 271));
        label_5 = new QLabel(addincome);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(400, 570, 91, 31));
        label_5->setFont(font1);
        incomeamount = new QLineEdit(addincome);
        incomeamount->setObjectName("incomeamount");
        incomeamount->setGeometry(QRect(500, 560, 151, 51));
        incomereset = new QPushButton(addincome);
        incomereset->setObjectName("incomereset");
        incomereset->setGeometry(QRect(310, 670, 131, 41));
        incomereset->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        insave = new QPushButton(addincome);
        insave->setObjectName("insave");
        insave->setGeometry(QRect(100, 670, 131, 41));
        insave->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        incomecomboBox = new QComboBox(addincome);
        incomecomboBox->addItem(QString());
        incomecomboBox->addItem(QString());
        incomecomboBox->addItem(QString());
        incomecomboBox->addItem(QString());
        incomecomboBox->addItem(QString());
        incomecomboBox->setObjectName("incomecomboBox");
        incomecomboBox->setGeometry(QRect(290, 160, 281, 28));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        incomecomboBox->setFont(font2);
        label_6 = new QLabel(addincome);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 90, 241, 61));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Variable")});
        font3.setPointSize(18);
        font3.setBold(true);
        label_6->setFont(font3);
        insave_2 = new QPushButton(addincome);
        insave_2->setObjectName("insave_2");
        insave_2->setGeometry(QRect(520, 670, 131, 41));
        insave_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        label_7 = new QLabel(addincome);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, -230, 801, 341));
        label_7->setStyleSheet(QString::fromUtf8("image:url(:/images/header.jpg)"));
        label = new QLabel(addincome);
        label->setObjectName("label");
        label->setGeometry(QRect(-210, 100, 1291, 871));
        label->setStyleSheet(QString::fromUtf8("image:url(:/images/sky.jpg)"));
        label_8 = new QLabel(addincome);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(130, 570, 61, 31));
        label_8->setFont(font1);
        label->raise();
        label_7->raise();
        label_4->raise();
        incomedateEdit->raise();
        label_2->raise();
        label_3->raise();
        incomediscription->raise();
        label_5->raise();
        incomeamount->raise();
        incomereset->raise();
        insave->raise();
        incomecomboBox->raise();
        label_6->raise();
        insave_2->raise();
        label_8->raise();

        retranslateUi(addincome);

        QMetaObject::connectSlotsByName(addincome);
    } // setupUi

    void retranslateUi(QDialog *addincome)
    {
        addincome->setWindowTitle(QCoreApplication::translate("addincome", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("addincome", "Personal Organizer", nullptr));
        label_2->setText(QCoreApplication::translate("addincome", "Income Source", nullptr));
        label_3->setText(QCoreApplication::translate("addincome", "Description", nullptr));
        label_5->setText(QCoreApplication::translate("addincome", "Amount", nullptr));
        incomereset->setText(QCoreApplication::translate("addincome", "Reset", nullptr));
        insave->setText(QCoreApplication::translate("addincome", "Save", nullptr));
        incomecomboBox->setItemText(0, QCoreApplication::translate("addincome", "Job Income", nullptr));
        incomecomboBox->setItemText(1, QCoreApplication::translate("addincome", "Allowance From Parents", nullptr));
        incomecomboBox->setItemText(2, QCoreApplication::translate("addincome", "Scholarship", nullptr));
        incomecomboBox->setItemText(3, QCoreApplication::translate("addincome", "Student Aid", nullptr));
        incomecomboBox->setItemText(4, QCoreApplication::translate("addincome", "Other Incomes", nullptr));

        label_6->setText(QCoreApplication::translate("addincome", "Add Income", nullptr));
        insave_2->setText(QCoreApplication::translate("addincome", "Dashboard", nullptr));
        label_7->setText(QCoreApplication::translate("addincome", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("addincome", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("addincome", "Date", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addincome: public Ui_addincome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINCOME_H
