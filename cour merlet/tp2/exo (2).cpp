/************************************************************************
* Nom : TP Algorithmique										*
* Description : 											*
*													*
* Auteur : ZAIR	 AYMANE											*
* Date : 18/09/2013											*
************************************************************************/

#include <iostream>		
				/* on inclut le fichier <iostream> qui contient les declarations 
				necessaires à l'utilisation des entrées sorties standard */
using namespace std;	// on utilise les symboles definis dans l'espace de noms std

int main()
{	
	int i, somme, nbre;
	somme = 0;
	i=1;
	while (i<=4)
	{
		cout<<"entre un nombre";
		cin>>nbre;
		somme=somme+nbre;
		i=i+1;
	}
	cout<<"la somme vaut:"<<somme<<endl;
	
	return 0;
}
