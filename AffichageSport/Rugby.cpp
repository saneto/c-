#include "Rugby.h"
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
Rugby::Rugby(const char* nom,int score):Score(nom,score)
{

}
Rugby::~Rugby()
{

}
void Rugby::essai()
{
    Score::setscore(5);
}
void Rugby::transformation()
{
    Score::setscore(2);
}
void Rugby::drop()
{
    Score::setscore(3);
}
void Rugby::affich()
{
    Score::affichescore();
}
