#include <iostream>

int EX5(int argc, char *argv[])

{

    std::string prenom, nom;

    std::cout << "Veuillez rentrer votre Prénom" << "\n";

    std::cin >> prenom;

    std::cout << "Veuillez rentrer votre Nom" << "\n";

    std::cin >> nom;

    std::cout << prenom + " " + nom;

    return 0;
}