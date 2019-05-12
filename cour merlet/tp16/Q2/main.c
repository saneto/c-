#include <stdio.h>
#include <stdlib.h>
#include "personne.h"


int main()
{
    struct personne saisi;
    char carac;
    FILE * pfic;
    pfic=fopen("../fiche", "a");
    if(pfic==NULL)
    {
        printf("erreur lors de l'ouverture du fichier");
        return -1;
    }
    do
    {
        printf("-->Saisir le nom, le prénom et l'age de la personne :");
        scanf("%20s %20s %2s", saisi.nom,saisi.prenom,saisi.age);
        fwrite(&saisi, sizeof(struct personne),1, pfic);
        viderBuffer();
        printf("Voulez vous continuer ? [o/n]");
        scanf("%c", &carac);
    }while(carac!='n');
    return 0;
}

void viderBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}
