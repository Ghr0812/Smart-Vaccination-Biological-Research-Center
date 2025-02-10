#include "form_ajout.h"
#include "ui_form_ajout.h"

Form_ajout::Form_ajout(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Form_ajout)
{
    ui->setupUi(this);
}

Form_ajout::~Form_ajout()
{
    delete ui;
}
