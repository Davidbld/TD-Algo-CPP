#include <iostream>

// Exercice 2

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