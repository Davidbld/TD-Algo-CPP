/*
Écrivez une fonction qui permute les valeurs de deux nombres à virgule flottante en double précision, de
sorte que ces changements soient visibles dans le code qui a appelé cette fonction.
1. Écrivez cette fonction en utilisant des pointeurs.
2. Écrivez cette fonction en utilisant des références.
*/

#include <iostream>
#include <iomanip>
using namespace std;

double permuterValeurPointeur(double *ValeurA, double *ValeurB)
{
    double *transition = ValeurA;
    ValeurA = ValeurB;
    ValeurB = transition;
    cout << "Permutation par pointeur" << endl;
    cout << "La première est maintenant égale à : " << setprecision(3) << *ValeurA << "\nLa deuxième à : " << setprecision(3) << *ValeurB << endl
         << endl;
    return 0;
}

double permuterValeurRef(double &ValeurA, double &ValeurB)
{
    double transition = ValeurA;
    ValeurA = ValeurB;
    ValeurB = transition;
    cout << "Permutation par référence" << endl;
    cout << "La première est maintenant égale à : " << setprecision(3) << ValeurA << "\nLa deuxième à : " << setprecision(3) << ValeurB << endl;
    return 0;
}

int main(int argc, char const *argv[])
{
    double ValeurA = 1.23;
    double ValeurB = 4.56;
    double *pointeurVA = &ValeurA;
    double *pointeurVB = &ValeurB;

    permuterValeurPointeur(&ValeurA, &ValeurB);
    permuterValeurRef(ValeurA, ValeurB);

    return 0;
}
