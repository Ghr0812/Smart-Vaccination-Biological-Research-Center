#include "projet_de_rechcerche.h"

Projet_de_Rechcerche::Projet_de_Rechcerche()
{
    this->titre = "";
    this->date_debut = QDate();
    this->date_fin = QDate();
    this->status = "";
    this->lieu = "";
}


Projet_de_Rechcerche::Projet_de_Rechcerche(QString titre, QDate date_debut, QDate date_fin, QString status, QString lieu)
{
    this->titre = titre;
    this->date_debut = date_debut;
    this->date_fin = date_fin;
    this->status = status;
    this->lieu = lieu;
}

QString Projet_de_Rechcerche::getTitre()
{
    return titre;
}

QDate Projet_de_Rechcerche::getDateDebut()
{
    return date_debut;
}

QDate Projet_de_Rechcerche::getDateFin()
{
    return date_fin;
}

QString Projet_de_Rechcerche::getStatus()
{
    return status;
}

QString Projet_de_Rechcerche::getLieu()
{
    return lieu;
}

void Projet_de_Rechcerche::setTitre(QString titre)
{
    this->titre = titre;
}

void Projet_de_Rechcerche::setDateDebut(QDate date_debut)
{
    this->date_debut = date_debut;
}

void Projet_de_Rechcerche::setDateFin(QDate date_fin)
{
    this->date_fin = date_fin;
}

void Projet_de_Rechcerche::setStatus(QString status)
{
    this->status = status;
}

void Projet_de_Rechcerche::setLieu(QString lieu)
{
    this->lieu = lieu;
}
