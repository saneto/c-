#include <iostream>

using namespace std;

int main()
{
    int tab[10];
    int com[10];
    int i, val, val1;
    val=0;
    val1=9;
    for (i=0 ; i<=9 ; i++)
    {

        com[i]=0;
    }
    for (i=0 ; i<=9 ; i++)
    {
        cout << "sasir votre valeur"<< i << " :"<< endl;
        cin >> tab[i];
    }
    for (i=0 ; i<=9 ; i++)
    {
        cout << "la valeur "<< i << " est :" << tab[i]<< endl;
    }
    for (i=0 ; i<=9 ; i++)
    {
        if(tab[i]<0)
        {
            com[val]=tab[i];
            val=val+1;
        }
        else if (tab[i]>0)
        {
            com[val1]=tab[i];
            val1=val1-1;
        }

    }
     for (i=0 ; i<=9 ; i++)
    {
        cout << "la valeur "<< i << " est :" << com[i]<< endl;
    }
    return 0;
}
