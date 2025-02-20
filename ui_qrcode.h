/********************************************************************************
** Form generated from reading UI file 'qrcode.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRCODE_H
#define UI_QRCODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_QrCode
{
public:

    void setupUi(QDialog *QrCode)
    {
        if (QrCode->objectName().isEmpty())
            QrCode->setObjectName("QrCode");
        QrCode->resize(400, 300);

        retranslateUi(QrCode);

        QMetaObject::connectSlotsByName(QrCode);
    } // setupUi

    void retranslateUi(QDialog *QrCode)
    {
        QrCode->setWindowTitle(QCoreApplication::translate("QrCode", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QrCode: public Ui_QrCode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRCODE_H
