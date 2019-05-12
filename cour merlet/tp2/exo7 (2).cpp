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
	int N, pg, i, p;
	i=1;
	pg=0;
	for( i=1 ; i<=10 ; i=i+1)
	{

        cout << "entrez le nombre numéro " << i <<" :" ;
        cin >> N;
        if(N>pg)
        {
            pg=N;
            p=i;
        }
	}
	cout<<"le nombre le plus grand est "<< pg<< endl;
    cout<<"c'était le nombre numéro "<< p;
	return 0;
}
