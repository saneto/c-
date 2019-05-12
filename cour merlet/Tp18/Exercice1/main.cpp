#include <iostream>
#include "personne.h"
#include <string.h>
using namespace std;

int main()
{
    CPersonne moi;
    char age[4];
    char nom[21];
    float taile, poid, rest;
    cout << "saisir votre nom" << endl;
    cin >> nom;
    cout << "saisir votre age" << endl;
    cin >> age;
    cout << "saisir votre taile" << endl;
    cin >> taile;
    cout << "saisir votre poid" << endl;
    cin >> poid;
    moi.m_Initialise(age, nom, taile,poid);
    moi.m_Affiche();
    rest=moi.m_GetImc(moi.m_poids,moi.m_taille);
    cout <<rest;
    return 0;
}
