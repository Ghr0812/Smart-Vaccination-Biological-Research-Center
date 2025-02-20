#include "main_projet.h"
#include "ui_main_projet.h"

main_projet::main_projet(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::main_projet)
{
    ui->setupUi(this);
    connect(ui->stat, &QPushButton::clicked, this, &main_projet::on_stat_clicked);
    connect(ui->QRCode, &QPushButton::clicked, this, &main_projet::on_QRCode_clicked);

}

main_projet::~main_projet()
{
    delete ui;
}

void main_projet::on_stat_clicked()
{
    QPixmap pixmap("Y:/Smart-Vaccination-Biological-Research-Center/NextGen/resources/stat.png");

    if (pixmap.isNull()) {
        qDebug() << "Échec du chargement de l'image.";
        return;
    }

    ui->stat->setIcon(QIcon(pixmap));
    ui->stat->setIconSize(QSize(40, 100));

    Stats *st = new Stats(this);
    st->exec();
}


void main_projet::on_QRCode_clicked()
{
    QPixmap pixmap("Y:/Smart-Vaccination-Biological-Research-Center/NextGen/resources/qrCode.png");

    if (pixmap.isNull()) {
        qDebug() << "Échec du chargement de l'image.";
        return;
    }

    ui->QRCode->setIcon(QIcon(pixmap));
    ui->QRCode->setIconSize(QSize(40, 100));

    QrCode * qrc = new QrCode(this);
    qrc->exec();
}

