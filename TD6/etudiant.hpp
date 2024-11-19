#ifndef ETUDIANT_HPP
#define ETUDIANT_HPP

#include <string>
#include <iostream>

class Etudiant
{
private:
    std::string m_nom;
    double m_amendesBibliotheque = 0.0;
    double m_fraisScolarite = 0.0;
    double m_sommeTotal = 0.0;
    void totalDu();

public:
    // Constructeurs
    Etudiant(std::string nom);
    Etudiant(std::string nom, double amendesBibliotheque);
    Etudiant(std::string nom, double amendesBibliotheque, double fraisScolarite);

    // Getters et Setters
    void setNom(std::string nom);
    std::string getNom() const;

    void setAmendesBibliotheque(double amendesBibliotheque);
    double getAmendesBibliotheque() const;

    void setFraisScolarite(double fraisScolarite);
    double getFraisScolarite() const;

    double getTotalDu();
    void informationEtudiant();
};

class date
{
private:
    int m_jour = 0;
    int m_mois = 0;
    int m_annee = 0;

public:
    void setJour(int jour);
    int getJour() const;

    void setMois(int mois);
    int getMois() const;

    void setAnnee(int annee);
    int getAnnee() const;
};
#endif // ETUDIANT_HPP
