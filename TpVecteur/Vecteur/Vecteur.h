#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;
class vecteur
{
    float X,Y;
    public :
           static int i;
            vecteur(float x,float y)
            {
                X=x;
                Y=y;
                i++;
                printf("\nConstructeur paramétré: adresse=0x%x\tnb vecteur=%d",(unsigned int)this,i);
            }
            vecteur()
            {
                X=1;
                Y=1;
                i++;
                printf("\nConstructeur paramétré: adresse=0x%x\tnb vecteur=%d",(unsigned int)this,i);
            }
            vecteur(const vecteur& ref)
            {
                X=2;
                Y=2;
                i++;
                printf("\nConstructeur paramétré: adresse=0x%x\tnb vecteur=%d",(unsigned int)this,i);
            }
            ~vecteur()
            {
                i--;
                printf("\nDestructeur de l'objet: 0x%x\tnb rest=%d vecteur(s)",(unsigned int)this,i);
            }
            void affiche()
            {
                printf("\nADR=0x%x\tx=%f\ty=%f",(unsigned int)this,X,Y);
            }
            static void afficheNbVecteur()
            {
                printf("\nNombre de vecteur=%d",i);
            }

};
int vecteur::i=0;
vecteur operator+(vecteur const& a, vecteur const& b)
{
    vecteur copie(a);   //On utilise le constructeur de copie de la classe Duree !
    copie = b;       //On appelle la méthode d'addition qui modifie l'objet 'copie'
    return copie;     //Et on renvoie le résultat. Ni a ni b n'ont changé.
}

