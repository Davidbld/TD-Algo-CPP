#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{

    int a = 5;
    int b = 10;

    cout << "La valeur de a est : " << a << endl
              << "La valeur de b est : " << b << endl;

    int *p = new int;
    int *r = new int;

    p = &a;
    r = &b;

    p = &b;
    r = &a;

    cout << "La valeur de a est : " << *p << endl
              << "La valeur de b est : " << *r << endl;

    return 0;
}