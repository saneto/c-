#include <iostream>
#include "point.h"
using namespace std;



int main()
{
    point personne;
    cout<< "veuillez saisir un nom"<< endl;
    cin >> personne.nom;
    cout<< "veuillez saisir un x"<< endl;
    cin >>personne.x;
    cout<< "veuillez saisir un y"<< endl;
    cin >> personne.y;
    cout << personne.y;
    cout<< personne.x;
    cout<< personne.nom;
    return 0;
}
