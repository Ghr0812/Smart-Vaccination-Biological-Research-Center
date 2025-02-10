#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Smart Vaccination & Biological Research Center");
    createCharts();
    afficherImageDansQLabel(ui->label_3);
    pr = new main_projet(this);
    pr->hide();
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_D_toggled(bool checked)
{
    if (checked) {
        qApp->setStyleSheet("QWidget { background-color: #2E2E2E; color: white; }"
                            "QPushButton { background-color: #444444; color: white; border: none; padding: 5px; }"
                            "QLineEdit { background-color: #444444; color: white; border: 1px solid #888888; }");
    }
}


void MainWindow::afficherImageDansQLabel(QLabel* label) {
    QPixmap pixmap("resources/logo.png");

    if (pixmap.isNull()) {
        qDebug() << "Échec du chargement de l'image.";
        return;
    }

    label->setPixmap(pixmap);

    label->setAlignment(Qt::AlignCenter);
    label->setScaledContents(true);
}


void MainWindow::createCharts()
{
    // Création du Pie Chart
    QPieSeries *pieSeries = new QPieSeries();
    pieSeries->append("Completed", 70);
    pieSeries->append("Pending", 30);

    QChart *pieChart = new QChart();
    pieChart->addSeries(pieSeries);
    pieChart->setTitle("Vaccination Completion Rate");
    pieChart->setTitleFont(QFont("Arial", 14, QFont::Bold));
    pieChart->setBackgroundBrush(QColor("#F5F5F5"));
    pieChart->setDropShadowEnabled(true);

    QChartView *pieChartView = new QChartView(pieChart);
    pieChartView->setRenderHint(QPainter::Antialiasing);

    // Ajout du Pie Chart dans le premier cadre (layout existant)
    ui->horizontalLayout->addWidget(pieChartView);

    // Création du Bar Chart
    QBarSet *set0 = new QBarSet("January");
    QBarSet *set1 = new QBarSet("February");
    *set0 << 1 << 2 << 3 << 4 << 5 << 6;
    *set1 << 5 << 6 << 7 << 8 << 9 << 10;

    QBarSeries *barSeries = new QBarSeries();
    barSeries->append(set0);
    barSeries->append(set1);

    QChart *barChart = new QChart();
    barChart->addSeries(barSeries);
    barChart->setTitle("Monthly Vaccination Stats");
    barChart->setTitleFont(QFont("Arial", 14, QFont::Bold));
    barChart->setBackgroundBrush(QColor("#F5F5F5"));

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append({"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"});

    QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0, 10);

    barChart->createDefaultAxes();
    barChart->setAxisX(axisX, barSeries);
    barChart->setAxisY(axisY, barSeries);

    QChartView *barChartView = new QChartView(barChart);
    barChartView->setRenderHint(QPainter::Antialiasing);

    // Ajout du Bar Chart dans le deuxième cadre (layout existant)
    ui->horizontalLayout_2->addWidget(barChartView);
}



void MainWindow::on_L_toggled(bool checked)
{
    if (checked) {
        qApp->setStyleSheet("QWidget { background-color: white; color: black; }"
                            "QPushButton { background-color: #DDDDDD; color: black; border: none; padding: 5px; }"
                            "QLineEdit { background-color: white; color: black; border: 1px solid #888888; }");
    }
}


void MainWindow::on_b6_clicked()
{
    this->close();
}


void MainWindow::on_b4_clicked()
{
    qDebug() << "Button clicked";

    if (!ui->widget) {
        qWarning() << "widget is null!";
        return;
    }

    if (!pr) {
        qWarning() << "pr is null!";
        return;
    }


    QLayout *currentLayout = ui->widget->layout();
    if (currentLayout) {
        qDebug() << "Clearing existing layout";
        QLayoutItem *item;
        while ((item = currentLayout->takeAt(0)) != nullptr) {
            if (QWidget *widget = item->widget()) {
                widget->setParent(nullptr);
            }
            delete item;
        }
        delete currentLayout;
    }
    ui->progressBar->hide();
    if (ui->label_2 != nullptr) {
        delete ui->label_2;
        ui->label_2 = nullptr;
    }

    qDebug() << "Creating new layout";
    QVBoxLayout *newLayout = new QVBoxLayout();
    ui->widget->setLayout(newLayout);

    qDebug() << "Adding pr to layout";
    newLayout->addWidget(pr);
    pr->show();
}


