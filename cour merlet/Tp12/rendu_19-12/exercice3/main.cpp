#include <iostream>
#include <iomanip>
#define taille 3
#include "point.h"

using namespace std;

int main()
{
    int i;
    float annee[taille];
    eleve moyenne[taille];
    cout << "saisie le nom et moyennes trimestrielles de chaque élève"<<endl;
    for(i=0;i<taille;i++)
    {
        cout<< "Entrer le nom de l'élève "<< i+1<< " :";
        cin>>setw(21)>>moyenne[i].nom;
        cout<< endl<<"saisir les 3 notes trimestrielles au format xx yy zz  :";
        cin>>moyenne[i].trimestre[0];
        cin>>moyenne[i].trimestre[1];
        cin>>moyenne[i].trimestre[2];
        annee[i]=moyenne[i].trimestre[0]+moyenne[i].trimestre[1]+moyenne[i].trimestre[2];
    }
    cout << "Fin de la saisie du nom et des moyennes trimestrielles de chaque élève"<<endl<<endl;
    cout<<"Affichage des resultats de la classe"<<endl;
    cout<< "Nom \t\t Année \t\t Trimestrel1\t Trimestre2\t Trimestre3"<<endl;
    for(i=0;i<taille;i++)
    {
        annee[i]=annee[i]/taille;
        cout << moyenne[i].nom<<"\t\t"<<annee[i]<<"\t\t"<<moyenne[i].trimestre[0]<<"\t\t"<<moyenne[i].trimestre[1]<<"\t\t"<<moyenne[i].trimestre[2]<<endl;
    }
    return 0;
}
