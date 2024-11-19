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