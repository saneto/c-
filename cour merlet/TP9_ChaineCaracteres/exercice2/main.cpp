#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char mot[40];
    int i, f;
    cout << "Mot?\n";
    cin >> setw(40)>> mot;
    do
    {
        cout << mot [i];
        f=mot [i];
        i++;
    }while(f != '\0');
    cout <<endl<< i << endl;
    i=i-1;
    do
    {
        cout << mot [i];
        f=mot [i];
        i--;
    }while(i>=0);

    return 0;
}
