#include <iostream>

using namespace std;
void AfficheAccueil();
//permet d'afficher l'accueil
int AutoriserAcces(int mdp, int ident, int*tab, int*tab2);
//fonction dans la quel on envoi les 2 tableaux des identifiant et mode de passe de tous les employés
//elle permet de vérifier la saisi des id et mdp avec le tableau et renvoi un chiffre
//selon le chiffre envoiyer on a une message qui s'affiche
void AfficheAcces(int verif);
//selon le chiffre envoiyer par la fonction AutoriserAcces il affiche un message spécifique
void AfficheFermeture();
//fonction de fin du programme quand toute les condition on était valider et apres que le gardien se sois identifier
void AcquerirBadgeEtCode(int* , int*);
//la fonction de saisi des identifiant et des mot de passe

int main()
{
    int tab [6] = {1234567890 , 1111111111 , 222222222,333333333,444444444 ,555555555};
    int tab2[6] = {1234, 1111, 2222, 3333, 4444, 5555};
    int ident, mdp, verif;
    AfficheAccueil();
    do
    {
        AcquerirBadgeEtCode(&mdp, &ident);
        verif=AutoriserAcces(mdp, ident, tab, tab2);
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
void AcquerirBadgeEtCode(int*mdp, int*ident)
{
    int id, mdp1;
    cout << "passer votre badge"<< endl;
    cin >> id;
     cout << "votre code d'accès"<< endl;
    cin >> mdp1;
    *mdp=mdp1;
    *ident=id;
}
int AutoriserAcces(int mdp, int ident, int*tab, int*tab2)
{

    int i, v, s, r, t;
    v=0;
    s=0;
    for (i=0; i<=5; i++)
    {
        if(ident==tab[i])
        {
            v=1;
            t=i;
        }
        if(ident==tab[0])
        {
            v=2;
        }
    }
   if(mdp==tab2[t])
    {
             s=3;
    }
    r=v+s;

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
}
void AfficheFermeture()
{
    cout << "Fermeture du batiment\nBonne soirée à tous\n";
}
