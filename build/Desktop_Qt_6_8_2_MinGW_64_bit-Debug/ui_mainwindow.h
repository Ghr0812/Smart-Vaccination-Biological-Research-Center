/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *widget;
    QProgressBar *progressBar;
    QLabel *label_2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QRadioButton *L;
    QRadioButton *D;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1909, 1252);
        MainWindow->setStyleSheet(QString::fromUtf8("font-size: 36px; font-weight: bold; \n"
"        color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, \n"
"        stop:0 #8E44AD, stop:1 #3498DB);\n"
"        text-shadow: 4px 4px 6px rgba(0, 0, 0, 0.2);\n"
"        margin-bottom: 30px;\n"
"QWidget {\n"
"    overflow: hidden;\n"
"border: none;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(430, 20, 891, 91));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(280, 200, 1651, 881));
        widget->setStyleSheet(QString::fromUtf8("\n"
"QProgressBar {\n"
"           border: 3px solid #8E44AD;\n"
"            border-radius: 15px;\n"
"           text-align: center;\n"
"           font-size: 16px;\n"
"           background-color: #F5F7FA;\n"
"        }\n"
"        QProgressBar::chunk {\n"
"            background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"            stop:0 #3498DB, stop:1 #2ECC71);\n"
"            border-radius: 12px;\n"
"        };"));
        progressBar = new QProgressBar(widget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(80, 80, 1061, 81));
        progressBar->setValue(75);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(480, 20, 501, 41));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 20px; font-weight: bold; color: #27AE60; margin-bottom: 10px;"));
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(90, 160, 1041, 251));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_2 = new QWidget(widget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(90, 440, 1041, 251));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 10, 241, 181));
        L = new QRadioButton(centralwidget);
        L->setObjectName("L");
        L->setGeometry(QRect(1550, 30, 71, 81));
        D = new QRadioButton(centralwidget);
        D->setObjectName("D");
        D->setGeometry(QRect(1630, 30, 71, 81));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Smart Vaccination & Biological Research Center", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Vaccination Progress", nullptr));
        label_3->setText(QString());
        L->setText(QCoreApplication::translate("MainWindow", "\342\230\200\357\270\217", nullptr));
        D->setText(QCoreApplication::translate("MainWindow", "\360\237\224\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
