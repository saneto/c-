#include "Basket.h"
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
Basket::Basket(const char* nom,int score):Score(nom,score)
{

}
Basket::~Basket()
{

}
void Basket::panier()
{
    Score::setscore(2);
}
void Basket::affich()
{
    Score::affichescore();
}
void  Basket::panier3p()
{
     Score::setscore(3);
}
void  Basket::lancer()
{
     Score::setscore(1);
}
