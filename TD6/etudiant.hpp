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
    int m_anneeNaissance = 0;
    int m_age = 0;
    void totalDu();
    void calculerAge();

public:
    // Constructeurs
    Etudiant(std::string nom);
    Etudiant(std::string nom, double amendesBibliotheque);
    Etudiant(std::string nom, double amendesBibliotheque, double fraisScolarite);
    Etudiant(std::string nom, double amendesBibliotheque, double fraisScolarite, int anneeNaissance);

    // Getters et Setters
    void setNom(std::string nom);
    std::string getNom() const;

    void setAmendesBibliotheque(double amendesBibliotheque);
    double getAmendesBibliotheque() const;

    void setFraisScolarite(double fraisScolarite);
    double getFraisScolarite() const;

    double getTotalDu();
    void informationEtudiant();

    void setAnneeNaissance(int anneeNaissance);
    int getAnneeNaissance() const;

    int getCalculerAge();
};

#endif // ETUDIANT_HPP