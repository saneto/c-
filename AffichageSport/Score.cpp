#include "Score.h"
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
Score::Score(const char*n_m, int s_m)
 {
    Nom=new char(strlen(n_m));
    strcpy(Nom,n_m);
    score=s_m;
 }
Score::~Score()
{

}
void Score::setscore(int n_s)
{
    score+=n_s;
}
int Score::getscore()
{
    return score;
}
void Score::setNom(const char*n_m)
{
    Nom=new char(strlen(n_m));
    strcpy(Nom,n_m);
}
void Score::getNom(char*nom)
{
    strcpy(nom,Nom);
}

void Score::affichescore()
{
    cout << "L'equipe  "<<Nom<<" a marqué  :"<<score<<" points"<<endl;
}
