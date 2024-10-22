// Exercice 1
int Exercice1(int argc, char *argv[])
{
    double x, y, z;
    if ((x > y) || (x < 5.0))
    {
        z = 4.0;
    }
    else
    {
        z = 2.0;
    }
}

// a. 4.0
// b. 2.0
// c. 4.0

// Exercice 1.2
int Exercice1point2(int argc, char *argv[])
{
    double x, y, z;
    if (((x > y) || (x = y)) || (x < 5.0))
    {
        z = 4.0;
    }
    else
    {
        z = 2.0;
    }
}

// Exercice 2
#include <iostream>
int Exercice2Base(int argc, char *argv[])
{
    double p, q, x, y;
    int j;

    return 0;
}

// Exercice 2.1.
int Exercice2point1(int argc, char *argv[])
{
    double p, q, x, y;
    int j;
    if (((p > q) || (p = q)) || j != 10)
    {
        x = 5;
    }

    std::cout << x;

    return 0;
}

// Exercice 2.2.
int Exercice2point2(int argc, char *argv[])
{
    double p, q, x, y;
    int j;
    if (((p > q) || (p = q)) && j == 20)
    {
        x = 5;
    }
    else
    {
        x = p;
    }

    std::cout << x;

    return 0;
}

// Exercice 2.3.
int Exercice2point3(int argc, char *argv[])
{
    double p, q, x, y;
    int j;
    if (p > q)
    {
        x = 0;
    }
    else if (((p < q) || (p = q)) && j == 10)
    {
        x = 1;
    }
    else
    {
        x = 2;
    }

    std::cout << x;

    return 0;
}

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

// Exercice 4.1.

int Exercice4point0(int argc, char *argv[])
{
    double u[3] = {1.0, 2.0, 3.0};
    double v[3] = {6.0, 5.0, 4.0};
    double A[3][3] = {{1.0, 5.0, 0.0}, {7.0, 1.0, 2.0}, {0.0, 0.0, 1.0}};
    double B[3][3] = {{-2.0, 0.0, 1.0}, {1.0, 0.0, 0.0}, {4.0, 1.0, 0.0}};
    double w[3];
    for (int i = 0; i < 3; i++)
    {
        w[i] = u[i] - 3.0 * v[i];
    }
    double x[3] = {u[0] - v[0], u[1] - v[1], u[2] - v[2]};
    double y[3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            y[i] += A[i][j] * y[i];
        }
    }
    double z[3] = {y[0] - v[0], y[1] - v[1], y[2] - v[2]};
    double C[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = 4 * A[i][j] - 2 * B[i][j];
        }
    }
    double D[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            D[i][j] = A[i][0] * B[0][j] + A[i][1] * B[1][j] + A[i][2] * B[2][j];
        }
    }
    return 0;
}

// Exercice 5.

#include <cmath>

/*
    f(x) = e^x + x^3 -5
    f'(x) = e^x + 3x²

    Itération de newton raphson :
    k = 0 => x1 = 0 - (e^0 + 0^3 - 5)/(e^0 + 3*0²) = - (-4/1) = 4
    k = 1 => x2 = 4 - (e^4 + 4^3 - 5)/(e^4 + 3*4²)
    ....
*/

double f(double x)
{
    return exp(x) + pow(x, 3) - 5;
}

double fprime(double x)
{
    return exp(x) + 3 * pow(x, 2);
}

int main()
{
    double xprev = 0;
    double xnext;
    double epsilon = 1.0e-8;
    bool converged = false;
    int i = 1;

    while (converged != true || i < 101)
    {
        xnext = xprev - (f(xprev) / fprime(xprev));
        std::cout << xnext << std::endl;
        if (std::abs(xnext - xprev) < epsilon)
        {
            break;
            std::cout << "Valeur approchée";
        }

        xprev = xnext;
    }

    return 0;
}