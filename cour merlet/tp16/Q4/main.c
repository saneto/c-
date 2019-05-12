#include <stdio.h>
#include <stdlib.h>
#include "personne.h"
int main()
{
    int ret, compt=1;
    struct personne saisi;
    FILE * pfic;
    pfic=fopen("../fiche", "r");
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
            printf("Personne %d >>> Nom : %s, Prénom : %s, Age : %s \n",compt,saisi.nom,saisi.prenom,saisi.age);
            compt++;
        }
    }while(ret==1);
    return 0;
}
