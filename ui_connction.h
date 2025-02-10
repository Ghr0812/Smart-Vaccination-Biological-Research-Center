/********************************************************************************
** Form generated from reading UI file 'connction.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNCTION_H
#define UI_CONNCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Connction
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label_6;
    QLabel *label_5;
    QFrame *frame_2;
    QPushButton *con;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Connction)
    {
        if (Connction->objectName().isEmpty())
            Connction->setObjectName("Connction");
        Connction->resize(895, 593);
        centralwidget = new QWidget(Connction);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(10, 10, 541, 541));
        frame->setStyleSheet(QString::fromUtf8("QWidget{background-color:#D4E6F1 ;\n"
"}\n"
"QLabel\n"
"{\n"
"color:red;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(60, 390, 401, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(true);
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: white /* Couleur par d\303\251faut */\n"
"    font-size: 14px;\n"
"    font-weight: normal;\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    color: red; /* Changer la couleur du texte au survol */\n"
"    font-size: 16px; /* Augmenter l\303\251g\303\250rement la taille du texte */\n"
"    font-weight: bold; /* Mettre en gras */\n"
"}\n"
"QLabel {\n"
"    font-size: 14px;  /* Taille normale */\n"
"    transition: font-size 0.3s ease-in-out; /* Animation fluide */\n"
"}\n"
"\n"
"QLabel:hover {\n"
"    font-size: 20px;  /* Taille agrandie quand la souris passe */\n"
"}\n"
""));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(90, 90, 341, 271));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(560, 10, 321, 531));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        con = new QPushButton(frame_2);
        con->setObjectName("con");
        con->setGeometry(QRect(30, 330, 251, 71));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        con->setFont(font1);
        con->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 200, 150, 16));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Arial")});
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(true);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{color:grey;\n"
"background-color: transparent;}"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 50, 291, 21));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bookman Old Style")});
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setItalic(false);
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{color :rgb(19, 23, 82);\n"
"font:bold;\n"
"background-color: transparent;}"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 60, 361, 61));
        QFont font4;
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setItalic(true);
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:transparent;\n"
"font:italic;\n"
"color:rgb(51, 65, 100);\n"
"}"));
        label = new QLabel(frame_2);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 100, 181, 51));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Arial")});
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setItalic(false);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("QLabel{color :grey;\n"
"font:bold;\n"
"background-color: transparent;}"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(170, 270, 131, 20));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{background-color:black;\n"
"color : black :}"));
        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 140, 231, 51));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Segoe UI")});
        font6.setBold(false);
        font6.setItalic(true);
        lineEdit->setFont(font6);
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-size: 14px;  /* Texte principal */\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    padding: 6px 10px;  /* Espacement interne */\n"
"    border: 2px solid #ccc; /* Bordure l\303\251g\303\250re */\n"
"    border-radius: 8px;  /* Coins arrondis */\n"
"    background-color: #f9f9f9;  /* Fond doux */\n"
"    color: #333;  /* Couleur du texte */\n"
"    transition: border-color 0.3s ease-in-out, background-color 0.3s ease-in-out;\n"
"}\n"
"\n"
"/* Placeholder moderne */\n"
"QLineEdit::placeholder {\n"
"    font-size: 12px;\n"
"    color: #888;\n"
"    font-style: italic;\n"
"}\n"
"\n"
"/* Effet lors du focus */\n"
"QLineEdit:focus {\n"
"    border-color: #0078d7;  /* Bleu premium */\n"
"    background-color: #ffffff;\n"
"    outline: none;\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(frame_2);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(10, 220, 231, 51));
        lineEdit_2->setFont(font6);
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    font-size: 14px;  /* Texte principal */\n"
"    font-family: \"Segoe UI\", sans-serif;\n"
"    padding: 6px 10px;  /* Espacement interne */\n"
"    border: 2px solid #ccc; /* Bordure l\303\251g\303\250re */\n"
"    border-radius: 8px;  /* Coins arrondis */\n"
"    background-color: #f9f9f9;  /* Fond doux */\n"
"    color: #333;  /* Couleur du texte */\n"
"    transition: border-color 0.3s ease-in-out, background-color 0.3s ease-in-out;\n"
"}\n"
"\n"
"/* Placeholder moderne */\n"
"QLineEdit::placeholder {\n"
"    font-size: 12px;\n"
"    color: #888;\n"
"    font-style: italic;\n"
"}\n"
"\n"
"/* Effet lors du focus */\n"
"QLineEdit:focus {\n"
"    border-color: #0078d7;  /* Bleu premium */\n"
"    background-color: #ffffff;\n"
"    outline: none;\n"
"}\n"
""));
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);
        Connction->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Connction);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 895, 22));
        Connction->setMenuBar(menubar);
        statusbar = new QStatusBar(Connction);
        statusbar->setObjectName("statusbar");
        Connction->setStatusBar(statusbar);

        retranslateUi(Connction);

        QMetaObject::connectSlotsByName(Connction);
    } // setupUi

    void retranslateUi(QMainWindow *Connction)
    {
        Connction->setWindowTitle(QCoreApplication::translate("Connction", "MainWindow", nullptr));
        label_6->setText(QCoreApplication::translate("Connction", "Bienvenue \303\240 VEXORA !", nullptr));
        label_5->setText(QString());
        con->setText(QCoreApplication::translate("Connction", "se connecter", nullptr));
        label_2->setText(QCoreApplication::translate("Connction", "mot de passe:", nullptr));
        label_3->setText(QCoreApplication::translate("Connction", "Se Connecter", nullptr));
        label_4->setText(QCoreApplication::translate("Connction", "connectez-vous avec vos identifiants pour acc\303\251der \n"
" \303\240 votre compte", nullptr));
        label->setText(QCoreApplication::translate("Connction", "utlisateur:", nullptr));
        label_7->setText(QCoreApplication::translate("Connction", "mot de passe oubli\303\251?", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("Connction", "Enter your username ", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Connction", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Connction: public Ui_Connction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNCTION_H
