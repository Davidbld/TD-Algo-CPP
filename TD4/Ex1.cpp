#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int i = 5;
    int *p_j = &i;

    cout << "La valeur du pointeur p_j est : " << *p_j << endl;

    *p_j = *p_j * 5;

    cout << "La nouvelle valeur du pointeur p_j est : " << *p_j << endl;

    int *p_k = new int;
    p_k = &i;

    cout << "La valeur du pointeur p_k est : " << *p_k << endl;

    return 0;
}