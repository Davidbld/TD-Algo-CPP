#include <iostream>
#include <fstream>
#include <cassert>
#include <cmath> //fonction cubique

int main(int argc, char *argv[])
{

    double matriceClassique[2][2] = {{4, 10}, {1, 1}};
    double matriceInversee[2][2] = {{0, 0}, {0, 0}};

    // calcul du déterminant
    double detA = (matriceClassique[0][0] * matriceClassique[1][1]) - (matriceClassique[0][1] * matriceClassique[1][0]);
    std::cout << "Déterminant : " << detA << std::endl;
    if (detA != 0)
    {
        std::cout << "La matrice est inversible" << std::endl;
        matriceInversee[0][0] = matriceClassique[1][1];
        matriceInversee[0][1] = -matriceClassique[1][0];
        matriceInversee[1][0] = -matriceClassique[0][1];
        matriceInversee[1][1] = matriceClassique[0][0];
    }
    else
    {
        std::cout << "Erreur" << std::endl;
        assert(detA = 0);
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            std::cout << 1 / (detA)*matriceInversee[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}