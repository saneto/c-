#ifndef _MEDICAMENT_H	/*compilation conditionnelle (1/3)*/
#define _MEDICAMENT_H	/*compilation conditionnelle (2/3)*/



struct medicament		/* déclaration d'un nouveau type*/
{
	char Id[9];			/* Identifiant unique sur 8 chiffres */
	char Nom [21];
	unsigned short int NbStock;	/* Nombre de médicaments en stock*/
	float PrixUnitaire; 		/* en euros*/
};

/* Déclaration de fonctions C */

/* Déclaration de la fonction viderBuffer()
Fonction qui permet de vider le buffer associé à stdin
Attention : il ne faut pas l'appeler quand le buffer est déjà vide.*/
void viderBuffer();

/* Déclaration de la fonction Menu()
Fonction qui affiche le menu, saisit et renvoie le choix de l'utilisateur*/
int Menu();



/* Déclaration de la fonction AfficherMed()
Fonction qui permet d'afficher les caractéristiques d'un médicament :
- 1er paramètre : medicament à afficher
- Pas de valeur de retour */
void  AfficherMed(struct medicament m);

/* Déclaration de la fonction AfficherTabMed() :
Fonction qui permet d'afficher les caractéristiques d'un tableau de medicaments :
- 1er paramètre : adresse du 1er élément du tableau de medicaments,
- 2eme paramètre : nombre d'éléments du tableau dont on souhaite afficher les caractéristiques,
- Pas de valeur de retour */
void  AfficherTabMed(struct medicament *tab, int nb);


/* Déclaration de la fonction AugmenterNbStockMed()
Fonction qui permet d'augmenter le nombre (de médicaments) en stock d'un médicament sélectionné par son identifiant :
- 1er paramètre : adresse du 1er élément du tableau de medicaments,
- 2eme paramètre : nombre d'éléments du tableau où on va rechercher l'identifiant du médicament,
- 3eme paramètre : identifiant du médicament dont on souhaite augmenter le stock,
- 4ème paramètre : nombre à ajouter au nombre en stock du médicament d'identifiant égal au 3ème paramètre,
- valeur de retour : 0 si l'identifiant du médicament est présent dans le tableau
					 -1 sinon*/
int  AugmenterNbStockMed(struct medicament *tab, int nb, char* IdM, unsigned short int NbAAjouter);


/* Déclaration de la fonction DiminuerNbStockMed() :
Fonction qui permet de diminuer le nombre (de médicaments) en stock d'un médicament sélectionné par son identifiant :
- 1er paramètre : adresse du 1er élément du tableau de medicaments,
- 2eme paramètre : nombre d'éléments du tableau où on va rechercher l'identifiant du médicament,
- 3eme paramètre : identifiant du médicament dont on souhaite diminuer le stock,
- 4ème paramètre : nombre à soustraire au nombre en stock du médicament d'identifiant égal au 3ème paramètre,
Remarque : le nombre en stock d'un médicament ne peut pas descendre en dessous de 0
- valeur de retour  :  	0 	si l'opération a été réalisée (y compris si le nouveau nombre en stock est égal à 0)
		       			-1 	si le médicament a été trouvé (i.e. identifiant présent dans le tableau)
							et si le nombre en stock du médicament est trop petit (dans ce cas le nombre en stock n'est pas modifié)
						-2 	si l'identifiant du médicament n'est présent dans le tableau */
int DiminuerNbStockMed(struct medicament *tab, int nb, char* IdM, unsigned short int NbARetirer);


/* Déclaration de la fonction GetValeurStock() :
Fonction qui renvoie la valeur en euros d'un stock (tableau) de médicaments :
- 1er paramètre : adresse du 1er élément du tableau de medicaments,
- 2eme paramètre : nombre de médicaments en stock,
- valeur de retour : valeur en euros du stock de médicaments*/
float GetValeurStock(struct medicament *tab, int nb);


/* Déclaration de la fonction AfficherMedACommander()
Fonction qui affiche l'identifiant, le nom et le prix unitaire des médicaments à commander :
Les médicaments à commander sont ceux qui ont un nombre en stock nul.
- 1er paramètre : adresse du 1er élément du tableau de medicaments,
- 2eme paramètre : nombre d'éléments du tableau à l'intérieur duquel on recherche les médicaments à commander,
- Pas de valeur de retour */
void  AfficherMedACommander(struct medicament *tab, int nb);


/* Déclaration de la fonction AjouterMedicament()
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
int AjouterMedicament(struct medicament *tab, int *pnb, int nbmax, struct medicament MedAAjouter);

/* Déclaration de la fonction SupprimerMedicament()
Fonction qui permet de supprimer un médicament sélectionné par son identifiant :
- 1er paramètre : adresse du 1er élément du tableau de medicaments,
- 2eme paramètre : adresse d'un entier qui représente le nombre de médicaments en stock (la fonction doit décrémenter ce nombre si
				   la suppression est effectuée),
- 3ème paramètre : identifiant du médicament à supprimer,
- valeur de retour : 0 si le médicament est supprimé
					 -1 sinon*/
int SupprimerMedicament(struct medicament *tab, int* pnb, char * IdMedASupprimer);

/* Déclaration de la fonction SauvegarderStockMed()
Fonction qui permet de sauvegarder le stock de médicament dans un fichier :
- 1er paramètre : adresse du 1er élément du tableau de medicaments,
- 2eme paramètre : nombre de ligne a copie dans le fichier.
- valeur de retour : 0 si l'ouverture de fichier a eu lieu,
					 -1 sinon*/
int SauvegarderStockMed(struct medicament *tab, int nb);

/* Déclaration de la fonction InitialiserStockMed()
Fonction qui permet d'initialiser le stock de médicament par rapport a un fichier :
- 1er paramètre : adresse du 1er élément du tableau de medicaments,.
- valeur de retour : le nombre de medicament qu'il y a dans le stock
                        sinon -1 */
int InitialiserStockMed(struct medicament *tab);

#endif /*compilation conditionnelle (2/3)*/
