#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Projet_Recherche/main_projet.h"
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QBarSeries>
#include <QtCharts/QPieSeries>
#include <QtCharts/QValueAxis>
#include <QtCharts/QBarCategoryAxis>
#include <QVBoxLayout>
#include <QGraphicsDropShadowEffect>
#include <QtCharts/QBarSet>
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
    void on_b6_clicked();

    void on_b4_clicked();

private:
    Ui::MainWindow *ui;
    main_projet *pr;
};

#endif // MAINWINDOW_H
