#include <iostream>

int main(int argc, char *argv[])

{

    double tableau[5] = {34, 58, 57, 32, 43};

    double SommeTab = tableau[0] + tableau[1] + tableau[2] + tableau[3] + tableau[4];

    double MoyenneTab = SommeTab / 5;

    std::cout << MoyenneTab;

    return 0;
}
