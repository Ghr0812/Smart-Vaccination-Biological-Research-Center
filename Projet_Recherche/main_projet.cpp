#include "main_projet.h"
#include "ui_main_projet.h"

main_projet::main_projet(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::main_projet)
{
    ui->setupUi(this);
}

main_projet::~main_projet()
{
    delete ui;
}
