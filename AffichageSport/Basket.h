#pragma once
#include "Score.h"
class Basket:Score
{
    private:
    public:
            Basket(const char*,int =0);
            ~Basket();
            void panier();
            void panier3p();
            void lancer();
            void affich();
};


