#include <iostream>

using namespace std;

int main()
{
    int valeur[8];
    int min, max, i;
    for (i=0; i<=7; i++)
    {
        cout<< "saisir la valeur entière "<< i<< " :"<< endl;
        cin>> valeur [i];
        if(i==0)
        {
            min=valeur [i];
            max=valeur [i];
        }
        if(valeur[i]<min)
        {
            min=valeur [i];
        }
        else if (valeur[i]>max)
        {
            max=valeur [i];
        }
    }
     cout    << "la valeur minimale est "<< min<< endl;
    cout    << "la valeur maximale est "<< max<< endl;

return 0;
}
