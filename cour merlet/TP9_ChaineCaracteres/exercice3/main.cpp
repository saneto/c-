#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char tab[29];
    char tab2[15];
    int i, t,a;
    cout << "Mot1\n";
    cin >> setw(15)>> tab;
    cout << "Mot2\n";
    cin >> setw(15)>> tab2;
    t=0;
    a=0;
    while(tab[t]!='\0')
    {
        t=t+1;
    }
     while(tab2[a]!='\0')
    {
        a=a+1;
    }
    for (i=0; i<=a; i++)
    {
        tab[t]=tab2[i];
        t=t+1;
    }
    cout << tab<<endl;
    return 0;
}
