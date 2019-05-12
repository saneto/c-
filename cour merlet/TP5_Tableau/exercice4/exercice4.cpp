#include <iostream>

using namespace std;

int main()
{
   int valeur[10];
   int val, i, val2, nombre;
   for (i=0; i<=9; i++)
   {
       cout<< "saisir la valeur entière "<< i<< " :"<< endl;
       cin>> valeur [i];
   }
   cout<< "veuillez saisir val "<< endl;
   cin >> val;
   cout<< "veuillez saisir val2 "<< endl;
   cin >> val2;
   for (i=0; i<=9; i++)
   {
        if((valeur[i]>val) &&(valeur[i]<val2))
        {
            nombre=nombre+1;
        }
   }
   cout<< "il y a "<<nombre<<" valeur entre  val et val2"<< endl;
}
