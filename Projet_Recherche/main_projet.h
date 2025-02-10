#ifndef MAIN_PROJET_H
#define MAIN_PROJET_H

#include <QWidget>
#include <QGroupBox>
#include <QVBoxLayout>
#include <QLabel>
#include <QVector>  // Needed for QVector
#include <QPair>   // Needed for QPair

namespace Ui {
class main_projet;
}

class main_projet : public QWidget
{
    Q_OBJECT

public:
    explicit main_projet(QWidget *parent = nullptr);
    ~main_projet();

private:
    Ui::main_projet *ui;
};

#endif // MAIN_PROJET_H
