#include <iostream>
using namespace std;
int main()
{
char tab[] = "\xC3\xA9toile\n";
// Déclaration d'un tableau de caractères de nom
// tab initialisé lors de sa déclaration
// utilisation de l'opérateur sizeof() afin de déterminer le nombre d'octets occupés par
// la variable tab
cout <<" Taille de l'espace memoire occupe par la variable tab : " << sizeof(tab) ;
cout << endl;
cout << tab; // affiche la chaîne de caractères contenue dans la tableau tab
// et pas l'adresse de l'élément d'indice 0 du tableau tab.
// FONCTIONNE DE CETTE FAÇON QUE POUR LES TABLEAUX DE CARACTÈRES
return 0;
}
