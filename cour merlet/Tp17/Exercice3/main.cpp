#include <iostream>

using namespace std;
float*SaisieTab(int*Nb);
void AfficheTab(float*Tab, int Nb);
int main()
{
    float*ptr = NULL;
    int ret=0;
    ptr=SaisieTab(&ret);
    AfficheTab(ptr, ret);
    return 0;
}

float*SaisieTab(int*Nb)
{
    int i;
    float*Tab;
    cout<<"Veuillez saisir le nombre de reel que vous voulez saisir."<< endl;
    cin >>*Nb;
    Tab=new float[*Nb];
     for (i=0;i<*Nb;i++)
    {
      cout <<"Veuillez saisir un réel ."<< endl;
      cin >> *(Tab+i);
    }
    return Tab;
}
void AfficheTab(float*Tab, int Nb)
{
    int i;
     for (i=0;i<Nb;i++)
    {
      cout <<*(Tab+i)<<endl;
    }
}
