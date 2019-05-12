#include <iostream>
#include <iomanip>
#define taille 4
#include "point.h"
using namespace std;

int main()
{
    point lulu[taille];
    SaisirTab(lulu, taille);
    AfficherTab(lulu, taille);

    return 0;
}

