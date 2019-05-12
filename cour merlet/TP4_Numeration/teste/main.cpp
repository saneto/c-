#include <iostream>

using namespace std;

int main()
{
    cout<<unitbuf;
	unsigned short int us;		// declaration de la variable us
	cout<<&us<<endl;			// affichage de l'adresse de la variable us
	cout<<sizeof(us)<<endl;		// affichage de la dimension en octets
	us=54;						// affectation: on met la valeur 54 dans la variable
	cout<<"us="<<us<<endl;		// affichage de la valeur de la variable us

	return 0;
}
