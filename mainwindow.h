#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void createCharts();
    void afficherImageDansQLabel(QLabel* label);
private slots:
    void on_D_toggled(bool checked);
    void on_L_toggled(bool checked);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
