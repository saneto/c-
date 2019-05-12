/************************************************************************
* Nom : TP Algorithmique										*
* Description : Ecrivez un algorithme qui calculera le prix net à payer.				*
*													*
* Auteur : ZAIR	 AYMANE											*
* Date : 11/09/2013											*
************************************************************************/

#include <iostream>		
				
using namespace std;	

int main()

{
	float P, r, s, t;
	
	cout << "veuillez saisir le prix";
	cin >> P;
	r=0.03;
	s=0.05;
	
	if(P<350)
	{
		cout << " vous allez payer " << P << endl;
	}
		
	else if(P<600)
	{
		t=P-(P*r);
		cout << "vous allez payer  " << t << endl;
	}
	else
	{
		t=P-(P*s);
		cout << "vous allez payer " << t << endl;
	}
	
}
	


