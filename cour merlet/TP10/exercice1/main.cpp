#include <iostream>
#define taille 8
using namespace std;
void TriAbulle(int*adr, int Nb);
int main()
{
    int tab[taille];
    int i;
    for(i=0; i<=taille-1; i++)
    {
        cout<< "veuillez saisir la valeur  "<< i+1<<endl;
        cin>> tab [i];
    }
    TriAbulle(tab, taille);
    for(i=0; i<=taille-1;i++)
    {
        cout << tab[i]<<endl;
    }
}
void TriAbulle(int*adr, int Nb)
{
    int i, echange;
    bool verif;
    verif=false;
    while(verif!=true)
    {
        verif=true;
        for(i=1;i<=taille-1;i++ )
        {
            if(adr[i-1]>adr[i])
            {
                echange=adr[i-1];
                adr[i-1]=adr[i];
                adr[i]=echange;
                verif=false;

            }
        }
    }
}
