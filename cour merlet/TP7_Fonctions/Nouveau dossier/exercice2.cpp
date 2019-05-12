#include <iostream>

using namespace std;
int SaisieLongueur();
int SaisieLargeur();
int CalculAireRectangle(int longueur, int largeur);
void AfficheAire(int aire);

int main()
{
    int longueur, largeur, aire;
    longueur=SaisieLongueur();
    largeur=SaisieLargeur();
    aire=CalculAireRectangle(longueur, largeur);
    AfficheAire(aire);
        return 0;
}

int SaisieLongueur()
{
    int longueur;
    cout<< "veuillez saisir une longueur";
    cin >> longueur;
    return longueur;
}

int SaisieLargeur()
{
    int largeur;
     cout<< "veuillez saisir une largeur";
    cin >> largeur;
    return largeur;
}
int CalculAireRectangle(int longueur, int largeur)
{
    int aire;
    aire=longueur*largeur;
    return aire;
}
 void AfficheAire(int aire)
{
    cout << "Valeur de l'aire du rectangle : " << aire << endl;

}
