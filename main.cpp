#include "mainwindow.h"
#include "connction.h"
#include "connect_db.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connction con;

    connect_db cnd;

    bool valide = cnd.open();

    qDebug() << "Valeur de valide: " << valide;

    if(valide)
    {
        con.setWindowTitle("Smart Vaccination & Biological Research Center");
        con.show();
        QMessageBox::information(nullptr, QObject::tr("database is open"),
                                 QObject::tr("connection successful.\n"
                                             "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                              QObject::tr("connection failed.\n"
                                          "Click Cancel to exit."), QMessageBox::Cancel);



    return a.exec();
}