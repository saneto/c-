#ifndef CCOMRS232_H
#define CCOMRS232_H
#include <unistd.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <termios.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
using namespace std;

class CComRS232
{
    public:
        CComRS232(speed_t vit =B0, cc_t min =1, cc_t time =0, int er =0, const char* trame ="", const char* ="");
        ~CComRS232();

        bool setTrame(const char*);
        bool setVitesse(speed_t);
        void setTime(cc_t);
        void setMin(cc_t);
        void setER(int);

        unsigned int getVitesse (void);
        char* getTrame (void);
        cc_t getTime (void);
        cc_t getMin (void);
        int getER (void);

        ssize_t Recevoir(char*, int);
        bool Emettre(const char*, int);
        bool ViderTampon(void);

    private:
        int m_fd;
        termios m_termiosI;
        termios m_termiosM;
        int m_ER;             //-1: Emetteur 0: Emetteur+Recepteur 1: Recepteur
        char m_trame[3];      /*  [0] : nombre de bits (5 à 8)
                                  [1] : E pour Even (pair), O pour Odd (impair)
                                  [2] : nombre de bits de stop (1 ou 2) */
        bool f_constr;
};

#endif // CCOMRS232_H
