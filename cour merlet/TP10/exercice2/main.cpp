#include <iostream>
#define taille 6
using namespace std;
void TriAbulle(int*adr, int Nb);
int main()
{
    int tab[taille]={5,3,1,2,6,4};
    int i;
    TriAbulle(tab, taille);
    for(i=0; i<=taille-1;i++)
    {
        cout << tab[i]<<endl;
    }
}


void TriAbulle(int*adr, int Nb)
{
    int i, echange,j, min, idmin;

    for(i=0;i<Nb-1;i++ )
    {
        min = adr[i];

            for(j=i+1;j<=Nb-1;j++ )
            {
                 if(adr[j]< min)
                    {
                        min = adr[j];
                        idmin = j;

                    }
            }
            echange=adr[idmin];
            adr[idmin]=adr[i];
            adr[i]=echange;
    }


}
