#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char ligne[41];
    char mots[4][11];
    char espace[2] = {32, '\0'};
    int i, taille;

	cout << unitbuf;
    for(i=0; i<4; i++)
    {
        cout << "--> Saisir le mot " << i+1 << " (maximum 10 caractères) : ";
        cin  >> mots[i];
        cin.ignore(255, '\n');
    }

    strcpy (ligne, mots[0]);
    for(i=1; i<4; i++)
    {
        strcat(ligne, espace);
        strcat(ligne, mots[i]);
    }

    cout << ligne;

    cout << endl << "Fin du programme\n\n";

    return 0;

}
