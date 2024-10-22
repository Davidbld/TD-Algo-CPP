#include <iostream>

int main(int argc, char *argv[])
{
    int i = 5;
    int *p_j = &i;

    std::cout << "La valeur du pointeur p_j est : " << *p_j << '\n';

    *p_j = *p_j * 5;

    std::cout << "La nouvelle valeur du pointeur p_j est : " << *p_j << '\n';

    int *p_k = new int;
    p_k = &i;

    std::cout << "La valeur du pointeur p_k est : " << *p_k << '\n';

    return 0;
}