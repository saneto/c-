#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char tab[80];
    int i,f,t;
    cout << "ligne\n";
    cin >> setw(80)>> tab;
    t=0;
    do
    {
        f=tab[i];
        if(f=='e')
        {
            t=t+1;
        }
        i++;
    }while(f != '\0');
    cout <<endl<< "il y a "<< t << " 'e' dans la ligne "<<endl;
    return 0;
}
