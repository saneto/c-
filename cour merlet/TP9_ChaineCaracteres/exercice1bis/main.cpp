#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char mot[10]= {'B', 'o', 'n' , 'j', 'o', 'u', 'r', '\0'};
    size_t longueur;
    longueur=strlen(mot);
    cout << longueur<<endl;
    return 0;
}
