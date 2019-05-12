#include <iostream>
#define TAILLE 10
using namespace std;

int Menu();
void SaisirTab(int * adrPreEl, int Nb);
void AfficherTab(int * adrPreEl, int Nb);
void IncreTab(int * adrPreEl, int Nb);
void DecraTab(int * adrPreEl, int Nb);
void AjoutTab(int * adrPreEl, int Nb, int);
float MoyenneTab(int * adrPreEl, int Nb);
int main()

{

    int Tab[TAILLE];
    int choix,ajout;
    float moyenne;
    cout << "Bonjour, ce programme permet la manipulation d'un tableau de " << TAILLE << " entiers\n";
    do
    {
        choix = Menu();
        if (choix == 1)
        {
            SaisirTab(Tab, TAILLE);
        }
        if (choix == 2)
        {
            AfficherTab(Tab, TAILLE);
        }
         if (choix == 3)
        {
            IncreTab(Tab, TAILLE);
        }
         if (choix == 4)
        {
            DecraTab(Tab, TAILLE);
        }
        if (choix == 5)
        {
            cout<< "veuillez saisir la valeur a ajouter"<< endl;
            cin >>ajout;
            AjoutTab(Tab, TAILLE, ajout);
        }
        if (choix == 6)
        {
           moyenne= MoyenneTab(Tab, TAILLE);
            cout << moyenne<<endl;
        }
        if (choix > 6)
        {
            cout << "Erreur vous devez saisir un autre choix."<<endl;
        }
    }while (choix != 0);
    cout << "Fin du programme\n\n";
    return 0;
}

int Menu()
{
    int ch;
    cout<<"************ Menu *******************\n";
    cout<<" Pour la moyenne des éléments du tableau, tapez\t\t6\n";
    cout<<" Pour ajouter une valeur les éléments du tableau, tapez\t5\n";
    cout<<" Pour décrémentation les éléments du tableau, tapez\t4\n";
    cout<<" Pour incrémenter les éléments du tableau, tapez\t3\n";
    cout<<" Pour affichage les éléments du tableau, tapez\t\t2\n";
    cout<<" Pour saisir les éléments du tableau, tapez \t\t1\n";
    cout<<" Pour sortir, tapez \t\t\t\t\t0\n\n";
    cout<<"-->Entrez votre choix : ";
    cin >> ch;
    cout << endl;
    return ch;
}
void SaisirTab(int * adrPreEl, int Nb)
{
    int i;
    for (i = 0; i < Nb; i++ )
    {
        cout << "Saisir l'élément numéro " << i+1 << " : ";
        cin >> adrPreEl[i];
    }
}
void AfficherTab(int * adrPreEl, int Nb)
{
    int i;
    for (i = 0; i < Nb; i++ )
    {
        cout << adrPreEl[i]<<endl;
    }
}
void IncreTab(int * adrPreEl, int Nb)
{
    int i;
    for (i = 0; i < Nb; i++ )
    {
        adrPreEl[i]++;
    }
}
void DecraTab(int * adrPreEl, int Nb)
{
    int i;
    for (i = 0; i < Nb; i++ )
    {
        adrPreEl[i]--;
    }
}
void AjoutTab(int * adrPreEl, int Nb, int ajout)
{
    int i;
    for (i = 0; i < Nb; i++ )
    {
        adrPreEl[i]=adrPreEl[i]+ajout;
    }
}
float MoyenneTab(int * adrPreEl, int Nb)
{
    int i;
    float somme, moyenne;
    somme=0;
    for (i = 0; i < Nb; i++ )
    {
        somme=adrPreEl[i]+somme;
    }
    cout << somme << endl;
    moyenne=somme/(Nb);
    return moyenne;
}
