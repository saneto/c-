#include <stdio.h>
#include <stdlib.h>

int main()
{
    char affiche[80];
    char*ret;
    FILE* pfic;
    pfic = fopen("fiche.txt", "r");
    do{
        ret=fgets(affiche,80,pfic);
        if(ret!=NULL)
        {
            printf("%s", affiche);
        }
    }while(ret!=NULL);
    return 0;
}
