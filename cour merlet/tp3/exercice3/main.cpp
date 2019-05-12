#include <iostream>

using namespace std;

int main()
{
    int l, i, co;
    cout << "*** tracé d'un triangle rectangle isocèle ***"<< endl;
    cout<< "veuillez saisir la longueur d'un coté :";
    cin >> l;
    if( l<1)
    {
        cout << "la longueur doit etre supérieure ou égale à 1" ;

    }
    for(i=1 ; i<=l; i++)
    {

        for (co=1 ; co<=i ; co++)
        {
            cout << "*";
        }
        cout<<endl;
    }


}
