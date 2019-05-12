#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"
int main()
{
    int choix, ret,d;
    char saisi[35];
    char saisi1[35];
    char source[35];
    char destination[35];
    char affichage[180];
    do{
        choix=menu();
        switch(choix)
        {
                    case 1: printf("Veuillez saisir le nom du fichier\n");
                            scanf("%35s",saisi);
                            ret=GetTaille(saisi);
                            if(ret==-1)
                            {
                                printf("erreur lors de l'ouverture du fichier\n");
                                printf("Le fichier n'existe pas \n");
                            }else
                            {printf("Le fichier fait %d octet \n", ret);}
                            break;
                    case 2: printf("Veuillez saisir le nom du fichier source\n");
                            scanf("%35s",source);
                            printf("Veuillez saisir le nom du fichier de destination\n");
                            scanf("%35s",destination);
                            ret=CopyFichierTexte(source, destination);
                            if(ret==0)
                            {
                                printf("La Réécriture a eu lieu\n");
                            }
                            if(ret==-1)
                            {
                                printf("Erreur lors de l'ouverture du fichier source\n");
                            }
                            if(ret==-2)
                            {
                                printf("Erreur lors de l'ouverture du fichier de destination \n");
                            }
                            if(ret==-3)
                            {
                                printf("L'écriture dans le nouveau fichier n'a pas eu lieu  \n");
                            }
                            break;
                    case 3: printf("Veuillez saisir le nom du fichier\n");
                            scanf("%35s",saisi1);
                            printf("Veuillez saisir la ligne a la quel vous voulez accéder:\n");
                            scanf("%d",&d);
                            ret=GetLigne(saisi1,d,affichage);
                            if(ret==0)
                            {
                                printf("%s",affichage);
                            }
                            if(ret==1)
                            {
                                printf("Ligne saisie est introuvable\n");
                            }
                            if(ret==-1)
                            {

                                printf("erreur lors de l'ouverture du fichier\n");
                            }

                            break;
        }
    }while(choix!=0);
    return 0;
}
