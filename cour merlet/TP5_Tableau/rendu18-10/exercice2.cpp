#include <iostream>

using namespace std;

int main()
{
   int valeur[8];
   int val, i, nombre;
   for (i=0; i<=7; i++)
   {
       cout<< "saisir la valeur entière "<< i<< " :"<< endl;
       cin>> valeur [i];
   }
   cout<< "veuillez saisir val "<< endl;
   cin >> val;
   for (i=0; i<=7; i++)
   {
        if(valeur [i]==val)
        {
            nombre=nombre+1;
        }
   }
   cout<< "il y a "<<nombre<<"fois val dans le tableau"<< endl;
}
