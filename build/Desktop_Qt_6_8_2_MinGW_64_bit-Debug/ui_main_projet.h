/********************************************************************************
** Form generated from reading UI file 'main_projet.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_PROJET_H
#define UI_MAIN_PROJET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_projet
{
public:
    QWidget *widget;
    QLineEdit *tit;
    QLabel *label_6;
    QLabel *label_7;
    QDateEdit *dat_db;
    QDateEdit *dat_df;
    QLabel *label_8;
    QLabel *label_9;
    QRadioButton *stat1;
    QComboBox *lieu;
    QLabel *label_10;
    QPushButton *btn_ajout;
    QLabel *label_11;
    QRadioButton *stat3;
    QRadioButton *stat2;
    QWidget *widget_2;
    QPushButton *stat;
    QTableWidget *Tp;
    QPushButton *QRCode;

    void setupUi(QWidget *main_projet)
    {
        if (main_projet->objectName().isEmpty())
            main_projet->setObjectName("main_projet");
        main_projet->resize(1927, 922);
        widget = new QWidget(main_projet);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 30, 311, 771));
        widget->setStyleSheet(QString::fromUtf8("/* Style global */\n"
"QWidget {\n"
"    background-color: #1B8A6B  ; /* Bleu s\303\251rum */\n"
"    color: #ffffff;\n"
"    font-family: \"Arial\", sans-serif;\n"
"    font-size: 14pt;\n"
"	border-radius: 35px; /* Bordure arrondie comme l\342\200\231image */\n"
"}\n"
"\n"
"/* Champs de saisie QLineEdit */\n"
"QLineEdit {\n"
"    min-height: 40px;\n"
"    font-size: 15pt;\n"
"    padding: 10px;\n"
"    border: 2px solid #0096C7;\n"
"    border-radius: 25px; /* Bordure arrondie comme l\342\200\231image */\n"
"    background-color: #ffffff;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #D4A017;\n"
"    box-shadow: 0px 0px 8px #D4A017;\n"
"}\n"
"\n"
"/* \303\211diteurs de date QDateEdit */\n"
"QDateEdit {\n"
"    min-height: 40px;\n"
"    font-size: 15pt;\n"
"    padding: 10px;\n"
"    border: 2px solid #0096C7;\n"
"    border-radius: 25px; /* Bordure arrondie */\n"
"    background-color: #ffffff;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QDateEdit:focus {\n"
"    border-color: #D4A"
                        "017;\n"
"    box-shadow: 0px 0px 8px #D4A017;\n"
"}\n"
"\n"
"/* Listes d\303\251roulantes QComboBox */\n"
"QComboBox {\n"
"    min-height: 40px;\n"
"    font-size: 15pt;\n"
"    padding: 8px;\n"
"    border: 2px solid #0096C7;\n"
"    border-radius: 25px; /* Bordure arrondie */\n"
"    background-color: #ffffff;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border-color: #D4A017;\n"
"    box-shadow: 0px 0px 8px #D4A017;\n"
"}\n"
"\n"
"/* Style des \303\251l\303\251ments d\303\251roulants */\n"
"QComboBox QAbstractItemView {\n"
"    font-size: 14pt;\n"
"    border: 1px solid #0096C7;\n"
"    selection-background-color: #D4A017;\n"
"}\n"
"\n"
"/* Boutons avec bords arrondis */\n"
"QPushButton {\n"
"    min-height: 45px;\n"
"    font-size: 16pt;\n"
"    font-weight: bold;\n"
"    border-radius: 25px; /* Bordure arrondie */\n"
"    background-color: #5FAF6D;\n"
"    color: white;\n"
"    border: 2px solid #D4A017;\n"
"    transition: all 0.3s ease;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    back"
                        "ground-color: #D4A017;\n"
"    color: #ffffff;\n"
"    border: 2px solid #0096C7;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #5FAF6D;\n"
"    color: white;\n"
"    border: 2px solid #ffffff;\n"
"}\n"
""));
        tit = new QLineEdit(widget);
        tit->setObjectName("tit");
        tit->setGeometry(QRect(104, 78, 191, 64));
        tit->setStyleSheet(QString::fromUtf8("background-color:white;"));
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 40, 71, 131));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        font.setItalic(true);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(0, 130, 121, 121));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("background-color:none;"));
        dat_db = new QDateEdit(widget);
        dat_db->setObjectName("dat_db");
        dat_db->setGeometry(QRect(120, 160, 181, 64));
        dat_db->setStyleSheet(QString::fromUtf8("background-color:white;"));
        dat_df = new QDateEdit(widget);
        dat_df->setObjectName("dat_df");
        dat_df->setGeometry(QRect(120, 253, 180, 64));
        dat_df->setStyleSheet(QString::fromUtf8("background-color:white;"));
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(0, 216, 160, 131));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 327, 150, 71));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("background-color:none;"));
        stat1 = new QRadioButton(widget);
        stat1->setObjectName("stat1");
        stat1->setGeometry(QRect(90, 330, 111, 61));
        stat1->setStyleSheet(QString::fromUtf8("QLabel, QRadioButton {\n"
"    color: #ffffff; /* Assurer une couleur uniforme et lisible */\n"
"    font-weight: bold;\n"
"	font-size:16px;\n"
"	background-color:none;\n"
"}\n"
""));
        lieu = new QComboBox(widget);
        lieu->addItem(QString());
        lieu->addItem(QString());
        lieu->addItem(QString());
        lieu->addItem(QString());
        lieu->addItem(QString());
        lieu->addItem(QString());
        lieu->addItem(QString());
        lieu->addItem(QString());
        lieu->addItem(QString());
        lieu->addItem(QString());
        lieu->setObjectName("lieu");
        lieu->setGeometry(QRect(60, 510, 251, 60));
        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(0, 510, 140, 81));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("background-color:none;"));
        btn_ajout = new QPushButton(widget);
        btn_ajout->setObjectName("btn_ajout");
        btn_ajout->setGeometry(QRect(60, 639, 171, 94));
        btn_ajout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"qproperty-icon: url(\"Y:/Smart-Vaccination-Biological-Research-Center/NextGen/resources/add.png\"); /* Chemin de l'ic\303\264ne */\n"
"    qproperty-iconSize: 24px 24px; /* Taille de l'ic\303\264ne */\n"
"        }\n"
"        QPushButton:hover {\n"
"            transform: scale(1.05);\n"
"            box-shadow: 6px 6px 12px rgba(0, 0, 0, 0.3);\n"
"            background: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, \n"
"            stop:0 #1ABC9C, stop:1 #16A085);\n"
"        }\n"
"        QPushButton:pressed {\n"
"           transfo"
                        "rm: scale(0.95);\n"
"        }"));
        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(60, 5, 191, 51));
        label_11->setStyleSheet(QString::fromUtf8("color: red;\n"
"font-size:20px;"));
        stat3 = new QRadioButton(widget);
        stat3->setObjectName("stat3");
        stat3->setGeometry(QRect(90, 410, 171, 61));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush1(QColor(255, 255, 255, 128));
        brush1.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        stat3->setPalette(palette);
        stat3->setStyleSheet(QString::fromUtf8("QLabel, QRadioButton {\n"
"    color: #ffffff; /* Assurer une couleur uniforme et lisible */\n"
"    font-weight: bold;\n"
"	font-size:16px;\n"
"	background-color:none;\n"
"}\n"
""));
        stat2 = new QRadioButton(widget);
        stat2->setObjectName("stat2");
        stat2->setGeometry(QRect(90, 360, 201, 71));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush1);
#endif
        stat2->setPalette(palette1);
        stat2->setStyleSheet(QString::fromUtf8("QLabel, QRadioButton {\n"
"    color: #ffffff; /* Assurer une couleur uniforme et lisible */\n"
"    font-weight: bold;\n"
"	font-size:16px;\n"
"	background-color:none;\n"
"}\n"
""));
        widget_2 = new QWidget(main_projet);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(340, 30, 1181, 771));
        widget_2->setStyleSheet(QString::fromUtf8("background-color:#3D7E9A ;\n"
"border-radius: 35px; /* Bordure arrondie comme l\342\200\231image */"));
        stat = new QPushButton(widget_2);
        stat->setObjectName("stat");
        stat->setGeometry(QRect(100, 60, 171, 61));
        stat->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"            stop:0 #D1D3D4 , stop:1 #B8B8B8);\n"
"            color: white;\n"
"            font-size: 18px;\n"
"            font-weight: bold;\n"
"            padding: 15px 25px;\n"
"            border-radius: 12px;\n"
"            margin-bottom: 15px;\n"
"            box-shadow: 4px 4px 8px rgba(0, 0, 0, 0.2);\n"
"            transition: transform 0.2s, box-shadow 0.2s;\n"
"qproperty-icon: url(\"Y:/Smart-Vaccination-Biological-Research-Center/NextGen/resources/stat.png\"); /* Chemin de l'ic\303\264ne */\n"
"    qproperty-iconSize: 24px 24px; /* Taille de l'ic\303\264ne */\n"
"        }\n"
"        QPushButton:hover {\n"
"            transform: scale(1.05);\n"
"            box-shadow: 6px 6px 12px rgba(0, 0, 0, 0.3);\n"
"            background: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, \n"
"            stop:0 #1ABC9C, stop:1 #16A085);\n"
"        }\n"
"        QPushButton:pressed {\n"
"           trans"
                        "form: scale(0.95);\n"
"        }"));
        Tp = new QTableWidget(widget_2);
        Tp->setObjectName("Tp");
        Tp->setGeometry(QRect(100, 190, 991, 501));
        Tp->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"background-color:rgb(255, 255, 255);\n"
"    border: none;\n"
"}\n"
""));
        QRCode = new QPushButton(widget_2);
        QRCode->setObjectName("QRCode");
        QRCode->setGeometry(QRect(310, 60, 171, 61));
        QRCode->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"            background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, \n"
"             stop:0 #D1D3D4 , stop:1 #B8B8B8);\n"
"            color: white;\n"
"            font-size: 18px;\n"
"            font-weight: bold;\n"
"            padding: 15px 25px;\n"
"            border-radius: 12px;\n"
"            margin-bottom: 15px;\n"
"            box-shadow: 4px 4px 8px rgba(0, 0, 0, 0.2);\n"
"            transition: transform 0.2s, box-shadow 0.2s;\n"
"qproperty-icon: url(\"Y:/Smart-Vaccination-Biological-Research-Center/NextGen/resources/qrCode.png\"); /* Chemin de l'ic\303\264ne */\n"
"    qproperty-iconSize: 24px 24px; /* Taille de l'ic\303\264ne */\n"
"        }\n"
"        QPushButton:hover {\n"
"            transform: scale(1.05);\n"
"            box-shadow: 6px 6px 12px rgba(0, 0, 0, 0.3);\n"
"            background: qlineargradient(spread:pad, x1:0, y1:1, x2:1, y2:0, \n"
"            stop:0 #1ABC9C, stop:1 #16A085);\n"
"        }\n"
"        QPushButton:pressed {\n"
"           tr"
                        "ansform: scale(0.95);\n"
"        }"));

        retranslateUi(main_projet);

        QMetaObject::connectSlotsByName(main_projet);
    } // setupUi

    void retranslateUi(QWidget *main_projet)
    {
        main_projet->setWindowTitle(QCoreApplication::translate("main_projet", "Form", nullptr));
        label_6->setText(QCoreApplication::translate("main_projet", "Titre:", nullptr));
        label_7->setText(QCoreApplication::translate("main_projet", "date_Debut:", nullptr));
        label_8->setText(QCoreApplication::translate("main_projet", "date_fin:", nullptr));
        label_9->setText(QCoreApplication::translate("main_projet", "status:", nullptr));
        stat1->setText(QCoreApplication::translate("main_projet", "Termin\303\251", nullptr));
        lieu->setItemText(0, QCoreApplication::translate("main_projet", "choisir un lieu:", nullptr));
        lieu->setItemText(1, QCoreApplication::translate("main_projet", "Tunis", nullptr));
        lieu->setItemText(2, QCoreApplication::translate("main_projet", "Ben arous", nullptr));
        lieu->setItemText(3, QCoreApplication::translate("main_projet", "Nabeul", nullptr));
        lieu->setItemText(4, QCoreApplication::translate("main_projet", "Sousse", nullptr));
        lieu->setItemText(5, QCoreApplication::translate("main_projet", "Kairouan", nullptr));
        lieu->setItemText(6, QCoreApplication::translate("main_projet", "Monastir", nullptr));
        lieu->setItemText(7, QCoreApplication::translate("main_projet", "Mahdia", nullptr));
        lieu->setItemText(8, QCoreApplication::translate("main_projet", "Sfax", nullptr));
        lieu->setItemText(9, QCoreApplication::translate("main_projet", "sidi bouzid", nullptr));

        label_10->setText(QCoreApplication::translate("main_projet", "lieu:", nullptr));
        btn_ajout->setText(QCoreApplication::translate("main_projet", "Ajouter", nullptr));
        label_11->setText(QCoreApplication::translate("main_projet", "Ajouter un Projet", nullptr));
        stat3->setText(QCoreApplication::translate("main_projet", "Annul\303\251", nullptr));
        stat2->setText(QCoreApplication::translate("main_projet", "En Cours", nullptr));
        stat->setText(QCoreApplication::translate("main_projet", "Statistiques", nullptr));
        QRCode->setText(QCoreApplication::translate("main_projet", "CodeQr", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_projet: public Ui_main_projet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_PROJET_H
