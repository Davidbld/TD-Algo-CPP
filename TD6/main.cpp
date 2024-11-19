#include <iostream>
#include "etudiant.hpp"

int main(int argc, char const *argv[])
{
    // Création des objets Etudiant
    Etudiant etudiant1("Dupont", 10.0, 15.0);
    Etudiant etudiant2("Antoine", 0.0, 30.0);
    Etudiant etudiant3("Hugette", 30.0, 20.0);

    // Affichage des informations des étudiants
    etudiant1.informationEtudiant();
    etudiant2.informationEtudiant();
    etudiant3.informationEtudiant();

    return 0;
}
