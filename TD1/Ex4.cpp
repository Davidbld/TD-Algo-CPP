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