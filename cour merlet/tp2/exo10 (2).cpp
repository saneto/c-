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
    float Nbre1, Nbre2, Nbre3;
    float Var_Temp;

    cout <<"Nombre 1:";
    cin >> Nbre1;
    cout <<"Nombre 2:";
    cin >> Nbre2;
    cout <<"Nombre 3:";
    cin >>Nbre3;

    if(Nbre1>Nbre2)
    {
            Var_Temp=Nbre1;
            Nbre1=Nbre2;
            Nbre2=Var_Temp;
    }
    if(Nbre2>Nbre3)
    {
        Var_Temp=Nbre2;
        Nbre2=Nbre3;
        Nbre3=Var_Temp;
    }
    cout <<"Apres le tri, cela donne:"<<endl;
    cout <<""<<Nbre1<<endl ;
    cout <<""<<Nbre2<<endl ;
    cout <<""<<Nbre3<<endl ;
}
