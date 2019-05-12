#include <iostream>
#include <string.h>
#include <iomanip>
#define taille 6
using namespace std;
void AfficheAccueil();
//permet d'afficher l'accueil
int AutoriserAcces(char mdp[5], char ident[11], char(*)[11], char(*)[5], char(*)[11]);
//fonction dans la quel on envoi les 2 tableaux des identifiant et mode de passe de tous les employés
//elle permet de vérifier la saisi des id et mdp avec le tableau et renvoi un chiffre
//selon le chiffre envoiyer on a une message qui s'affiche
void AfficheAcces(int verif);
//selon le chiffre envoiyer par la fonction AutoriserAcces il affiche un message spécifique
void AfficheFermeture();
//fonction de fin du programme quand toute les condition on était valider et apres que le gardien se sois identifier
void AcquerirBadgeEtCode(char mdp[5], char ident[11]);
//la fonction de saisi des identifiant et des mot de passe

int main()
{
    char tab [taille][11] = {{'0','1','2','3','4','5','6','7','8','9','\0'},
                             {'1','1','1','1','1','1','1','1','1','1','\0'},
                             {'2','2','2','2','2','2','2','2','2','2','\0'},
                             {'3','3','3','3','3','3','3','3','3','3','\0'},
                             {'4','4','4','4','4','4','4','4','4','4','\0'},
                             {'5','5','5','5','5','5','5','5','5','5','\0'}};
    char tab2[taille][5]={{'1','2','3','4','\0'},
                          {'1','1','1','1','\0'},
                          {'2','2','2','2','\0'},
                          {'3','3','3','3','\0'},
                          {'4','4','4','4','\0'},
                          {'5','5','5','5','\0'}};
    char tab3[taille][11];
    int verif;
    char mdp[5];
    char ident[11];
    AfficheAccueil();
    do
    {
        AcquerirBadgeEtCode(mdp, ident);
        verif=AutoriserAcces(mdp, ident, tab, tab2, tab3);
        AfficheAcces(verif);
    }while (verif!=5);
     AfficheFermeture();



}
void AfficheAccueil()
{
    cout << "Bienvenu dans la section BTS IRIS"<< endl;
    cout << "pour acceder au locaux, il faut"<< endl;
    cout << "         -Passer votre BADGE"<< endl;
    cout << "         -Saisir votre code d'accès (4 chiffres)"<< endl;

}
void AcquerirBadgeEtCode(char mdp[5], char ident[11])
{
    size_t longueur1,longueur;
    bool v;
    do{
    cout << "passer votre badge"<< endl;
    cin >> setw(11)>> ident;
    longueur=strlen(ident);
    cout << "votre code d'accès"<< endl;
    cin >> setw(5)>> mdp;
    longueur1=strlen(mdp);
    v=true;
    if(longueur<10)
        {
            v=false;
            cout << "votre identifiant est inférieure a 10"<< endl;
        }
    if(longueur1<4)
        {
            v=false;
            cout << "mot de passe est inférieure a 4"<<endl;
        }
    }while(v==false);

}
int AutoriserAcces(char mdp[5], char ident[11],char(*tab)[11], char(*tab2)[5], char(*tab3)[11])
{
    int i,r;
    r=0;
    for (i=1; i<=taille; i++)
    {
        if(strcmp(ident,tab[i])==0)
        {
            r=1;
            if(strcmp(ident,tab3[i])==0)
            {
                r=6;
            }
            if(strcmp(mdp,tab2[i])==0)
            {
                r=3+r;
                strcpy(tab3[i],ident);
            }
        }
    }
    if(strcmp(ident,tab[0])==0)
    {
            r=2;
            if(strcmp(mdp,tab2[0])==0)
            {
                r=3+r;
                strcpy(tab3[0],ident);
            }
    }

  return r;
}
void AfficheAcces(int verif)
{
    if(verif==0)
    {
        cout << "Accès non autorisé"<< endl<<"votre identifiant et le mot de passe sont faux"<<endl;
    }
    if(verif==1)
    {
        cout << "Accès non autorisé" <<endl<<" votre mot de passe est faux"<<endl;
    }
    if(verif==2)
    {
        cout << "Accès non autorisé" <<endl<<"votre mot de passe est faux"<<endl;
    }
    if(verif==3)
    {
        cout << "Accès non autorisé" <<endl<<"votre identifiant est faux"<<endl;
    }
    if(verif==4)
    {
        cout << "Accès autorisé" <<endl;
    }
    if(verif==5)
    {
        cout << "Authentification du gardien" <<endl;
    }
    if(verif>=6)
    {
        cout << "Vous aves deja passer votre badge accès non autorisé" <<endl;
    }
}
void AfficheFermeture()
{
    cout << "Fermeture du batiment\nBonne soirée à tous\n";
}
