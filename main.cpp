#include "mainwindow.h"
#include "connexion_admin.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connexion_admin *connexionWindow = new connexion_admin();
    connexionWindow->setWindowTitle("Smart Vaccination & Biological Research Center");
    connexionWindow->exec();
    return a.exec();
}
