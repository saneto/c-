/************************************************************************
* Nom : TP Algorithmique										*
* Description :  *
*													*
* Auteur : ZAIR	 AYMANE											*
* Date : 11/09/2013											*
************************************************************************/

#include <iostream>

using namespace std;

int main()

{

	int i, s;

	cout << "veuillez saisir votre nombre";
	cin >> s;
	for ( i=1; i<=10; i=i+1)
	{
		cout<< s << " x " << i << " = "<< i*s << endl;
	}
}
