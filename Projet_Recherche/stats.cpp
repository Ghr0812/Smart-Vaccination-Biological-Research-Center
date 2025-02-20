#include "stats.h"
#include "ui_stats.h"

Stats::Stats(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Stats)
{
    ui->setupUi(this);
    afficherStatistiques();
}

Stats::~Stats()
{
    delete ui;
}

void Stats::on_b6_clicked()
{
    this->close();
}

void Stats::afficherStatistiques()
{
    // Création des données pour le Pie Chart
    QPieSeries *series = new QPieSeries();
    series->append("Terminés", 40);
    series->append("En Cours", 35);
    series->append("Annulés", 25);

    // Personnalisation des couleurs et styles des slices
    QPieSlice *slice1 = series->slices().at(0);
    slice1->setBrush(QColor("#B22222")); // Rouge foncé intense
    slice1->setLabel("Terminés: " + QString::number(slice1->percentage() * 100, 'f', 1) + "%");
    slice1->setExploded(true); // Effet éclaté
    slice1->setLabelVisible(true);
    slice1->setPen(QPen(Qt::black, 2)); // Bordures noires pour effet premium

    QPieSlice *slice2 = series->slices().at(1);
    slice2->setBrush(QColor("#4B0082")); // Indigo pour En Cours
    slice2->setLabel("En Cours: " + QString::number(slice2->percentage() * 100, 'f', 1) + "%");
    slice2->setLabelVisible(true);
    slice2->setPen(QPen(Qt::black, 2));

    QPieSlice *slice3 = series->slices().at(2);
    slice3->setBrush(QColor("#FFD700")); // Or pour Annulés
    slice3->setLabel("Annulés: " + QString::number(slice3->percentage() * 100, 'f', 1) + "%");
    slice3->setLabelVisible(true);
    slice3->setPen(QPen(Qt::black, 2));

    // Création du graphique
    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Statistiques des Projets");
    chart->setTitleFont(QFont("Arial", 14, QFont::Bold));
    chart->setBackgroundBrush(QColor("#E3E3E3")); // Arrière-plan gris clair
    chart->setDropShadowEnabled(true); // Ombre pour effet 3D
    chart->legend()->setAlignment(Qt::AlignBottom);
    chart->legend()->setFont(QFont("Arial", 12, QFont::Bold));

    // Ajout d'animations pour les slices
    for (QPieSlice *slice : series->slices()) {
        QObject::connect(slice, &QPieSlice::hovered, [slice](bool hovered) {
            slice->setExploded(hovered);
            slice->setLabelVisible(hovered);
        });
    }

    // Affichage dans un QChartView
    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setStyleSheet("border-radius: 15px; background-color: white;");

    // Ajout au layout existant dans l'UI
    ui->verticalLayout->addWidget(chartView);
}

