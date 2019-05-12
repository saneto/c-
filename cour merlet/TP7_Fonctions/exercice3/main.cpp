#include <iostream>

using namespace std;
int calculjour(int , int , int , int);

int main()
{
    int j1, j2, m1, m2, somme;
    cout << "veuillez saisir le mois"<< endl;
    cin >> m1;
    cout << "veuillez saisir le jours"<< endl;
    cin >> j1;
    cout << "veuillez saisir le mois"<< endl;
    cin >> m2;
    cout << "veuillez saisir le jours"<< endl;
    cin >> j2;
    somme=calculjour(j1, m1, j2, m2);
    cout << somme<< endl;
    return 0;
}
int calculjour(int j1 , int m1 , int j2 , int m2)
{
    int an[13] = {0 , 31 , 28 , 31, 30, 31 , 30 , 31 ,31 , 30 , 31 , 30, 31 };
    int resultat, sous, somme, i;
    somme=0;
    for(i=1 ; i<=12; i++)
    {
        if(m1==i)
        {
            sous=an[i]-j1;
        }
        if((i>m1) && (i<m2))
        {
            somme=somme+an[i];
        }
    }
    resultat=j2+somme+sous;
    return resultat;
}
