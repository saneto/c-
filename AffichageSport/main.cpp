#include <iostream>
#include "Score.h"
#include "Rugby.h"
#include "Foot.h"
#include "Basket.h"
using namespace std;

int main()
{
    int choix=1,c;
    char Nome[30];
    cout<<"* Pour les equipes de Rugby veuillez choisir   : \t\t 1*"<<endl;
    cout<<"* Pour les equipes de Foot veuillez choisir    : \t\t 2*"<<endl;
    cout<<"* Pour les equipes de Baskett veuillez choisir : \t\t 3*"<<endl;
    cin>>choix;
    switch(choix)
    {
        case 1 :Rugby* e1;
                Rugby* e2;
                cout<<"Veuillez saisir le nom de l'equipe1"<<endl;
                cin>>Nome;
                e1=new Rugby(Nome);
                cout<<"Veuillez saisir le nom de l'equipe2"<<endl;
                cin>>Nome;
                e2=new Rugby(Nome);
                while(choix!=0)
                {
                    cout<<"* Pour augmenter le score de  l'equipe 1 : \t\t 1*"<<endl;
                    cout<<"* Pour augmenter le score de  l'equipe 2 : \t\t 2*"<<endl;
                    cout<<"0 Pour sortir"<<endl;
                    cin>>choix;
                    switch(choix)
                    {
                        case 1: cout<<"1 pour un essai "<<endl;
                                cout<<"2 pour une transformation"<<endl;
                                cout<<"3 pour un drop ou pénalité"<<endl;
                                cin>>c;
                                switch(c)
                                {
                                    case 1:e1->essai();
                                            break;
                                    case 2:e1->transformation();
                                            break;
                                    case 3:e1->drop();
                                            break;
                                }
                                break;
                        case 2: cout<<"1 pour un essai "<<endl;
                                cout<<"2 pour une transformation"<<endl;
                                cout<<"3 pour un drop ou pénalité"<<endl;
                                cin>>c;
                                switch(c)
                                {
                                    case 1:e2->essai();
                                            break;
                                    case 2:e2->transformation();
                                            break;
                                    case 3:e2->drop();
                                            break;
                                }
                                break;
                        case 0: e1->affich();
                                e2->affich();
                                break;
                    }
                }
                break;
        case 2: Foot* ef1;
                Foot* ef2;
                cout<<"Veuillez saisir le nom de l'equipe1"<<endl;
                cin>>Nome;
                ef1=new Foot(Nome);
                cout<<"Veuillez saisir le nom de l'equipe2"<<endl;
                cin>>Nome;
                ef2=new Foot(Nome);
                 while(choix!=0)
                {
                    cout<<"* Pour augmenter le score de  l'equipe 1 : \t\t 1*"<<endl;
                    cout<<"* Pour augmenter le score de  l'equipe 2 : \t\t 2*"<<endl;
                    cout<<"0 Pour sortir"<<endl;
                    cin>>choix;
                    switch(choix)
                    {
                        case 1: ef1->but();
                                break;
                        case 2: ef2->but();
                                break;
                        case 0: ef1->affich();
                                ef2->affich();
                                break;
                    }
                }
                break;
        case 3: Basket* eb1;
                Basket* eb2;
                cout<<"Veuillez saisir le nom de l'equipe1"<<endl;
                cin>>Nome;
                eb1=new Basket(Nome);
                cout<<"Veuillez saisir le nom de l'equipe2"<<endl;
                cin>>Nome;
                eb2=new Basket(Nome);
                 while(choix!=0)
                {
                    cout<<"* Pour augmenter le score de  l'equipe 1 : \t\t 1*"<<endl;
                    cout<<"* Pour augmenter le score de  l'equipe 2 : \t\t 2*"<<endl;
                    cout<<"0 Pour sortir"<<endl;
                    cin>>choix;
                    switch(choix)
                    {
                        case 1: cout<<"1 pour un panier "<<endl;
                                cout<<"2 pour un panier 3 points"<<endl;
                                cout<<"3 pour un lancer franc"<<endl;
                                cin>>c;
                                switch(c)
                                {
                                    case 1:eb1->panier();
                                            break;
                                    case 2:eb1->panier3p();
                                            break;
                                    case 3:eb1->lancer();
                                            break;
                                }
                                break;
                        case 2: cout<<"1 pour un panier "<<endl;
                                cout<<"2 pour un panier 3 points"<<endl;
                                cout<<"3 pour un lancer franc"<<endl;
                                cin>>c;
                                switch(c)
                                {
                                    case 1:eb2->panier();
                                            break;
                                    case 2:eb2->panier3p();
                                            break;
                                    case 3:eb2->lancer();
                                            break;
                                }
                                break;
                        case 0: eb1->affich();
                                eb2->affich();
                                break;
                    }
                }
                break;
    }
    return 0;
}
