#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ret;
    FILE* pfic;
    pfic = fopen("fiche.txt", "r");
    do{
        ret=fgetc(pfic);
        if(ret!=EOF)
        {
            printf("%c", ret);
        }
    }while(ret!=EOF);
    return 0;
}
