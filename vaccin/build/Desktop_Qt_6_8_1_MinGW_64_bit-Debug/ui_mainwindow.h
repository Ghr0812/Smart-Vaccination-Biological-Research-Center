/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableWidget *tableWidget;
    QPushButton *btnAddColumn;
    QPushButton *btnDeleteColumn;
    QPushButton *btnAddRow;
    QPushButton *btnDeleteRow;
    QPushButton *btnSaveData;
    QPushButton *btnLoadData;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1585, 832);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(210, 250, 1221, 371));
        btnAddColumn = new QPushButton(centralwidget);
        btnAddColumn->setObjectName("btnAddColumn");
        btnAddColumn->setGeometry(QRect(0, 130, 221, 31));
        btnDeleteColumn = new QPushButton(centralwidget);
        btnDeleteColumn->setObjectName("btnDeleteColumn");
        btnDeleteColumn->setGeometry(QRect(0, 190, 221, 31));
        btnAddRow = new QPushButton(centralwidget);
        btnAddRow->setObjectName("btnAddRow");
        btnAddRow->setGeometry(QRect(0, 100, 221, 31));
        btnDeleteRow = new QPushButton(centralwidget);
        btnDeleteRow->setObjectName("btnDeleteRow");
        btnDeleteRow->setGeometry(QRect(0, 160, 221, 31));
        btnSaveData = new QPushButton(centralwidget);
        btnSaveData->setObjectName("btnSaveData");
        btnSaveData->setGeometry(QRect(0, 220, 221, 31));
        btnLoadData = new QPushButton(centralwidget);
        btnLoadData->setObjectName("btnLoadData");
        btnLoadData->setGeometry(QRect(0, 60, 221, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1585, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnAddColumn->setText(QCoreApplication::translate("MainWindow", "Ajouter une colonne", nullptr));
        btnDeleteColumn->setText(QCoreApplication::translate("MainWindow", "Supprimer une colonne", nullptr));
        btnAddRow->setText(QCoreApplication::translate("MainWindow", "Ajouter une ligne", nullptr));
        btnDeleteRow->setText(QCoreApplication::translate("MainWindow", "Supprimer une ligne", nullptr));
        btnSaveData->setText(QCoreApplication::translate("MainWindow", "Enregistrer", nullptr));
        btnLoadData->setText(QCoreApplication::translate("MainWindow", "la fiche", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
