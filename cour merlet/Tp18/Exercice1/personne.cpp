#include <iostream>
#include "personne.h"
#include <string.h>
using namespace std;

void CPersonne::m_Initialise(char*a, char*m, float t,float p)
{

    strcpy(m_age,a);
    strcpy(m_nom,m);
    m_taille=t;
    m_poids=p;
}
void CPersonne::m_Affiche()
{
    cout <<m_age<<endl<< m_nom<<endl<<m_taille<<endl<<m_poids<<endl;
}
float CPersonne::m_GetImc(float p ,float m)
{
    float ret;
    ret=p/m;
    return ret;
}

