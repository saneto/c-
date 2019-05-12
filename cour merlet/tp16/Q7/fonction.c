#include <stdio.h>
#include <stdlib.h>
#include "personne.h"
#define ajout 5
#include <string.h>
void viderBuffer();
void crypte(char*chaine, int Nb)
{
    int i;
    for(i=0;i<20; i++)
    {
        chaine[i]=chaine[i]+ajout;
    }
}
