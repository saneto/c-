/************************************************************************
* Nom : TP numération													*
* Description : etude de la représentation des							*
*				différents types de variables							*
*																		*
* Auteur : Eric Merlet													*
* Date : 1/10/2013														*
************************************************************************/

#include <iostream>		/*on inclut le fichier <iostream> qui contient les declarations
						necessaires à l'utilisation des entrées sorties standard*/
#include <iomanip>

using namespace std;	// on utilise les symboles definis dans l'espace de noms std

int main()
{
	unsigned short int us;		// declaration de la variable us
	cout<<&us<<endl;			// affichage de l'adresse de la variable us
	cout<<sizeof(us)<<endl;		// affichage de la dimension en octets
	us=54;						// affectation: on met la valeur 54 dans la variable
	cout<<"us="<<us<<endl;		// affichage de la valeur de la variable us
	
	return 0;
}
