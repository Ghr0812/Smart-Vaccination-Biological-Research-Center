#include "connction.h"
#include "ui_connction.h"
#include "mainwindow.h"

Connction::Connction(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Connction)
{
    ui->setupUi(this);
    afficherImageDansQLabel(ui->label_5);
}

Connction::~Connction()
{
    delete ui;
}



void Connction::on_con_clicked()
{
    MainWindow *mainWindow = new MainWindow();

    mainWindow->show();

    this->close();
}



void Connction::afficherImageDansQLabel(QLabel* label) {
    QPixmap pixmap("Y:/Smart-Vaccination-Biological-Research-Center/NextGen/resources/logo.png");

    if (pixmap.isNull()) {
        qDebug() << "Erreur : Impossible de charger le logo ! Vérifiez le chemin.";
    }

    label->setPixmap(pixmap);

    label->setAlignment(Qt::AlignCenter);
    label->setScaledContents(true);
}

