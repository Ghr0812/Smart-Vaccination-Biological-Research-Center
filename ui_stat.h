/********************************************************************************
** Form generated from reading UI file 'stat.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAT_H
#define UI_STAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stat
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;

    void setupUi(QWidget *stat)
    {
        if (stat->objectName().isEmpty())
            stat->setObjectName("stat");
        stat->resize(1652, 865);
        gridLayoutWidget = new QWidget(stat);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 20, 1471, 831));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(stat);

        QMetaObject::connectSlotsByName(stat);
    } // setupUi

    void retranslateUi(QWidget *stat)
    {
        stat->setWindowTitle(QCoreApplication::translate("stat", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stat: public Ui_stat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAT_H
