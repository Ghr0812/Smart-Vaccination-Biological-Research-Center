/********************************************************************************
** Form generated from reading UI file 'connexion_admin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNEXION_ADMIN_H
#define UI_CONNEXION_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_connexion_admin
{
public:
    QLabel *label;
    QLineEdit *email;
    QLabel *label_2;
    QLineEdit *mot_depasse;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *role;
    QPushButton *b1_con;

    void setupUi(QDialog *connexion_admin)
    {
        if (connexion_admin->objectName().isEmpty())
            connexion_admin->setObjectName("connexion_admin");
        connexion_admin->resize(857, 401);
        connexion_admin->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #D5D8DC; /* Gris clair */\n"
"    color: #000000;           /* Noir */\n"
"    font-family: Arial;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #85C1E9; /* Bleu clair */\n"
"    color: #FFFFFF;            /* Blanc */\n"
"    border: 1px solid #1F618D; /* Bleu fonc\303\251 */\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #27AE60; /* Vert */\n"
"    color: #FFFFFF;            /* Blanc */\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #1F618D; /* Bleu fonc\303\251 */\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QLineEdit {\n"
"    border: 2px solid #28B463; /* Vert bio */\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    background-color: #F0F0F0; /* Couleur opaque */\n"
"    color: #333;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2E8B57; /* Vert fonc\303\251 */\n"
"    background-color: #FFFFFF; /* Blanc opaqu"
                        "e */\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #28B463; /* Vert bio */\n"
"    border: none;\n"
"    color: white;\n"
"    padding: 10px 20px;\n"
"    text-align: center;\n"
"    font-size: 16px;\n"
"    border-radius: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #45A049; /* Vert l\303\251g\303\250rement plus fonc\303\251 */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #3E8E41; /* Vert encore plus fonc\303\251 */\n"
"}\n"
"\n"
"QComboBox {\n"
"    border: 2px solid #28B463; /* Vert bio */\n"
"    border-radius: 10px;\n"
"    padding: 5px;\n"
"    background-color: #F0F0F0; /* Couleur opaque */\n"
"    color: #333;\n"
"    font-size: 16px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    border-left: 2px solid #28B463;\n"
"    width: 30px;\n"
"    background: #28B463;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/new/prefix1/resources images/down_arrow.png); /* V\303\251rifiez le chemin */\n"
"    width: 20px;\n"
"    height: 20px;\n"
"}\n"
""));
        label = new QLabel(connexion_admin);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 20, 171, 41));
        label->setStyleSheet(QString::fromUtf8("font-size: 20px; font-weight: bold; color: #27AE60;"));
        email = new QLineEdit(connexion_admin);
        email->setObjectName("email");
        email->setGeometry(QRect(140, 130, 221, 31));
        email->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(connexion_admin);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(80, 120, 61, 51));
        label_2->setStyleSheet(QString::fromUtf8("font-size: 20px; font-weight: bold; color: #27AE60;"));
        mot_depasse = new QLineEdit(connexion_admin);
        mot_depasse->setObjectName("mot_depasse");
        mot_depasse->setGeometry(QRect(140, 180, 221, 31));
        label_3 = new QLabel(connexion_admin);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 170, 51, 51));
        label_3->setStyleSheet(QString::fromUtf8("font-size: 20px; font-weight: bold; color: #27AE60;"));
        label_4 = new QLabel(connexion_admin);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 220, 61, 41));
        label_4->setStyleSheet(QString::fromUtf8("font-size: 20px; font-weight: bold; color: #27AE60;"));
        role = new QComboBox(connexion_admin);
        role->addItem(QString());
        role->addItem(QString());
        role->addItem(QString());
        role->setObjectName("role");
        role->setGeometry(QRect(140, 230, 161, 31));
        b1_con = new QPushButton(connexion_admin);
        b1_con->setObjectName("b1_con");
        b1_con->setGeometry(QRect(350, 300, 131, 51));
        b1_con->setStyleSheet(QString::fromUtf8("background-color:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, \n"
"        stop:0 #8E44AD, stop:1 #3498DB)"));

        retranslateUi(connexion_admin);

        QMetaObject::connectSlotsByName(connexion_admin);
    } // setupUi

    void retranslateUi(QDialog *connexion_admin)
    {
        connexion_admin->setWindowTitle(QCoreApplication::translate("connexion_admin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("connexion_admin", "Connexion", nullptr));
        label_2->setText(QCoreApplication::translate("connexion_admin", "Email:", nullptr));
        label_3->setText(QCoreApplication::translate("connexion_admin", "MDP:", nullptr));
        label_4->setText(QCoreApplication::translate("connexion_admin", "Role:", nullptr));
        role->setItemText(0, QCoreApplication::translate("connexion_admin", "administrateur", nullptr));
        role->setItemText(1, QCoreApplication::translate("connexion_admin", "docteur", nullptr));
        role->setItemText(2, QCoreApplication::translate("connexion_admin", "patient", nullptr));

        b1_con->setText(QCoreApplication::translate("connexion_admin", "Connexion", nullptr));
    } // retranslateUi

};

namespace Ui {
    class connexion_admin: public Ui_connexion_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNEXION_ADMIN_H
