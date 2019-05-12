#include <iostream>
#include "../include/Vecteur.h"
using namespace std;

int Vecteur::nbVecteurs = 0;

Vecteur::Vecteur(float x, float y){
    m_x = x;    m_y = y;
    cout << "Constructeur 2param: 0x" << (unsigned int)this << "\tnbVecteurs = " << ++nbVecteurs << endl;
}

Vecteur::Vecteur(Vecteur &v){
    m_x = v.getX();    m_y = v.getY();
    cout << "Constructeur 1param: 0x" << (unsigned int)this << "\tnbVecteurs = " << ++nbVecteurs << endl;
}

Vecteur::Vecteur(){
    m_x = 0;    m_y = 0;
    cout << "Constructeur 0param: 0x" << (unsigned int)this << "\tnbVecteurs = " << ++nbVecteurs << endl;
}

Vecteur& Vecteur::operator+ (Vecteur& v){
    m_x += v.getX();  m_y += v.getY();
    return *this;
}

Vecteur::~Vecteur()          {  cout << "Destructeur: 0x" << (unsigned int)this << "\tnbVecteurs = " << --nbVecteurs << endl;   }
void Vecteur::Affiche()      {  cout << "x = " << m_x << "\ty = " << m_y << endl;   }
void Vecteur::getNbVecteurs(){  cout << "nbVecteurs = " << nbVecteurs << endl;  }
float Vecteur::getX()  {  return m_x; }
float Vecteur::getY()  {  return m_y; }
void Vecteur::setX(float x)  {  m_x = x; }
void Vecteur::setY(float y)  {  m_y = y; }
