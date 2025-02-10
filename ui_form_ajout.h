/********************************************************************************
** Form generated from reading UI file 'form_ajout.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_AJOUT_H
#define UI_FORM_AJOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_ajout
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *l;
    QLineEdit *z1;
    QDateEdit *d1;
    QDateEdit *d2;
    QRadioButton *b1;
    QRadioButton *b2;
    QRadioButton *b3;
    QPushButton *ba;
    QLabel *label_6;

    void setupUi(QWidget *Form_ajout)
    {
        if (Form_ajout->objectName().isEmpty())
            Form_ajout->setObjectName("Form_ajout");
        Form_ajout->resize(400, 466);
        label = new QLabel(Form_ajout);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 120, 61, 21));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label_2 = new QLabel(Form_ajout);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 160, 160, 30));
        label_2->setFont(font);
        label_3 = new QLabel(Form_ajout);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 210, 160, 30));
        label_3->setFont(font);
        label_4 = new QLabel(Form_ajout);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 260, 160, 30));
        label_4->setFont(font);
        label_5 = new QLabel(Form_ajout);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 350, 160, 30));
        label_5->setFont(font);
        l = new QComboBox(Form_ajout);
        l->addItem(QString());
        l->addItem(QString());
        l->addItem(QString());
        l->addItem(QString());
        l->addItem(QString());
        l->addItem(QString());
        l->addItem(QString());
        l->addItem(QString());
        l->setObjectName("l");
        l->setGeometry(QRect(70, 360, 160, 22));
        z1 = new QLineEdit(Form_ajout);
        z1->setObjectName("z1");
        z1->setGeometry(QRect(70, 125, 140, 22));
        d1 = new QDateEdit(Form_ajout);
        d1->setObjectName("d1");
        d1->setGeometry(QRect(160, 168, 110, 22));
        d2 = new QDateEdit(Form_ajout);
        d2->setObjectName("d2");
        d2->setGeometry(QRect(120, 217, 110, 22));
        b1 = new QRadioButton(Form_ajout);
        b1->setObjectName("b1");
        b1->setGeometry(QRect(110, 270, 89, 20));
        b2 = new QRadioButton(Form_ajout);
        b2->setObjectName("b2");
        b2->setGeometry(QRect(110, 294, 89, 20));
        b3 = new QRadioButton(Form_ajout);
        b3->setObjectName("b3");
        b3->setGeometry(QRect(110, 320, 89, 20));
        ba = new QPushButton(Form_ajout);
        ba->setObjectName("ba");
        ba->setGeometry(QRect(140, 420, 75, 24));
        label_6 = new QLabel(Form_ajout);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 20, 220, 40));
        label_6->setFont(font);

        retranslateUi(Form_ajout);

        QMetaObject::connectSlotsByName(Form_ajout);
    } // setupUi

    void retranslateUi(QWidget *Form_ajout)
    {
        Form_ajout->setWindowTitle(QCoreApplication::translate("Form_ajout", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form_ajout", "Titre:", nullptr));
        label_2->setText(QCoreApplication::translate("Form_ajout", "DATE_DEBUT:", nullptr));
        label_3->setText(QCoreApplication::translate("Form_ajout", "DATE_FIN:", nullptr));
        label_4->setText(QCoreApplication::translate("Form_ajout", "STATUS:", nullptr));
        label_5->setText(QCoreApplication::translate("Form_ajout", "Lieu:", nullptr));
        l->setItemText(0, QCoreApplication::translate("Form_ajout", "choisir un centre", nullptr));
        l->setItemText(1, QCoreApplication::translate("Form_ajout", "Sidi Bouzid", nullptr));
        l->setItemText(2, QCoreApplication::translate("Form_ajout", "Sfax", nullptr));
        l->setItemText(3, QCoreApplication::translate("Form_ajout", "Sousse", nullptr));
        l->setItemText(4, QCoreApplication::translate("Form_ajout", "Mahdia", nullptr));
        l->setItemText(5, QCoreApplication::translate("Form_ajout", "Monastir", nullptr));
        l->setItemText(6, QCoreApplication::translate("Form_ajout", "Tunis", nullptr));
        l->setItemText(7, QCoreApplication::translate("Form_ajout", "Kairouan", nullptr));

        b1->setText(QCoreApplication::translate("Form_ajout", "Termin\303\251", nullptr));
        b2->setText(QCoreApplication::translate("Form_ajout", "En cours", nullptr));
        b3->setText(QCoreApplication::translate("Form_ajout", "Annul\303\251", nullptr));
        ba->setText(QCoreApplication::translate("Form_ajout", "Ajouter", nullptr));
        label_6->setText(QCoreApplication::translate("Form_ajout", "Formulaire d'ajout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_ajout: public Ui_Form_ajout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_AJOUT_H
