/********************************************************************************
** Form generated from reading UI file 'dashboard1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD1_H
#define UI_DASHBOARD1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard1
{
public:

    void setupUi(QWidget *Dashboard1)
    {
        if (Dashboard1->objectName().isEmpty())
            Dashboard1->setObjectName(QString::fromUtf8("Dashboard1"));
        Dashboard1->resize(400, 400);

        retranslateUi(Dashboard1);

        QMetaObject::connectSlotsByName(Dashboard1);
    } // setupUi

    void retranslateUi(QWidget *Dashboard1)
    {
        Dashboard1->setWindowTitle(QCoreApplication::translate("Dashboard1", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard1: public Ui_Dashboard1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD1_H
