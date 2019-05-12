#include <iostream>

using namespace std;

int main()
{
    char alpha[10] = { 'a' , 'b' , 'c' , 'd' , 'e' , 'f' , 'g' , 'h' , 'i' , 'j'};
    int i;
     for (i=0 ; i<=9; i++)
    {
        cout<< "la lettres de l'alphabet contenu dans "<< i<< " :"<<  alpha[i] << endl;

    }
    return 0;
}
