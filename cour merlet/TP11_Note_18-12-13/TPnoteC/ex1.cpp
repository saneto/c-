#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char texte[81];
    int i, taille;

	cout << unitbuf;
    cout << "--> Saisir une phrase pouvant contenir des chiffres :" << endl;
    cin.getline(texte, 81);

    taille = strlen(texte);
    for(i=0; i<taille; i++)
    {
        if ((texte[i]>=48)&&(texte[i]<=57))
        {
            texte[i]='*';
        }
    }

    for(i=0; i<taille; i++)
    {
        cout << texte[i];
    }

    cout << endl << "Fin du programme\n\n";

    return 0;

}
