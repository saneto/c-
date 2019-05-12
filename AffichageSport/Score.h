#pragma once

class Score
{
    private:
            char *Nom;
            int score;
    public:
        Score(const char*, int =0);
        ~Score();
        void setscore(int );
        int getscore();
        void setNom(const char*);
        void getNom(char*);
        void affichescore();


};
