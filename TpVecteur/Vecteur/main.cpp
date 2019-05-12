#include <iostream>
#include "Vecteur.h"
using namespace std;

int main()
{
    vecteur v(1,2);
    vecteur &refv=v;
    vecteur &reftmp=*new vecteur(2,3);
    vecteur *ptv=new vecteur(4,5);
    vecteur::afficheNbVecteur();
   vecteur res=v+reftmp;
    res.affiche();
    printf("\nFin du programme\n");
    delete(ptv);
    reftmp.~vecteur();
    refv.~vecteur();
    return 0;
}
