#include <iostream>

using namespace std;

int main()
{
    int i;
    float reel[4];
    for (i=0;i<4;i++)
    {
      cout <<"Veuillez saisir un réels "<< endl;
      cin >> reel[i];
    }
    for (i=0;i<4;i++)
    {
      cout <<reel[i]<<endl;
    }
    return 0;
}
