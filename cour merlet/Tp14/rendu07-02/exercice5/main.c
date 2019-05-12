#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *pfic;
    char affiche[50];
    char saisi[25];
    char* ret;
    int comp=0, ligne=1;
    pfic=fopen("file.txt", "r");
    if(pfic==NULL)
    {
        printf("erreur lors de l'ouverture du fichier");
        return -1;
    }
    printf("Veuillez saisir un mot\t\t");
    scanf("%25s", saisi);
    do{
        ret=fgets(affiche,60, pfic);
        if(strstr(affiche,saisi)!=NULL)
        {
            printf("%s   ",affiche);
            comp++;
            printf("a la ligne  %d \n", ligne);
        }
        ligne++;
    }while(ret!=NULL);
    printf("il y a %d fois le mot %s dans le texte", comp, saisi);
    fclose(pfic);
    return 0;
}
