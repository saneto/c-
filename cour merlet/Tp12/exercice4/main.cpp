#include <iostream>
#include <string.h>
#include <iomanip>
#define Taille 6
#include "point.h"
using namespace std;

int main()
{
    personne tab[Taille]= {{{'1','2','3','4','\0'},{'0','1','2','3','4','5','6','7','8','9','\0'},{'\0'}},
                            {{'1','1','1','1','\0'},{'1','1','1','1','1','1','1','1','1','1','\0'},{'\0'}},
                            {{'2','2','2','2','\0'},{'2','2','2','2','2','2','2','2','2','2','\0'},{'\0'}},
                            {{'3','3','3','3','\0'},{'3','3','3','3','3','3','3','3','3','3','\0'},{'\0'}},
                            {{'4','4','4','4','\0'},{'4','4','4','4','4','4','4','4','4','4','\0'},{'\0'}},
                            {{'5','5','5','5','\0'},{'5','5','5','5','5','5','5','5','5','5','\0'},{'\0'}}};
    int verif;
    personne saisi;
    AfficheAccueil();
    do
    {
        AcquerirBadgeEtCode(&saisi);
        verif=AutoriserAcces(saisi, tab, Taille);
        AfficheAcces(verif);
    }while (verif!=5);
     AfficheFermeture();



}
