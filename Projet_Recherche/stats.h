#ifndef STATS_H
#define STATS_H

#include <QDialog>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>


namespace Ui {
class Stats;
}

class Stats : public QDialog
{
    Q_OBJECT

public:
    explicit Stats(QWidget *parent = nullptr);
    ~Stats();
    void afficherStatistiques();

private slots:
    void on_b6_clicked();

private:
    Ui::Stats *ui;
};

#endif // STATS_H
