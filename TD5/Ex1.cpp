// Écrivez un programme C++ qui envoie l’adresse d’un entier à une fonction qui imprime la valeur de l’entier.

#include <iostream>

using namespace std;

void printValeurAdresse(int* Valeur)
{
    cout<<*Valeur;
}

int main(int argc, char const *argv[])
{
    int a = 0;

    cout << "Veuillez entrer une valeur : ";
    cin >> a;

    printValeurAdresse(&a);
    cout << "\n";

    return 0;
}
