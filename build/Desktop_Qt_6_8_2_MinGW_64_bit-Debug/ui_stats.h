/********************************************************************************
** Form generated from reading UI file 'stats.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATS_H
#define UI_STATS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Stats
{
public:
    QPushButton *b6;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *Stats)
    {
        if (Stats->objectName().isEmpty())
            Stats->setObjectName("Stats");
        Stats->resize(700, 635);
        b6 = new QPushButton(Stats);
        b6->setObjectName("b6");
        b6->setGeometry(QRect(220, 550, 250, 71));
        b6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"            stop:0 #16A085, stop:1 #1ABC9C);\n"
"            color: white;\n"
"            font-size: 18px;\n"
"            font-weight: bold;\n"
"            padding: 15px 25px;\n"
"            border-radius: 12px;\n"
"            margin-bottom: 15px;\n"
"            box-shadow: 4px 4px 8px rgba(0, 0, 0, 0.2);\n"
"            transition: transform 0.2s, box-shadow 0.2s;\n"
"        }\n"
"        QPushButton:hover {\n"
"            transform: scale(1.05);\n"
"            box-shadow: 6px 6px 12px rgba(0, 0, 0, 0.3);\n"
"            background: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, \n"
"            stop:0 #1ABC9C, stop:1 #16A085);\n"
"        }\n"
"        QPushButton:pressed {\n"
"           transform: scale(0.95);\n"
"        }"));
        verticalLayoutWidget = new QWidget(Stats);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(50, 40, 631, 471));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Stats);

        QMetaObject::connectSlotsByName(Stats);
    } // setupUi

    void retranslateUi(QWidget *Stats)
    {
        Stats->setWindowTitle(QCoreApplication::translate("Stats", "Form", nullptr));
        b6->setText(QCoreApplication::translate("Stats", "sortie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Stats: public Ui_Stats {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATS_H
