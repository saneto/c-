#include <stdio.h>
#include <stdlib.h>
#include "personne.h"

int main()
{
    struct personne saisi;
    int i, pos;
    FILE * pfic;
    FILE * pfic2;
    pfic=fopen("../fiche", "r");
    if(pfic==NULL)
    {
        printf("erreur lors de l'ouverture du fichier");
        return -1;
    }
    pfic2=fopen("../fiche2", "w");
    if(pfic2==NULL)
    {
        printf("erreur lors de l'ouverture du fichier");
        return -1;
    }
    fseek(pfic,0,SEEK_END);
    pos=ftell(pfic);
    pos=pos/sizeof(struct personne);
    for(i=0;i<pos;i++)
    {
        fread(&saisi, sizeof(struct personne),1, pfic);
        crypte(saisi.nom, 20);
        crypte(saisi.prenom, 20);
        fwrite(&saisi, sizeof(struct personne),1, pfic2);
    }
    fclose(pfic);
    fclose(pfic2);
    return 0;
}
