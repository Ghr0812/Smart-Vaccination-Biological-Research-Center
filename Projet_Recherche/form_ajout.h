#ifndef FORM_AJOUT_H
#define FORM_AJOUT_H

#include <QWidget>

namespace Ui {
class Form_ajout;
}

class Form_ajout : public QWidget
{
    Q_OBJECT

public:
    explicit Form_ajout(QWidget *parent = nullptr);
    ~Form_ajout();

private:
    Ui::Form_ajout *ui;
};

#endif // FORM_AJOUT_H
