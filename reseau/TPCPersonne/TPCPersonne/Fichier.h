#pragma once

class Fichier
{
    private:
            FILE*pfic;
    public :
        Fichier(const char * );
        ~Fichier();
    int ajout(char *);
    void lecturef();
    void debutfiche();
    void finfiche();
};
