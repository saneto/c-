#include <iostream>
#include "CPersonne.h"
#include <string.h>
#include <iomanip>
#include "Fichier.h"
#include "Profile.h"
using namespace std;

int main()
{
    int t=0;
    Fichier*ajout;
    Profile*personne[t+1];
    int q=1,age;
    float taille,poids;
    char nom[20];
    char nomf[30];
    char prenom [20];
    char mail [35];
    char photo [20];
    char * rep;
    cout <<"Veuillez saisir le nom du fichier a ouvrir"<<endl;
    cin >>nomf;
    ajout= new Fichier(nomf);
    while(q!=0){

            q=menu();
            switch(q)
            {
                case 1 :    cout << "saisir votre nom" << endl;
                            cin >> nom;
                            cout << "saisir votre age" << endl;
                            cin >> age;
                            cout << "saisir votre taille" << endl;
                            cin >> taille;
                            cout << "saisir votre poids" << endl;
                            cin >> poids;
                            cout << "saisir votre prenom" << endl;
                            cin >> prenom;
                            cout << "saisir votre mail" << endl;
                            cin >> mail;
                            cout << "saisir votre photo" << endl;
                            cin >> photo;
                            personne[t]=new Profile(prenom,mail,photo,nom, age, taille, poids);
                            rep=personne[t]->toTexte();
                            ajout->ajout(rep);
                            t++;
                            break;
                case 2 :    ajout->lecturef();
                            break;
            }

    }
    return 0;
}
