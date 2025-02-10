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
    QPixmap pixmap("resources/logo.png");

    if (pixmap.isNull()) {
        qDebug() << "Échec du chargement de l'image.";
        return;
    }

    label->setPixmap(pixmap);

    label->setAlignment(Qt::AlignCenter);
    label->setScaledContents(true);
}

