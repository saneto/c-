#include <stdio.h>
#include <stdlib.h>
#include "Mots.h"


int menu()
{
    int ret;
        printf ("************************************Menu**************************************\n");
        printf("Pour afficher le nombre de mots contenus dans un fichier\t\t:1\n");
        printf("Pour afficher le nombre de voyelles contenus dans un fichier\t\t:2\n");
        //printf("Pour remplacer des chiffre par le caractères \"*\"\t\t\t:3\n");
        printf ("Sortire du programme.\t\t\t\t\t\t\t:0\n");
        printf ("******************************************************************************\n");
        printf ("-->Entrez votre choix: ");
        scanf("%d",&ret);
    return ret;
}

int GetNbMots(char*nomfich)
{
    char rec[21];
    int ret;
    int i=0;
    FILE*pfic;
    pfic=fopen(nomfich,"r");
    if(pfic==NULL)
    {
        return -1;
    }
    do
    {
        ret=fscanf(pfic,"%20s",rec);
        if(ret!=EOF)
        {
            i++;
        }

    }while(ret!=EOF);
    fclose(pfic);
    return i;
}
// J'ai pas reussi a finir cette fonction
/*int RemplaceChiffre(char*nomfich)
{
    char ret[80];
    char* rec;
    int i;
    FILE*pfic;
    pfic=fopen(nomfich,"a");
    if(pfic==NULL)
    {
        return -1;
    }
    do{
        rec=fgets(ret,80,pfic);
        if(rec!=NULL)
        {
            for(i=0;i<80;i++)
            {
                if((ret[i]='0')||(ret[i]='1')||(ret[i]='2')||(ret[i]='3')||(ret[i]='4')||(ret[i]='5')||(ret[i]='6')||(ret[i]='7')||(ret[i]='8')||(ret[i]='9'))
                {
                    ret[i]='*';
                }
            }
        }
        fwrite(ret, 80,1, pfic);
    }while(rec!=NULL);
    fclose(pfic);
    return 0;
}*/
int GetNbVoyelles(char*nomfich)
{
    char rec;
    int ret;
    int r=0;
    FILE*pfic;
    pfic=fopen(nomfich,"r");
    if(pfic==NULL)
    {
        return -1;
    }
    do{
        ret=fscanf(pfic,"%c",&rec);
        if(ret!=EOF)
        {
            if((rec=='a')||(rec=='e')||(rec=='u')||(rec=='i')||(rec=='o')||(rec=='A')||(rec=='E')||(rec=='U')||(rec=='I')||(rec=='O'))
            {
                r++;
            }
        }
    }while(ret!=EOF);
    fclose(pfic);
    return r;
}

