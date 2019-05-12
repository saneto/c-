/************************************************************************
* Nom : TP Algorithmique										*
* Description : programme qui détermine les heures d'affichage de bonjour et bonsoir			*
*													*
* Auteur : ZAIR	 AYMANE											*
* Date : 11/09/2013											*
************************************************************************/
#include<iostream>

using namespace std;
	
int main()
{

	unsigned short int h;
	cout << "veuillez saisir l'heure(sans minutes)";
	cin >> h;
	if(h<=16)
	{
		cout << "bonjour";
	}
	else 
	{
		cout << "bonsoir";
	}
	cout << endl;
}
