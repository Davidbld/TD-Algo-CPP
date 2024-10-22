#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
    
    vector<float> a = {1.11, 2.22, 3.33};
    vector<float> b = {1.11, 2.22, 3.33};
    vector<float> resultat = {0, 0, 0};

    for (int i = 0; i < a.size(); i++)
    {
        resultat[i] = a[i] * b[i];
        cout << setprecision(3) << resultat[i] << endl;
    }
    return 0;
}

// Ne fonctionne pas au dela de 1 milliard