#include <iostream>

using namespace std;

int main()
{
   int tab[10];
   int i, val, val1, teste;
   val=0;
    val1=9;
    teste=0;
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
            teste=tab[i];
            tab[i]=tab[val];
            tab[val]=teste;
            val=val+1;
        }
        else
        {
            teste=tab[i];
            tab[i]=tab[val1];
            tab[val1]=teste;
            val1=val1-1;
        }

    }
    for (i=0 ; i<=9 ; i++)
    {
        cout << "la valeur "<< i << " est :" << tab[i]<< endl;
    }
}
