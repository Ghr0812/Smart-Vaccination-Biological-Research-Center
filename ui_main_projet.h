/********************************************************************************
** Form generated from reading UI file 'main_projet.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_PROJET_H
#define UI_MAIN_PROJET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_main_projet
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLineEdit *tit;
    QDateEdit *dat_db;
    QDateEdit *dat_df;
    QRadioButton *stat1;
    QRadioButton *stat2;
    QRadioButton *stat3;
    QComboBox *lieu;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *vft;
    QLabel *vfdb;
    QLabel *vfdf;
    QLabel *vfs;
    QLabel *vfl;
    QPushButton *btn_ajout;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QPushButton *b2;
    QTableView *Tp;
    QWidget *tab_3;
    QWidget *tab_4;

    void setupUi(QWidget *main_projet)
    {
        if (main_projet->objectName().isEmpty())
            main_projet->setObjectName("main_projet");
        main_projet->resize(1236, 734);
        tabWidget = new QTabWidget(main_projet);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, -10, 1410, 800));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName("tab");
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(240, 120, 971, 451));
        groupBox->setStyleSheet(QString::fromUtf8("/* Agrandir les zones de texte QLineEdit */\n"
"QLineEdit {\n"
"    min-height: 35px; /* Hauteur minimale */\n"
"    font-size: 14pt;  /* Taille de texte */\n"
"    padding: 8px;     /* Espacement interne */\n"
"    border: 1px solid #8c8c8c;\n"
"    border-radius: 5px;\n"
"    background-color: #ffffff;\n"
"}\n"
"\n"
"/* Surbrillance des QLineEdit quand ils sont s\303\251lectionn\303\251s */\n"
"QLineEdit:focus {\n"
"    border-color: #0078d7; /* Bordure bleue en surbrillance */\n"
"    outline: none;\n"
"}\n"
"\n"
"/* Agrandir les \303\251diteurs de date QDateEdit */\n"
"QDateEdit {\n"
"    min-height: 35px; /* Hauteur minimale */\n"
"    font-size: 14pt;  /* Taille de texte */\n"
"    padding: 8px;     /* Espacement interne */\n"
"    border: 1px solid #8c8c8c;\n"
"    border-radius: 5px;\n"
"    background-color: #ffffff;\n"
"}\n"
"\n"
"/* Surbrillance des QDateEdit quand ils sont s\303\251lectionn\303\251s */\n"
"QDateEdit:focus {\n"
"    border-color: #0078d7;\n"
"    outline: none;\n"
"}\n"
"\n"
"/* Agr"
                        "andir les boutons radio QRadioButton */\n"
"QRadioButton {\n"
"    font-size: 14pt;  /* Taille du texte */\n"
"    padding: 5px;     /* Espacement autour */\n"
"}\n"
"\n"
"/* Style des indicateurs des QRadioButton */\n"
"QRadioButton::indicator {\n"
"    width: 20px;   /* Largeur de l'indicateur */\n"
"    height: 20px;  /* Hauteur de l'indicateur */\n"
"    border: 2px solid #8c8c8c;\n"
"    border-radius: 10px;\n"
"    background-color: #ffffff;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked {\n"
"    background-color: #0078d7; /* Couleur quand s\303\251lectionn\303\251 */\n"
"    border: 2px solid #0056a4;\n"
"}\n"
"\n"
"/* Agrandir les listes d\303\251roulantes QComboBox */\n"
"QComboBox {\n"
"    min-height: 35px;\n"
"    font-size: 14pt;\n"
"    padding: 5px;\n"
"    border: 1px solid #8c8c8c;\n"
"    border-radius: 5px;\n"
"    background-color: #ffffff;\n"
"}\n"
"\n"
"/* Surbrillance des QComboBox quand elles sont s\303\251lectionn\303\251es */\n"
"QComboBox:focus {\n"
"    border-color: #0078d7;\n"
" "
                        "   outline: none;\n"
"}\n"
"\n"
"/* Style des \303\251l\303\251ments d\303\251roulants dans QComboBox */\n"
"QComboBox QAbstractItemView {\n"
"    font-size: 14pt;\n"
"    border: 1px solid #8c8c8c;\n"
"    background-color: #ffffff;\n"
"    selection-background-color: #d3d3d3; /* Couleur de s\303\251lection */\n"
"}\n"
"\n"
"\n"
"\n"
"/* Style du QGroupBox avec un th\303\250me de vaccination et de biologie */\n"
"QGroupBox {\n"
"    border: 2px solid #006d5b; /* Bordure vert fonc\303\251 (sant\303\251 et nature) */\n"
"    border-radius: 10px;\n"
"    margin-top: 20px; /* Espacement pour le titre */\n"
"    padding: 10px;    /* Espacement interne */\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 1, y2: 1,\n"
"        stop: 0 #7bdcb5, /* Vert clair \303\251voquant la nature */\n"
"        stop: 0.5 #98c1d9, /* Bleu doux pour un aspect clinique */\n"
"        stop: 1 #eef4f7 /* Blanc l\303\251g\303\250rement teint\303\251 pour la neutralit\303\251 */\n"
"    );\n"
"    color: #004c3f; /* Tex"
                        "te vert fonc\303\251 pour un contraste agr\303\251able */\n"
"    font-size: 14pt; /* Taille de texte augment\303\251e */\n"
"}\n"
"\n"
"/* Style du titre du QGroupBox */\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center; /* Centrer le titre */\n"
"    padding: 5px; /* Espacement autour du texte */\n"
"    background-color: #eef4f7; /* Fond blanc teint\303\251 */\n"
"    color: #006d5b; /* Couleur du texte assortie \303\240 la bordure */\n"
"    font-size: 16pt;\n"
"    font-weight: bold; /* Mettre le titre en gras */\n"
"    border-radius: 5px;\n"
"}"));
        tit = new QLineEdit(groupBox);
        tit->setObjectName("tit");
        tit->setGeometry(QRect(230, 50, 211, 53));
        dat_db = new QDateEdit(groupBox);
        dat_db->setObjectName("dat_db");
        dat_db->setGeometry(QRect(230, 130, 211, 53));
        dat_df = new QDateEdit(groupBox);
        dat_df->setObjectName("dat_df");
        dat_df->setGeometry(QRect(230, 210, 211, 53));
        stat1 = new QRadioButton(groupBox);
        stat1->setObjectName("stat1");
        stat1->setGeometry(QRect(226, 290, 111, 61));
        stat1->setStyleSheet(QString::fromUtf8("background-color:none;"));
        stat2 = new QRadioButton(groupBox);
        stat2->setObjectName("stat2");
        stat2->setGeometry(QRect(346, 286, 130, 71));
        stat2->setStyleSheet(QString::fromUtf8("background-color:none;"));
        stat3 = new QRadioButton(groupBox);
        stat3->setObjectName("stat3");
        stat3->setGeometry(QRect(483, 291, 110, 61));
        stat3->setStyleSheet(QString::fromUtf8("background-color:none;"));
        lieu = new QComboBox(groupBox);
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
        lieu->setGeometry(QRect(230, 350, 411, 60));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 55, 201, 71));
        QFont font;
        font.setPointSize(16);
        font.setItalic(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 134, 211, 71));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 215, 191, 71));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 285, 211, 61));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 358, 211, 71));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("background-color:none;"));
        vft = new QLabel(groupBox);
        vft->setObjectName("vft");
        vft->setGeometry(QRect(480, 55, 311, 41));
        vft->setStyleSheet(QString::fromUtf8("background-color:none;"));
        vfdb = new QLabel(groupBox);
        vfdb->setObjectName("vfdb");
        vfdb->setGeometry(QRect(470, 140, 311, 41));
        vfdb->setStyleSheet(QString::fromUtf8("background-color:none;"));
        vfdf = new QLabel(groupBox);
        vfdf->setObjectName("vfdf");
        vfdf->setGeometry(QRect(470, 216, 311, 41));
        vfdf->setStyleSheet(QString::fromUtf8("background-color:none;"));
        vfs = new QLabel(groupBox);
        vfs->setObjectName("vfs");
        vfs->setGeometry(QRect(600, 300, 311, 41));
        vfs->setStyleSheet(QString::fromUtf8("background-color:none;"));
        vfl = new QLabel(groupBox);
        vfl->setObjectName("vfl");
        vfl->setGeometry(QRect(650, 360, 311, 41));
        vfl->setStyleSheet(QString::fromUtf8("background-color:none;"));
        btn_ajout = new QPushButton(tab);
        btn_ajout->setObjectName("btn_ajout");
        btn_ajout->setGeometry(QRect(1040, 580, 171, 91));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(240, 30, 821, 581));
        groupBox_2->setStyleSheet(QString::fromUtf8("\n"
"    QGroupBox {\n"
"    border: 2px solid #2e8b57;\n"
"    border-radius: 10px;\n"
"    padding: 10px;\n"
"    background-color: #f5f5f5;\n"
"    box-shadow: 2px 2px 10px rgba(0, 0, 0, 0.1);\n"
"    }\n"
"    QGroupBox:title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 5px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    color: #2e8b57;\n"
"    background-color: #ffffff;\n"
"    border-radius: 5px;\n"
"    border: 1px solid #2e8b57;\n"
"    }\n"
"    QGroupBox:focus {\n"
"    border-color: #4CAF50;\n"
"    }\n"
""));
        b2 = new QPushButton(groupBox_2);
        b2->setObjectName("b2");
        b2->setGeometry(QRect(280, 510, 250, 71));
        b2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        Tp = new QTableView(groupBox_2);
        Tp->setObjectName("Tp");
        Tp->setGeometry(QRect(40, 170, 761, 331));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget->addTab(tab_4, QString());

        retranslateUi(main_projet);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(main_projet);
    } // setupUi

    void retranslateUi(QWidget *main_projet)
    {
        main_projet->setWindowTitle(QCoreApplication::translate("main_projet", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("main_projet", "Ajouter un Projet", nullptr));
        stat1->setText(QCoreApplication::translate("main_projet", "Termin\303\251", nullptr));
        stat2->setText(QCoreApplication::translate("main_projet", "En Cours", nullptr));
        stat3->setText(QCoreApplication::translate("main_projet", "Annul\303\251", nullptr));
        lieu->setItemText(0, QCoreApplication::translate("main_projet", "choisir un lieu Pour le centre de recherche:", nullptr));
        lieu->setItemText(1, QCoreApplication::translate("main_projet", "Tunis", nullptr));
        lieu->setItemText(2, QCoreApplication::translate("main_projet", "Ben arous", nullptr));
        lieu->setItemText(3, QCoreApplication::translate("main_projet", "Nabeul", nullptr));
        lieu->setItemText(4, QCoreApplication::translate("main_projet", "Sousse", nullptr));
        lieu->setItemText(5, QCoreApplication::translate("main_projet", "Kairouan", nullptr));
        lieu->setItemText(6, QCoreApplication::translate("main_projet", "Monastir", nullptr));
        lieu->setItemText(7, QCoreApplication::translate("main_projet", "Mahdia", nullptr));
        lieu->setItemText(8, QCoreApplication::translate("main_projet", "Sfax", nullptr));
        lieu->setItemText(9, QCoreApplication::translate("main_projet", "sidi bouzid", nullptr));

        label->setText(QCoreApplication::translate("main_projet", "Titre:", nullptr));
        label_2->setText(QCoreApplication::translate("main_projet", "date_Debut:", nullptr));
        label_3->setText(QCoreApplication::translate("main_projet", "date_fin:", nullptr));
        label_4->setText(QCoreApplication::translate("main_projet", "status:", nullptr));
        label_5->setText(QCoreApplication::translate("main_projet", "lieu:", nullptr));
        vft->setText(QString());
        vfdb->setText(QString());
        vfdf->setText(QString());
        vfs->setText(QString());
        vfl->setText(QString());
        btn_ajout->setText(QCoreApplication::translate("main_projet", "Ajouter", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("main_projet", "Ajouter", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("main_projet", "Liste Projets", nullptr));
        b2->setText(QCoreApplication::translate("main_projet", "liste_projet", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("main_projet", "Afficher", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("main_projet", "modifier", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("main_projet", "supprimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class main_projet: public Ui_main_projet {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_PROJET_H
