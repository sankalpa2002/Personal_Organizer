/********************************************************************************
** Form generated from reading UI file 'financialstate.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINANCIALSTATE_H
#define UI_FINANCIALSTATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_financialstate
{
public:
    QLabel *label_6;
    QPushButton *todahboard;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *bargraph;

    void setupUi(QDialog *financialstate)
    {
        if (financialstate->objectName().isEmpty())
            financialstate->setObjectName("financialstate");
        financialstate->resize(800, 800);
        financialstate->setMaximumSize(QSize(800, 800));
        label_6 = new QLabel(financialstate);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 100, 431, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI Variable")});
        font.setPointSize(18);
        font.setBold(true);
        label_6->setFont(font);
        todahboard = new QPushButton(financialstate);
        todahboard->setObjectName("todahboard");
        todahboard->setGeometry(QRect(650, 730, 131, 41));
        todahboard->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(95, 0, 23, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(0, 0, 0);\n"
"font: 12pt \"Showcard Gothic\";"));
        label_7 = new QLabel(financialstate);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, -230, 811, 331));
        label_7->setStyleSheet(QString::fromUtf8("image:url(:/images/header.jpg)"));
        label_4 = new QLabel(financialstate);
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
        label = new QLabel(financialstate);
        label->setObjectName("label");
        label->setGeometry(QRect(-210, 100, 1291, 871));
        label->setStyleSheet(QString::fromUtf8("image:url(:/images/sky.jpg)"));
        verticalLayoutWidget = new QWidget(financialstate);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(19, 169, 761, 551));
        bargraph = new QVBoxLayout(verticalLayoutWidget);
        bargraph->setObjectName("bargraph");
        bargraph->setContentsMargins(0, 0, 0, 0);
        label->raise();
        label_7->raise();
        label_4->raise();
        label_6->raise();
        todahboard->raise();
        verticalLayoutWidget->raise();

        retranslateUi(financialstate);

        QMetaObject::connectSlotsByName(financialstate);
    } // setupUi

    void retranslateUi(QDialog *financialstate)
    {
        financialstate->setWindowTitle(QCoreApplication::translate("financialstate", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("financialstate", "Your Current Financial State", nullptr));
        todahboard->setText(QCoreApplication::translate("financialstate", "Dashboard", nullptr));
        label_7->setText(QCoreApplication::translate("financialstate", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("financialstate", "Personal Organizer", nullptr));
        label->setText(QCoreApplication::translate("financialstate", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class financialstate: public Ui_financialstate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINANCIALSTATE_H
