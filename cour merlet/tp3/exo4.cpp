#include <iostream>

using namespace std;

int main()
{
    int hauteur, i, espace, s, etoile;

    cout << unitbuf;
    cout<<"*** tracé un sapin ***"<< endl;
    cout<<"veuillez saisir la heuteur du sapin :";
    cin>> hauteur;
    espace=0;
    etoile=0;
    if(hauteur<1)
    {
        cout<<"la hauteur n'est pas valide";
    }
    for(i=1 ; i<=hauteur ; i++)
    {
        espace=hauteur-i;

         for (s=1 ; s<=espace ; s++)
        {
            cout << " ";
        }
       etoile=i+etoile;
        for (s=1 ; s<= etoile ; s++)
        {
            cout << "*";
        }
        cout<<endl;

        espace=0;
        etoile=i;

    }

    return 0;
}
