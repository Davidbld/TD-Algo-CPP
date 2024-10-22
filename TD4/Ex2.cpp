#include <iostream>

int main(int argc, char *argv[])
{

    int a = 5;
    int b = 10;

    std::cout << "La valeur de a est : " << a << '\n'
              << "La valeur de b est : " << b << '\n';

    int *p = new int;
    int *r = new int;

    p = &a;
    r = &b;

    p = &b;
    r = &a;

    std::cout << "La valeur de a est : " << *p << '\n'
              << "La valeur de b est : " << *r << '\n';

    return 0;
}