#include <iostream>
#include "include/Vecteur.h"

using namespace std;

int main()
{
    Vecteur v(1, 2);
    Vecteur &refv = v;
    Vecteur &reftmp = *new Vecteur(2, 3);
    Vecteur *ptv = new Vecteur(4, 5);

    cout << endl << endl << "~~~~ DEBUT ~~~~" << endl;

    Vecteur res = v + reftmp + refv;
    res.Affiche();


    cout << "~~~~ FIN ~~~~" << endl << endl << endl ;
    delete(&reftmp);
    delete(ptv);
    return 0;
}
