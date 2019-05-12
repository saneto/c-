#include <stdio.h>
#include <stdlib.h>
#include "Mots.h"
int main()
{
    int choix, ret;
    char saisi[35];
    do{
        choix=menu();
        switch(choix)
        {
                    case 1: printf("Veuillez saisir le nom du fichier\n");
                            scanf("%35s",saisi);
                            ret=GetNbMots(saisi);
                            if(ret==-1)
                            {
                                printf("erreur lors de l'ouverture du fichier\n");
                                printf("Le fichier n'existe pas \n");
                            }else
                            {
                                printf("Il y a %d mots dans le fichier \n", ret);
                            }
                            break;
                    case 2: printf("Veuillez saisir le nom du fichier\n");
                            scanf("%35s",saisi);
                            ret=GetNbVoyelles(saisi);
                            if(ret==-1)
                            {
                                printf("Erreur lors de l'ouverture du fichier source\n");
                            }else
                            {
                                printf("Il y a %d voyelles dans le fichier \n", ret);
                            }
                            break;
                            // J'ai pas reussi a finir cette fonction
                   /* case 3: printf("Veuillez saisir le nom du fichier\n");
                            scanf("%35s",saisi);
                            ret=RemplaceChiffre(saisi);
                            if(ret==0)
                            {
                                printf("Le remplacement a eu lieu .\n");
                            }
                            if(ret==-1)
                            {

                                printf("erreur lors de l'ouverture du fichier\n");
                            }

                            break;*/
        }
    }while(choix!=0);
    return 0;
}
