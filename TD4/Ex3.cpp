#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{

    std::vector<float> a = {1.11, 2.22, 3.33};
    std::vector<float> b = {1.11, 2.22, 3.33};
    std::vector<float> resultat = {0, 0, 0};

    for (int i = 0; i < a.size(); i++)
    {
        resultat[i] = a[i] * b[i];
        std::cout << resultat[i] << '\n';
    }
    return 0;
}

// Ne fonctionne pas au dela de 1 milliard