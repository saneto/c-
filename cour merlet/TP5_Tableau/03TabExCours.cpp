/************************************************************************
* Nom : Cours Tableau													*
* Description : Manipulation d'un tableau       						*
*																		*
* Auteur : Eric Merlet													*
* Date : 10/10/2013														*
************************************************************************/

#include <iostream>		/*on inclut le fichier <iostream> qui contient les declarations
						necessaires à l'utilisation des entrées sorties standard*/
#include <iomanip>

using namespace std;	// on utilise les symboles definis dans l'espace de noms std

int main()
{
	int Notes [3];
	int i;


	cout << "1 : Adresse de l'element d'indice 0 du tabeau Notes :" << Notes << endl;
	cout << "2 : Adresse de l'element d'indice 0 du tabeau Notes :" << &Notes[0] << endl;
	cout << "3 : Adresse de l'element d'indice 1 du tabeau Notes :" << &Notes[1] << endl;
	cout << "3 : Adresse de l'element d'indice 2 du tabeau Notes :" << &Notes[2] << endl;

	cout << "Nombre d'octets occupes par la variable Notes : " << sizeof(Notes) << endl;
	cout << "Nombre d'octets occupes par l'element Notes[1] : " << sizeof(Notes[1]) << endl;


    cout << "Adresse de la variable i : " << &i << endl;
    // Manipulation des elements du tableau
    // On utilise une boucle POUR pour accéder à chaque élément du tableau
    for (i = 0 ; i <= 2; i++)
    {
        cout << "Saisir la note d'indice " << i << " : " ;
        cin  >> Notes [i];
    }

	return 0;
}
