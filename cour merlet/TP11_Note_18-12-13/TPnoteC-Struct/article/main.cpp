#include <iostream>
#include <string.h>
#define TAILLE 9
#include "article.h"

using namespace std;

int main()
{
    double artSaisi;
    int i, totalArticles=0;
    float total=0;
    bool artReconnu=false;

    Article inventaire[TAILLE] =
        {{11111111, 0, {'B','e','u','r','r','e',' ','D','o','u','x',' ',' ',' ','\0'}, 1.64},
         {22222222, 0, {'E','a','u',' ','d','e',' ','s','o','u','r','c','e',' ','\0'}, 0.63},
         {33333333, 0, {'J','u','s',' ','a','n','a','n','a','s',' ',' ',' ',' ','\0'}, 1.85},
         {44444444, 0, {'B','a','g','u','e','t','t','e',' ',' ',' ',' ',' ',' ','\0'}, 0.45},
         {55555555, 0, {'T','h','o','n',' ','n','a','t','u','r','e','l',' ',' ','\0'}, 1.22},
         {66666666, 0, {'S','a','v','o','n',' ',' ',' ',' ',' ',' ',' ',' ',' ','\0'}, 2.89},
         {77777777, 0, {'F','i','l','e','t',' ','P','o','u','l','e','t',' ',' ','\0'}, 6.90},
         {88888888, 0, {'Y','a','o','u','r','t',' ','n','a','t','u','r','e',' ','\0'}, 2.81},
         {99999999, 0, {'O','e','u','f','s',' ','F','e','r','m','i','e','r','s','\0'}, 1.74}};

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
                if(artSaisi == inventaire[i].id)
                {
                    inventaire[i].apparition++;
                    total += inventaire[i].prix;
                    artReconnu=true;
                    totalArticles++;
                }
            }

            if(!artReconnu)
            {
                cout << "--> Problème à l'identification, veuillez ressaisir l'article : ";
            }

        }while(!artReconnu);

    }while(artSaisi!=0);

    cout << endl << "Total à payer : " << total << endl
         << "Nombre d'articles : " << totalArticles << endl << endl;

    cout << "Article        " << "\t" << "Nombre" << "\t\t" << "Prix"<< endl;
    for(i=0; i<TAILLE; i++)
    {
        if(inventaire[i].apparition!=0)
        {
            cout << inventaire[i].nom << "\t" << inventaire[i].apparition << "\t\t"
                 << (inventaire[i].apparition)*inventaire[i].prix<<endl;
        }
    }


    return 0;
}
