#include <stdio.h>
#include <stdlib.h>
#include "cara.h"



int menu()
{
    int ret;
    printf("Pour enregistrer des personnes dans le fichier en le tronquant,  \t tapez 1\n");
    printf("Pour ajouter des personnes en fin de fichier,  \t\t\t\t tapez 2\n");
    printf("Pour visualiser à l'écran le contenu du fichier,\t\t\t tapez 3\n");
    printf ("Sortie du programme.\t\t\t\t\t\t\t tapez 0\n");
    printf("--> Entrez votre choix :");
    scanf("%d", &ret);
    return ret;
}

int affiche()
{
    int ret;
    int t;
    char aff[15];
    FILE* pfic;
    pfic=fopen("fichP.txt","r");
    if(pfic==NULL)
    {
        printf("erreur lors de l'ouverture du fichier");
        return -1;
    }

    do{
        t = 0;
        do
        {
            ret=fscanf(pfic,"%s", aff);
            if(ret!=EOF)
            {
                printf("%s", aff);
                printf("\t");
            }
        t++;
        }while(t<3);
        printf("\n");
    }while(ret!=EOF);
    fclose(pfic);
    return 0;
}

int enregistre()
{
    FILE* pfic;
    struct carac personne;
    pfic=fopen("fichP.txt","w");
    if(pfic==NULL)
    {
        printf("erreur lors de l'ouverture du fichier");
        return 0;
    }
    char test;
    do{
        printf("--> Saisir le nom, le prénom et l'age de la personne :");
        scanf("%s", personne.nom);
        scanf("%s", personne.prenom);
        scanf("%2d", &personne.age);
        fprintf(pfic,"%s ",personne.nom);
        fprintf(pfic,"%s ",personne.prenom);
        fprintf(pfic,"%d ",personne.age);
        viderBuffer();
        printf("Voulez vous continuer ? [o/n]");
        scanf("%c", &test);
    }while(test!='n');
    fclose(pfic);
    return 0;
}

int ajout()
{
    FILE* pfic;
    char test;
    struct carac p;
    pfic=fopen("fichP.txt","a+");
    if(pfic==NULL)
    {
        printf("erreur lors de l'ouverture du fichier");
        return 0;
    }

    do{
        printf("--> Saisir le nom, le prénom et l'age de la personne :");
        scanf("%s", p.nom);
        scanf("%s", p.prenom);
        scanf("%2d", &p.age);
        fprintf(pfic,"%s ",p.nom);
        fprintf(pfic,"%s ",p.prenom);
        fprintf(pfic,"%d ",p.age);
        viderBuffer();
        printf("Voulez vous continuer ? [o/n]");
        scanf("%c", &test);
    }while(test!='n');
    fclose(pfic);
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
