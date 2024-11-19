#include "etudiant.hpp"

// Définition de la de la fonction totalDu() pour calculer la somme totale que l'étudiant doit à l'établissement
void Etudiant::totalDu()
{
    m_sommeTotal = m_amendesBibliotheque + m_fraisScolarite;
}

// Définition des constructeurs
Etudiant::Etudiant(std::string nom) : m_nom(nom) {}

Etudiant::Etudiant(std::string nom, double amendesBibliotheque)
    : m_nom(nom), m_amendesBibliotheque(amendesBibliotheque > 0 ? amendesBibliotheque : 0.0)
{
    if (amendesBibliotheque < 0)
    {
        std::cout << "Erreur d'initialisation : les amendes ne peuvent pas être négatives.\n";
    }
}

Etudiant::Etudiant(std::string nom, double amendesBibliotheque, double fraisScolarite)
    : m_nom(nom),
      m_amendesBibliotheque(amendesBibliotheque > 0 ? amendesBibliotheque : 0.0),
      m_fraisScolarite(fraisScolarite > 0 ? fraisScolarite : 0.0)
{
    if (amendesBibliotheque < 0)
    {
        std::cout << "Erreur d'initialisation : les amendes ne peuvent pas être négatives.\n";
    }
    if (fraisScolarite < 0)
    {
        std::cout << "Erreur d'initialisation : les frais de scolarité ne peuvent pas être négatifs.\n";
    }
}

// Getters et Setters
void Etudiant::setNom(std::string nom) { m_nom = nom; }
std::string Etudiant::getNom() const { return m_nom; }

void Etudiant::setAmendesBibliotheque(double amendesBibliotheque) { m_amendesBibliotheque = amendesBibliotheque; }
double Etudiant::getAmendesBibliotheque() const { return m_amendesBibliotheque; }

void Etudiant::setFraisScolarite(double fraisScolarite) { m_fraisScolarite = fraisScolarite; }
double Etudiant::getFraisScolarite() const { return m_fraisScolarite; }

double Etudiant::getTotalDu()
{
    totalDu();  // Appel à la méthode pour mettre à jour m_sommeTotal
    return m_sommeTotal;
}

// Méthode pour afficher les informations de l'étudiant
void Etudiant::informationEtudiant()
{
    totalDu();  // Appel pour s'assurer que la somme totale est mise à jour
    std::cout << "Nom : " << m_nom << "\n"
              << "Montant de l'amende : " << m_amendesBibliotheque << "€\n"
              << "Montant des frais de scolarité : " << m_fraisScolarite << "€\n"
              << "Montant de la somme totale due à l'établissement : " << m_sommeTotal << "€\n"
              << "---" << std::endl;
}
