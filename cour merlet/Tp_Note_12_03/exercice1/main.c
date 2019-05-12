#include "medicament.h"
#include <stdio.h>
#include <string.h>
#define NBMAX 100		/*Nombre maximum de médicaments : taille du tableau */


void viderBuffer();


int main()
{
	struct medicament stockm [NBMAX] = {	{"11111111", "Paracétamol", 6, 1.90 },
				    						{"22222222", "Nurofen", 15, 10.75 	},
											{"33333333", "Surgam", 5, 3.60  	} };

	int Nbm = 3;	/* nombre de médicaments en stock */
	/*Au lancement du programme (dans sa version initiale), le stock contient 3 médicaments*/



	char IdMedm[9];
	char nameMedm[21];
	float prixUm,ValeurS;
	unsigned short int nbStMedm;
	struct medicament medAjoutm;
	int resm, choixm;

    Nbm=InitialiserStockMed(stockm);

	printf("Bonjour, ce programme permet la gestion du stock de médicaments\n");
	printf("%d médicaments sont actuellement référencés\n\n", Nbm);
    do
	{
        choixm = Menu();
        switch(choixm)
        {
			case 0:	break;

            case 1:	AfficherTabMed(stockm, Nbm);
					break;

            case 2:	AfficherMedACommander(stockm, Nbm);
					break;

			case 3: ValeurS=GetValeurStock(stockm, Nbm)	;
                    printf("Valeur du stock est %.2f euros \n", ValeurS);
					break;

			case 4: printf("--> Saisir l'identifiant du médicament à ajouter : ");
					scanf("%8s", IdMedm);
					viderBuffer();
					printf("--> Saisir le nom du médicament : ");
					scanf("%20s", nameMedm);
					viderBuffer();
					printf("--> Saisir le nombre en stock du médicament : ");
					scanf("%hu", &nbStMedm);
					viderBuffer();
					printf("--> Saisir le prix unitaire du médicament : ");
					scanf("%f", &prixUm);
					viderBuffer();

					/* on place les valeurs saisies dans la variable medAjoutm */
					strcpy(medAjoutm.Id, IdMedm);
					strcpy(medAjoutm.Nom, nameMedm);
					medAjoutm.NbStock = nbStMedm;
					medAjoutm.PrixUnitaire = prixUm;
					resm = AjouterMedicament(stockm, &Nbm, NBMAX, medAjoutm);
					if( resm == 0)
					{
						printf("\tAjout d'un nouveau médicament effectué.\n\n");
					}
					else
					{
						printf("\tProblème lors de l'ajout d'un nouveau médicament!\n\n");
					}
					break;

			case 5:	printf("Veuillez saisir l'identifiant du medicament à supprimer.\n");
                    scanf("%8s", IdMedm);
                    resm=SupprimerMedicament(stockm,&Nbm,IdMedm);
                    if(resm==0)
                    {
                        printf("Le medicament est supprimé.");
                    }else
                    {
                        printf("Le medicament n'a pas été supprimer.");
                    }
					break;

			case 6: printf("--> Saisir l'identifiant du médicament à augmenter : ");
					scanf("%8s", IdMedm);
					viderBuffer();
					printf("--> Saisir le nombre en stock du médicament : ");
					scanf("%hu", &nbStMedm);
					viderBuffer();
                    resm=AugmenterNbStockMed(stockm,Nbm,IdMedm,nbStMedm);
                    if(resm==0)
                    {
                        printf("L'augmentation a eu lieu.\n");
                    }else
                    {
                        printf("L'identifiant saisi n'est pas présent dans le tableau.\n");
                    }
					break;

			case 7: printf("--> Saisir l'identifiant du médicament à augmenter : ");
					scanf("%8s", IdMedm);
					viderBuffer();
					printf("--> Saisir le nombre en stock du médicament : ");
					scanf("%hu", &nbStMedm);
					viderBuffer();
                    resm=DiminuerNbStockMed(stockm,Nbm,IdMedm,nbStMedm);
                    if(resm==0)
                    {
                        printf("Le stock a été diminuer\n");
                    }
                    else if(resm==-1)
                    {
                        printf("Le médicament a été trouvé mais le nombre en stock du médicament est trop petit, la modification n'a pas eu lieu.\n");
                    }
                    else if(resm==-2)
                    {
                        printf("L'identifiant du médicament n'est présent dans le tableau.\n");
                    }
                    break;

			default : printf("\tChoix non valide!\n\n");

        }
    }while (choixm != 0);
    SauvegarderStockMed(stockm, Nbm);
    printf("Fin du programme.\n\n");

	return 0;
}



