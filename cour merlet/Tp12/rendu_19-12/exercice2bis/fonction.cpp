#include <iostream>
#include "point.h"
#include <iomanip>
using namespace std;


void SaisirTab(point*tabp, int taille)
{
    int i;
      for (i=0;i<taille;i++)
    {
        cout << "saisir nom "<< i<<" :" << endl;
        cin>> setw(20)>>tabp[i].nom;
        cout << "saisir x " << i<<" :" << endl;
        cin >> tabp[i].x;
        cout << "saisir y "<< i<<" :" << endl;
        cin >> tabp[i].y;

    }
}
void AfficherTab(point*tabp, int taille)
{
    int i;
    for (i=0;i<taille;i++)
    {
        cout << tabp[i].nom<< endl;
        cout <<tabp[i].x<< endl;
        cout << tabp[i].y<< endl;
    }
}
