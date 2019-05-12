#include <iostream>
#include "point.h"
#include <iomanip>
#include <string.h>
using namespace std;

void AfficheAccueil()
{
    cout << "Bienvenu dans la section BTS IRIS"<< endl;
    cout << "pour acceder au locaux, il faut"<< endl;
    cout << "         -Passer votre BADGE"<< endl;
    cout << "         -Saisir votre code d'accès (4 chiffres)"<< endl;

}
void AcquerirBadgeEtCode(personne*saisi)
{
    size_t longueur1,longueur;
    bool v;
    do{
    cout << "passer votre badge"<< endl;
    cin >> setw(11)>> saisi->ident;
    longueur=strlen(saisi->ident);
    cout << "votre code d'accès"<< endl;
    cin >> setw(5)>> saisi->mdp;
    longueur1=strlen(saisi->mdp);
    v=true;
    if(longueur<10)
        {
            v=false;
            cout << "votre identifiant est inférieure a 10"<< endl;
        }
    if(longueur1<4)
        {
            v=false;
            cout << "mot de passe est inférieure a 4"<<endl;
        }
    }while(v==false);

}
int AutoriserAcces(personne saisi,personne *tab,int Nb)
{
    int i,r;
    r=0;
    for (i=1; i<Nb; i++)
    {
        if(strcmp(saisi.ident,tab[i].ident)==0)
        {
            r=1;
            if(strcmp(saisi.ident,tab[i].presence)==0)
            {
                r=6;
            }
            if(strcmp(saisi.mdp,tab[i].mdp)==0)
            {
                r=3+r;
                strcpy(tab[i].presence,saisi.ident);
            }
        }
    }
    if(strcmp(saisi.ident,tab[0].ident)==0)
    {
            r=2;
            if(strcmp(saisi.mdp,tab[0].mdp)==0)
            {
                r=3+r;
                strcpy(tab[0].presence,saisi.ident);
            }
    }

  return r;
}
void AfficheAcces(int verif)
{
    if(verif==0)
    {
        cout << "Accès non autorisé"<< endl<<"votre identifiant et le mot de passe sont faux"<<endl;
    }
    if(verif==1)
    {
        cout << "Accès non autorisé" <<endl<<" votre mot de passe est faux"<<endl;
    }
    if(verif==2)
    {
        cout << "Accès non autorisé" <<endl<<"votre mot de passe est faux"<<endl;
    }
    if(verif==3)
    {
        cout << "Accès non autorisé" <<endl<<"votre identifiant est faux"<<endl;
    }
    if(verif==4)
    {
        cout << "Accès autorisé" <<endl;
    }
    if(verif==5)
    {
        cout << "Authentification du gardien" <<endl;
    }
    if(verif>=6)
    {
        cout << "Vous aves deja passer votre badge accès non autorisé" <<endl;
    }
}
void AfficheFermeture()
{
    cout << "Fermeture du batiment\nBonne soirée à tous\n";
}
