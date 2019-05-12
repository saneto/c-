/****************************************************************************
* Nom : TP noté, exercice 3													*
* Description : Manipulation d'un tableau d'entiers à l'aide de fonctions 	*
*																			*
* Auteur : 																	*
* Date : 13/12/2013															*
************************************************************************/

#include <iostream>
#define TAILLE 10

using namespace std;

// Déclarations des fonctions

/* Déclaration de la fonction Menu() :
Fonction qui affiche le menu, saisit et renvoie le choix de l'utilisateur*/
int Menu();

/* Déclaration de la fonction SaisirTab() :
Fonction qui permet de saisir les éléments d'un tableau d'entiers
- 1er paramètre : adresse du 1er élément du tableau (indice 0)
- 2ème paramètre : nombre d'éléments ou taille du tableau
- Pas de valeur de retour */
void SaisirTab(int * adrPreEl, int Nb);

/* Déclaration de la fonction AfficherTab() :
Fonction qui permet d'afficher tous les éléments d'un tableau d'entiers
- 1er paramètre : adresse du 1er élément du tableau (indice 0)
- 2ème paramètre : nombre d'éléments ou taille du tableau
- Pas de valeur de retour */
void AfficherTab (int * adrPreEl, int Nb);
void AfficherTabPositif (int * adrPreEl, int Nb);
void AfficherTabNegatif (int * adrPreEl, int Nb);
int GetTabPositif (int * adrPreEl, int Nb);
int GetTabNegatif (int * adrPreEl, int Nb);
void GetTabMinMax (int* adrPreEl, int Nb, int* ptrMin_f, int* ptrMax_f);
int GetTabMinPositif (int * adrPreEl, int Nb);
void SetTab0 (int * adrPreEl, int Nb);





int main()  // Définition de la fonction main() // A COMPLETER
{

    // Déclaration des variables locales de la fonction main()
    int Tab[TAILLE]; // Déclaration d'une variable tableau contenant TAILLE éléments de type int
    int choix, min, max, nbElemX;       // permet de stocker le choix de l'utilisateur

	cout << unitbuf;
    cout << "Bonjour, ce programme permet la manipulation d'un tableau de " << TAILLE << " entiers\n";
    do
	{
        choix = Menu();
        switch(choix)
        {
            case 0:
                break;

            case 1:
                SaisirTab(Tab, TAILLE);
				break;

            case 2:
                AfficherTab(Tab, TAILLE);
				break;

            case 3:
                AfficherTabPositif(Tab, TAILLE);
				break;

            case 4:
                AfficherTabNegatif(Tab, TAILLE);
				break;

            case 5:
                nbElemX = GetTabPositif(Tab, TAILLE);
                cout << "Le nombre d'éléments positif est " << nbElemX << "." << endl;
				break;

            case 6:
                nbElemX = GetTabNegatif(Tab, TAILLE);
                cout << "Le nombre d'éléments positif est " << nbElemX << "." << endl;
				break;

            case 7:
                GetTabMinMax(Tab, TAILLE, &min, &max);
                cout << "Le min est " << min << endl
                     << "Le max est " << max  << "." << endl;
				break;

            case 8:
                min = GetTabMinPositif(Tab, TAILLE);
                if(min != -1)
                {
                    cout << "Le min positif est " << min  << "." << endl;
                }
                else
                {
                    cout << "Aucun élément du tableau n'est positif." << endl;
                }
				break;

            case 9:
                SetTab0(Tab, TAILLE);
				break;

            default:
                cout << "Erreur : veuillez re-saisir votre choix." << endl;

        }
    }while (choix != 0);

    cout << "Fin du programme\n\n";

    return 0;

}

// Définition de la fonction Menu() // A COMPLETER
int Menu()
{
    // Déclaration des variables locales de la fonction menu()
    int ch;

    cout<<"************ Menu *******************\n";
	cout<<" Pour sortir, tapez \t\t\t\t\t\t\t\t 0\n";
    cout<<" Pour saisir les éléments du tableau, tapez \t\t\t\t\t 1\n";
    cout<<" Pour afficher tous les éléments du tableau, tapez \t\t\t\t 2\n";
    cout<<" Pour afficher tous les éléments strictement positifs du tableau, tapez \t 3\n";
    cout<<" Pour afficher tous les éléments strictement négatifs du tableau, tapez \t 4\n";
    cout<<" Pour déterminer le nombre d'éléments strictement positifs du tableau , tapez \t 5\n";
    cout<<" Pour déterminer le nombre d'éléments strictement négatifs du tableau , tapez \t 6\n";
    cout<<" Pour déterminer les valeurs minimale et maximale du tableau, tapez \t\t 7\n";
    cout<<" Pour déterminer la plus petite valeur strictement positive du tableau, tapez \t 8\n";
    cout<<" Pour mettre à 0 tous les éléments du tableau, tapez \t\t\t\t 9\t\n\n";
    cout<<"-->Entrez votre choix : ";
    cin >> ch;
    cout << endl;

    return ch;
}

// Définition de la fonction SaisirTab() : terminée
void SaisirTab(int * adrPreEl, int Nb)
{
    // Déclaration des variables locales de la fonction SaisirTab()
    int i;

    for (i = 0; i < Nb ; i++ )
    {
        cout << "Saisir l'élément numéro " << i+1 << " : ";
        cin >> adrPreEl[i];
    }
	 cout << endl;
}

// Définition de la fonction AfficherTab() : terminée
void AfficherTab (int * adrPreEl, int Nb)
{
	// Déclaration des variables locales de la fonction AfficherTab()
    int i;
    for (i = 0; i < Nb ; i++ )
    {
        cout << adrPreEl[i] << "  ";
    }
    cout << endl<<endl;
}

void AfficherTabPositif (int * adrPreEl, int Nb)
{
	// Déclaration des variables locales de la fonction AfficherTab()
    int i;
    for (i = 0; i < Nb ; i++ )
    {
        if(adrPreEl[i] > 0)
        {
            cout << adrPreEl[i] << "  ";
        }
    }
    cout << endl<<endl;
}

void AfficherTabNegatif (int * adrPreEl, int Nb)
{
	// Déclaration des variables locales de la fonction AfficherTab()
    int i;
    for (i = 0; i < Nb ; i++ )
    {
        if(adrPreEl[i] < 0)
        {
            cout << adrPreEl[i] << "  ";
        }
    }
    cout << endl<<endl;
}

int GetTabPositif (int * adrPreEl, int Nb)
{
	// Déclaration des variables locales de la fonction AfficherTab()
    int i, nbElemPos=0;
    for (i = 0; i < Nb ; i++ )
    {
        if(adrPreEl[i] > 0)
        {
            nbElemPos++;
        }
    }
    return nbElemPos;
}

int GetTabNegatif (int * adrPreEl, int Nb)
{
	// Déclaration des variables locales de la fonction AfficherTab()
    int i, nbElemNeg=0;
    for (i = 0; i < Nb ; i++ )
    {
        if(adrPreEl[i] < 0)
        {
            nbElemNeg++;
        }
    }
    return nbElemNeg;
}

void GetTabMinMax(int* adrPreEl, int Nb, int* ptrMin_f, int* ptrMax_f)
{
    int i;
    for (i = 0; i < Nb; i++)
    {
        if (i==0)
        {
            *ptrMin_f= *adrPreEl;
            *ptrMax_f= *adrPreEl;
        }
        else
        {
            if (*(adrPreEl+i) < *ptrMin_f)
            {
                *ptrMin_f = *(adrPreEl+i);
            }
            else if (*(adrPreEl+i) > *ptrMax_f)
            {
                *ptrMax_f = *(adrPreEl+i);
            }
        }
    }
}

int GetTabMinPositif(int* adrPreEl, int Nb)
{
    int i, min=-1;

    for (i = 0; i < Nb; i++)
    {
        if((adrPreEl[i]>0)&&(min == -1))
        {
            min = i;
        }
        if ((adrPreEl[i]>0)&&(adrPreEl[i]<min))
        {
            min = adrPreEl[i];
        }
    }
    return min;
}


void SetTab0 (int * adrPreEl, int Nb)
{
    int i;
    for (i = 0; i < Nb; i++ )
    {
        adrPreEl[i]=0;
    }
}
