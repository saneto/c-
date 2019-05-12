#include "medicament.h"
#include <stdio.h>

/* Définition de la fonction ViderBuffer()*/
void viderBuffer()
{
    int c = 0;
    while (c != '\n' && c != EOF)
    {
        c = getchar();
    }
}



/* Définition de la fonction Menu()*/
int Menu()
{
    /* Déclaration des variables locales de la fonction menu()*/
    int ch;

    printf("************ Menu *******************\n");
	printf(" Pour sortir, tapez \t\t\t\t\t\t\t 0\n");
    printf(" Pour afficher les caractéristiques de tous les médicaments, tapez \t 1\n");
	printf(" Pour afficher la liste des médicaments à commander, tapez \t\t 2\n");
	printf(" Pour afficher la valeur du stock de médicaments, tapez \t\t 3\n");
	printf(" Pour ajouter un nouveau médicament, tapez \t\t\t\t 4\n");
	printf(" Pour supprimer un médicament, tapez \t\t\t\t\t 5\n");
	printf(" Pour augmenter le nombre en stock d'un médicament, tapez \t\t 6\n");
	printf(" Pour diminuer le nombre en stock d'un médicament, tapez \t\t 7\n");
    printf("-->Entrez votre choix : ");
    scanf("%d", &ch);
	viderBuffer();
   	printf("\n");

    return ch;
}




void  AfficherMed(struct medicament m)
{
	printf("\tIdentifiant : %s\t, nom : %s\n\tNombre en stock : %hu\t, prix unitaire : ", m.Id, m.Nom , m.NbStock);
	printf ("%.2f euros\n", m.PrixUnitaire);
}


void  AfficherTabMed(struct medicament *tab, int nb)
{
	int i;
	printf("Affichage de la liste des médicaments :\n");
	for (i = 0; i < nb ; i++)
	{
		printf("Médicament %d :\n", i+1);
		AfficherMed(tab[i]);
		printf("\n");
	}
	if (nb == 0)
	{
		printf("\tLa liste est vide.\n\n");
	}
}


void  AfficherMedACommander(struct medicament *tab, int nb)
{
	int i, cpt = 0;
	printf("Affichage de la liste des médicaments à commander :\n");
	for (i = 0; i < nb ; i++)
	{
		if (tab[i].NbStock == 0)
		{
			cpt ++;
			printf("\tIdentifiant : %s\t, nom : %s\t, prix unitaire : ", tab[i].Id, tab[i].Nom );
			printf ("%.2f euros\n", tab[i].PrixUnitaire);
		}
	}
	if (cpt == 0)
	{
		printf("\tLa liste est vide.\n");
	}
	printf("\n");

}

