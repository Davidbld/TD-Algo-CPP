#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

/*
    [1   3   2][x]=[8]
    [3  -2   3][y]=[6]
    [-1  3   5][z]=[1]
    _____________________________________________________

    ((-2*5)-(3*3))*1=-19 | ((3*5)-(3*(-1)))*3=54 | ((3*3)-(-2*(-1)))*2=14
    -19-54+14=-59

    La matrice n'est pas singulière.
    ______________________________________________________

    Après de long calcul sur papier :

        A^(-1) = [
        19/59   9/59   -13/59
        18/59  -7/59   -3/59
        -7/59   6/59    11/59
        ]


*/

void gaussJordan(vector<vector<double>> &A, vector<double> &b)
{
    int n = A.size();

    // Création d'une matrice augmentée
    for (int i = 0; i < n; ++i)
    {
        A[i].push_back(b[i]);
    }

    // Application de la méthode de Gauss-Jordan
    for (int i = 0; i < n; ++i)
    {
        // Recherche du pivot
        double pivot = A[i][i];
        for (int j = 0; j < n + 1; ++j)
        {
            A[i][j] /= pivot;
        }

        // Élimination des autres lignes
        for (int j = 0; j < n; ++j)
        {
            if (j != i)
            {
                double factor = A[j][i];
                for (int k = 0; k < n + 1; ++k)
                {
                    A[j][k] -= factor * A[i][k];
                }
            }
        }
    }

    // Extraction de la solution
    for (int i = 0; i < n; ++i)
    {
        b[i] = A[i][n]; // La dernière colonne de la matrice augmentée
    }
}

int main(int argc, char *argv[])
{
    // Définir la matrice A et le vecteur b
    vector<vector<double>> A = {
        {1, 3, 2},
        {3, -2, 3},
        {-1, 3, 5}};

    vector<double> b = {8, 6, 1};
    vector<double> solution(3);

    // Appliquer la méthode de Gauss-Jordan
    gaussJordan(A, b);

    // Afficher la solution approximative
    cout << "La solution du système est : " << endl;
    for (int i = 0; i < solution.size(); ++i)
    {
        solution[i] = b[i];
        cout << "x" << i + 1 << " = " << fixed << setprecision(2) << solution[i] << endl;
    }

    return 0;
}
