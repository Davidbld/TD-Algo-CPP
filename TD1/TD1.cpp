// Ex2
#include <iostream>
int EX2(int argc, char *argv[])
{
    int a, b;
    std::cout << "Veuillez entrer la 1e valeur:" << std::endl;
    std::cin >> a;
    std::cout << "Veuillez entrer la 2e valeur:" << std::endl;
    std::cin >> b;
    std::cout << "Le produit des deux valeurs est: " << a + b;
    return 0;
}

// Ex3

#include <iostream>

#include <math.h>

int EX3(int argc, char *argv[])

{

    int a, b;

    double vector1[3] = {0, 5, 2};

    double vector2[3] = {7, 4, 9};

    double produitScalaire = vector1[0] * vector2[0] + vector1[1] * vector2[1] + vector1[2] * vector2[2];

    double normeEuclidienne = sqrt(produitScalaire);

    std::cout << produitScalaire << "\n";

    std::cout << normeEuclidienne << "\n";

    return 0;
}

// Ex4

#include <iostream>

int EX4(int argc, char *argv[])

{

    double A[2][2] = {{2, 4}, {4, 6}};

    double B[2][2] = {{2, 5}, {4, 7}};

    double C[2][2] = {{A[0][0] + B[0][0], A[0][1] + B[0][1]}, {A[1][0] + B[1][0], A[1][1] + B[1][1]}};

    double D[2][2] = {{A[0][0] * B[0][0], A[0][1] * B[0][1]}, {A[1][0] * B[1][0], A[1][1] * B[1][1]}};

    std::cout << "{{" << C[0][0] << "," << C[0][1] << "}{" << C[1][0] << "," << C[1][1] << "}}";

    std::cout << "{{" << D[0][0] << "," << D[0][1] << "}{" << D[1][0] << "," << D[1][1] << "}}";

    return 0;
}

// Ex5

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

// Ex6

#include <iostream>

int main(int argc, char *argv[])

{

    double tableau[5] = {34, 58, 57, 32, 43};

    double SommeTab = tableau[0] + tableau[1] + tableau[2] + tableau[3] + tableau[4];

    double MoyenneTab = SommeTab / 5;

    std::cout << MoyenneTab;

    return 0;
}
