#include <iostream>
#define TAILLE 10
using namespace std;
int affichetab(int * adrPreEl, int Nb);

int main()
{
char tabc[8]={'b','o','n','j','o','u','r','\0'};
int tabn[5]={515,78,435,7,89};
int Tab[TAILLE];
int*sais;
char* ptrc;
int *ptrn;
sais=Tab;
cout<<"Affichage de l'adresse du 1er élément de tabn :"<<&tabn<<endl;
//Affectation de l'adresse du tableau tabn dans ptrn
ptrn=tabn;
cout<<"Affichage de l'adresse contenue dans ptrn:"<<ptrn<<endl;
cout<<"Affichage de l'élément pointé par ptrn:"<<*ptrn<<endl;
// Valeur de ptrn (ou adresse contenue dans ptrn) :0x7fffffffe690
// Valeur pointée par ptrn :515
ptrn++;
cout<<"Affichage de l'adresse contenue dans ptrn:"<<ptrn<<endl;
cout<<"Affichage de l'élément pointé par ptrn:"<<*ptrn<<endl;
// Valeur de ptrn (ou adresse contenue dans ptrn) : 0x7fffffffe694
// Valeur pointée par ptrn : 78
ptrn+=3;
cout<<"Affichage de l'adresse contenue dans ptrn:"<<ptrn<<endl;
cout<<"Affichage de l'élément pointé par ptrn:"<<*ptrn<<endl;
// Valeur de ptrn (ou adresse contenue dans ptrn) : 0x7fffffffe6a0
// Valeur pointée par ptrn :89
cout<<"Affichage de l'adresse du 1er élément de tabc :"<<(void*)tabc<<endl;
// Il est nécessaire de convertir l'adresse du 1er élément du tableau en
// adresse générique pour pouvoir l'afficher sur la console
//Affectation de l'adresse du tableau tabc dans ptrc
ptrc=tabc;
cout<<"Affichage de l'élément pointé par ptrc:"<<*ptrc<<endl;
// Valeur de ptrc (ou aab, TAILLE, &ptr1dresse contenue dans ptrc) : 0x7fffffffe6b0
// Valeur pointée par ptrc :b
ptrc++;
cout<<"Affichage de l'élément pointé par ptrc:"<<*ptrc<<endl;
// Valeur de ptrc (ou adresse contenue dans ptrc) : 0x7fffffffe6b1
// Valeur pointée par ptrc :o
ptrc+=2;
cout<<"Affichage de l'élément pointé par ptrc:"<<*ptrc<<endl;
// Valeur de ptrc (ou adresse contenue dans ptrc) : j
// Valeur pointée par ptrc :0x7fffffffe6b3
affichetab(sais , TAILLE);
    return 0;
}
int affichetab(int * adrPreEl, int Nb)
{
    int i;
    for(i=1; i<=Nb; i++)
    {
        cout << *adrPreEl<<endl;
        adrPreEl++;
    }
    return 0;
}
