// Écrivez un code qui envoie l’adresse d’un entier à une fonction qui change la valeur de l’entier

#include <iostream>
using namespace std;

void changerValeur(int *Valeur)
{
    *Valeur += 1;
    cout<<"La nouvelle valeur est : "<<*Valeur<<'\n';
    cout<<"L'adresse est : "<<&Valeur<<'\n';
}

int main(int argc, char const *argv[])
{
    int a = 0;

    cout << "Veuillez entrer une valeur : ";
    cin >> a;

    changerValeur(&a);
    return 0;
}
