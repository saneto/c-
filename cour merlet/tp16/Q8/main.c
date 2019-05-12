#include <stdio.h>
#include <stdlib.h>
#include "personne.h"
#define ajout 5
#include <string.h>
int main()
{
    int ret, compt=1;
    struct personne saisi;
    FILE * pfic;
    pfic=fopen("../fiche2", "r");
    if(pfic==NULL)
    {
        printf("erreur lors de l'ouverture du fichier");
        return -1;
    }
    do
    {
        ret=fread(&saisi, sizeof(struct personne),1, pfic);
        if(ret==1)
        {
            decrypte(saisi.nom,20);
            decrypte(saisi.prenom,20);
            printf("Personne %d >>> Nom : %s, Prénom : %s, Age : %s \n",compt,saisi.nom,saisi.prenom,saisi.age);
            compt++;
        }
    }while(ret==1);
    return 0;
}

void decrypte(char*chaine, int Nb)
{
    int i;
    for(i=0;i<Nb; i++)
    {
        chaine[i]=chaine[i]-ajout;
    }
}
