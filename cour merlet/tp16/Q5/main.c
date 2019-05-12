#include <stdio.h>
#include <stdlib.h>
#include "personne.h"
int main()
{
    struct personne saisi;
    int ret, pos;
    ret=NbOctetFiche();
    printf("Le fichier contient %d octets\n", ret);
    ret=NbPersonne(saisi);
    printf("Le fichier contient %d personnes\n", ret);
    do
    {
        printf("Saisir la position de la personne à lire (0 pour sortir) :");
        scanf("%d", &pos);
        if(pos!=0)
        {
            ret=PositionPersonne(pos, saisi);
            if(ret>0)
            {
                printf("Position trop grande\n");
            }
        }
    }while (pos!=0);
    return 0;
}
