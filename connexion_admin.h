#ifndef CONNEXION_ADMIN_H
#define CONNEXION_ADMIN_H

#include <QDialog>
#include "mainwindow.h"


namespace Ui {
class connexion_admin;
}

class connexion_admin : public QDialog
{
    Q_OBJECT

public:
    explicit connexion_admin(QWidget *parent = nullptr);
    ~connexion_admin();

private slots:
    void on_b1_con_clicked();

private:
    Ui::connexion_admin *ui;
};

#endif // CONNEXION_ADMIN_H
