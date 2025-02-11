#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QFileDialog>
#include <QPixmap>
#include <QPalette>
void MainWindow::saveTableData()
{
    // Demander un chemin de fichier à l'utilisateur
    QString fileName = QFileDialog::getSaveFileName(this, "Enregistrer les données", "", "Fichiers CSV (*.csv);;Fichiers texte (*.txt)");
    if (fileName.isEmpty()) {
        return; // Si l'utilisateur annule, ne rien faire
    }

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Erreur", "Impossible d'ouvrir le fichier pour l'écriture !");
        return;
    }

    QTextStream out(&file);

    // Parcourir les lignes et colonnes du tableau pour extraire les données
    for (int row = 0; row < ui->tableWidget->rowCount(); ++row) {
        QStringList rowData;
        for (int col = 0; col < ui->tableWidget->columnCount(); ++col) {
            QTableWidgetItem *item = ui->tableWidget->item(row, col);
            rowData << (item ? item->text() : ""); // Si la cellule est vide, insérer une chaîne vide
        }
        out << rowData.join(",") << "\n"; // Séparer les colonnes par des virgules (format CSV)
    }

    file.close();

    QMessageBox::information(this, "Succès", "Données enregistrées avec succès !");
}

void MainWindow::loadTableData()
{
    // Demander un chemin de fichier à l'utilisateur
    QString fileName = QFileDialog::getOpenFileName(this, "Ouvrir les données", "", "Fichiers CSV (*.csv);;Fichiers texte (*.txt)");
    if (fileName.isEmpty()) {
        return; // Si l'utilisateur annule, ne rien faire
    }

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Erreur", "Impossible d'ouvrir le fichier pour la lecture !");
        return;
    }

    QTextStream in(&file);
    QString line;

    // Vider le tableau avant de charger de nouvelles données
    ui->tableWidget->clear();

    // Lire chaque ligne du fichier
    int row = 0;
    while (!in.atEnd()) {
        line = in.readLine();
        QStringList rowData = line.split(",");

        // Insérer une nouvelle ligne
        ui->tableWidget->insertRow(row);

        // Remplir les cellules avec les données
        for (int col = 0; col < rowData.size(); ++col) {
            ui->tableWidget->setItem(row, col, new QTableWidgetItem(rowData[col]));
        }
        ++row;
    }

    file.close();
    QMessageBox::information(this, "Succès", "Données chargées avec succès !");
}



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPalette palette;
    QPixmap background("C:/tst1.jpg");
    background = background.scaled(this->size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
    palette.setBrush(QPalette::Window, background);

    ui->centralwidget->setAutoFillBackground(true);
    ui->centralwidget->setPalette(palette);

    this->setPalette(palette);
    // Connecter les boutons aux slots
    connect(ui->btnAddColumn, &QPushButton::clicked, this, &MainWindow::addColumn);
    connect(ui->btnDeleteColumn, &QPushButton::clicked, this, &MainWindow::deleteColumn);
    connect(ui->btnAddRow, &QPushButton::clicked, this, &MainWindow::addRow);
    connect(ui->btnDeleteRow, &QPushButton::clicked, this, &MainWindow::deleteRow);
    // Connecter le nouveau bouton d'enregistrement
    connect(ui->btnSaveData, &QPushButton::clicked, this, &MainWindow::saveTableData);
    connect(ui->btnLoadData, &QPushButton::clicked, this, &MainWindow::loadTableData);

    // Affiche les dimensions initiales
    updateTableDimensions();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::addColumn()
{
    bool ok;
    QString columnName = QInputDialog::getText(this, "Ajouter une colonne", "Nom de la colonne :", QLineEdit::Normal, "", &ok);
    if (ok && !columnName.isEmpty()) {
        int columnCount = ui->tableWidget->columnCount();
        ui->tableWidget->insertColumn(columnCount);
        ui->tableWidget->setHorizontalHeaderItem(columnCount, new QTableWidgetItem(columnName));
        updateTableDimensions(); // Mettre à jour les dimensions
    }
}

void MainWindow::deleteColumn()
{
    bool ok;
    int column = QInputDialog::getInt(this, "Supprimer une colonne", "Indice de la colonne (0-n) :", 0, 0, ui->tableWidget->columnCount() - 1, 1, &ok);
    if (ok) {
        ui->tableWidget->removeColumn(column);
        updateTableDimensions(); // Mettre à jour les dimensions
    }
}

void MainWindow::editCell()
{
    bool ok;
    int row = QInputDialog::getInt(this, "Modifier une cellule", "Indice de la ligne (0-n) :", 0, 0, ui->tableWidget->rowCount() - 1, 1, &ok);
    if (!ok) return;

    int column = QInputDialog::getInt(this, "Modifier une cellule", "Indice de la colonne (0-n) :", 0, 0, ui->tableWidget->columnCount() - 1, 1, &ok);
    if (!ok) return;

    QString newValue = QInputDialog::getText(this, "Modifier une cellule", "Nouveau contenu :", QLineEdit::Normal, "", &ok);
    if (ok) {
        ui->tableWidget->setItem(row, column, new QTableWidgetItem(newValue));
    }
}

void MainWindow::addRow()
{
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    updateTableDimensions(); // Mettre à jour les dimensions
}

void MainWindow::deleteRow()
{
    bool ok;
    int row = QInputDialog::getInt(this, "Supprimer une ligne", "Indice de la ligne (0-n) :", 0, 0, ui->tableWidget->rowCount() - 1, 1, &ok);
    if (ok) {
        ui->tableWidget->removeRow(row);
        updateTableDimensions(); // Mettre à jour les dimensions
    }
}

void MainWindow::updateTableDimensions()
{
    int rowCount = ui->tableWidget->rowCount();
    int columnCount = ui->tableWidget->columnCount();

    // Affiche les dimensions dans la barre d'état
    statusBar()->showMessage(QString("Dimensions du tableau : %1 lignes x %2 colonnes").arg(rowCount).arg(columnCount));
}
