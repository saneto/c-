/************************************************************************
* Nom : TP Chaines de caractères												*
* Description : Manipulation d'un tableau de caractères à 2 dimensions	*
*																		*
* Auteur : Eric Merlet													*
* Date : 12/11/2013														*
************************************************************************/

#include <iostream>		/*on inclut le fichier <iostream> qui contient les declarations 
						necessaires à l'utilisation des entrées sorties standard*/
						
#include <string.h> // contient la déclaration de la fonction strcpy()

using namespace std;	// on utilise les symboles definis dans l'espace de noms std


int main()
{
	char pronom [6][5] = {	{'j','e','\0'},{'t','u','\0'},{'i','l','\0'},
							{'n','o','u','s','\0'},{'v','o','u','s','\0'},{'i','l','s','\0'}};
	// le tableau pronom est un tableau de caractères à 2 dimensions : il contient 6x5 éléments de type caractère
	// on peut le voir comme une matrice ( 6 lignes, 5 colonnes )
	// il est constitué de 6 tableaux à 1 dimension contenant chacun 5 éléments : 
	//		- le tableau pronom [0] qui contient les éléments pronom [0][0]='j', pronom [0][1]='e',... pronom [0][4], 
	//		- le tableau pronom [1] qui contient les éléments pronom [1][0], pronom [1][1],... pronom [1][4], 
	//		- ...
	//		- le tableau pronom [5] qui contient les éléments pronom [5][0]='i', pronom [5][1]='l',... pronom [5][4], 
	// type de l'expression pronom [i][j] : caractère
	// type de l'expression pronom [i] : tableau de 5 caractères = adresse du caractère pronom [i][0]
	
	char ch[10];
	char car;

	size_t longueur;
	car = pronom[3][1];				// type de l'expression pronom [i][j] : caractère
	cout<<"car : "<<car<<endl;
	
	strcpy(ch, "");		// on copie une chaine de caractères vide dans ch
	cout<<"Après copie chaine de caracteres vide, ch = "<<ch<<endl;	

	longueur = strlen(pronom[0]);	// on appelle la fonction strlen() en lui transmettant en paramètre 
									// le tableau de caractères pronom [0]
	cout<<"Longueur de pronom[0] : "<<longueur<<endl;
	
	strcpy(ch, pronom[2]);		// on copie la chaine source pronom[2] dans la chaine destination ch
	cout<<"Après copie de pronom[2], ch = "<<ch<<endl;		



	strcpy(ch, &pronom[3][0]);		// autre possibilité, le second paramètre transmis est égal à l'adresse du caractère
										// pronom[3][0]
	cout<<"Après copie de &pronom[3][0], ch = "<<ch<<endl;

	strcpy(ch, &pronom[3][1]);		// une variante
	cout<<"Après copie de &pronom[3][1], ch = "<<ch<<endl;
	
	return 0;
}