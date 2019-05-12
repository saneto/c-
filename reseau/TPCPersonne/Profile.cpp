#include <iostream>
#include "Profile.h"
#include <string.h>
#include <fstream>
using namespace std;

Profile::Profile(char * pr, char * ma, char * ph,const char * no,int ag, float po,float ta):CPersonne(no,ag, po,ta)
{
    prenom = new char (strlen(pr));
    mail = new char (strlen(ma));
    photo = new char (strlen(ph));
    strcpy(prenom,pr);
    strcpy(mail,ma);
    strcpy(photo,ph);
}
char* Profile::toTexte()
{
    char nom[20];
    int age;
    float poids,taille,imc;
    CPersonne::toTexte(nom,&age,&poids,&taille, &imc);
    char *retour;
    retour = new char (200);
    sprintf(retour,"Nom = %s , Age = %d , Poids = %.2f , Taille = %.2f , IMC = %.4f prenom = %s mail = %s photo = %s \n",nom,age,poids,taille,imc,prenom,mail,photo);
    return retour;
}
