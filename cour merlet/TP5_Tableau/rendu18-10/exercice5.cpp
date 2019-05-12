#include <iostream>

using namespace std;

int main()
{
    int an[13] = {0 , 31 , 28 , 31, 30, 31 , 30 , 31 ,31 , 30 , 31 , 30, 31 };
    int jours, jours2, mois, mois2, sous, plus, i, somme;
    cout << unitbuf;
    somme=0;
    cout << "veuillez saisir le mois"<< endl;
    cin >> mois;
    cout << "veuillez saisir le jours"<< endl;
    cin >> jours;
    cout << "veuillez saisir le mois"<< endl;
    cin >> mois2;
    cout << "veuillez saisir le jours"<< endl;
    cin >> jours2;
    for(i=1 ; i<=12; i++)
    {
        if(mois>mois2)
        {
                cout << "recommence "<< endl;
        }
        if(mois==i)
        {
            sous=an[i]-jours;
        }
        if((i>mois) && (i<mois2))
        {
            somme=somme+an[i];
        }
        if(mois2==i)
        {
            plus=jours2;
        }
    }
    somme=somme+plus+sous;
    cout<< "il y a "<< somme << " jours entre la 1er date et la 2éme date "<< endl;
    return 0;
}
