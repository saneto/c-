#include <iostream>

using namespace std;

int main()
{
    int i, Nb;
    cout<<"Veuillez saisir le nombre de reel que vous voulez saisir."<< endl;
    cin >>Nb;
    float reel[Nb];
    for (i=0;i<Nb;i++)
    {
      cout <<"Veuillez saisir un réel ."<< endl;
      cin >> reel[i];
    }
    for (i=0;i<Nb;i++)
    {
      cout <<reel[i]<<endl;
    }
    return 0;
}
