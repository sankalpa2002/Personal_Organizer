/********************************************************************************
** Form generated from reading UI file 'setbudget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETBUDGET_H
#define UI_SETBUDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_setbudget
{
public:
    QLabel *label_6;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *limit;
    QPushButton *back;
    QPushButton *savebudget;
    QLabel *label_11;
    QLabel *label_4;
    QLabel *label_12;
    QTableView *budgetview;
    QComboBox *categorycomboBox;
    QPushButton *view;
    QPushButton *cleartable;

    void setupUi(QDialog *setbudget)
    {
        if (setbudget->objectName().isEmpty())
            setbudget->setObjectName("setbudget");
        setbudget->resize(800, 800);
        setbudget->setMaximumSize(QSize(800, 800));
        label_6 = new QLabel(setbudget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 100, 241, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Variable")});
        font.setPointSize(21);
        font.setBold(true);
        label_6->setFont(font);
        label = new QLabel(setbudget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 200, 171, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Sitka Banner")});
        font1.setPointSize(18);
        font1.setBold(true);
        label->setFont(font1);
        label_2 = new QLabel(setbudget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(450, 200, 171, 31));
        label_2->setFont(font1);
        limit = new QLineEdit(setbudget);
        limit->setObjectName("limit");
        limit->setGeometry(QRect(450, 260, 161, 41));
        back = new QPushButton(setbudget);
        back->setObjectName("back");
        back->setGeometry(QRect(660, 350, 111, 41));
        back->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        savebudget = new QPushButton(setbudget);
        savebudget->setObjectName("savebudget");
        savebudget->setGeometry(QRect(660, 260, 111, 41));
        savebudget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        label_11 = new QLabel(setbudget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(0, -240, 811, 331));
        label_11->setStyleSheet(QString::fromUtf8("image:url(:/images/header.jpg)"));
        label_4 = new QLabel(setbudget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 0, 641, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Perpetua Titling MT")});
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setUnderline(false);
        font2.setStrikeOut(false);
        font2.setKerning(false);
        label_4->setFont(font2);
        label_12 = new QLabel(setbudget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(0, 80, 800, 800));
        label_12->setMaximumSize(QSize(800, 800));
        label_12->setStyleSheet(QString::fromUtf8("image:url(:/images/sky.jpg)"));
        budgetview = new QTableView(setbudget);
        budgetview->setObjectName("budgetview");
        budgetview->setGeometry(QRect(30, 400, 741, 391));
        categorycomboBox = new QComboBox(setbudget);
        categorycomboBox->addItem(QString());
        categorycomboBox->addItem(QString());
        categorycomboBox->addItem(QString());
        categorycomboBox->addItem(QString());
        categorycomboBox->addItem(QString());
        categorycomboBox->addItem(QString());
        categorycomboBox->setObjectName("categorycomboBox");
        categorycomboBox->setGeometry(QRect(71, 260, 291, 41));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        categorycomboBox->setFont(font3);
        view = new QPushButton(setbudget);
        view->setObjectName("view");
        view->setGeometry(QRect(30, 350, 301, 41));
        view->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        cleartable = new QPushButton(setbudget);
        cleartable->setObjectName("cleartable");
        cleartable->setGeometry(QRect(540, 350, 111, 41));
        cleartable->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        label_12->raise();
        label_11->raise();
        label_4->raise();
        label_6->raise();
        label->raise();
        label_2->raise();
        limit->raise();
        back->raise();
        savebudget->raise();
        budgetview->raise();
        categorycomboBox->raise();
        view->raise();
        cleartable->raise();

        retranslateUi(setbudget);

        QMetaObject::connectSlotsByName(setbudget);
    } // setupUi

    void retranslateUi(QDialog *setbudget)
    {
        setbudget->setWindowTitle(QCoreApplication::translate("setbudget", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("setbudget", "Set Budgets", nullptr));
        label->setText(QCoreApplication::translate("setbudget", "category", nullptr));
        label_2->setText(QCoreApplication::translate("setbudget", "Budget Limit", nullptr));
        back->setText(QCoreApplication::translate("setbudget", "Back", nullptr));
        savebudget->setText(QCoreApplication::translate("setbudget", "Save", nullptr));
        label_11->setText(QCoreApplication::translate("setbudget", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("setbudget", "Personal Organizer", nullptr));
        label_12->setText(QCoreApplication::translate("setbudget", "TextLabel", nullptr));
        categorycomboBox->setItemText(0, QCoreApplication::translate("setbudget", "Food", nullptr));
        categorycomboBox->setItemText(1, QCoreApplication::translate("setbudget", "Entertainment", nullptr));
        categorycomboBox->setItemText(2, QCoreApplication::translate("setbudget", "Traveling", nullptr));
        categorycomboBox->setItemText(3, QCoreApplication::translate("setbudget", "Clothing", nullptr));
        categorycomboBox->setItemText(4, QCoreApplication::translate("setbudget", "Educational Equipments", nullptr));
        categorycomboBox->setItemText(5, QCoreApplication::translate("setbudget", "University Fees", nullptr));

        view->setText(QCoreApplication::translate("setbudget", "View Already Added Limites", nullptr));
        cleartable->setText(QCoreApplication::translate("setbudget", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setbudget: public Ui_setbudget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETBUDGET_H
