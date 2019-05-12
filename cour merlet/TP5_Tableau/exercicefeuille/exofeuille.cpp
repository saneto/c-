#include <iostream>

using namespace std;

int main()
{
    int notes[10]={55555};
    int i, moyenne,somme, sup;
    somme=0;
    sup=0;

    for (i=0 ; i<=9 ; i++)
    {
        cout<< "saisir la note de l'étudiant "<< i<< " :"<< endl;
        cin >> notes[i];
        somme=notes[i]+somme;
        if(i==10)
        {
           moyenne=somme/10;
           cout<< "la moyenne est :"<< moyenne << endl;

        }
    }
    for (i=0; i<=9 ; i++)
    {
        if(notes[i]>=moyenne)
        {
            sup=1+sup;
        }
    }
    cout<< "note supérieure à la moyenne calculée est :"<< sup<< endl;
    return 0;
}
