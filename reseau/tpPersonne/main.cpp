#include <iostream>
#include "Personne.h"
#include <string.h>
#include <iomanip>

using namespace std;

int main()
{
    CPersonne*tab[10];
    CPersonne personne;
    int q=1,i=0,b, age, ret;
    float taille,poids;
    char nom[20];
    char comp[20];
    while(q!=0){
        if(i<10)
        {
            q=menu();
            switch(q)
            {
                case 1 :    ret=0;
                            cout<<"Veuillez saisir le nom de la personne\n";
                            cin >>setw(21)>> nom;
                            for(b=0;b<i;b++)
                            {
                                tab[b]->getNom(comp);
                                if(strcmp(nom,comp)==0)
                                {
                                    cout<<"l'IMC de "<<nom<<" est : "<<tab[b]->GetImc()<<endl;
                                    ret=1;

                                }
                            }
                            if(ret==0)
                            {
                                cout<<"Le nom saisi n'est pas dans la liste\n";
                            }
                            break;
                case 2 :    for(b=0;b<i;b++)
                            {
                                tab[b]->Affiche();
                            }
                            break;
                case 3 :    cout << "saisir votre nom" << endl;
                            cin >> nom;
                            cout << "saisir votre age" << endl;
                            cin >> age;
                            cout << "saisir votre taille" << endl;
                            cin >> taille;
                            cout << "saisir votre poids" << endl;
                            cin >> poids;
                            tab[i]=new CPersonne(nom, age, taille, poids);
                            i++;
                            break;
            }
        }else{
            cout<<"Le tableau est plein \n";
            q=0;
        }
    }
    delete[] tab;
    return 0;
}
