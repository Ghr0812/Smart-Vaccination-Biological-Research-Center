#include "qrcode.h"
#include "ui_qrcode.h"

QrCode::QrCode(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::QrCode)
{
    ui->setupUi(this);
}

QrCode::~QrCode()
{
    delete ui;
}
