/************************************************************************
* Nom : TP Algorithmique						*
* Description : Réponse à l'exercice 1 TP1				*
*									*
* Auteur : Alexandre PONELLE						*
* Date : 20/09/2013							*
************************************************************************/

#include <iostream>
#include <string.h>
#define TAILLE 9

using namespace std;

int main()
{
    double artID[TAILLE]= {11111111, 22222222, 33333333, 44444444, 55555555, 66666666,
                           77777777, 88888888, 99999999};
    float  artPRIX[TAILLE]= {1.64, 0.63, 1.85, 0.45, 1.22, 2.89, 6.90, 2.81, 1.74};
//                           1      2       3    4      5     6     7   8      9
    double artSaisi;
    int i, j=0;
    float total=0;
    bool artReconnu=false;

    cout << "Bienvenue dans notre magasin." << endl << endl;
    do
    {
        cout << "--> Veillez saisir l'ID d'un article, 0 pour terminer : ";
        do
        {
            cin  >> artSaisi;
            artReconnu=false;

            if(artSaisi==0)
            {
                artReconnu=true;
            }

            for(i=0; i<TAILLE; i++)
            {
                if(artSaisi == artID[i])
                {
                    total += artPRIX[i];
                    artReconnu=true;
                    j++;
                }
            }

            if(!artReconnu)
            {
                cout << "-->Problème à l'identification, veuillez ressaisir l'article : ";
            }
        }while(!artReconnu);

    }while(artSaisi!=0);

    cout << "Total à payer : " << total << endl
         << "Nombre d'articles : " << j << endl;


    return 0;
}
