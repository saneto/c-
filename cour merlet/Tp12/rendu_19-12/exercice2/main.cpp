#include <iostream>
#define taille 2
#include "point.h"
#include <string.h>
using namespace std;

int main()
{
    int i;
    point lulu[taille];
    for (i=0;i<taille;i++)
    {
        cout << "saisir nom "<< i<<" :" << endl;
        cin >> lulu[i].nom;
        cout << "saisir x " << i<<" :" << endl;
        cin >> lulu[i]. x;
        cout << "saisir y "<< i<<" :" << endl;
        cin >> lulu[i]. y;

    }
    for (i=0;i<taille;i++)
    {
        cout << lulu[i].nom<< endl;
        cout <<lulu[i].x<< endl;
        cout << lulu[i].y<< endl;
    }
    return 0;
}
