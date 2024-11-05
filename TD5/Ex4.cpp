/*
Écrivez une fonction qui peut être utilisée pour calculer la moyenne et l’écart-type d’un tableau de
nombres à virgule flottante en double précision.
*/

#include <iostream>
#include <iomanip>
#include <vector>
#include <numeric>
#include <cmath>

using namespace std;

void ecartType(vector<double> vector)
{
    double SommeVariance = 0.0;
    double somme = 0.0;
    int size = vector.size();

    for (int i = 0; i < size; i++)
    {
        somme += vector[i];
    }

    double moyenne = somme / vector.size();

    for (int i = 0; i < vector.size(); i++)
    {
        SommeVariance += pow(vector[i] - moyenne, 2);
    }

    double Variance = SommeVariance / (size - 1);
    double ecartTypeValeur = sqrt(Variance);

    cout << "La Somme du tableau est : " << setprecision(3) << somme << endl;
    cout << "La Moyenne du tableau est : " << setprecision(3) << moyenne << endl;
    cout << "La Variance du tableau est : " << setprecision(3) << Variance << endl;
    cout << "L'Écart-type du tableau est : " << setprecision(3) << ecartTypeValeur << endl;
}

int main(int argc, char const *argv[])
{
    vector<double> tableau = {1.23, 4.56, 7.89, 1.011, 1.213};
    ecartType(tableau);
    return 0;
}
