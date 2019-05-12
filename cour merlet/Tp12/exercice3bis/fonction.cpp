#include <iostream>
#include "point.h"
#include <iomanip>
using namespace std;



void SaisirTab_CalculMoyAn(eleve*Tab , int Nb, float*moyen)
{
     int i;
     for(i=0;i<Nb;i++)
    {
        cout<< "Entrer le nom de l'élève "<< i+1<< " :";
        cin>>setw(21)>>Tab[i].nom;
        cout<< endl<<"saisir les 3 notes trimestrielles au format xx yy zz  :";
        cin>>Tab[i].trimestre[0];
        cin>>Tab[i].trimestre[1];
        cin>>Tab[i].trimestre[2];
        moyen[i]=Tab[i].trimestre[0]+Tab[i].trimestre[1]+Tab[i].trimestre[2];
    }
}
void AfficherTab(eleve*Tab , int Nb, float*moyen)
{
    int i;
    for(i=0;i<Nb;i++)
    {
        moyen[i]=moyen[i]/Nb;
        cout << Tab[i].nom<<"\t\t"<<moyen[i]<<"\t\t"<<Tab[i].trimestre[0]<<"\t\t"<<Tab[i].trimestre[1]<<"\t\t"<<Tab[i].trimestre[2]<<endl;
    }

}
