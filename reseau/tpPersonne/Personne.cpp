#include <iostream>
#include "Personne.h"
#include <string.h>
using namespace std;

void CPersonne::Initialise(const char*m,int a, float t,float p)
{

    setAge(a);
    setNom(m);
    setTaille(t);
    setPoids(p);
}
void CPersonne::Affiche()
{
    char nom[21];
    int age;
    float t,p;
    t=getPoids();
    p=getTaille();
    getNom(nom);
    age=getAge();
    cout << "Nom: "<<nom<< "; Age: "<< age<<" ; Poids: "<<p<< "Kg; Taille: "<< t<<" m"<<endl;
}
float CPersonne::GetImc()
{
    float ret;
    ret=m_poids/(m_taille*m_taille);
    return ret;
}
void CPersonne::setAge(int newa)
{
    m_age=newa;
}
void CPersonne::setNom(const char*newn)
{
    strcpy(m_nom,newn);
}
void CPersonne::setTaille(float newt)
{
    m_taille=newt;
}
void CPersonne::setPoids(float newp)
{
    m_poids=newp;
}
float CPersonne::getPoids()
{
    return m_poids;
}
float CPersonne::getTaille()
{
    return m_taille;
}
void CPersonne::getNom(char*nom)
{
    strcpy(nom,m_nom);

}
int CPersonne::getAge()
{
    return m_age;
}
CPersonne::~CPersonne()
{
    cout <<"Destructeur"<< "  Nom  "<<m_nom<<"  Age  "<<m_age<<" Poids  "<<m_poids<< " Taille  "<<m_taille<< endl;
}
CPersonne::CPersonne(const char* in, int ia, float ip,float it)
{
    strcpy(m_nom,in);
    m_age=ia;
    m_poids=ip;
    m_taille=it;
}

int menu()
{
     int ch;
    cout<<"************ Menu *******************\n";
    cout<<" Pour créer une nouvelle personne, tapez\t\t\t\t3\n";
    cout<<" Pour Afficher la liste de personne, tapez\t\t\t\t2\n";
    cout<<" Pour visualiser l'IMC d'une personne choisie via son nom, tapez\t1\n";
    cout<<" Pour sortir, tapez \t\t\t\t\t\t\t0\n\n";
    cout<<"-->Entrez votre choix : ";
    cin >> ch;
    cout << endl;
    return ch;
}

