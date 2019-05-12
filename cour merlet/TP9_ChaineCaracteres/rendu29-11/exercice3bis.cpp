#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    char tab[15];
    char tab2[15];
    cout << "Mot1\n";
    cin >> setw(15)>> tab;
    cout << "Mot2\n";
    cin >> setw(15)>> tab2;
    cout << tab<<endl;
    strcat(tab, tab2);
    cout<< tab<<endl;
    return 0;
}
