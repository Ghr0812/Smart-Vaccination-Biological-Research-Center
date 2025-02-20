#ifndef MAIN_PROJET_H
#define MAIN_PROJET_H

#include <QWidget>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QLabel>
#include <QVector>  // Needed for QVector
#include <QPair>   // Needed for QPair
#include "stats.h"
#include "qrcode.h"

namespace Ui {
class main_projet;
}

class main_projet : public QWidget
{
    Q_OBJECT

public:
    explicit main_projet(QWidget *parent = nullptr);
    ~main_projet();

private slots:
    void on_stat_clicked();

    void on_QRCode_clicked();

private:
    Ui::main_projet *ui;
    Stats * st;
    QrCode *qrc;
};

#endif // MAIN_PROJET_H
