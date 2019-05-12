#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "voiture.h"
#define Taille 50
int main()
{

    int choix,i,Num=0, r=1;
    char select[10];
    struct Voiture stock[Taille];
    for(i=0; i<Taille;i++)
    {

    }
    do
    {
        choix=menu();
        switch(choix)
        {
                case 1: if(Num<Taille)
                        {
                            do
                            {
                                printf ("\nVeuillez saisir le numéro d’immatriculation format(AA-111-AA): ");
                                scanf("%9s", stock[Num].immatriculation);
                                viderBuffer();
                                printf ("\nVeuillez saisir la marque de la voiture : ");
                                scanf("%s", stock[Num].marque);
                                viderBuffer();
                                printf ("\nVeuillez saisir le modèle de la voiture: ");
                                scanf("%s", stock[Num].Modele);
                                viderBuffer();
                                printf ("\nVeuillez saisir la date de première mise en circulation du véhicule: ");
                                scanf("%s", stock[Num].circulation);
                                viderBuffer();
                                printf ("\nVeuillez saisir la date de rentrée au garage : ");
                                scanf("%s", stock[Num].garage);
                                viderBuffer();
                                printf ("\nVeuillez saisir le prix : ");
                                scanf("%f", &stock[Num].prix);
                                viderBuffer();
                                r=ajoutvoiture(stock,Taille, Num);
                                if(r!=1)
                                {
                                    if(r==0)
                                    {
                                        printf("La plaque d'immatriculation que vous venez de saisir existe deja");
                                    }
                                    if(r==2)
                                    {
                                        printf ("La plaque saisi n'est pas conforme au forma AA-111-AA");
                                    }
                                    if((r>2)&&(r<6))
                                    {
                                        printf ("La Date saisi est invalide\n");
                                    }
                                    if(r==3)
                                    {
                                        printf ("Le mois est invalide");
                                    }
                                    if(r==4)
                                    {
                                        printf ("Le jours est invalide");
                                    }
                                    if(r==5)
                                    {
                                        printf ("L'année est invalide");
                                    }
                                    r=0;
                                }
                                Num=Num+r;
                            }while(r!=1);
                            r=0;
                        }else
                        {
                            printf("Impossible de rajouter une voiture car le garageest plein ");
                        }
                    break;
            case 2: if(Num>0)
                    {
                        listagevoiture(stock, Num);
                    }else{
                        printf("aucune voiture en stock \n");
                    }
                    break;
            case 3: printf("Veuillez saisir le numéro d’immatriculation de la voiture a supprimer:\n");
                    scanf("%9s",select);
                    r=Suppression(stock, Taille, Num, select) ;
                    if(r==1)
                    {
                        printf("La suppression a eu lieu.\n");
                    }else
                    {
                        printf("La suppression n'a pas eu lieu.\n");
                    }
                    Num=Num-r;
                    r=0;
                    break;
            case 4: Affichageinfo(stock, Taille) ;
                    break;
        }
    }while(choix!=0);
    return 0;
}
