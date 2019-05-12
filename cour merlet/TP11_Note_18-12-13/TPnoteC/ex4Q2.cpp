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
    double artSaisi;
    int i, j=0;
    float total=0;
    bool artReconnu=false;

    //Premier élément : ID de l'article,
    //Second élément : Nombre de fois que l'article est saisis
    double artID[TAILLE][2] = {{11111111,0}, {22222222,0}, {33333333,0},
                               {44444444,0}, {55555555,0}, {66666666,0},
                               {77777777,0}, {88888888,0}, {99999999,0}
                              };
    //Les espaces ne sont là que pour un bon affichage de la liste
    char   artNom[TAILLE][15] = {{'B','e','u','r','r','e',' ','D','o','u','x',' ',' ',' ','\0'},
                                 {'E','a','u',' ','d','e',' ','s','o','u','r','c','e',' ','\0'},
                                 {'J','u','s',' ','a','n','a','n','a','s',' ',' ',' ',' ','\0'},
                                 {'B','a','g','u','e','t','t','e',' ',' ',' ',' ',' ',' ','\0'},
                                 {'T','h','o','n',' ','n','a','t','u','r','e','l',' ',' ','\0'},
                                 {'S','a','v','o','n',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0'},
                                 {'F','i','l','e','t',' ','P','o','u','l','e','t',' ',' ','\0'},
                                 {'Y','a','o','u','r','t',' ','n','a','t','u','r','e',' ','\0'},
                                 {'O','e','u','f','s',' ','F','e','r','m','i','e','r','s','\0'}
                                };
    float  artPRIX[TAILLE] = {1.64, 0.63, 1.85, 0.45, 1.22, 2.89, 6.90, 2.81, 1.74};
//                           1      2       3    4      5     6     7   8      9


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
                if(artSaisi == artID[i][0])
                {
                    artID[i][1]++;
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

    cout << endl << "Total à payer : " << total << endl
         << "Nombre d'articles : " << j << endl << endl;

    cout << "Article" << "\t\t" << "Nombre" << "\t\t" << "Prix"<< endl;
    for(i=0; i<TAILLE; i++)
    {
        if(artID[i][1]!=0)
        {
            cout << artNom[i] << "\t" << artID[i][1] << "\t\t" << (artID[i][1])*artPRIX[i]<<endl;
        }
    }


    return 0;
}
