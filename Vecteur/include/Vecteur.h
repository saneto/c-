#ifndef VECTEUR_H
#define VECTEUR_H


class Vecteur
{
    public:
        Vecteur();
        ~Vecteur();
        Vecteur(float, float);
        static int nbVecteurs;
        Vecteur(Vecteur& v);

        void Affiche();
        static void getNbVecteurs();
        Vecteur& operator+(Vecteur &v);
        void setY(float y);
        void setX(float x);
        float getX();
        float getY();
    protected:
    private:
        float m_x;
        float m_y;
};

#endif // VECTEUR_H
