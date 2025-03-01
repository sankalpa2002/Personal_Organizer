/********************************************************************************
** Form generated from reading UI file 'addexpenses.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDEXPENSES_H
#define UI_ADDEXPENSES_H

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

class Ui_addexpenses
{
public:
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_2;
    QComboBox *expensecomboBox;
    QLabel *label_3;
    QTextEdit *expensediscription;
    QDateEdit *expensedate;
    QLabel *label_5;
    QLineEdit *expenseamount;
    QPushButton *expensreset;
    QPushButton *expensesave;
    QPushButton *expensesave_2;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label;

    void setupUi(QDialog *addexpenses)
    {
        if (addexpenses->objectName().isEmpty())
            addexpenses->setObjectName("addexpenses");
        addexpenses->resize(800, 800);
        addexpenses->setMaximumSize(QSize(800, 800));
        addexpenses->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(45, 0, 58);"));
        label_4 = new QLabel(addexpenses);
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
        label_6 = new QLabel(addexpenses);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 80, 241, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI Variable")});
        font1.setPointSize(18);
        font1.setBold(true);
        label_6->setFont(font1);
        label_2 = new QLabel(addexpenses);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 150, 171, 31));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        label_2->setFont(font2);
        expensecomboBox = new QComboBox(addexpenses);
        expensecomboBox->addItem(QString());
        expensecomboBox->addItem(QString());
        expensecomboBox->addItem(QString());
        expensecomboBox->addItem(QString());
        expensecomboBox->addItem(QString());
        expensecomboBox->addItem(QString());
        expensecomboBox->addItem(QString());
        expensecomboBox->setObjectName("expensecomboBox");
        expensecomboBox->setGeometry(QRect(300, 150, 281, 28));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        expensecomboBox->setFont(font3);
        label_3 = new QLabel(addexpenses);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(100, 220, 181, 31));
        label_3->setFont(font2);
        expensediscription = new QTextEdit(addexpenses);
        expensediscription->setObjectName("expensediscription");
        expensediscription->setGeometry(QRect(230, 220, 351, 271));
        expensedate = new QDateEdit(addexpenses);
        expensedate->setObjectName("expensedate");
        expensedate->setGeometry(QRect(200, 550, 151, 51));
        label_5 = new QLabel(addexpenses);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(440, 560, 91, 31));
        label_5->setFont(font2);
        expenseamount = new QLineEdit(addexpenses);
        expenseamount->setObjectName("expenseamount");
        expenseamount->setGeometry(QRect(530, 550, 151, 51));
        expensreset = new QPushButton(addexpenses);
        expensreset->setObjectName("expensreset");
        expensreset->setGeometry(QRect(320, 670, 131, 41));
        expensreset->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        expensesave = new QPushButton(addexpenses);
        expensesave->setObjectName("expensesave");
        expensesave->setGeometry(QRect(90, 670, 131, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Showcard Gothic")});
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setItalic(false);
        expensesave->setFont(font4);
        expensesave->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        expensesave_2 = new QPushButton(addexpenses);
        expensesave_2->setObjectName("expensesave_2");
        expensesave_2->setGeometry(QRect(550, 670, 131, 41));
        expensesave_2->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        label_7 = new QLabel(addexpenses);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, -240, 821, 341));
        label_7->setStyleSheet(QString::fromUtf8("image:url(:/images/header.jpg)"));
        label_8 = new QLabel(addexpenses);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 0, 641, 61));
        label_8->setFont(font);
        label_9 = new QLabel(addexpenses);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(140, 560, 51, 31));
        label_9->setFont(font2);
        label = new QLabel(addexpenses);
        label->setObjectName("label");
        label->setGeometry(QRect(-210, 90, 1291, 871));
        label->setStyleSheet(QString::fromUtf8("image:url(:/images/sky.jpg)"));
        label->raise();
        label_7->raise();
        label_4->raise();
        label_6->raise();
        label_2->raise();
        expensecomboBox->raise();
        label_3->raise();
        expensediscription->raise();
        expensedate->raise();
        label_5->raise();
        expenseamount->raise();
        expensreset->raise();
        expensesave->raise();
        expensesave_2->raise();
        label_8->raise();
        label_9->raise();

        retranslateUi(addexpenses);

        QMetaObject::connectSlotsByName(addexpenses);
    } // setupUi

    void retranslateUi(QDialog *addexpenses)
    {
        addexpenses->setWindowTitle(QCoreApplication::translate("addexpenses", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("addexpenses", "Personal Organizer", nullptr));
        label_6->setText(QCoreApplication::translate("addexpenses", "Add Expenses", nullptr));
        label_2->setText(QCoreApplication::translate("addexpenses", "Category", nullptr));
        expensecomboBox->setItemText(0, QCoreApplication::translate("addexpenses", "Food", nullptr));
        expensecomboBox->setItemText(1, QCoreApplication::translate("addexpenses", "Entertainment", nullptr));
        expensecomboBox->setItemText(2, QCoreApplication::translate("addexpenses", "Traveling", nullptr));
        expensecomboBox->setItemText(3, QCoreApplication::translate("addexpenses", "Clothing", nullptr));
        expensecomboBox->setItemText(4, QCoreApplication::translate("addexpenses", "Educational Equipments", nullptr));
        expensecomboBox->setItemText(5, QCoreApplication::translate("addexpenses", "University Fees", nullptr));
        expensecomboBox->setItemText(6, QCoreApplication::translate("addexpenses", "Additional expenses", nullptr));

        label_3->setText(QCoreApplication::translate("addexpenses", "Description", nullptr));
        label_5->setText(QCoreApplication::translate("addexpenses", "Amount", nullptr));
        expensreset->setText(QCoreApplication::translate("addexpenses", "Reset", nullptr));
        expensesave->setText(QCoreApplication::translate("addexpenses", "Save", nullptr));
        expensesave_2->setText(QCoreApplication::translate("addexpenses", "Dashboard", nullptr));
        label_7->setText(QCoreApplication::translate("addexpenses", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("addexpenses", "Personal Organizer", nullptr));
        label_9->setText(QCoreApplication::translate("addexpenses", "Date", nullptr));
        label->setText(QCoreApplication::translate("addexpenses", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addexpenses: public Ui_addexpenses {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDEXPENSES_H
