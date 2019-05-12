#include <iostream>

#include <iomanip>

using namespace std;


int main()
{
    cout<<unitbuf;
	double as;
	float us;		// declaration de la variable us
	cout<<&as<<endl;            // affichage de l'adresse de la variable us
	cout<<sizeof(as)<<endl;
	cout<<&us<<endl;            // affichage de l'adresse de la variable us
	cout<<sizeof(us)<<endl;	// affichage de la dimension en octets
	as=1234567890123456789;
	us=1234567890123456789;						// affectation: on met la valeur 54 dans la variable
	cout << setprecision(20);
	cout<<"as="<<as<<endl;		// affichage de la valeur de la variable us
    cout<<"us="<<us<<endl;
	return 0;
}
