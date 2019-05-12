#include <iostream>
#include <iomanip>
#define taille 3
#include "point.h"

using namespace std;

int main()
{
    float annee[taille];
    eleve moyenne[taille];
    cout << "saisie le nom et moyennes trimestrielles de chaque élève"<<endl;
    SaisirTab_CalculMoyAn(moyenne , taille, annee);
    cout << "Fin de la saisie du nom et des moyennes trimestrielles de chaque élève"<<endl<<endl;
    cout<<"Affichage des resultats de la classe"<<endl;
    cout<< "Nom \t\t Année \t\t Trimestrel1\t Trimestre2\t Trimestre3"<<endl;
    AfficherTab(moyenne , taille, annee);
    return 0;
}
