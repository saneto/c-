#pragma once
#include "CPersonne.h"
class Profile:CPersonne
{
    private:
        char * prenom;
        char * mail;
        char * photo;
    public:
        //declaration d'un constructeur avec les parametres heriter de de CPersonne.
        Profile(char * pr, char * ma, char * ph,const char * no,int ag, float po,float ta);
        ~Profile();
        void setprenom(char* newp);
        void getprenom(char*);
        void setmail(char*newm);
        void getmail(char*);
        void setphoto(char*newp);
        void getphoto(char*);
        char *toTexte();
};
