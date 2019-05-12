#include <iostream>
#include "Fichier.h"
#include <string.h>
#include <fstream>
using namespace std;
int Fichier::ajout(char * rep)
{
    fprintf(pfic,"%s\n",rep);
    return 0;
}

Fichier::Fichier(const char * nomfiche)
{
        if((pfic=fopen(nomfiche,"a+"))==NULL)
        {
            cout<<"Impossible d'ouvrir le fichier !"<<endl;
        }

}
Fichier:: ~Fichier()
{
    fclose(pfic);
}
void Fichier::lecturef()
{
    char * r;
    char chaine[100];
    fseek ( pfic , 0 , SEEK_SET );
    do
    {
        if(r!=NULL)
        {
            r=fgets(chaine,100,pfic);
            cout<<chaine;
        }
    }while(r!=NULL);
}
void Fichier::debutfiche()
{
    fseek ( pfic , 0 , SEEK_SET );
}
void Fichier::finfiche()
{
    fseek ( pfic , 0 , SEEK_END );
}
