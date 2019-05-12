#include <iostream>
#include <stdlib.h>
#include <time.h>
// contient les déclarations des fonctions rand() et srand()
// contient la déclaration de la fonction time() et du type time_t
using namespace std;
int alea ();

int main()
{
int NbAleatoire, saisi;
NbAleatoire= alea();
do{
    cout << "deviner le nombre aléatoire :";
    cin >> saisi;
    if(NbAleatoire>saisi)
    {
        cout << "Plus grand"<< endl;
    }
    if(NbAleatoire<saisi)
    {
        cout <<"Plus petit"<<endl;
    }
}while(saisi!=NbAleatoire);
cout << "Nombre aléatoire généré : " << NbAleatoire << endl;
return 0;
}

int alea()
{
    time_t t;
    int besoin;
    t = time(NULL);
    srand (t);
    besoin= rand();
    besoin = besoin % 51;
    return besoin;
}
