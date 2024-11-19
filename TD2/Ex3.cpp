#include <iostream>

// Exercice 3.1.

int Exercice3point1(int argc, char *argv[])
{
    int x = 0, somme;
    while (x != (-1))
    {
        std::cout << "Veuillez entre un entier à ajouter dans la somme, sinon entre -1: " << std::endl;
        std::cin >> x;
        if (x != (-1))
        {
            somme += x;
            std::cout << "La somme en est à: " << somme << std::endl;
        }
        else if (x == (-1))
        {
            std::cout << somme << std::endl;
        }
    }

    return 0;
}

// Exercice 3.2.

int Exercice3point2(int argc, char *argv[])
{
    int x = 0, somme;
    while (x != (-1))
    {
        std::cout << "Veuillez entre un entier à ajouter dans la somme, sinon entre -1: " << std::endl;
        std::cin >> x;
        if (x != (-1))
        {
            somme += x;
            if ((somme > 100) || (somme == 100))
            {
                std::cout << "La somme est supérieur à 100" << std::endl;
                break;
            }
            std::cout << "La somme en est à: " << somme << std::endl;
        }
        else if (x == (-1))
        {
            std::cout << somme << std::endl;
        }
    }

    return 0;
}

// Exercice 3.3.

int Exercice3point3(int argc, char *argv[])
{
    int x = 0, somme = 0;
    while (x != (-1))
    {
        std::cout << "Veuillez entre un entier à ajouter dans la somme, sinon entre -1 pour arrêter: " << std::endl;
        std::cin >> x;
        if (x != (-1))
        {
            somme += x;
            if ((somme > 100) || (somme == 100))
            {
                std::cout << "La somme est supérieur à 100, enter -2 pour annuler ou 0 pour sortir." << std::endl;
                std::cin >> x;
                if (x == (-2))
                {
                    std::cout << "La saisie a été annullé" << std::endl;
                    somme = 0;
                }
                else
                {
                    break;
                }
            }
            std::cout << "La somme en est à: " << somme << std::endl;
        }
        else if (x == (-1))
        {
            std::cout << somme << std::endl;
        }
    }

    return 0;
}