#include <stdio.h>
#include <stdlib.h>
#include "cara.h"

int main()
{

    int choix;
    do
    {
        choix=menu();
        switch(choix)
        {
            case 1: enregistre();
                    break;
            case 2:ajout();
                    break;
            case 3: affiche();
                    break;
        }
    }while(choix!=0);
    return 0;
}



