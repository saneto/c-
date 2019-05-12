#include <stdio.h>
#include <stdlib.h>
#include "personne.h"

int NbOctetFiche()
{
    int rep, i=0;
    FILE* pfic;
    pfic=fopen("../fiche", "r");
    if(pfic==NULL)
    {
        printf("erreur lors de l'ouverture du fichier");
        return -1;
    }
    do
    {
        rep=fgetc(pfic);
        if(rep!=EOF)
        {
            i++;
        }
    }while(rep!=EOF);
    fclose(pfic);
    return i;
}
int NbPersonne(struct personne lue)
{
    int rep, compt=0;
    FILE* pfic;
    pfic=fopen("../fiche", "r");
    if(pfic==NULL)
    {
        printf("erreur lors de l'ouverture du fichier");
        return -1;
    }
    do
    {
        rep=fread(&lue, sizeof(struct personne),1, pfic);
        if(rep==1)
        {
            compt++;
        }
    }while(rep==1);
    fclose(pfic);
    return compt;
}
int PositionPersonne(int Pos, struct personne lue)
{
    int rep, ret=1;
    FILE* pfic;
    pfic=fopen("../fiche", "r");
    if(pfic==NULL)
    {
        printf("erreur lors de l'ouverture du fichier");
        return -1;
    }
    fseek(pfic,(Pos-1)*sizeof(struct personne), SEEK_SET);
    rep=fread(&lue, sizeof(struct personne),1, pfic);
    if(rep==1)
    {
         printf("Personne lue >>> Nom : %s, Prénom : %s, Age : %s \n", lue.nom, lue.prenom, lue.age);
        ret=0;
    }
    fclose(pfic);
    return ret;
}
