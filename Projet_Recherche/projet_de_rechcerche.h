#ifndef PROJET_DE_RECHCERCHE_H
#define PROJET_DE_RECHCERCHE_H

#include <QString>
#include <QDate>

class Projet_de_Rechcerche
{
public:
    Projet_de_Rechcerche();
    Projet_de_Rechcerche( QString titre, QDate date_debut, QDate date_fin, QString status, QString lieu);

    QString getTitre();
    void setTitre(QString titre);
    QDate getDateDebut();
    void setDateDebut(QDate date_debut);
    QDate getDateFin();
    void setDateFin(QDate date_fin);
    QString getStatus();
    void setStatus(QString status);
    QString getLieu();
    void setLieu(QString lieu);


private:
    QString titre;
    QDate date_debut;
    QDate date_fin;
    QString status;
    QString lieu;
};

#endif // PROJET_DE_RECHCERCHE_H
