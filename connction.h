#ifndef CONNCTION_H
#define CONNCTION_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>

namespace Ui {
class Connction;
}

class Connction : public QMainWindow
{
    Q_OBJECT

public:
    explicit Connction(QWidget *parent = nullptr);
    ~Connction();
    void afficherImageDansQLabel(QLabel* label);

private slots:
    void on_con_clicked();

private:
    Ui::Connction *ui;
};

#endif // CONNCTION_H
