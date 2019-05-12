#include "medicament.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>



int  AugmenterNbStockMed(struct medicament *tab, int nb, char* IdM, unsigned short int NbAAjouter)
{
	int i, rescomp;
	int ret = -1;
	for (i = 0; i < nb ; i++)
	{
		rescomp = strcmp(tab[i].Id, IdM);
		if(rescomp == 0)
		{
			tab[i].NbStock += NbAAjouter;
			ret = 0;
		}
	}
	return ret;
}


int DiminuerNbStockMed(struct medicament *tab, int nb, char* IdM, unsigned short int NbARetirer)
{
	int i, rescomp;
	int ret = -2;
	for (i = 0; i < nb ; i++)
	{
		rescomp = strcmp(tab[i].Id, IdM);
		if(rescomp == 0)
		{
			if(tab[i].NbStock >= NbARetirer)
			{
				tab[i].NbStock -= NbARetirer;
				ret = 0;
			}
			else
			{
				ret = -1;
			}
		}
	}
	return ret;
}


float GetValeurStock(struct medicament *tab, int nb)
{
	float val = 0;
	int i;
	for (i = 0; i < nb ; i++)
	{
		val += (tab[i].NbStock) * (tab[i].PrixUnitaire);
	}
	return val;
}

/* Définition de la fonction AjouterMedicament() : A MODIFIER
Fonction qui vérifie la validité des caractéristiques du médicament à ajouter :
	- unicité de l'identifiant;
	- format de l'identifiant qui doit être constitué de 8 chiffres;
	- prix unitaire supérieur à 0.
Elle ne doit ajouter le médicament que si il est valide, après avoir vérifié que le tableau n'est pas plein.
Paramètres et valeur de retour :
- 1er paramètre : adresse du 1er élément du tableau de medicaments,
- 2eme paramètre : adresse d'un entier qui représente le nombre de médicaments en stock (la fonction doit incrémenter ce nombre si
				   l'ajout est effectué),
- 3eme paramètre : taille du tableau (i.e. nombre maximal de médicaments qu'on peut stocker),
- 4ème paramètre : médicament à ajouter,
- valeur de retour : 0 si le médicament est ajouté
					 -1 sinon*/
int AjouterMedicament(struct medicament *tab, int *pnb, int nbmax, struct medicament MedAAjouter)
{
	int ret = 0,i,res;
	size_t taille;
	if(*pnb<nbmax)
	{
	    taille=strlen(MedAAjouter.Id);
	    if(taille==8)
	    {
            for(i=0;i<*pnb;i++)
            {
                res=strcmp(MedAAjouter.Id,tab[i].Id);
                if(res==0)
                {
                    ret=-1;
                }
                if(MedAAjouter.PrixUnitaire<=0)
                {
                    ret=-1;
                }

            }
            if(ret==0)
            {
                tab[*pnb] = MedAAjouter;
                (*pnb)++;
            }
	    }
	    else
	    {
	        ret =-1;
	    }
	}else
	{
	    ret=-1;
	}
	return ret;
}

int SupprimerMedicament(struct medicament *tab, int *pnb, char * IdMedASupprimer)
{
	int ret = -1, i, rescomp;
	for (i = 0; i < *pnb; i++)
	{
		rescomp = strcmp(IdMedASupprimer, tab[i].Id);
		if (rescomp == 0)
		{
			tab[i] = tab[(*pnb) -1];
			(*pnb)--;
			ret = 0;
		}
	}
	return ret;
}

int SauvegarderStockMed(struct medicament *tab, int nb)
{
    int i;
    FILE * pfic;
    pfic=fopen("stockm.txt", "w");
    if(pfic==NULL)
    {
        printf("erreur lors de l'ouverture du fichier");
        return -1;
    }
    for(i=0; i<nb;i++)
    {
        fprintf(pfic,"%s %s %hu %.2f \n",tab[i].Id,tab[i].Nom,tab[i].NbStock,tab[i].PrixUnitaire);
    }
    fclose(pfic);
    return 0;
}

int InitialiserStockMed(struct medicament *tab)
{
    int i=0;
    char *res;
    FILE * pfic;
    char cope[100];
    pfic=fopen("stockm.txt", "r");
    if(pfic==NULL)
    {
        printf("erreur lors de l'ouverture du fichier");
        return -1;
    }
    do
    {
        res=fgets(cope,100,pfic);
        sscanf(cope,"%s %s %hu %f \n",tab[i].Id,tab[i].Nom,&(tab[i].NbStock),&(tab[i].PrixUnitaire));
        i++;
    }while(res!=NULL);
    i--;
    fclose(pfic);
    return i;
}
