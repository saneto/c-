#include <stdio.h>
#include <stdlib.h>

int main()
{
    char aff;
    int ret;
    FILE* pfic;
    pfic = fopen("fiche.txt", "r");
    do{
        ret=fscanf(pfic,"%c", &aff);
        if(ret!=EOF)
        {
            printf("%c", aff);
        }
    }while(ret!=EOF);
    return 0;
}
