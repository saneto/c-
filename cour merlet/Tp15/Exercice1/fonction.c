#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
#include <string.h>
int menu()
{
    int ret;
        printf ("************************************Menu**************************************\n");
        printf("Saisir le nom du fichier pour afficher la taille d'un fichier\t:1\n");
        printf("Copier le contenu d'un fichier dans un autre \t\t\t:2\n");
        printf("Accéder à une ligne d'un fichier grace au numéro\t\t:3\n");
        printf ("Sortire du programme.\t\t\t\t\t\t:0\n");
        printf ("******************************************************************************\n");
        printf ("-->Entrez votre choix: ");
        scanf("%d",&ret);
    return ret;
}

int GetTaille(char*nomfich)
{
    int ret;
    int i=0;
    FILE*pfic;
    pfic=fopen(nomfich,"r");
    if(pfic==NULL)
    {
        return -1;
    }
    do{
        ret=fgetc(pfic);
        if(ret!=EOF)
        {
            i++;
        }
    }while(ret!=EOF);
    fclose(pfic);
    return i;
}

int GetLigne(char*saisi1,int d,char*affichage)
{
    char* ret;
    int i=1;
    char tab[180];
    FILE*pfic;
    pfic=fopen(saisi1,"r");
    if(pfic==NULL)
    {
        return -1;
    }
    do{
        ret=fgets(tab,180,pfic );
        if(ret!=NULL)
        {
            if(i==d)
            {
                strcpy(affichage,tab);
                return 0;
            }
        }
        i++;
    }while(ret!=NULL);
    fclose(pfic);
    return 1;
}
int CopyFichierTexte(char * source,char * destination)
{
    char tab[180];
    char* ret;
    int r=-3;
    FILE*pfic;
    FILE*pfic2;
    pfic=fopen(source,"w");
    if(pfic==NULL)
    {
        return -1;
    }
    pfic2=fopen(destination,"w");
    if(pfic2==NULL)
    {
        return -2;
    }
    do{
        ret=fgets(tab,180,pfic );
        if(ret!=NULL)
        {
            fprintf(pfic2,"%s", tab);
            r=0;
        }
    }while(ret!=NULL);
    fclose(pfic);
    fclose(pfic2);

return r;
}
