#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void addColumn();     // Ajouter une colonne
    void deleteColumn();  // Supprimer une colonne
    void editCell();      // Modifier le contenu d'une cellule
    void addRow();        // Ajouter une ligne
    void deleteRow();     // Supprimer une ligne
    void updateTableDimensions(); // Mise à jour des dimensions du tableau
    void saveTableData(); // Enregistrer les données du tableau
    void loadTableData();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
