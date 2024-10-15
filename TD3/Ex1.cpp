#include <iostream>
#include <cmath> //fonction cubique

double fonctionF(float x = 0.0)
{
    double resultat = pow(x,3)+3;
    return resultat;
};

double deriveeFonctionF(float x = 0.0)
{
    double resultatPrimitive = 3*pow(x,2);
    return resultatPrimitive;
};

double fonctionNewRaph(double xK){
    double xKPlusUn=xK-(fonctionF(xK)/deriveeFonctionF(xK));
    return xKPlusUn;
};

int main(int argc, char *argv[]){
    int choice=0;
    double a=-2;
    double b=1;
    double EPSILON = 0.000001;
    double m;
    double x0;

    std::cout<<"Quelle methode voullez-vous utiliser : Tapez '1' - Dichotomie | Tapez '2' - Newton-Raphson"<<"\n";
    std::cin>>choice;
    if (choice==1) /*Methode de la dichotomie*/
    {
        if (fonctionF(a)*fonctionF(b)>=0)
        {
            std::cout << "Erreur : La fonction doit avoir des signes opposés aux bornes de l'intervalle [a, b].\n";
            return 1; // Sortie avec une erreur
        }
        
        while ((b-a)>EPSILON)
        {
            m=(a+b)/2;
            if (fonctionF(a)*fonctionF(m)<=0)
            {
                b=m;
            }
            else
            {
                a=m;
            }
        }
        std::cout<<"La racine approximative est "<<(a+b)/2.0<<"\n";
    }
    else if (choice == 2) { // Methode de Newton-Raphson
        std::cout << "Veuillez entrer l'estimation de la racine x0 : " << "\n";
        std::cin >> x0;

        double x1;
        do {
            x1 = fonctionNewRaph(x0);
            x0 = x1; // Mettre à jour x0 pour la prochaine itération
        } while (std::abs(fonctionF(x0)) > EPSILON); // Condition de convergence

        std::cout << "La racine approximative est : " << x0 << "\n";
    } 
    else
    {
        std::cout<<"Erreur, veuillez reessayer"<<"\n";
    }
    return 0; //Sortie sans erreur
}