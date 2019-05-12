/************************************************************************
* Nom : TP Algorithmique										*
* Description : programme qui détermine l'air d'un rectangle						*
*													*
* Auteur : ZAIR	 AYMANE											*
* Date : 11/09/2013											*
************************************************************************/

#include <iostream>

using namespace std;


int main()
{

		float L, I, A;

		cout << "veuillez saisir la longueur : ";
		cin >> L;
		cout << "veuillez saisir la largeur : ";
		cin >> I;
		A=L*I;
		cout << A;
		cout <<" est l'air du rectangle";
		cout << endl;	
		return 0;	
}
