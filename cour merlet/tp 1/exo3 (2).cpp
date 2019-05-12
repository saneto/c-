/************************************************************************
* Nom : TP Algorithmique										*
* Description : programme qui affiche des étoile autant de fois que le voudra l'utilisateur             *
*													*
* Auteur : ZAIR	 AYMANE											*
* Date : 11/09/2013											*
************************************************************************/

#include <iostream>		
				
using namespace std;

int main()
	
{	
		
	unsigned short int i, l;
	
	cout << "veuillez saisir le nombre de ligne";
	cin >> l;
	for ( i=1 ; i<=l ; i=i+1)
	{	
		cout<<"*";
	}
}
