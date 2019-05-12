#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pfic;
    char affiche[22];
    char saisi, ret;
    int comp=0;
    pfic=fopen("file.txt", "r");
    if(pfic==NULL)
    {
        printf("erreur lors de l'ouverture du fichier");
        return -1;
    }
    printf("veuillez saisir une lettre ");
    scanf("%c", &saisi);
    do
    {
        ret=fscanf(pfic,"%21s", affiche);
        if(affiche[0]==saisi)
        {
            printf("%s \n",affiche);
            comp++;
        }

    }while(ret!=EOF);
    printf("%d", comp);
    return 0;
}
