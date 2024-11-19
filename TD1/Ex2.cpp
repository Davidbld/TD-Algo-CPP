#include <iostream>
int EX2(int argc, char *argv[])
{
    int a, b;
    std::cout << "Veuillez entrer la 1e valeur:" << std::endl;
    std::cin >> a;
    std::cout << "Veuillez entrer la 2e valeur:" << std::endl;
    std::cin >> b;
    std::cout << "Le produit des deux valeurs est: " << a + b;
    return 0;
}