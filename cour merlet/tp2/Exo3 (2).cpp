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
	int p;
	do
	{
        cout<<"entré votre nombre";
        cin>> p;
            if(p<10)
            {
                cout<<"plus grand";
            }
                else if(p>20)
                {
                    cout<<"plus petit";
                }
	}while((p<10) || (p>20));
	cout<<"La réponse convient";
	cout<<endl;

	return 0;
}
