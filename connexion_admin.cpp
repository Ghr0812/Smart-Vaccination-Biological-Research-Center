#include "connexion_admin.h"
#include "ui_connexion_admin.h"

connexion_admin::connexion_admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::connexion_admin)
{
    ui->setupUi(this);
}

connexion_admin::~connexion_admin()
{
    delete ui;
}

void connexion_admin::on_b1_con_clicked()
{
    MainWindow *mainWindow = new MainWindow();

    mainWindow->show();

    this->close();
}
