#include <iostream>
#include <iomanip>
using namespace std;
// utilisation du manipulateur paramétrique setw()
int main()
{
char Mot1 [10];
int i;
i=0;
cout << "Mot1?\n";
cin >> setw(9)>> Mot1;
do
{
  cout << Mot1 [i]<<endl;
i++;

}while(Mot1 [i] != '\0');
cout <<"vous avez saisi "<< i<< " caractère au clavier."<<endl;

return 0;
}
